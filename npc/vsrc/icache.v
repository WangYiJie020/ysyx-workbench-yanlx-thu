module icache #(
    parameter DATA_WIDTH  = 32,
    parameter BLOCK_SIZE  = 4,
    parameter NUM_BLOCKS  = 16,
    parameter ADDR_WIDTH  = 32
) (
    input clk,
    input rst_n,

    // CPU side (AR)
    input  [DATA_WIDTH-1:0] cpu_araddr_i,
    input  [3:0]            cpu_arid_i,
    input  [7:0]            cpu_arlen_i,
    input  [2:0]            cpu_arsize_i,
    input  [1:0]            cpu_arburst_i,
    input                   cpu_arvalid_i,
    output                  cpu_arready_o,

    // CPU side (R)
    output [DATA_WIDTH-1:0] cpu_rdata_o,
    output [1:0]            cpu_rresp_o,
    output                  cpu_rlast_o,
    output [3:0]            cpu_rid_o,
    output                  cpu_rvalid_o,
    input                   cpu_rready_i,

    // Memory side (AR)
    output [DATA_WIDTH-1:0] mem_araddr_o,
    output [3:0]            mem_arid_o,
    output [7:0]            mem_arlen_o,
    output [2:0]            mem_arsize_o,
    output [1:0]            mem_arburst_o,
    output                  mem_arvalid_o,
    input                   mem_arready_i,

    // Memory side (R)
    input  [DATA_WIDTH-1:0] mem_rdata_i,
    input  [1:0]            mem_rresp_i,
    input                   mem_rlast_i,
    input  [3:0]            mem_rid_i,
    input                   mem_rvalid_i,
    output                  mem_rready_o,

    input                   fencei
);

// =============================================================================
// Parameters
// =============================================================================
localparam BLOCK_WORDS  = BLOCK_SIZE / (DATA_WIDTH / 8);
localparam OFFSET_BITS  = $clog2(BLOCK_SIZE);
localparam INDEX_BITS   = $clog2(NUM_BLOCKS);
localparam TAG_BITS     = ADDR_WIDTH - OFFSET_BITS - INDEX_BITS;
localparam COUNTER_SIZE = BLOCK_SIZE / 4;
localparam CNT_BITS     = (COUNTER_SIZE <= 1) ? 1 : $clog2(COUNTER_SIZE);

// =============================================================================
// Cache storage
//   - data_array & tag_array: NO RESET (use plain DFF, not DFFR)
//     Only valid_array needs reset — valid=0 means the line is invalid,
//     so garbage in tag/data doesn't matter.
//   - fencei: only clear valid bits, not tag/data
// =============================================================================
reg [DATA_WIDTH*COUNTER_SIZE-1:0] data_array [0:NUM_BLOCKS-1];  // NO reset
reg [TAG_BITS-1:0]                tag_array  [0:NUM_BLOCKS-1];  // NO reset
reg                               valid_array[0:NUM_BLOCKS-1];  // NEEDS reset

// =============================================================================
// State encoding
// =============================================================================
localparam [2:0]
    S_IDLE  = 3'd0,  // Accept CPU AR request
    S_CHECK = 3'd1,  // Compare tag, hit or miss?
    S_AR    = 3'd2,  // Send memory AR, wait arready
    S_MEM   = 3'd3,  // Receive memory R data (burst fill)
    S_RESP  = 3'd4;  // Return data to CPU

reg [2:0] state;

// =============================================================================
// Internal registers — minimal set
// =============================================================================
reg [ADDR_WIDTH-1:0]  cpu_addr;                 // Latched request address
reg [CNT_BITS-1:0]    burst_cnt;                // Burst word counter (tiny!)

// =============================================================================
// Address decomposition (combinational from latched cpu_addr)
// =============================================================================
wire [TAG_BITS-1:0]    req_tag    = cpu_addr[ADDR_WIDTH-1 : ADDR_WIDTH-TAG_BITS];
wire [INDEX_BITS-1:0]  req_index  = cpu_addr[OFFSET_BITS+INDEX_BITS-1 : OFFSET_BITS];
wire [OFFSET_BITS-1:0] req_offset = cpu_addr[OFFSET_BITS-1 : 0];

// Hit detection
wire cache_hit = valid_array[req_index] && (tag_array[req_index] == req_tag);

// =============================================================================
// ALL outputs are combinational — no output registers!
// =============================================================================

// CPU AR channel
assign cpu_arready_o = (state == S_IDLE);

// CPU R channel — read directly from data_array
assign cpu_rdata_o  = data_array[req_index][req_offset*8 +: DATA_WIDTH];
assign cpu_rvalid_o = (state == S_CHECK && cache_hit && cpu_rready_i) ||
                      (state == S_RESP);
assign cpu_rlast_o  = cpu_rvalid_o;
assign cpu_rresp_o  = 2'b00;
assign cpu_rid_o    = 4'd0;

// Memory AR channel — address aligned to block boundary
assign mem_araddr_o  = {cpu_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};
assign mem_arvalid_o = (state == S_AR);
assign mem_rready_o  = (state == S_MEM);

// Memory AR fixed parameters
assign mem_arid_o    = 4'd0;
assign mem_arsize_o  = 3'b010;
generate
    if (COUNTER_SIZE > 1) begin : g_burst
        assign mem_arlen_o   = COUNTER_SIZE - 1;
        assign mem_arburst_o = 2'b01;  // INCR
    end else begin : g_single
        assign mem_arlen_o   = 8'd0;
        assign mem_arburst_o = 2'b00;  // FIXED
    end
endgenerate

// =============================================================================
// State machine + cache update
// =============================================================================
integer i;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state     <= S_IDLE;
        burst_cnt <= 0;
        for (i = 0; i < NUM_BLOCKS; i = i + 1)
            valid_array[i] <= 1'b0;
        // NOTE: tag_array and data_array are NOT reset — saves DFFR → DFF
    end else begin

        // fencei: invalidate all lines (only valid bits, not tag/data)
        if (fencei) begin
            for (i = 0; i < NUM_BLOCKS; i = i + 1)
                valid_array[i] <= 1'b0;
        end

        case (state)

            S_IDLE: begin
                if (cpu_arvalid_i && cpu_arready_o) begin
                    cpu_addr  <= cpu_araddr_i;
                    state     <= S_CHECK;
                end
            end

            S_CHECK: begin
                if (cache_hit) begin
                    // Hit — data is already on cpu_rdata_o combinationally
                    if (cpu_rready_i)
                        state <= S_IDLE;
                    // else stay in S_CHECK until cpu_rready_i
                end else begin
                    // Miss — go fetch from memory
                    burst_cnt <= 0;
                    state     <= S_AR;
                end
            end

            S_AR: begin
                if (mem_arvalid_o && mem_arready_i)
                    state <= S_MEM;
            end

            S_MEM: begin
                if (mem_rvalid_i && mem_rready_o) begin
                    // Write incoming word into data array
                    data_array[req_index][burst_cnt * DATA_WIDTH +: DATA_WIDTH] <= mem_rdata_i;
                    tag_array[req_index]  <= req_tag;
                    valid_array[req_index] <= 1'b1;

                    if (mem_rlast_i) begin
                        state <= S_RESP;
                    end else begin
                        burst_cnt <= burst_cnt + 1;
                    end
                end
            end

            S_RESP: begin
                // Return filled data to CPU
                if (cpu_rready_i)
                    state <= S_IDLE;
            end

            default: state <= S_IDLE;

        endcase
    end
end

endmodule