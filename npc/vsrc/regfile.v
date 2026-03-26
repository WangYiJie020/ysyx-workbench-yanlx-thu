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

  genvar gv_i;
  generate
    for(gv_i=0;gv_i<32;gv_i++) begin
        assign reg_file[gv_i] = regs[gv_i];
    end
  endgenerate

  generate
    for(gv_i=0;gv_i<4;gv_i++) begin
        assign csr_reg[gv_i] = csr[gv_i];
    end
  endgenerate

  reg [DATA_WIDTH-1:0] regs [1:15];
  reg [DATA_WIDTH-1:0] csr [0:3];

  //assign rdata1 = rf[raddr1_mid];
  //assign rdata2 = rf[raddr2_mid];
  //assign value1 = rf[15]; //value1 = a5;

  //assign rdata_csr = (raddr_csr[2]) ? (raddr_csr[1] ? (raddr_csr[0] ? csr_mepc : csr_mtvec) : (raddr_csr[0] ? 0 : 0)) 
  //                    : (raddr_csr[1] ? (raddr_csr[0] ? csr_mcause: csr_mepc) : (raddr_csr[0] ? csr_mtvec: csr_mstatus));

  always @(posedge clk) begin
    if (wen && waddr != 0) regs[waddr] <= wdata;
  end

    // ============================================================
    // 读端口 1：decode-and-OR
    // ============================================================
    wire [15:0] rsel1 = (16'b1 << raddr1);
 
    wire [31:0] m1_0  = 32'b0;                        // x0 = 0
    wire [31:0] m1_1  = {32{rsel1[ 1]}} & regs[ 1];
    wire [31:0] m1_2  = {32{rsel1[ 2]}} & regs[ 2];
    wire [31:0] m1_3  = {32{rsel1[ 3]}} & regs[ 3];
    wire [31:0] m1_4  = {32{rsel1[ 4]}} & regs[ 4];
    wire [31:0] m1_5  = {32{rsel1[ 5]}} & regs[ 5];
    wire [31:0] m1_6  = {32{rsel1[ 6]}} & regs[ 6];
    wire [31:0] m1_7  = {32{rsel1[ 7]}} & regs[ 7];
    wire [31:0] m1_8  = {32{rsel1[ 8]}} & regs[ 8];
    wire [31:0] m1_9  = {32{rsel1[ 9]}} & regs[ 9];
    wire [31:0] m1_10 = {32{rsel1[10]}} & regs[10];
    wire [31:0] m1_11 = {32{rsel1[11]}} & regs[11];
    wire [31:0] m1_12 = {32{rsel1[12]}} & regs[12];
    wire [31:0] m1_13 = {32{rsel1[13]}} & regs[13];
    wire [31:0] m1_14 = {32{rsel1[14]}} & regs[14];
    wire [31:0] m1_15 = {32{rsel1[15]}} & regs[15];
 
    assign rdata1 = m1_0  | m1_1  | m1_2  | m1_3  |
                    m1_4  | m1_5  | m1_6  | m1_7  |
                    m1_8  | m1_9  | m1_10 | m1_11 |
                    m1_12 | m1_13 | m1_14 | m1_15;


    // ============================================================
    // 读端口 2：decode-and-OR
    // ============================================================
    wire [15:0] rsel2 = (16'b1 << raddr2);
 
    wire [31:0] m2_0  = 32'b0;
    wire [31:0] m2_1  = {32{rsel2[ 1]}} & regs[ 1];
    wire [31:0] m2_2  = {32{rsel2[ 2]}} & regs[ 2];
    wire [31:0] m2_3  = {32{rsel2[ 3]}} & regs[ 3];
    wire [31:0] m2_4  = {32{rsel2[ 4]}} & regs[ 4];
    wire [31:0] m2_5  = {32{rsel2[ 5]}} & regs[ 5];
    wire [31:0] m2_6  = {32{rsel2[ 6]}} & regs[ 6];
    wire [31:0] m2_7  = {32{rsel2[ 7]}} & regs[ 7];
    wire [31:0] m2_8  = {32{rsel2[ 8]}} & regs[ 8];
    wire [31:0] m2_9  = {32{rsel2[ 9]}} & regs[ 9];
    wire [31:0] m2_10 = {32{rsel2[10]}} & regs[10];
    wire [31:0] m2_11 = {32{rsel2[11]}} & regs[11];
    wire [31:0] m2_12 = {32{rsel2[12]}} & regs[12];
    wire [31:0] m2_13 = {32{rsel2[13]}} & regs[13];
    wire [31:0] m2_14 = {32{rsel2[14]}} & regs[14];
    wire [31:0] m2_15 = {32{rsel2[15]}} & regs[15];
 
    assign rdata2 = m2_0  | m2_1  | m2_2  | m2_3  |
                    m2_4  | m2_5  | m2_6  | m2_7  |
                    m2_8  | m2_9  | m2_10 | m2_11 |
                    m2_12 | m2_13 | m2_14 | m2_15;

  always @(posedge clk) begin
    if(wen_csr) begin
      csr[waddr_csr] <= wdata_csr;
      //case (waddr_csr)
      //  2'b00: csr_mstatus <= wdata_csr;
      // 2'b01: csr_mtvec <= wdata_csr;
      //  2'b10: csr_mepc <= wdata_csr;
      //  2'b11: csr_mcause <= wdata_csr;
      //endcase
    end
  end

  always @(posedge clk, negedge rst_n) begin
    if(!rst_n) begin
      csr[0] <= 32'h1800;
    end
  end

  wire [3:0] csel = (4'b1 << csr_raddr);

  wire [31:0] c [0:3];
  genvar i;
  generate
      for (i = 0; i < 4; i = i + 1) begin : gen_csr_r
          assign c[i] = {32{csel[i]}} & csr[i];
      end
  endgenerate
  assign csr_rdata = c[0] | c[1] | c[2] | c[3];

  always @(posedge clk) begin
    if(ecall) begin
      csr[2] <= pc;
      csr[3] <= regs[15];
    end
  end

endmodule

