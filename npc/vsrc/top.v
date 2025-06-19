import "DPI-C" function void ebreak();
import "DPI-C" function void reg_return_value(input int gpr_0,input logic[31:0] gpr_1,
input logic[31:0] gpr_2,input logic[31:0] gpr_3,input logic[31:0] gpr_4,input logic[31:0] gpr_5,
input logic[31:0] gpr_6,input logic[31:0] gpr_7,input logic[31:0] gpr_8,input logic[31:0] gpr_9,
input logic[31:0] gpr_10,input logic[31:0] gpr_11,input logic[31:0] gpr_12,input logic[31:0] gpr_13,
input logic[31:0] gpr_14,input logic[31:0] gpr_15,input logic[31:0] gpr_16,input logic[31:0] gpr_17,
input logic[31:0] gpr_18,input logic[31:0] gpr_19,input logic[31:0] gpr_20,input logic[31:0] gpr_21,
input logic[31:0] gpr_22,input logic[31:0] gpr_23,input logic[31:0] gpr_24,input logic[31:0] gpr_25,
input logic[31:0] gpr_26,input logic[31:0] gpr_27,input logic[31:0] gpr_28,input logic[31:0] gpr_29,
input logic[31:0] gpr_30,input logic[31:0] gpr_31);


module top(
  input clk,
  input rst_n,
  output [31:0]pc,
  input [31:0] inst
  //output [31:0] datamem_addr,
  //input [31:0] datamem_data

);

  wire [31:0] imm;
  wire [31:0] rs1,rs2,a_in,b_in,a_out;
  wire [1:0] b_in_src;
  wire a_in_src,adder_a_src;
  wire reg_write;
  wire [3:0] alu_op;
  wire [31:0] alu_result;
  wire [31:0] wdata;
  wire zero;

  wire [31:0] pc_new,npc;
  wire pc_srcs;
  wire [31:0] reg_file [31:0];
  mux21 PC_Srcs(
    .d0(pc+4),
    .d1(pc_new),
    .sel(pc_srcs),
    .out(npc)
  );

  pc PC (
    .clk(clk),
    .rst_n(rst_n),
    .din(npc),
    .dout(pc)
  );

  controler Controler(
    .inst(inst),
    .a_in_src(a_in_src),
    .b_in_src(b_in_src),
    .reg_write(reg_write),
    .adder_a_src(adder_a_src),
    .pc_srcs(pc_srcs)

  );

  regfile Rgefile (
    .clk(clk),
    .wdata(wdata),
    .waddr(inst[11:7]), //rd
    .wen(reg_write),
    .raddr1(inst[19:15]), //rs1
    .rdata1(rs1),
    .raddr2(inst[24:20]), //rs2
    .rdata2(rs2),
    .reg_file(reg_file)  //for difftest
  );

  sext SEXT (
    .inst(inst),
    .data(imm)
  );

  mux21 Adder_A_Src(
    .d0(pc),
    .d1(rs1),
    .sel(adder_a_src),
    .out(a_out)
  );

  adder Adder(
    .a(a_out),
    .b(imm),
    .out(pc_new)
  );

  mux21 ALU_A_Src(
    .d0(rs1),
    .d1(pc),
    .sel(a_in_src),
    .out(a_in)
  );

  mux41 ALU_B_Src(
    .d0(rs2),
    .d1(imm),
    .d2(32'd4),
    .d3(32'd0), // empty
    .sel(b_in_src),
    .out(b_in)
  );

  alu ALU(
    .a(a_in),
    .b(b_in),
    .op(alu_op),
    .alu_result(alu_result),
    .zero(zero)
  );

  alu_control ALU_Control(
    .inst(inst),
    .alu_op(alu_op)
  );

  //assign datamem_addr = alu_result;

  wire [31:0]datamem_data;
  mux21 WB(
    .d0(alu_result),
    .d1(datamem_data),
    .sel(1'b0),
    .out(wdata)
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
      reg_file[31]);
  end

endmodule

