`include "header.v"

// =============================================================================
// CLINT — area-optimized
//
// Function: 64-bit mtime counter, AXI4 slave interface
//   Read  0x0200_0048 → mtime[31:0]
//   Read  0x0200_004c → mtime[63:32]
//   Write support for mtimecmp if needed (currently no mtimecmp)
//
// Removed: LFSR delay simulator, 5 separate FSMs, all output registers,
//          wdata/wstrb/awaddr buffers
// Registers: time_counter(64) + araddr_lat(32) + state(3) + aw_done/w_done(2) = 101 bits
// Original: ~171 DFF + DFFR → estimated 1,897 area → ~700
// =============================================================================

module clint (
    input clk,
    input rst_n,

    // AXI AR
    input  [`CPU_WIDTH-1:0] araddr_i,
    input  [3:0]            arid_i,
    input  [7:0]            arlen_i,
    input  [2:0]            arsize_i,
    input  [1:0]            arburst_i,
    input                   arvalid_i,
    output                  arready_o,

    // AXI R
    output [`CPU_WIDTH-1:0] rdata_o,
    output [1:0]            rresp_o,
    output                  rlast_o,
    output [3:0]            rid_o,
    output                  rvalid_o,
    input                   rready_i,

    // AXI AW
    input  [`CPU_WIDTH-1:0] awaddr_i,
    input  [3:0]            awid_i,
    input  [7:0]            awlen_i,
    input  [2:0]            awsize_i,
    input  [1:0]            awburst_i,
    input                   awvalid_i,
    output                  awready_o,

    // AXI W
    input  [`CPU_WIDTH-1:0] wdata_i,
    input  [3:0]            wstrb_i,
    input                   wlast_i,
    input                   wvalid_i,
    output                  wready_o,

    // AXI B
    output [1:0]            bresp_o,
    output [3:0]            bid_o,
    output                  bvalid_o,
    input                   bready_i
);

// =============================================================================
// mtime counter — the only real function of CLINT
// =============================================================================
reg [63:0] time_counter;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        time_counter <= 64'd0;
    else
        time_counter <= time_counter + 1;
end

// =============================================================================
// State machine
// =============================================================================
localparam [2:0]
    S_IDLE  = 3'd0,
    S_RRESP = 3'd1,   // Read: present R data, wait rready
    S_AW    = 3'd2,   // Write: collect AW+W
    S_BRESP = 3'd3;   // Write: present B response, wait bready

reg [2:0] state;

// Latched read address (only need bit 2 to distinguish hi/lo word)
reg [`CPU_WIDTH-1:0] araddr_lat;

// Track AW/W handshakes (can arrive in any order)
reg aw_done, w_done;

// =============================================================================
// AXI outputs — ALL combinational
// =============================================================================

// AR: accept in IDLE
assign arready_o = (state == S_IDLE) && !awvalid_i;  // read lower priority if simultaneous

// R: respond with time_counter
assign rdata_o  = araddr_lat[2] ? time_counter[63:32] : time_counter[31:0];
assign rvalid_o = (state == S_RRESP);
assign rlast_o  = rvalid_o;
assign rresp_o  = 2'b00;
assign rid_o    = 4'd0;

// AW: accept in IDLE or S_AW when not yet done
assign awready_o = (state == S_IDLE && awvalid_i) ||
                   (state == S_AW && !aw_done);

// W: accept in IDLE or S_AW when not yet done
assign wready_o  = (state == S_IDLE && awvalid_i) ||
                   (state == S_AW && !w_done);

// B: respond after write complete
assign bvalid_o = (state == S_BRESP);
assign bresp_o  = 2'b00;
assign bid_o    = 4'd0;

// =============================================================================
// State transitions
// =============================================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state      <= S_IDLE;
        araddr_lat <= 0;
        aw_done    <= 1'b0;
        w_done     <= 1'b0;
    end else begin
        case (state)

            S_IDLE: begin
                if (awvalid_i) begin
                    // Write request — prioritize over read
                    aw_done <= awready_o && awvalid_i;
                    w_done  <= wready_o  && wvalid_i;
                    if ((awready_o && awvalid_i) && (wready_o && wvalid_i)) begin
                        // Both handshake in same cycle
                        state <= S_BRESP;
                    end else begin
                        state <= S_AW;
                    end
                end else if (arvalid_i) begin
                    // Read request
                    araddr_lat <= araddr_i;
                    state      <= S_RRESP;
                end
            end

            S_RRESP: begin
                if (rvalid_o && rready_i)
                    state <= S_IDLE;
            end

            S_AW: begin
                if (awready_o && awvalid_i)
                    aw_done <= 1'b1;
                if (wready_o && wvalid_i)
                    w_done <= 1'b1;

                // Both channels done
                if ((aw_done || (awready_o && awvalid_i)) &&
                    (w_done  || (wready_o  && wvalid_i)))
                    state <= S_BRESP;
            end

            S_BRESP: begin
                if (bvalid_o && bready_i) begin
                    aw_done <= 1'b0;
                    w_done  <= 1'b0;
                    state   <= S_IDLE;
                end
            end

            default: state <= S_IDLE;

        endcase
    end
end

endmodule