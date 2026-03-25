`include "header.v"

// =============================================================================
// IFU (Instruction Fetch Unit) — area-optimized
//
// Registers: pc_fetch(32) + pc_o(32) + inst_o(32) + state(2) + flush(1) = 99 DFFs
// Original:  233 DFFs → saved 134 DFFs + associated MUX/BUF
//
// Key changes:
//   - Removed pc_latch (redundant, pc_fetch is stable during S_OUT)
//   - Removed inst_buf (write rdata_i directly to inst_o)
//   - Removed npc_buf (write npc_i directly to pc_fetch)
//   - araddr_o is combinational (= pc_fetch)
//   - arvalid_o, rready_o, ifu_valid_o, reset_o derived from state
//   - ar_inflight removed (encoded in state)
//   - flush_pending kept as 1-bit flag (simplest approach)
// =============================================================================

module ifu (
    input  wire                    clk,
    input  wire                    rst_n,

    // AXI AR channel
    output wire [`CPU_WIDTH-1:0]   araddr_o,
    output wire [3:0]              arid_o,
    output wire [7:0]              arlen_o,
    output wire [2:0]              arsize_o,
    output wire [1:0]              arburst_o,
    output wire                    arvalid_o,
    input  wire                    arready_i,

    // AXI R channel
    input  wire [`CPU_WIDTH-1:0]   rdata_i,
    input  wire [1:0]              rresp_i,
    input  wire                    rlast_i,
    input  wire [3:0]              rid_i,
    input  wire                    rvalid_i,
    output wire                    rready_o,

    // Branch from EXU
    input  wire [`PC_WIDTH-1:0]    npc_i,
    input  wire                    npc_valid,

    // Flush downstream
    output wire                    reset_o,

    // IFU → IDU handshake
    output reg  [`PC_WIDTH-1:0]    pc_o,
    output reg  [`INST_WIDTH-1:0]  inst_o,
    output wire                    ifu_valid_o,
    input  wire                    ifu_ready_i,

    input  wire                    bus_busy
);

// =============================================================================
// AXI fixed params
// =============================================================================
assign arid_o    = 4'd0;
assign arlen_o   = 8'd0;
assign arsize_o  = 3'b010;
assign arburst_o = 2'd0;

// =============================================================================
// State encoding — 4 states, 2-bit
// =============================================================================
localparam [1:0]
    S_ADDR  = 2'd0,   // Send AR request
    S_DATA  = 2'd1,   // Wait for R data
    S_OUT   = 2'd2,   // Output to IDU, wait handshake
    S_FLUSH = 2'd3;   // Wait for R data and discard

// =============================================================================
// Registers — only what's truly needed
// =============================================================================
reg [1:0]            state;
reg [`PC_WIDTH-1:0]  pc_fetch;     // The one true PC register
reg                  flush_pend;   // Jump request waiting to be served

// =============================================================================
// Combinational outputs derived from state (no output registers!)
// =============================================================================
assign araddr_o   = pc_fetch;
assign arvalid_o  = (state == S_ADDR);
assign rready_o   = (state == S_DATA) || (state == S_FLUSH);
assign ifu_valid_o = (state == S_OUT);

// reset_o: pulse high for one cycle when ctrl_hazard detected
// Drives downstream flush — combinational from npc_valid
wire ctrl_hazard = npc_valid && (npc_i != pc_fetch);
assign reset_o = ctrl_hazard;

// =============================================================================
// State machine
// =============================================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state      <= S_ADDR;
        pc_fetch   <= `PC_INIT;
        pc_o       <= `PC_INIT;
        inst_o     <= {`INST_WIDTH{1'b0}};
        flush_pend <= 1'b0;
    end else begin

        // ---- Latch jump request at any time ----
        if (ctrl_hazard) begin
            pc_fetch   <= npc_i;     // Immediately update PC (no npc_buf!)
            flush_pend <= 1'b1;
        end

        // ---- State transitions ----
        case (state)

            // ----------------------------------------------------------
            // S_ADDR: AR request on the bus, wait for arready
            // ----------------------------------------------------------
            S_ADDR: begin
                if (arvalid_o && arready_i) begin
                    // AR handshake done
                    if (ctrl_hazard || flush_pend) begin
                        // This address is stale, go flush and discard R data
                        state <= S_FLUSH;
                    end else begin
                        state <= S_DATA;
                    end
                end
                // else: keep arvalid high, wait for arready
            end

            // ----------------------------------------------------------
            // S_DATA: Wait for R channel data
            // ----------------------------------------------------------
            S_DATA: begin
                if (rvalid_i) begin
                    if (ctrl_hazard || flush_pend) begin
                        // Data arrived but stale, discard
                        flush_pend <= 1'b0;
                        state      <= S_ADDR;
                    end else begin
                        // Good data! Latch instruction and PC, go to output
                        inst_o <= rdata_i;
                        pc_o   <= pc_fetch;
                        state  <= S_OUT;
                    end
                end
            end

            // ----------------------------------------------------------
            // S_OUT: Present instruction to IDU
            // ----------------------------------------------------------
            S_OUT: begin
                if (ctrl_hazard) begin
                    // Jump! Discard current output, refetch
                    state <= S_ADDR;
                end else if (ifu_valid_o && ifu_ready_i) begin
                    // IDU accepted, advance to next instruction
                    pc_fetch <= pc_fetch + 4;
                    state    <= S_ADDR;
                end
            end

            // ----------------------------------------------------------
            // S_FLUSH: Drain in-flight R data and discard
            // ----------------------------------------------------------
            S_FLUSH: begin
                if (rvalid_i) begin
                    // Data arrived, discard it, restart fetch
                    flush_pend <= 1'b0;
                    state      <= S_ADDR;
                end
            end

        endcase
    end
end

endmodule