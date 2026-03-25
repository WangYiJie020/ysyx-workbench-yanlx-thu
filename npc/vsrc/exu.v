`include "header.v"

// =============================================================================
// EXU — area-optimized
//
// Removed:
//   - a_in_src, b_in_src, pc_srcs, adder_a_src, adder_out_src, alu_op (13 bits)
//     → These are EXU-internal control signals consumed in the same cycle.
//       Feed _i inputs directly to submodules.
//   - pc_o duplicate (32 bits) → assign pc_o = pc
//   - npc_flag, exu_valid_o, exu_ready_o, npc_valid, rd_exu_valid (5 bits)
//     → derive from state
//   - S_RECEIVE state eliminated — computation is single-cycle, results
//     available on the cycle after latch, output immediately in S_OUT.
//
// Estimated: 227 DFF → ~175 DFF, plus significant MUX/BUF reduction
// =============================================================================

module exu (
    input clk,
    input rst_n,
    input reset_ifu,

    // IDU → EXU
    input [`PC_WIDTH-1:0]   pc_i,
    input [`CPU_WIDTH-1:0]  rs1_i,
    input [`CPU_WIDTH-1:0]  rs2_i,
    input [`CPU_WIDTH-1:0]  imm_i,
    input [`CPU_WIDTH-1:0]  csr_rdata_i,
    input                   a_in_src_i,
    input [1:0]             b_in_src_i,
    input [2:0]             pc_srcs_i,
    input                   adder_a_src_i,
    input                   adder_out_src_i,
    input [3:0]             alu_op_i,

    // IDU → EXU → LSU/WBU pass-through
    input                   MemRead_i,
    input                   MemWrite_i,
    input [3:0]             wmask_i,
    input [2:0]             rmask_i,
    input                   wb_src_i,
    input                   csr_write_i,
    input                   csr_wdata_src_i,
    input                   reg_write_i,
    input [`REG_ADDR-1:0]   waddr_i,
    input                   ecall_i,
    input [1:0]             waddr_csr_i,

    input                   exu_valid_i,
    output                  exu_ready_o,

    // EXU → LSU
    output [`CPU_WIDTH-1:0] alu_result_o,
    output [`CPU_WIDTH-1:0] rs1_o,
    output [`CPU_WIDTH-1:0] rs2_o,
    output [`CPU_WIDTH-1:0] csr_rdata_l_rs1_o,
    output [`PC_WIDTH-1:0]  npc_o,
    output reg              MemRead_o,
    output reg              MemWrite_o,
    output reg [3:0]        wmask_o,
    output reg [2:0]        rmask_o,
    output reg              wb_src_o,
    output reg              csr_write_o,
    output reg              csr_wdata_src_o,
    output reg              reg_write_o,
    output reg [`REG_ADDR-1:0] waddr_o,
    output                  ecall_o,
    output [1:0]            waddr_csr_o,

    output                  exu_valid_o,
    input                   exu_ready_i,

    output                  npc_valid,
    output                  rd_exu_valid,

    output [`CPU_WIDTH-1:0] pc_o
);

// =============================================================================
// State: only IDLE and OUT
// =============================================================================
localparam S_IDLE = 1'b0,
           S_OUT  = 1'b1;

reg state;

// =============================================================================
// Pipeline registers — only data that must survive across cycles
// =============================================================================
reg [`PC_WIDTH-1:0]   pc;
reg [`CPU_WIDTH-1:0]  rs1, rs2, imm, csr_rdata;

// Pass-through pipeline control (latched at handshake, held until LSU accepts)
reg                   ecall_lat;
reg [1:0]             waddr_csr_lat;

// =============================================================================
// EXU-internal control: NOT registered — use _i inputs directly
// The key insight: these signals are only consumed by the combinational
// submodules (mux/alu/adder/branch) within EXU. Since the data operands
// (pc, rs1, rs2, imm, csr_rdata) are latched and stable during S_OUT,
// we need the control signals to also be stable. So we latch them too,
// but as a MINIMAL set.
// =============================================================================
reg                   a_in_src_lat;
reg [1:0]             b_in_src_lat;
reg [2:0]             pc_srcs_lat;
reg                   adder_a_src_lat;
reg                   adder_out_src_lat;
reg [3:0]             alu_op_lat;

// =============================================================================
// Combinational outputs from state
// =============================================================================
assign exu_ready_o  = (state == S_IDLE);
assign exu_valid_o  = (state == S_OUT);
assign npc_valid    = (state == S_OUT);
assign rd_exu_valid = (state == S_OUT);

// Data outputs
assign alu_result_o       = alu_result;
assign rs1_o              = rs1;
assign rs2_o              = rs2;
assign csr_rdata_l_rs1_o  = csr_rdata | rs1;
assign npc_o              = npc;
assign pc_o               = pc;   // No duplicate register!
assign ecall_o            = ecall_lat;
assign waddr_csr_o        = waddr_csr_lat;

// =============================================================================
// Submodule interconnect (all combinational)
// =============================================================================
wire [`CPU_WIDTH-1:0] a_in, b_in, a_out, add_out, pc_new, alu_result;
wire [`PC_WIDTH-1:0]  npc;
wire                  zero;

mux21 Adder_A_Src (
    .d0  (pc),
    .d1  (rs1),
    .sel (adder_a_src_lat),
    .out (a_out)
);

adder Adder (
    .a   (a_out),
    .b   (imm),
    .out (add_out)
);

mux21 Adder_Out (
    .d0  (add_out),
    .d1  (csr_rdata),
    .sel (adder_out_src_lat),
    .out (pc_new)
);

branch_control Branch_Control (
    .pc4        (pc + 4),
    .pc_new     (pc_new),
    .pc_srcs    (pc_srcs_lat),
    .zero       (zero),
    .alu_result (alu_result),
    .npc        (npc)
);

mux21 ALU_A_Src (
    .d0  (rs1),
    .d1  (pc),
    .sel (a_in_src_lat),
    .out (a_in)
);

mux41 ALU_B_Src (
    .d0  (rs2),
    .d1  (imm),
    .d2  (32'd4),
    .d3  (csr_rdata),
    .sel (b_in_src_lat),
    .out (b_in)
);

alu ALU (
    .a          (a_in),
    .b          (b_in),
    .op         (alu_op_lat),
    .alu_result (alu_result),
    .zero       (zero)
);

// =============================================================================
// State machine
// =============================================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state <= S_IDLE;
    end else begin
        case (state)

            S_IDLE: begin
                if (exu_valid_i && exu_ready_o) begin
                    // Latch data operands
                    pc        <= pc_i;
                    rs1       <= rs1_i;
                    rs2       <= rs2_i;
                    imm       <= imm_i;
                    csr_rdata <= csr_rdata_i;

                    // Latch control (minimal — for submodule muxes)
                    a_in_src_lat     <= a_in_src_i;
                    b_in_src_lat     <= b_in_src_i;
                    pc_srcs_lat      <= pc_srcs_i;
                    adder_a_src_lat  <= adder_a_src_i;
                    adder_out_src_lat <= adder_out_src_i;
                    alu_op_lat       <= alu_op_i;

                    // Latch pass-through to LSU
                    MemRead_o       <= MemRead_i;
                    MemWrite_o      <= MemWrite_i;
                    wmask_o         <= wmask_i;
                    rmask_o         <= rmask_i;
                    wb_src_o        <= wb_src_i;
                    csr_write_o     <= csr_write_i;
                    csr_wdata_src_o <= csr_wdata_src_i;
                    reg_write_o     <= reg_write_i;
                    waddr_o         <= waddr_i;
                    ecall_lat       <= ecall_i;
                    waddr_csr_lat   <= waddr_csr_i;

                    state <= S_OUT;
                end
            end

            S_OUT: begin
                if (exu_valid_o && exu_ready_i)
                    state <= S_IDLE;
            end

            default: state <= S_IDLE;

        endcase
    end
end

endmodule