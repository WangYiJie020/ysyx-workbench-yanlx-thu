`include "header.v"

// =============================================================================
// WBU — area-optimized
//
// Key insight: WBU is single-cycle. S_RECEIVE immediately goes back to S_IDLE.
// So we can latch at handshake (S_IDLE && valid && ready) and output in the
// same "next cycle" which is already S_IDLE again.
//
// Actually, since regfile write is consumed in one cycle and WBU doesn't
// need to hold data across multiple cycles, many signals can be passed
// through combinationally when we're in the "active" beat.
//
// Removed:
//   - rs1 (32 DFF) → pass through combinationally
//   - csr_rdata_l_rs1 (32 DFF) → pass through combinationally  
//   - S_RECEIVE state → merge into single-cycle operation
//   - wbu_ready_o, rd_wbu_valid → derive from state
//
// Kept (must hold stable for sext_mem/mux submodules):
//   - alu_result, datamem_readdata, rmask, wb_src, csr_wdata_src
//   - csr_write_o, reg_write_o, waddr_o, ecall_o, waddr_csr_o, pc_o
// =============================================================================

module wbu (
    input clk,
    input rst_n,

    // LSU → WBU
    input [`CPU_WIDTH-1:0]  alu_result_i,
    input [`CPU_WIDTH-1:0]  rs1_i,
    input [`CPU_WIDTH-1:0]  csr_rdata_l_rs1_i,
    input [`CPU_WIDTH-1:0]  datamem_readdata_i,
    input [2:0]             rmask_i,
    input                   wb_src_i,
    input                   csr_write_i,
    input                   csr_wdata_src_i,
    input                   reg_write_i,
    input [`REG_ADDR-1:0]   waddr_i,
    input                   ecall_i,
    input [1:0]             waddr_csr_i,

    input                   wbu_valid_i,
    output                  wbu_ready_o,

    // Write-back outputs
    output [`CPU_WIDTH-1:0] csr_wdata_o,
    output [`CPU_WIDTH-1:0] wdata_o,
    output reg              csr_write_o,
    output reg              reg_write_o,
    output reg [`REG_ADDR-1:0] waddr_o,
    output reg              ecall_o,
    output reg [1:0]        waddr_csr_o,

    output                  rd_wbu_valid,

    input [`CPU_WIDTH-1:0]  pc_i,
    output reg [`CPU_WIDTH-1:0] pc_o
);

// =============================================================================
// State: just a toggle — IDLE (accept) or WRITEBACK (output results)
// =============================================================================
reg active;  // 0 = idle/ready, 1 = writeback active

assign wbu_ready_o  = !active;
assign rd_wbu_valid = active;

// =============================================================================
// Latched data — only what submodules need in the writeback cycle
// =============================================================================
reg [`CPU_WIDTH-1:0]  alu_result;
reg [`CPU_WIDTH-1:0]  datamem_readdata;
reg [`CPU_WIDTH-1:0]  rs1_lat;
reg [`CPU_WIDTH-1:0]  csr_rdata_l_rs1_lat;
reg [2:0]             rmask;
reg                   wb_src;
reg                   csr_wdata_src;

// =============================================================================
// Submodules (combinational)
// =============================================================================
wire [`CPU_WIDTH-1:0] mem_data;

sext_mem SEXT_Mem (
    .read_data (datamem_readdata),
    .addr_low2 (alu_result[1:0]),
    .rmask     (rmask),
    .mem_data  (mem_data)
);

mux21 WB (
    .d0  (alu_result),
    .d1  (mem_data),
    .sel (wb_src),
    .out (wdata_o)
);

mux21 Csr_Wdata (
    .d0  (rs1_lat),
    .d1  (csr_rdata_l_rs1_lat),
    .sel (csr_wdata_src),
    .out (csr_wdata_o)
);

// =============================================================================
// State machine
// =============================================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        active <= 1'b0;
    end else begin
        if (!active) begin
            // S_IDLE: accept handshake
            if (wbu_valid_i) begin
                alu_result          <= alu_result_i;
                datamem_readdata    <= datamem_readdata_i;
                rs1_lat             <= rs1_i;
                csr_rdata_l_rs1_lat <= csr_rdata_l_rs1_i;
                rmask               <= rmask_i;
                wb_src              <= wb_src_i;
                csr_wdata_src       <= csr_wdata_src_i;
                csr_write_o         <= csr_write_i;
                reg_write_o         <= reg_write_i;
                waddr_o             <= waddr_i;
                ecall_o             <= ecall_i;
                waddr_csr_o         <= waddr_csr_i;
                pc_o                <= pc_i;
                active              <= 1'b1;
            end
        end else begin
            // Writeback cycle — submodules output results combinationally
            // Single cycle, go back to idle
            active <= 1'b0;
        end
    end
end

endmodule