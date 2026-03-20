module regfile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr1,
  output [DATA_WIDTH-1:0] rdata1,
  input [ADDR_WIDTH-1:0] raddr2,
  output [DATA_WIDTH-1:0] rdata2,
  output [DATA_WIDTH-1:0] value1,
  output reg [31:0] reg_file [31:0],

  input [2:0] raddr_csr,
  output [DATA_WIDTH-1:0] rdata_csr,
  input [1:0] waddr_csr,
  input [DATA_WIDTH-1:0] wdata_csr,
  input wen_csr,
  input ecall,
  input [DATA_WIDTH-1:0] pc,

  output reg [31:0] csr_reg [3:0]
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

  reg [31:0] csr_mepc;
  reg [31:0] csr_mstatus;
  reg [31:0] csr_mcause;
  reg [31:0] csr_mtvec;
  reg [31:0] csr_mvendorid;
  reg [31:0] csr_marchid;

  assign csr_reg[0] = csr_mstatus;
  assign csr_reg[1] = csr_mtvec;
  assign csr_reg[2] = csr_mepc;
  assign csr_reg[3] = csr_mcause;

  assign csr_mvendorid = 32'h79737978;
  assign csr_marchid = 32'h017E3C19;
  
  assign rdata1 = rf[raddr1];
  assign rdata2 = rf[raddr2];
  //assign value1 = rf[15]; //value1 = a5;

  assign rdata_csr = (raddr_csr[2]) ? (raddr_csr[1] ? (raddr_csr[0] ? csr_mepc : csr_mtvec) : (raddr_csr[0] ? csr_marchid : csr_mvendorid)) 
                      : (raddr_csr[1] ? (raddr_csr[0] ? csr_mcause: csr_mepc) : (raddr_csr[0] ? csr_mtvec: csr_mstatus));

    genvar gv_i;
    generate
      for(gv_i=0;gv_i<32;gv_i++) begin
          assign reg_file[gv_i] = rf[gv_i];
      end
    endgenerate

  always @(posedge clk) begin
    if (wen && waddr != 0) rf[waddr] <= wdata;
  end

  initial begin
    csr_mstatus = 32'h1800;
  end

  always @(posedge clk) begin
    if(wen_csr) begin
      case (waddr_csr)
        2'b00: csr_mstatus <= wdata_csr;
        2'b01: csr_mtvec <= wdata_csr;
        2'b10: csr_mepc <= wdata_csr;
        2'b11: csr_mcause <= wdata_csr;
      endcase
    end
  end

  always @(posedge clk) begin
    if(ecall) begin
      csr_mepc <= pc;
      csr_mcause <= rf[15];
    end
  end

endmodule

