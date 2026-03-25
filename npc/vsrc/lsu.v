`include "header.v"

import "DPI-C" function void data_counter_add();
import "DPI-C" function void send_data_request();
import "DPI-C" function void receive_data_back();
import "DPI-C" function void difftest_skip();

// =============================================================================
// LSU — area-optimized
//
// Removed registers:
//   - araddr (32) → combo from alu_result
//   - awaddr (32) → combo from alu_result
//   - wdata  (32) → combo from rs2 + shift
//   - rs2    (32) → was declared but never assigned in always block
//   - csr_rdata_l_rs1 (32) → was declared but never read
//   - rs1    (32) → latch at S_IDLE with others, not S_OUT
//   - arvalid/awvalid/wvalid/rready/bready (5) → from state
//   - read_mem/write_mem/flag/wvalid_tmp (4) → encoded in state
//   - lsu_valid_o/lsu_ready_o/rd_lsu_valid (3) → from state
//   - wlast_o (1) → combo
//
// Estimated: 285 DFF → ~120 DFF
// =============================================================================

module lsu(
    input clk,
    input rst_n,

    // EXU → LSU
    input [`CPU_WIDTH-1:0] alu_result_i,
    input [`CPU_WIDTH-1:0] rs1_i,
    input [`CPU_WIDTH-1:0] rs2_i,
    input [`CPU_WIDTH-1:0] csr_rdata_l_rs1_i,
    input MemRead_i,
    input MemWrite_i,
    input [3:0] wmask_i,
    input [2:0] rmask_i,
    input wb_src_i,
    input csr_write_i,
    input csr_wdata_src_i,
    input reg_write_i,
    input [`REG_ADDR-1:0] waddr_i,
    input ecall_i,
    input [1:0] waddr_csr_i,

    input lsu_valid_i,
    output wire lsu_ready_o,

    // LSU → WBU
    output [`CPU_WIDTH-1:0] alu_result_o,
    output [`CPU_WIDTH-1:0] rs1_o,
    output reg [`CPU_WIDTH-1:0] csr_rdata_l_rs1_o,
    output [`CPU_WIDTH-1:0] datamem_readdata_o,
    output [2:0] rmask_o,
    output reg wb_src_o,
    output reg csr_write_o,
    output reg csr_wdata_src_o,
    output reg reg_write_o,
    output reg [`REG_ADDR-1:0] waddr_o,
    output ecall_o,
    output [1:0] waddr_csr_o,

    output wire lsu_valid_o,
    input lsu_ready_i,

    // AXI AR
    output [`CPU_WIDTH-1:0] araddr_o,
    output [3:0] arid_o,
    output [7:0] arlen_o,
    output [2:0] arsize_o,
    output [1:0] arburst_o,
    output arvalid_o,
    input arready_i,

    // AXI R
    input [`CPU_WIDTH-1:0] rdata_i,
    input [1:0] rresp_i,
    input rlast_i,
    input [3:0] rid_i,
    input rvalid_i,
    output rready_o,

    // AXI AW
    output [`CPU_WIDTH-1:0] awaddr_o,
    output [3:0] awid_o,
    output [7:0] awlen_o,
    output [2:0] awsize_o,
    output [1:0] awburst_o,
    output awvalid_o,
    input awready_i,

    // AXI W
    output [`CPU_WIDTH-1:0] wdata_o,
    output [3:0] wstrb_o,
    output wlast_o,
    output wvalid_o,
    input wready_i,

    // AXI B
    input [1:0] bresp_i,
    input [3:0] bid_i,
    input bvalid_i,
    output bready_o,

    input bus_busy,
    output rd_lsu_valid,

    input [`CPU_WIDTH-1:0] pc_i,
    output [`CPU_WIDTH-1:0] pc_o
);

// =============================================================================
// State encoding
// =============================================================================
localparam [2:0]
    S_IDLE   = 3'd0,   // Wait for EXU handshake
    S_AR     = 3'd1,   // Read: send AR, wait arready
    S_R      = 3'd2,   // Read: wait R data
    S_AW     = 3'd3,   // Write: send AW+W, wait handshakes
    S_B      = 3'd4,   // Write: wait B response
    S_OUT    = 3'd5;   // Output to WBU

reg [2:0] state;

// =============================================================================
// Pipeline registers — only what we truly need
// =============================================================================
reg [`CPU_WIDTH-1:0]  alu_result;    // Latched address / ALU result
reg [`CPU_WIDTH-1:0]  rs1_lat;       // Latched rs1 (for CSR writeback)
reg [`CPU_WIDTH-1:0]  rs2_lat;       // Latched rs2 (store data)
reg [3:0]             wmask;         // Write byte mask
reg [2:0]             rmask;         // Read type encoding
reg                   aw_done;       // AW channel handshake completed
reg                   w_done;        // W channel handshake completed

// Read data output — needs to hold until WBU consumes
reg [`CPU_WIDTH-1:0]  rdata_buf;

// Pass-through pipeline registers (latched at S_IDLE handshake)
reg [`CPU_WIDTH-1:0]  pc_lat;
reg                   ecall_lat;
reg [1:0]             waddr_csr_lat;

// =============================================================================
// AXI fixed parameters
// =============================================================================
assign arid_o    = 4'd0;
assign arlen_o   = 8'd0;
assign arburst_o = 2'd0;
assign awid_o    = 4'd0;
assign awlen_o   = 8'd0;
assign awburst_o = 2'd0;

// =============================================================================
// AXI outputs — ALL combinational, derived from state + latched data
// =============================================================================

// AR channel
assign araddr_o  = alu_result;
assign arvalid_o = (state == S_AR);
assign rready_o  = (state == S_R);

// AW channel
assign awaddr_o  = alu_result;
assign awvalid_o = (state == S_AW) && !aw_done;

// W channel — shift store data by byte offset
assign wdata_o   = (wmask == 4'hf) ? rs2_lat : (rs2_lat << (8 * alu_result[1:0]));
assign wstrb_o   = (wmask == 4'hf || wmask == 4'h0) ? wmask : (wmask << alu_result[1:0]);
assign wvalid_o  = (state == S_AW) && !w_done;
assign wlast_o   = wvalid_o;

// B channel
assign bready_o  = (state == S_B);

// AXI size encoding
reg [2:0] arsize_r, awsize_r;
always @(*) begin
    case (rmask)
        3'b100, 3'b011: arsize_r = 3'b000;  // lb, lbu
        3'b010, 3'b001: arsize_r = 3'b001;  // lh, lhu
        default:        arsize_r = 3'b010;   // lw
    endcase
end
always @(*) begin
    case (wmask)
        4'h1:    awsize_r = 3'b000;
        4'h3:    awsize_r = 3'b001;
        default: awsize_r = 3'b010;
    endcase
end
assign arsize_o = arsize_r;
assign awsize_o = awsize_r;

// =============================================================================
// Handshake outputs — combinational from state
// =============================================================================
assign lsu_ready_o  = (state == S_IDLE);
assign lsu_valid_o  = (state == S_OUT);
assign rd_lsu_valid = (state != S_IDLE);

// Pipeline outputs
assign alu_result_o        = alu_result;
assign rs1_o               = rs1_lat;
assign rmask_o             = rmask;
assign datamem_readdata_o  = rdata_buf;
assign pc_o                = pc_lat;
assign ecall_o             = ecall_lat;
assign waddr_csr_o         = waddr_csr_lat;

// =============================================================================
// State machine
// =============================================================================
wire idle_handshake = (state == S_IDLE) && lsu_valid_i;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state    <= S_IDLE;
        aw_done  <= 1'b0;
        w_done   <= 1'b0;
    end else begin
        case (state)

            S_IDLE: begin
                if (lsu_valid_i) begin
                    // Latch all pipeline signals at handshake
                    alu_result        <= alu_result_i;
                    rs1_lat           <= rs1_i;
                    rs2_lat           <= rs2_i;
                    wmask             <= wmask_i;
                    rmask             <= rmask_i;
                    wb_src_o          <= wb_src_i;
                    csr_write_o       <= csr_write_i;
                    csr_wdata_src_o   <= csr_wdata_src_i;
                    reg_write_o       <= reg_write_i;
                    csr_rdata_l_rs1_o <= csr_rdata_l_rs1_i;
                    waddr_o           <= waddr_i;
                    pc_lat            <= pc_i;
                    ecall_lat         <= ecall_i;
                    waddr_csr_lat     <= waddr_csr_i;

                    // DPI-C: difftest skip for MMIO
                    if (MemRead_i || MemWrite_i) begin
                        if ((alu_result_i >= 32'h10000000 && alu_result_i <= 32'h10000fff) ||
                            (alu_result_i >= 32'h02000000 && alu_result_i <= 32'h0200ffff)) begin
                            difftest_skip();
                        end
                    end

                    // Decide next state
                    if (MemRead_i)
                        state <= S_AR;
                    else if (MemWrite_i) begin
                        state   <= S_AW;
                        aw_done <= 1'b0;
                        w_done  <= 1'b0;
                    end else
                        state <= S_OUT;
                end
            end

            S_AR: begin
                // Wait for AR handshake
                if (arvalid_o && arready_i) begin
                    state <= S_R;
                    send_data_request();
                end
            end

            S_R: begin
                // Wait for R data
                if (rvalid_i && rlast_i) begin
                    rdata_buf <= rdata_i;
                    state     <= S_OUT;
                    data_counter_add();
                    receive_data_back();
                end
            end

            S_AW: begin
                // AW and W can handshake independently
                if (awvalid_o && awready_i) begin
                    aw_done <= 1'b1;
                    send_data_request();
                end
                if (wvalid_o && wready_i)
                    w_done <= 1'b1;

                // Both done → wait for B
                if ((aw_done || (awvalid_o && awready_i)) &&
                    (w_done  || (wvalid_o  && wready_i)))
                    state <= S_B;
            end

            S_B: begin
                if (bvalid_i) begin
                    state <= S_OUT;
                    data_counter_add();
                    receive_data_back();
                end
            end

            S_OUT: begin
                if (lsu_valid_o && lsu_ready_i)
                    state <= S_IDLE;
            end

            default: state <= S_IDLE;

        endcase
    end
end

endmodule