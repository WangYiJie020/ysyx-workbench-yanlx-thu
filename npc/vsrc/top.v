module top(
  input clk,
  input rst_n,
  output [31:0]pc,
  input [31:0] inst,

);

  wire [31:0] imm;
  reg [31:0] rdata;
  wire wen = 1;
  pc u0 (
    .clk(clk),
    .rst_n(rst_n),
    .din(pc+4),
    .dout(pc)
  );

  regfile u1 #(5,32)(
    .clk(clk),
    .wdata(imm+rdata),
    .waddr(inst[11:7]),
    .wen(wen),
    .raddr(inst[19:15]),
    .rdata(rdata)
  );

  sext u2 (
    .inst(inst),
    .data(imm)
  );



endmodule
