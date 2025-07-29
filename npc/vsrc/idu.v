`include "header.v"
module idu(
    input clk,
    input rst_n,
    //regfiles
    output [`REG_ADDR-1:0] raddr1,
    output [`REG_ADDR-1:0] raddr2,
    input [`CPU_WIDTH-1:0] rdata1,
    input [`CPU_WIDTH-1:0] rdata2,
    input [`CPU_WIDTH-1:0] a5,
    //ifu to idu
    input [`PC_WIDTH-1:0] pc_i,
    input [`INST_WIDTH-1:0] inst_i,
    input idu_valid_i,
    output idu_ready_o,
    //idu to exu
    output [`PC_WIDTH-1:0] pc_o,
    output [`CPU_WIDTH-1:0] rs1_o,
    output [`CPU_WIDTH-1:0] rs2_o,
    output [`CPU_WIDTH-1:0] imm_o,
    output [`CPU_WIDTH-1:0] csr_rdata_o,
    output a_in_src_o,
    output [1:0] b_in_src_o,
    output [2:0] pc_srcs_o,
    output adder_a_src_o,
    output adder_out_src_o,
    output [3:0] alu_op,
    //idu to exu to lsu or wbu
    output MemRead_o,
    output MemWrite_o,
    output [7:0] wmask_o,
    output [2:0] rmask_o,
    output wb_src_o,
    output csr_write_o,
    output csr_wdata_src_o,
    output reg_write_o,
    output [`REG_ADDR-1:0] waddr_o,
    output reg idu_valid_o,
    input idu_ready_i,
    //write csr
    input csr_write_i,
    input [`CPU_WIDTH-1:0] csr_wdata_i,

    output [`CPU_WIDTH-1:0] csr_reg [3:0] //difftest
    
    
);
    reg [`PC_WIDTH-1:0] pc;
    reg [`INST_WIDTH-1:0] inst;

    assign rs1_o = rdata1;
    assign rs2_o = rdata2;
    assign pc_o = pc;
    assign waddr_o = inst[11:7];
    assign raddr1 = inst[19:15];
    assign raddr2 = inst[24:20];

    controler Controler(
        .inst(inst),
        .a_in_src(a_in_src_o),
        .b_in_src(b_in_src_o),
        .reg_write(reg_write_o),
        .adder_a_src(adder_a_src_o),
        .pc_srcs(pc_srcs_o),
        .MemRead(mem_read_o),
        .MemWrite(mem_write_o),
        .wmask(wmask_o),
        .wb_src(wb_src_o),
        .rmask(rmask_o),
        .csr_write(csr_write_o),
        .adder_out_src(adder_out_src_o),
        .csr_wdata_src(csr_wdata_src_o)
    );

    
    sext SEXT (
        .inst(inst),
        .data(imm_o)
    );

    csr CSR(
        .clk(clk),
        .wen(csr_write_i),
        .inst(inst),
        .wdata(csr_wdata_i),
        .NO(a5),
        .pc(pc),
        .rdata(csr_rdata_o),
        .csr_reg(csr_reg) //for difftest
    );
    
    alu_control ALU_Control(
        .inst(inst),
        .alu_op(alu_op)
    );

    assign idu_ready_o = idu_ready_i;

    always@(posedge clk) begin
        if(ifu_valid_i && ifu_ready_i) begin
            pc <= pc_i;
            inst <= inst_i;
        end
    end

    always@(posedge clk) begin
        if(!rst_n) ifu_valid_o <= 1'b0;
        else if(ifu_ready_o) ifu_valid_o <= ifu_valid_i;
    end



endmodule