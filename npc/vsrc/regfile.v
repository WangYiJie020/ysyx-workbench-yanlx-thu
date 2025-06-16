import "DPI-C" function void reg_return_value(int logic[31:0] regvalue[32]);

module regfile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr1,
  output [DATA_WIDTH-1:0] rdata1,
  input [ADDR_WIDTH-1:0] raddr2,
  output [DATA_WIDTH-1:0] rdata2
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  
  assign rdata1 = rf[raddr1];
  assign rdata2 = rf[raddr2];

  always @(posedge clk) begin
    if (wen && waddr != 0) rf[waddr] <= wdata;
  end

  always@(posedge clk) begin
    reg_return_value(rf);
  end
endmodule

