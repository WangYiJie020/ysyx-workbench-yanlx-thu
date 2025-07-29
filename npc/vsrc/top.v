`include "header.v"

import "DPI-C" function void ebreak();
import "DPI-C" function void reg_return_value(input int gpr_0,input int gpr_1,
input int gpr_2,input int gpr_3,input int gpr_4,input int gpr_5,
input int gpr_6,input int gpr_7,input int gpr_8,input int gpr_9,
input int gpr_10,input int gpr_11,input int gpr_12,input int gpr_13,
input int gpr_14,input int gpr_15,input int gpr_16,input int gpr_17,
input int gpr_18,input int gpr_19,input int gpr_20,input int gpr_21,
input int gpr_22,input int gpr_23,input int gpr_24,input int gpr_25,
input int gpr_26,input int gpr_27,input int gpr_28,input int gpr_29,
input int gpr_30,input int gpr_31,input int pc,input int csr_reg_0,
input int csr_reg_1,input int csr_reg_2,input int csr_reg_3);


module top(
  input clk,
  input rst_n
  //output [31:0]pc,
  //input [31:0] inst
  //output [31:0] datamem_addr,
  //input [31:0] datamem_data

);

  wire [`PC_WIDTH-1:0] pc_to_mem;
  wire [`INST_WIDTH-1:0] inst_from_mem;
  //wbu to ifu
  wire [`PC_WIDTH-1:0] npc_wbu_to_ifu;
  wire valid_wbu_to_ifu;
  wire ready_wbu_to_ifu;
  //ifu to idu
  wire [`PC_WIDTH-1:0] pc_ifu_to_idu;
  wire [`INST_WIDTH-1:0] inst_ifu_to_idu;
  wire valid_ifu_to_idu;
  wire ready_ifu_to_idu;
  
  ifu IFU(
    .clk(clk),
    .rst_n(rst_n),
    .pc_to_mem(pc_to_mem),
    .inst_from_mem(inst_from_mem),

    .npc_i(npc_wbu_to_ifu),

    .ifu_valid_i(valid_wbu_to_ifu),
    .ifu_ready_o(ready_wbu_to_ifu),

    .pc_o(pc_ifu_to_idu),
    .inst_o(inst_ifu_to_idu),

    .ifu_valid_o(valid_ifu_to_idu),
    .ifu_ready_i(ready_ifu_to_idu)
  );

  inst_mem Inst_Mem(
    .pc(pc_to_mem),
    .inst(inst_from_mem)
  );

  wire [`REG_ADDR-1:0] raddr1;
  wire [`REG_ADDR-1:0] raddr2;
  wire [`CPU_WIDTH-1:0] rdata1;
  wire [`CPU_WIDTH-1:0] rdata2;
  wire [`CPU_WIDTH-1:0] a5;
  wire [`PC_WIDTH-1:0] pc_idu_to_exu;
  wire [`CPU_WIDTH-1:0] rs1_idu_to_exu;
  wire [`CPU_WIDTH-1:0] rs2_idu_to_exu;
  wire [`CPU_WIDTH-1:0] imm_idu_to_exu;
  wire [`CPU_WIDTH-1:0] csr_rdata_idu_to_exu;
  wire a_in_src_idu_to_exu;
  wire [1:0] b_in_src_idu_to_exu;
  wire [2:0] pc_srcs_idu_to_exu;
  wire adder_a_src_idu_to_exu;
  wire adder_out_src_idu_to_exu;
  wire [3:0] alu_op_idu_to_exu;
  //idu to exu to lsu or wbu
  wire MemRead_idu_to_exu;
  wire MemWrite_idu_to_exu;
  wire [7:0] wmask_idu_to_exu;
  wire [2:0] rmask_idu_to_exu;
  wire wb_src_idu_to_exu;
  wire csr_write_idu_to_exu;
  wire csr_wdata_src_idu_to_exu;
  wire reg_write_idu_to_exu;
  wire [`REG_ADDR-1:0] waddr_idu_to_exu;
  wire valid_idu_to_exu;
  wire ready_idu_to_exu;
  //write csr
  wire csr_write;
  wire [`CPU_WIDTH-1:0] csr_wdata;
  wire [`CPU_WIDTH-1:0] csr_reg [3:0]; //difftest

  idu IDU(
    .clk(clk),
    .rst_n(rst_n),
    //regfiles
    .raddr1(raddr1),
    .raddr2(raddr2),
    .rdata1(rdata1),
    .rdata2(rdata2),
    .a5(a5),
    //ifu to idu
    .pc_i(pc_ifu_to_idu),
    .inst_i(inst_ifu_to_idu),

    .idu_valid_i(valid_ifu_to_idu),
    .idu_ready_o(ready_ifu_to_idu),

    //idu to exu
    .pc_o(pc_idu_to_exu),
    .rs1_o(rs1_idu_to_exu),
    .rs2_o(rs2_idu_to_exu),
    .imm_o(imm_idu_to_exu),
    .csr_rdata_o(csr_rdata_idu_to_exu),
    .a_in_src_o(a_in_src_idu_to_exu),
    .b_in_src_o(b_in_src_idu_to_exu),
    .pc_srcs_o(pc_srcs_idu_to_exu),
    .adder_a_src_o(adder_a_src_idu_to_exu),
    .adder_out_src_o(adder_out_src_idu_to_exu),
    .alu_op(alu_op_idu_to_exu),
    //idu to exu to lsu or wbu
    .MemRead_o(MemRead_idu_to_exu),
    .MemWrite_o(MemWrite_idu_to_exu),
    .wmask_o(wmask_idu_to_exu),
    .rmask_o(rmask_idu_to_exu),
    .wb_src_o(wb_src_idu_to_exu),
    .csr_write_o(csr_write_idu_to_exu),
    .csr_wdata_src_o(csr_wdata_src_idu_to_exu),
    .reg_write_o(reg_write_idu_to_exu),
    .waddr_o(waddr_idu_to_exu),

    .idu_valid_o(valid_idu_to_exu),
    .idu_ready_i(ready_idu_to_exu),

    //write csr
    .csr_write_i(csr_write),
    .csr_wdata_i(csr_wdata),
    .csr_reg(csr_reg) //difftest
  );

  wire [`CPU_WIDTH-1:0] wdata;
  wire [`REG_ADDR-1:0] waddr;
  wire reg_write;
  
  regfile Rgefile (
    .clk(clk),
    .wdata(wdata),
    .waddr(waddr), //rd
    .wen(reg_write),
    .raddr1(raddr1), //rs1
    .rdata1(rdata1),
    .raddr2(raddr2), //rs2
    .rdata2(rdata2),
    .value1(a5),
    .reg_file(reg_file)  //for difftest
  );

  wire [`CPU_WIDTH-1:0] alu_result_exu_to_lsu;
  wire [`CPU_WIDTH-1:0] rs1_exu_to_lsu;
  wire [`CPU_WIDTH-1:0] rs2_exu_to_lsu;
  wire [`CPU_WIDTH-1:0] csr_rdata_l_rs1_exu_to_lsu;
  wire [`PC_WIDTH-1:0] npc_exu_to_lsu;
  wire MemRead_exu_to_lsu;
  wire MemWrite_exu_to_lsu;
  wire [7:0] wmask_exu_to_lsu;
  wire [2:0] rmask_exu_to_lsu;
  wire wb_src_exu_to_lsu;
  wire csr_write_exu_to_lsu;
  wire csr_wdta_src_exu_to_lsu;
  wire reg_write_exu_to_lsu;
  wire [`REG_ADDR-1:0] waddr_exu_to_lsu;

  wire valid_exu_to_lsu;
  wire ready_exu_to_lsu;

  exu EXU(
    .clk(clk),
    .rst_n(rst_n),
    //idu to exu
    .pc_i(pc_idu_to_exu),
    .rs1_i(rs1_idu_to_exu),
    .rs2_i(rs2_idu_to_exu),
    .imm_i(imm_idu_to_exu),
    .csr_rdata_i(csr_rdata_idu_to_exu),
    .a_in_src_i(a_in_src_idu_to_exu),
    .b_in_src_i(b_in_src_idu_to_exu),
    .pc_srcs_i(pc_srcs_idu_to_exu),
    .adder_a_src_i(adder_a_src_idu_to_exu),
    .adder_out_src_i(adder_out_src_idu_to_exu),
    .alu_op_i(alu_op_idu_to_exu),
    //idu to exu to lsu or wbu
    .MemRead_i(MemRead_idu_to_exu),
    .MemWrite_i(MemWrite_idu_to_exu),
    .wmask_i(wmask_idu_to_exu),
    .rmask_i(rmask_idu_to_exu),
    .wb_src_i(wb_src_idu_to_exu),
    .csr_write_i(csr_write_idu_to_exu),
    .csr_wdata_src_i(csr_wdata_src_idu_to_exu),
    .reg_write_i(reg_write_idu_to_exu),
    .waddr_i(waddr_idu_to_exu),

    .exu_valid_i(valid_idu_to_exu),
    .exu_ready_o(ready_idu_to_exu),

    //exu to lsu
    .alu_result_o(alu_result_exu_to_lsu),
    .rs1_o(rs1_exu_to_lsu),
    .rs2_o(rs2_exu_to_lsu),
    .csr_rdata_l_rs1_o(csr_rdata_l_rs1_exu_to_lsu),
    .npc_o(npc_exu_to_lsu),
    .MemRead_o(MemRead_exu_to_lsu),
    .MemWrite_o(MemWrite_exu_to_lsu),
    .wmask_o(wmask_exu_to_lsu),
    .rmask_o(rmask_exu_to_lsu),
    .wb_src_o(wb_src_exu_to_lsu),
    .csr_write_o(csr_write_exu_to_lsu),
    .csr_wdata_src_o(csr_wdta_src_exu_to_lsu),
    .reg_write_o(reg_write_exu_to_lsu),
    .waddr_o(waddr_exu_to_lsu),

    .exu_valid_o(valid_exu_to_lsu),
    .exu_ready_i(ready_exu_to_lsu)  
  );

  wire [`CPU_WIDTH-1:0] alu_result_lsu_to_wbu;
  wire [`CPU_WIDTH-1:0] rs1_lsu_to_wbu;
  wire [`CPU_WIDTH-1:0] csr_rdata_l_rs1_lsu_to_wbu;
  wire [`CPU_WIDTH-1:0] datamem_readdata_lsu_to_wbu;
  wire [`PC_WIDTH-1:0] npc_lsu_to_wbu;
  wire [2:0] rmask_lsu_to_wbu;
  wire wb_src_lsu_to_wbu;
  wire csr_write_lsu_to_wbu;
  wire csr_wdata_src_lsu_to_wbu;
  wire reg_write_lsu_to_wbu;
  wire [`REG_ADDR-1:0] waddr_lsu_to_wbu;

  wire valid_lsu_to_wbu;
  wire ready_lsu_to_wbu;

  lsu LSU(
    .clk(clk),
    .rst_n(rst_n),
    //exu to lsu
    .alu_result_i(alu_result_exu_to_lsu),
    .rs1_i(rs1_exu_to_lsu),
    .rs2_i(rs2_exu_to_lsu),
    .csr_rdata_l_rs1_i(csr_rdata_l_rs1_exu_to_lsu),
    .npc_i(npc_exu_to_lsu),
    .MemRead_i(MemRead_exu_to_lsu),
    .MemWrite_i(MemWrite_exu_to_lsu),
    .wmask_i(wmask_exu_to_lsu),
    .rmask_i(rmask_exu_to_lsu),
    .wb_src_i(wb_src_exu_to_lsu),
    .csr_write_i(csr_write_exu_to_lsu),
    .csr_wdata_src_i(csr_wdta_src_exu_to_lsu),
    .reg_write_i(reg_write_exu_to_lsu),
    .waddr_i(waddr_exu_to_lsu),

    .lsu_valid_i(valid_exu_to_lsu),
    .lsu_ready_o(ready_exu_to_lsu),
    
    //lsu to wbu
    .alu_result_o(alu_result_lsu_to_wbu),
    .rs1_o(rs1_lsu_to_wbu),
    .csr_rdata_l_rs1_o(csr_rdata_l_rs1_lsu_to_wbu),
    .datamem_readdata_o(datamem_readdata_lsu_to_wbu),
    .npc_o(npc_lsu_to_wbu),
    .rmask_o(rmask_lsu_to_wbu),
    .wb_src_o(wb_src_lsu_to_wbu),
    .csr_write_o(csr_write_lsu_to_wbu),
    .csr_wdata_src_o(csr_wdata_src_lsu_to_wbu),
    .reg_write_o(reg_write_lsu_to_wbu),
    .waddr_o(waddr_lsu_to_wbu),

    .lsu_valid_o(valid_lsu_to_wbu),
    .lsu_ready_i(ready_lsu_to_wbu)

  );

  wbu WBU(
    .clk(clk),
    .rst_n(rst_n),
    //lsu to wbu
    .alu_result_i(alu_result_lsu_to_wbu),
    .rs1_i(rs1_lsu_to_wbu),
    .csr_rdata_l_rs1_i(csr_rdata_l_rs1_lsu_to_wbu),
    .datamem_readdata_i(datamem_readdata_lsu_to_wbu),
    .npc_i(npc_lsu_to_wbu),
    .rmask_i(rmask_lsu_to_wbu),
    .wb_src_i(wb_src_lsu_to_wbu),
    .csr_write_i(csr_write_lsu_to_wbu),
    .csr_wdata_src_i(csr_wdata_src_lsu_to_wbu),
    .reg_write_i(reg_write_lsu_to_wbu),
    .waddr_i(waddr_lsu_to_wbu),

    .wbu_valid_i(valid_lsu_to_wbu),
    .wbu_ready_o(ready_lsu_to_wbu),

    //wbu to ifu
    .npc_o(npc_wbu_to_ifu),

    .wbu_valid_o(valid_wbu_to_ifu),
    .wbu_ready_i(ready_wbu_to_ifu),

    //write back
    .csr_wdata_o(csr_wdata),
    .csr_write_o(csr_write),
    .wdata_o(wdata),
    .reg_write_o(reg_write),
    .waddr_o(waddr)
  );


  always@(*) begin
    
    if(inst == 32'h00100073) begin
      ebreak();
      $finish;
    end
  end

  always@(*) begin
    reg_return_value(reg_file[0],reg_file[1],reg_file[2],reg_file[3],reg_file[4],reg_file[5],reg_file[6],
      reg_file[7],reg_file[8],reg_file[9],reg_file[10],reg_file[11],reg_file[12],reg_file[13],reg_file[14],
      reg_file[15],reg_file[16],reg_file[17],reg_file[18],reg_file[19],reg_file[20],reg_file[21],reg_file[22],
      reg_file[23],reg_file[24],reg_file[25],reg_file[26],reg_file[27],reg_file[28],reg_file[29],reg_file[30],
      reg_file[31],pc,csr_reg[0],csr_reg[1],csr_reg[2],csr_reg[3]);
  end

endmodule

