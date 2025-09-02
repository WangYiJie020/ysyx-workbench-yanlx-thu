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

  wire [`CPU_WIDTH-1:0] ifu_araddr;
  wire ifu_arvalid;
  wire ifu_arready;
  wire [`CPU_WIDTH-1:0] ifu_rdata;
  wire [1:0] ifu_rresp;
  wire ifu_rvalid;
  wire ifu_rready;

  ifu IFU(
    .clk(clk),
    .rst_n(rst_n),

    .araddr_o(ifu_araddr),
    .arid_o(),
    .arlen_o(),
    .arsize_o(),
    .arburst_o(),
    .arvalid_o(ifu_arvalid),
    .arready_i(ifu_arready),
    .rdata_i(ifu_rdata),
    .rresp_i(ifu_rresp),
    .rlast_i(0),
    .rid_i(0),
    .rvalid_i(ifu_rvalid),
    .rready_o(ifu_rready),

    .npc_i(npc_wbu_to_ifu),

    .ifu_valid_i(valid_wbu_to_ifu),
    .ifu_ready_o(ready_wbu_to_ifu),

    .pc_o(pc_ifu_to_idu),
    .inst_o(inst_ifu_to_idu),

    .ifu_valid_o(valid_ifu_to_idu),
    .ifu_ready_i(ready_ifu_to_idu)
  );

  assign pc_to_mem = ifu_araddr;
  assign inst_from_mem = ifu_rdata;

  wire useless1,useless2,useless3,useless4;

  wire [`CPU_WIDTH-1:0] axi_araddr;
  wire axi_arvalid;
  wire axi_arready;
  wire [`CPU_WIDTH-1:0] axi_rdata;
  wire [1:0] axi_rresp;
  wire axi_rvalid;
  wire axi_rready;
  wire [`CPU_WIDTH-1:0] axi_awaddr;
  wire axi_awvalid;
  wire axi_awready;
  wire [`CPU_WIDTH-1:0] axi_wdata;
  wire [7:0] axi_wstrb;
  wire axi_wvalid;
  wire axi_wready;
  wire [1:0] axi_bresp;
  wire axi_bvalid;
  wire axi_bready;

  wire [`CPU_WIDTH-1:0] uart_araddr;
  wire uart_arvalid;
  wire uart_arready;
  wire [`CPU_WIDTH-1:0] uart_rdata;
  wire [1:0] uart_rresp;
  wire uart_rvalid;
  wire uart_rready;
  wire [`CPU_WIDTH-1:0] uart_awaddr;
  wire uart_awvalid;
  wire uart_awready;
  wire [`CPU_WIDTH-1:0] uart_wdata;
  wire [7:0] uart_wstrb;
  wire uart_wvalid;
  wire uart_wready;
  wire [1:0] uart_bresp;
  wire uart_bvalid;
  wire uart_bready;

  wire [`CPU_WIDTH-1:0] sram_araddr;
  wire sram_arvalid;
  wire sram_arready;
  wire [`CPU_WIDTH-1:0] sram_rdata;
  wire [1:0] sram_rresp;
  wire sram_rvalid;
  wire sram_rready;
  wire [`CPU_WIDTH-1:0] sram_awaddr;
  wire sram_awvalid;
  wire sram_awready;
  wire [`CPU_WIDTH-1:0] sram_wdata;
  wire [7:0] sram_wstrb;
  wire sram_wvalid;
  wire sram_wready;
  wire [1:0] sram_bresp;
  wire sram_bvalid;
  wire sram_bready;

  wire [`CPU_WIDTH-1:0] clint_araddr;
  wire clint_arvalid;
  wire clint_arready;
  wire [`CPU_WIDTH-1:0] clint_rdata;
  wire [1:0] clint_rresp;
  wire clint_rvalid;
  wire clint_rready;
  wire [`CPU_WIDTH-1:0] clint_awaddr;
  wire clint_awvalid;
  wire clint_awready;
  wire [`CPU_WIDTH-1:0] clint_wdata;
  wire [7:0] clint_wstrb;
  wire clint_wvalid;
  wire clint_wready;
  wire [1:0] clint_bresp;
  wire clint_bvalid;
  wire clint_bready;

  axi_arbiter AXI_Arbiter(
    .clk(clk),
    .rst_n(rst_n),

    //a
    .araddr_i_a(ifu_araddr),
    .arid_i_a(0),
    .arlen_i_a(0),
    .arsize_i_a(0),
    .arburst_i_a(0),
    .arvalid_i_a(ifu_arvalid),
    .arready_o_a(ifu_arready),

    .rdata_o_a(ifu_rdata),
    .rresp_o_a(ifu_rresp),
    .rlast_o_a(),
    .rid_o_a(),
    .rvalid_o_a(ifu_rvalid),
    .rready_i_a(ifu_rready),

    .awaddr_i_a(0),
    .awid_i_a(0),
    .awlen_i_a(0),
    .awsize_i_a(0),
    .awburst_i_a(0),
    .awvalid_i_a(0),
    .awready_o_a(),

    .wdata_i_a(0),
    .wstrb_i_a(0),
    .wlast_i_a(0),
    .wvalid_i_a(0),
    .wready_o_a(),

    .bresp_o_a(),
    .bid_o_a(),
    .bvalid_o_a(),
    .bready_i_a(0),

    //b
    .araddr_i_b(lsu_araddr),
    .arid_i_b(0),
    .arlen_i_b(0),
    .arsize_i_b(0),
    .arburst_i_b(0),
    .arvalid_i_b(lsu_arvalid),
    .arready_o_b(lsu_arready),

    .rdata_o_b(lsu_rdata),
    .rresp_o_b(lsu_rresp),
    .rlast_o_b(),
    .rid_o_b(),
    .rvalid_o_b(lsu_rvalid),
    .rready_i_b(lsu_rready),

    .awaddr_i_b(lsu_awaddr),
    .awid_i_b(0),
    .awlen_i_b(0),
    .awsize_i_b(0),
    .awburst_i_b(0),
    .awvalid_i_b(lsu_awvalid),
    .awready_o_b(lsu_awready),

    .wdata_i_b(lsu_wdata),
    .wstrb_i_b(lsu_wstrb),
    .wlast_i_b(0),
    .wvalid_i_b(lsu_wvalid),
    .wready_o_b(lsu_wready),

    .bresp_o_b(lsu_bresp),
    .bid_o_b(),
    .bvalid_o_b(lsu_bvalid),
    .bready_i_b(lsu_bready),

    //to xbar
    .araddr_o(axi_araddr),
    .arid_o(),
    .arlen_o(),
    .arsize_o(),
    .arburst_o(),
    .arvalid_o(axi_arvalid),
    .arready_i(axi_arready),

    .rdata_i(axi_rdata),
    .rresp_i(axi_rresp),
    .rlast_i(0),
    .rid_i(0),
    .rvalid_i(axi_rvalid),
    .rready_o(axi_rready),

    .awaddr_o(axi_awaddr),
    .awid_o(),
    .awlen_o(),
    .awsize_o(),
    .awburst_o(),
    .awvalid_o(axi_awvalid),
    .awready_i(axi_awready),

    .wdata_o(axi_wdata),
    .wstrb_o(axi_wstrb),
    .wlast_o(),
    .wvalid_o(axi_wvalid),
    .wready_i(axi_wready),

    .bresp_i(axi_bresp),
    .bid_i(0),
    .bvalid_i(axi_bvalid),
    .bready_o(axi_bready)
  );

  xbar Xbar(
    .clk(clk),
    .rst_n(rst_n),

    //in
    .axi_araddr_i(axi_araddr),
    .axi_arid_i(0),
    .axi_arlen_i(0),
    .axi_arsize_i(0),
    .axi_arburst_i(0),
    .axi_arvalid_i(axi_arvalid),
    .axi_arready_o(axi_arready),

    .axi_rdata_o(axi_rdata),
    .axi_rresp_o(axi_rresp),
    .axi_rlast_o(),
    .axi_rid_o(),
    .axi_rvalid_o(axi_rvalid),
    .axi_rready_i(axi_rready),

    .axi_awaddr_i(axi_awaddr),
    .axi_awid_i(0),
    .axi_awlen_i(0),
    .axi_awsize_i(0),
    .axi_awburst_i(0),
    .axi_awvalid_i(axi_awvalid),
    .axi_awready_o(axi_awready),
    
    .axi_wdata_i(axi_wdata),
    .axi_wstrb_i(axi_wstrb),
    .axi_wlast_i(0),
    .axi_wvalid_i(axi_wvalid),
    .axi_wready_o(axi_wready),

    .axi_bresp_o(axi_bresp),
    .axi_bid_o(),
    .axi_bvalid_o(axi_bvalid),
    .axi_bready_i(axi_bready),

    //to mem
    .sram_araddr_o(sram_araddr),
    .sram_arid_o(),
    .sram_arlen_o(),
    .sram_arsize_o(),
    .sram_arburst_o(),
    .sram_arvalid_o(sram_arvalid),
    .sram_arready_i(sram_arready),

    .sram_rdata_i(sram_rdata),
    .sram_rresp_i(sram_rresp),
    .sram_rlast_i(0),
    .sram_rid_i(0),
    .sram_rvalid_i(sram_rvalid),
    .sram_rready_o(sram_rready),

    .sram_awaddr_o(sram_awaddr),
    .sram_awid_o(),
    .sram_awlen_o(),
    .sram_awsize_o(),
    .sram_awburst_o(),
    .sram_awvalid_o(sram_awvalid),
    .sram_awready_i(sram_awready),

    .sram_wdata_o(sram_wdata),
    .sram_wstrb_o(sram_wstrb),
    .sram_wlast_o(),
    .sram_wvalid_o(sram_wvalid),
    .sram_wready_i(sram_wready),

    .sram_bresp_i(sram_bresp),
    .sram_bid_i(0),
    .sram_bvalid_i(sram_bvalid),
    .sram_bready_o(sram_bready),

    //to uart
    .uart_araddr_o(uart_araddr),
    .uart_arid_o(),
    .uart_arlen_o(),
    .uart_arsize_o(),
    .uart_arburst_o(),
    .uart_arvalid_o(uart_arvalid),
    .uart_arready_i(uart_arready),

    .uart_rdata_i(uart_rdata),
    .uart_rresp_i(uart_rresp),
    .uart_rlast_i(0),
    .uart_rid_i(0),
    .uart_rvalid_i(uart_rvalid),
    .uart_rready_o(uart_rready),

    .uart_awaddr_o(uart_awaddr),
    .uart_awid_o(),
    .uart_awlen_o(),
    .uart_awsize_o(),
    .uart_awburst_o(),
    .uart_awvalid_o(uart_awvalid),
    .uart_awready_i(uart_awready),

    .uart_wdata_o(uart_wdata),
    .uart_wstrb_o(uart_wstrb),
    .uart_wlast_o(),
    .uart_wvalid_o(uart_wvalid),
    .uart_wready_i(uart_wready),

    .uart_bresp_i(uart_bresp),
    .uart_bid_i(0),
    .uart_bvalid_i(uart_bvalid),
    .uart_bready_o(uart_bready),

    //to clint
    .clint_araddr_o(clint_araddr),
    .clint_arid_o(),
    .clint_arlen_o(),
    .clint_arsize_o(),
    .clint_arburst_o(),
    .clint_arvalid_o(clint_arvalid),
    .clint_arready_i(clint_arready),

    .clint_rdata_i(clint_rdata),
    .clint_rresp_i(clint_rresp),
    .clint_rlast_i(0),
    .clint_rid_i(0),
    .clint_rvalid_i(clint_rvalid),
    .clint_rready_o(clint_rready),

    .clint_awaddr_o(clint_awaddr),
    .clint_awid_o(),
    .clint_awlen_o(),
    .clint_awsize_o(),
    .clint_awburst_o(),
    .clint_awvalid_o(clint_awvalid),
    .clint_awready_i(clint_awready),

    .clint_wdata_o(clint_wdata),
    .clint_wstrb_o(clint_wstrb),
    .clint_wlast_o(),
    .clint_wvalid_o(clint_wvalid),
    .clint_wready_i(clint_wready),

    .clint_bresp_i(clint_bresp),
    .clint_bid_i(0),
    .clint_bvalid_i(clint_bvalid),
    .clint_bready_o(clint_bready)
  );

  sram Mem(
    .clk(clk),
    .rst_n(rst_n),

    .araddr_i(sram_araddr),
    .arid_i(),
    .arlen_i(),
    .arsize_i(),
    .arburst_i(),
    .arvalid_i(sram_arvalid),
    .arready_o(sram_arready),

    .rdata_o(sram_rdata),
    .rresp_o(sram_rresp),
    .rlast_o(),
    .rid_o(),
    .rvalid_o(sram_rvalid),
    .rready_i(sram_rready),

    .awaddr_i(sram_awaddr),
    .awid_i(0),
    .awlen_i(0),
    .awsize_i(0),
    .awburst_i(0),
    .awvalid_i(sram_awvalid),
    .awready_o(sram_awready),

    .wdata_i(sram_wdata),
    .wstrb_i(sram_wstrb),
    .wlast_i(0),
    .wvalid_i(sram_wvalid),
    .wready_o(sram_wready),

    .bresp_o(sram_bresp),
    .bid_o(),
    .bvalid_o(sram_bvalid),
    .bready_i(sram_bready)
  );

  uart UART(
    .clk(clk),
    .rst_n(rst_n),

    .araddr_i(uart_araddr),
    .arid_i(0),
    .arlen_i(0),
    .arsize_i(0),
    .arburst_i(0),
    .arvalid_i(uart_arvalid),
    .arready_o(uart_arready),

    .rdata_o(uart_rdata),
    .rresp_o(uart_rresp),
    .rlast_o(),
    .rid_o(),
    .rvalid_o(uart_rvalid),
    .rready_i(uart_rready),

    .awaddr_i(uart_awaddr),
    .awid_i(0),
    .awlen_i(0),
    .awsize_i(0),
    .awburst_i(0),
    .awvalid_i(uart_awvalid),
    .awready_o(uart_awready),

    .wdata_i(uart_wdata),
    .wstrb_i(uart_wstrb),
    .wlast_i(0),
    .wvalid_i(uart_wvalid),
    .wready_o(uart_wready),

    .bresp_o(uart_bresp),
    .bid_o(),
    .bvalid_o(uart_bvalid),
    .bready_i(uart_bready)
  );

  clint CLINT(
    .clk(clk),
    .rst_n(rst_n),

    .araddr_i(clint_araddr),
    .arid_i(0),
    .arlen_i(0),
    .arsize_i(0),
    .arburst_i(0),
    .arvalid_i(clint_arvalid),
    .arready_o(clint_arready),

    .rdata_o(clint_rdata),
    .rresp_o(clint_rresp),
    .rlast_o(),
    .rid_o(),
    .rvalid_o(clint_rvalid),
    .rready_i(clint_rready),

    .awaddr_i(clint_awaddr),
    .awid_i(0),
    .awlen_i(0),
    .awsize_i(0),
    .awburst_i(0),
    .awvalid_i(clint_awvalid),
    .awready_o(clint_awready),

    .wdata_i(clint_wdata),
    .wstrb_i(clint_wstrb),
    .wlast_i(0),
    .wvalid_i(clint_wvalid),
    .wready_o(clint_wready),

    .bresp_o(clint_bresp),
    .bid_o(),
    .bvalid_o(clint_bvalid),
    .bready_i(clint_bready)
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
  reg [`CPU_WIDTH-1:0] reg_file [31:0];
  
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

  wire [`CPU_WIDTH-1:0] lsu_araddr;
  wire lsu_arvalid;
  wire lsu_arready;
  wire [`CPU_WIDTH-1:0] lsu_rdata;
  wire [1:0] lsu_rresp;
  wire lsu_rvalid;
  wire lsu_rready;
  wire [`CPU_WIDTH-1:0] lsu_awaddr;
  wire lsu_awvalid;
  wire lsu_awready;
  wire [`CPU_WIDTH-1:0] lsu_wdata;
  wire [7:0] lsu_wstrb;
  wire lsu_wvalid;
  wire lsu_wready;
  wire [1:0] lsu_bresp;
  wire lsu_bvalid;
  wire lsu_bready;

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
    .lsu_ready_i(ready_lsu_to_wbu),

    //to mem
    .araddr_o(lsu_araddr),
    .arid_o(),
    .arlen_o(),
    .arsize_o(),
    .arburst_o(),
    .arvalid_o(lsu_arvalid),
    .arready_i(lsu_arready),

    .rdata_i(lsu_rdata),
    .rresp_i(lsu_rresp),
    .rlast_i(),
    .rid_i(),
    .rvalid_i(lsu_rvalid),
    .rready_o(lsu_rready),

    .awaddr_o(lsu_awaddr),
    .awid_o(),
    .awlen_o()
    .awsize_o(),
    .awburst_o(),
    .awvalid_o(lsu_awvalid),
    .awready_i(lsu_awready),

    .wdata_o(lsu_wdata),
    .wstrb_o(lsu_wstrb),
    .wlast_o(),
    .wvalid_o(lsu_wvalid),
    .wready_i(lsu_wready),
    
    .bresp_i(lsu_bresp),
    .bid_i(0),
    .bvalid_i(lsu_bvalid),
    .bready_o(lsu_bready)
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
    
    if(inst_from_mem == 32'h00100073) begin
      ebreak();
      $finish;
    end
  end

  always@(*) begin
    reg_return_value(reg_file[0],reg_file[1],reg_file[2],reg_file[3],reg_file[4],reg_file[5],reg_file[6],
      reg_file[7],reg_file[8],reg_file[9],reg_file[10],reg_file[11],reg_file[12],reg_file[13],reg_file[14],
      reg_file[15],reg_file[16],reg_file[17],reg_file[18],reg_file[19],reg_file[20],reg_file[21],reg_file[22],
      reg_file[23],reg_file[24],reg_file[25],reg_file[26],reg_file[27],reg_file[28],reg_file[29],reg_file[30],
      reg_file[31],pc_to_mem,csr_reg[0],csr_reg[1],csr_reg[2],csr_reg[3]);
  end

endmodule

