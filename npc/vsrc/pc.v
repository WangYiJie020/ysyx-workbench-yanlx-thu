module pc #(WIDTH = 32, RESET_VAL = 32'h80000000) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else dout <= din;
  end
endmodule