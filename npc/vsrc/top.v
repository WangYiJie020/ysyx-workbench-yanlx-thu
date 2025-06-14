import "DPI-C" function void ebreak();

module top(
  input clk,
  input rst_n,
  output [31:0]pc,
  input [31:0] inst,
  output [31:0] datamem_addr,
  input [31:0] datamem_data

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
    .rdata2(rs2)
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

  assign datamem_addr = alu_result;

  mux21 WB(
    .d0(alu_result),
    .d1(datamem_data),
    .sel(1'b0),
    .out(wdata)
  );

  always@(posedge clk) begin
    if(inst == 32'h00100073) begin
      ebreak();
      $finish;
    end
  end

endmodule

