module regfile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr1,
  output [DATA_WIDTH-1:0] rdata1,
  input [ADDR_WIDTH-1:0] raddr2,
  output [DATA_WIDTH-1:0] rdata2,
  output reg [31:0] reg_file [31:0]
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  
  assign rdata1 = rf[raddr1];
  assign rdata2 = rf[raddr2];

    genvar gv_i;
    generate
      for(gv_i=0;gv_i<32;gv_i++) begin
          assign reg_file[gv_i] = rf[gv_i];
      end
    endgenerate

  always @(posedge clk) begin
    if (wen && waddr != 0) rf[waddr] <= wdata;
  end

endmodule

