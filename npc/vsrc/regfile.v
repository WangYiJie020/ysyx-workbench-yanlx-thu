module regfile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr,
  output [DATA_WIDTH-1:0] rdata
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  
  assign rdata = rf[raddr];

  always @(posedge clk) begin
    if (wen && waddr != 0) rf[waddr] <= wdata;
  end
endmodule

