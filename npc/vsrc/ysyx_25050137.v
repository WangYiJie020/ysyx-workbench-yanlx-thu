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

module ysyx_25050137(
    input           clock,
    input           reset,
    input           io_interrupt,
    input           io_master_awready,
    output          io_master_awvalid,  
    output  [31:0]  io_master_awaddr,     
    output  [3:0]   io_master_awid,         
    output  [7:0]   io_master_awlen,       
    output  [2:0]   io_master_awsize,     
    output  [1:0]   io_master_awburst,   
    input           io_master_wready,     
    output          io_master_wvalid,     
    output  [31:0]  io_master_wdata,       
    output  [3:0]   io_master_wstrb,       
    output          io_master_wlast,       
    output          io_master_bready,   
    input           io_master_bvalid,    
    input   [1:0]   io_master_bresp,      
    input   [3:0]   io_master_bid,           
    input           io_master_arready,  
    output          io_master_arvalid,  
    output  [31:0]  io_master_araddr,   
    output  [3:0]   io_master_arid,         
    output  [7:0]   io_master_arlen,       
    output  [2:0]   io_master_arsize,   
    output  [1:0]   io_master_arburst,  
    output          io_master_rready,   
    input           io_master_rvalid,     
    input   [1:0]   io_master_rresp,    
    input   [31:0]  io_master_rdata,       
    input           io_master_rlast,       
    input   [3:0]   io_master_rid,      
    
    output          io_slave_awready, 
    input           io_slave_awvalid,  
    input   [31:0]  io_slave_awaddr,    
    input   [3:0]   io_slave_awid,
    input   [7:0]   io_slave_awlen,
    input   [2:0]   io_slave_awsize,
    input   [1:0]   io_slave_awburst,
    output          io_slave_wready,
    input           io_slave_wvalid,
    input   [31:0]  io_slave_wdata,
    input   [3:0]   io_slave_wstrb,
    input           io_slave_wlast,
    input           io_slave_bready,
    output          io_slave_bvalid,  
    output  [1:0]   io_slave_bresp,  
    output  [3:0]   io_slave_bid,
    output          io_slave_arready, 
    input           io_slave_arvalid, 
    input   [31:0]  io_slave_araddr, 
    input   [3:0]   io_slave_arid,
    input   [7:0]   io_slave_arlen,
    input   [2:0]   io_slave_arsize,  
    input   [1:0]   io_slave_arburst, 
    input           io_slave_rready,  
    output          io_slave_rvalid,
    output  [1:0]   io_slave_rresp,   
    output  [31:0]  io_slave_rdata,
    output          io_slave_rlast,
    output  [3:0]   io_slave_rid

);

    wire clk,rst_n,reset_ifu;
    assign clk = clock;
    assign rst_n = !reset;

    wire [`PC_WIDTH-1:0] pc_to_mem;
    wire [`INST_WIDTH-1:0] inst_from_mem;
    //wbu to ifu
    wire [`PC_WIDTH-1:0] npc;
    wire valid_wbu_to_ifu;
    wire ready_wbu_to_ifu;
    //ifu to idu
    wire [`PC_WIDTH-1:0] pc_ifu_to_idu;
    wire [`INST_WIDTH-1:0] inst_ifu_to_idu;
    wire valid_ifu_to_idu;
    wire ready_ifu_to_idu;

    wire [`CPU_WIDTH-1:0] ifu_araddr;
    wire [3:0] ifu_arid;
    wire [7:0] ifu_arlen;
    wire [2:0] ifu_arsize;
    wire [1:0] ifu_arburst;
    wire ifu_arvalid;
    wire ifu_arready;
    wire [`CPU_WIDTH-1:0] ifu_rdata;
    wire [1:0] ifu_rresp;
    wire ifu_rlast;
    wire [3:0] ifu_rid;
    wire ifu_rvalid;
    wire ifu_rready;

    wire bus_busy;

    ifu IFU(
        .clk(clk),
        .rst_n(rst_n),
        .fencei(fencei),

        .araddr_o(ifu_araddr),
        .arid_o(ifu_arid),
        .arlen_o(ifu_arlen),
        .arsize_o(ifu_arsize),
        .arburst_o(ifu_arburst),
        .arvalid_o(ifu_arvalid),
        .arready_i(ifu_arready),
        .rdata_i(ifu_rdata),
        .rresp_i(ifu_rresp),
        .rlast_i(ifu_rlast),
        .rid_i(ifu_rid),
        .rvalid_i(ifu_rvalid),
        .rready_o(ifu_rready),

        .npc_i(npc),
        .npc_valid(npc_valid),
        .reset_o(reset_ifu),

        .pc_o(pc_ifu_to_idu),
        .inst_o(inst_ifu_to_idu),

        .ifu_valid_o(valid_ifu_to_idu),
        .ifu_ready_i(ready_ifu_to_idu),

        .bus_busy(bus_busy)
    );

    assign pc_to_mem = pc_ifu_to_idu;
    assign inst_from_mem = inst_ifu_to_idu;

    wire useless1,useless2,useless3,useless4;
    wire fencei;

    wire [`CPU_WIDTH-1:0] cache_araddr;
    wire [3:0] cache_arid;
    wire [7:0] cache_arlen;
    wire [2:0] cache_arsize;
    wire [1:0] cache_arburst;
    wire cache_arvalid;
    wire cache_arready;
    wire [`CPU_WIDTH-1:0] cache_rdata;
    wire [1:0] cache_rresp;
    wire cache_rlast;
    wire [3:0] cache_rid;
    wire cache_rvalid;
    wire cache_rready;
    
/*
    icache ICACHE (
        .clk(clk),
        .rst_n(rst_n),

        //CPU
        .cpu_araddr_i(ifu_araddr),
        .cpu_arid_i(ifu_arid),
        .cpu_arlen_i(ifu_arlen),
        .cpu_arsize_i(ifu_arsize),
        .cpu_arburst_i(ifu_arburst),
        .cpu_arvalid_i(ifu_arvalid),
        .cpu_arready_o(ifu_arready),

        .cpu_rdata_o(ifu_rdata),
        .cpu_rresp_o(ifu_rresp),
        .cpu_rlast_o(ifu_rlast),
        .cpu_rid_o(ifu_rid),
        .cpu_rvalid_o(ifu_rvalid),
        .cpu_rready_i(ifu_rready),
        //mem
        .mem_araddr_o(cache_araddr),
        .mem_arid_o(cache_arid),
        .mem_arlen_o(cache_arlen),
        .mem_arsize_o(cache_arsize),
        .mem_arburst_o(cache_arburst),
        .mem_arvalid_o(cache_arvalid),
        .mem_arready_i(cache_arready),
        .mem_rdata_i(cache_rdata),
        .mem_rresp_i(cache_rresp),
        .mem_rlast_i(cache_rlast),
        .mem_rid_i(cache_rid),
        .mem_rvalid_i(cache_rvalid),
        .mem_rready_o(cache_rready),

        .fencei(fencei)
    );
*/
    wire [`CPU_WIDTH-1:0] lsu_araddr;
    wire [3:0] lsu_arid;
    wire [7:0] lsu_arlen;
    wire [2:0] lsu_arsize;
    wire [1:0] lsu_arburst;
    wire lsu_arvalid;
    wire lsu_arready;
    wire [`CPU_WIDTH-1:0] lsu_rdata;
    wire [1:0] lsu_rresp;
    wire lsu_rlast;
    wire [3:0] lsu_rid;
    wire lsu_rvalid;
    wire lsu_rready;
    wire [`CPU_WIDTH-1:0] lsu_awaddr;
    wire [3:0] lsu_awid;
    wire [7:0] lsu_awlen;
    wire [2:0] lsu_awsize;
    wire [1:0] lsu_awburst;
    wire lsu_awvalid;
    wire lsu_awready;
    wire [`CPU_WIDTH-1:0] lsu_wdata;
    wire [3:0] lsu_wstrb;
    wire lsu_wlast;
    wire lsu_wvalid;
    wire lsu_wready;
    wire [1:0] lsu_bresp;
    wire [3:0] lsu_bid;
    wire lsu_bvalid;
    wire lsu_bready;

    wire [`CPU_WIDTH-1:0] axi_araddr;
    wire [3:0] axi_arid;
    wire [7:0] axi_arlen;
    wire [2:0] axi_arsize;
    wire [1:0] axi_arburst;
    wire axi_arvalid;
    wire axi_arready;
    wire [`CPU_WIDTH-1:0] axi_rdata;
    wire [1:0] axi_rresp;
    wire axi_rlast;
    wire [3:0] axi_rid;
    wire axi_rvalid;
    wire axi_rready;
    wire [`CPU_WIDTH-1:0] axi_awaddr;
    wire [3:0] axi_awid;
    wire [7:0] axi_awlen;
    wire [2:0] axi_awsize;
    wire [1:0] axi_awburst;
    wire axi_awvalid;
    wire axi_awready;
    wire [`CPU_WIDTH-1:0] axi_wdata;
    wire [3:0] axi_wstrb;
    wire axi_wlast;
    wire axi_wvalid;
    wire axi_wready;
    wire [1:0] axi_bresp;
    wire [3:0] axi_bid;
    wire axi_bvalid;
    wire axi_bready;

    wire [`CPU_WIDTH-1:0] clint_araddr;
    wire [3:0] clint_arid;
    wire [7:0] clint_arlen;
    wire [2:0] clint_arsize;
    wire [1:0] clint_arburst;
    wire clint_arvalid;
    wire clint_arready;
    wire [`CPU_WIDTH-1:0] clint_rdata;
    wire [1:0] clint_rresp;
    wire clint_rlast;
    wire [3:0] clint_rid;
    wire clint_rvalid;
    wire clint_rready;
    wire [`CPU_WIDTH-1:0] clint_awaddr;
    wire [3:0] clint_awid;
    wire [7:0] clint_awlen;
    wire [2:0] clint_awsize;
    wire [1:0] clint_awburst;
    wire clint_awvalid;
    wire clint_awready;
    wire [`CPU_WIDTH-1:0] clint_wdata;
    wire [3:0] clint_wstrb;
    wire clint_wlast;
    wire clint_wvalid;
    wire clint_wready;
    wire [1:0] clint_bresp;
    wire [3:0] clint_bid;
    wire clint_bvalid;
    wire clint_bready;

    axi_arbiter AXI_Arbiter(
        .clk(clk),
        .rst_n(rst_n),
/*
 //a
        .araddr_i_a(cache_araddr),
        .arid_i_a(cache_arid),
        .arlen_i_a(cache_arlen),
        .arsize_i_a(cache_arsize),
        .arburst_i_a(cache_arburst),
        .arvalid_i_a(cache_arvalid),
        .arready_o_a(cache_arready),

        .rdata_o_a(cache_rdata),
        .rresp_o_a(cache_rresp),
        .rlast_o_a(cache_rlast),
        .rid_o_a(cache_rid),
        .rvalid_o_a(cache_rvalid),
        .rready_i_a(cache_rready),
*/
 //a
        .araddr_i_a(ifu_araddr),
        .arid_i_a(ifu_arid),
        .arlen_i_a(ifu_arlen),
        .arsize_i_a(ifu_arsize),
        .arburst_i_a(ifu_arburst),
        .arvalid_i_a(ifu_arvalid),
        .arready_o_a(ifu_arready),

        .rdata_o_a(ifu_rdata),
        .rresp_o_a(ifu_rresp),
        .rlast_o_a(ifu_rlast),
        .rid_o_a(ifu_rid),
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
        .arid_i_b(lsu_arid),
        .arlen_i_b(lsu_arlen),
        .arsize_i_b(lsu_arsize),
        .arburst_i_b(lsu_arburst),
        .arvalid_i_b(lsu_arvalid),
        .arready_o_b(lsu_arready),

        .rdata_o_b(lsu_rdata),
        .rresp_o_b(lsu_rresp),
        .rlast_o_b(lsu_rlast),
        .rid_o_b(lsu_rid),
        .rvalid_o_b(lsu_rvalid),
        .rready_i_b(lsu_rready),

        .awaddr_i_b(lsu_awaddr),
        .awid_i_b(lsu_awid),
        .awlen_i_b(lsu_awlen),
        .awsize_i_b(lsu_awsize),
        .awburst_i_b(lsu_awburst),
        .awvalid_i_b(lsu_awvalid),
        .awready_o_b(lsu_awready),

        .wdata_i_b(lsu_wdata),
        .wstrb_i_b(lsu_wstrb),
        .wlast_i_b(lsu_wlast),
        .wvalid_i_b(lsu_wvalid),
        .wready_o_b(lsu_wready),

        .bresp_o_b(lsu_bresp),
        .bid_o_b(lsu_bid),
        .bvalid_o_b(lsu_bvalid),
        .bready_i_b(lsu_bready),

        //to xbar
        .araddr_o(axi_araddr),
        .arid_o(axi_arid),
        .arlen_o(axi_arlen),
        .arsize_o(axi_arsize),
        .arburst_o(axi_arburst),
        .arvalid_o(axi_arvalid),
        .arready_i(axi_arready),

        .rdata_i(axi_rdata),
        .rresp_i(axi_rresp),
        .rlast_i(axi_rlast),
        .rid_i(axi_rid),
        .rvalid_i(axi_rvalid),
        .rready_o(axi_rready),

        .awaddr_o(axi_awaddr),
        .awid_o(axi_awid),
        .awlen_o(axi_awlen),
        .awsize_o(axi_awsize),
        .awburst_o(axi_awburst),
        .awvalid_o(axi_awvalid),
        .awready_i(axi_awready),

        .wdata_o(axi_wdata),
        .wstrb_o(axi_wstrb),
        .wlast_o(axi_wlast),
        .wvalid_o(axi_wvalid),
        .wready_i(axi_wready),

        .bresp_i(axi_bresp),
        .bid_i(axi_bid),
        .bvalid_i(axi_bvalid),
        .bready_o(axi_bready),

        .bus_busy(bus_busy)
    );

    xbar Xbar(
        .clk(clk),
        .rst_n(rst_n),

        //in
        .axi_araddr_i(axi_araddr),
        .axi_arid_i(axi_arid),
        .axi_arlen_i(axi_arlen),
        .axi_arsize_i(axi_arsize),
        .axi_arburst_i(axi_arburst),
        .axi_arvalid_i(axi_arvalid),
        .axi_arready_o(axi_arready),

        .axi_rdata_o(axi_rdata),
        .axi_rresp_o(axi_rresp),
        .axi_rlast_o(axi_rlast),
        .axi_rid_o(axi_rid),
        .axi_rvalid_o(axi_rvalid),
        .axi_rready_i(axi_rready),

        .axi_awaddr_i(axi_awaddr),
        .axi_awid_i(axi_awid),
        .axi_awlen_i(axi_awlen),
        .axi_awsize_i(axi_awsize),
        .axi_awburst_i(axi_awburst),
        .axi_awvalid_i(axi_awvalid),
        .axi_awready_o(axi_awready),
        
        .axi_wdata_i(axi_wdata),
        .axi_wstrb_i(axi_wstrb),
        .axi_wlast_i(axi_wlast),
        .axi_wvalid_i(axi_wvalid),
        .axi_wready_o(axi_wready),

        .axi_bresp_o(axi_bresp),
        .axi_bid_o(axi_bid),
        .axi_bvalid_o(axi_bvalid),
        .axi_bready_i(axi_bready),

        //to mem
        .sram_araddr_o(io_master_araddr),
        .sram_arid_o(io_master_arid),
        .sram_arlen_o(io_master_arlen),
        .sram_arsize_o(io_master_arsize),
        .sram_arburst_o(io_master_arburst),
        .sram_arvalid_o(io_master_arvalid),
        .sram_arready_i(io_master_arready),

        .sram_rdata_i(io_master_rdata),
        .sram_rresp_i(io_master_rresp),
        .sram_rlast_i(io_master_rlast),
        .sram_rid_i(io_master_rid),
        .sram_rvalid_i(io_master_rvalid),
        .sram_rready_o(io_master_rready),

        .sram_awaddr_o(io_master_awaddr),
        .sram_awid_o(io_master_awid),
        .sram_awlen_o(io_master_awlen),
        .sram_awsize_o(io_master_awsize),
        .sram_awburst_o(io_master_awburst),
        .sram_awvalid_o(io_master_awvalid),
        .sram_awready_i(io_master_awready),

        .sram_wdata_o(io_master_wdata),
        .sram_wstrb_o(io_master_wstrb),
        .sram_wlast_o(io_master_wlast),
        .sram_wvalid_o(io_master_wvalid),
        .sram_wready_i(io_master_wready),

        .sram_bresp_i(io_master_bresp),
        .sram_bid_i(io_master_bid),
        .sram_bvalid_i(io_master_bvalid),
        .sram_bready_o(io_master_bready),

        //to clint
        .clint_araddr_o(clint_araddr),
        .clint_arid_o(clint_arid),
        .clint_arlen_o(clint_arlen),
        .clint_arsize_o(clint_arsize),
        .clint_arburst_o(clint_arburst),
        .clint_arvalid_o(clint_arvalid),
        .clint_arready_i(clint_arready),

        .clint_rdata_i(clint_rdata),
        .clint_rresp_i(clint_rresp),
        .clint_rlast_i(clint_rlast),
        .clint_rid_i(clint_rid),
        .clint_rvalid_i(clint_rvalid),
        .clint_rready_o(clint_rready),

        .clint_awaddr_o(clint_awaddr),
        .clint_awid_o(clint_awid),
        .clint_awlen_o(clint_awlen),
        .clint_awsize_o(clint_awsize),
        .clint_awburst_o(clint_awburst),
        .clint_awvalid_o(clint_awvalid),
        .clint_awready_i(clint_awready),

        .clint_wdata_o(clint_wdata),
        .clint_wstrb_o(clint_wstrb),
        .clint_wlast_o(clint_wlast),
        .clint_wvalid_o(clint_wvalid),
        .clint_wready_i(clint_wready),

        .clint_bresp_i(clint_bresp),
        .clint_bid_i(clint_bid),
        .clint_bvalid_i(clint_bvalid),
        .clint_bready_o(clint_bready)
    );


    clint CLINT(
        .clk(clk),
        .rst_n(rst_n),

        .araddr_i(clint_araddr),
        .arid_i(clint_arid),
        .arlen_i(clint_arlen),
        .arsize_i(clint_arsize),
        .arburst_i(clint_arburst),
        .arvalid_i(clint_arvalid),
        .arready_o(clint_arready),

        .rdata_o(clint_rdata),
        .rresp_o(clint_rresp),
        .rlast_o(clint_rlast),
        .rid_o(clint_rid),
        .rvalid_o(clint_rvalid),
        .rready_i(clint_rready),

        .awaddr_i(clint_awaddr),
        .awid_i(clint_awid),
        .awlen_i(clint_awlen),
        .awsize_i(clint_awsize),
        .awburst_i(clint_awburst),
        .awvalid_i(clint_awvalid),
        .awready_o(clint_awready),

        .wdata_i(clint_wdata),
        .wstrb_i(clint_wstrb),
        .wlast_i(clint_wlast),
        .wvalid_i(clint_wvalid),
        .wready_o(clint_wready),

        .bresp_o(clint_bresp),
        .bid_o(clint_bid),
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
    wire [3:0] wmask_idu_to_exu;
    wire [2:0] rmask_idu_to_exu;
    wire wb_src_idu_to_exu;
    wire csr_write_idu_to_exu;
    wire csr_wdata_src_idu_to_exu;
    wire reg_write_idu_to_exu;
    wire [`REG_ADDR-1:0] waddr_idu_to_exu;
    wire ecall_idu_to_exu;
    wire [1:0] waddr_csr_idu_to_exu;

    wire valid_idu_to_exu;
    wire ready_idu_to_exu;

    wire [2:0] raddr_csr;
    wire [`CPU_WIDTH-1:0] rdata_csr;

    idu IDU(
        .clk(clk),
        .rst_n(rst_n),
        .reset_ifu(reset_ifu),
        //regfiles
        .raddr1(raddr1),
        .raddr2(raddr2),
        .rdata1(rdata1),
        .rdata2(rdata2),
        .raddr_csr(raddr_csr),
        .rdata_csr(rdata_csr),

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
        .ecall_o(ecall_idu_to_exu),
        .waddr_csr_o(waddr_csr_idu_to_exu),

        .idu_valid_o(valid_idu_to_exu),
        .idu_ready_i(ready_idu_to_exu),

        

        .fencei(fencei),
        //.exu_rd(reg_write_exu_to_lsu && rd_exu_valid ? waddr_exu_to_lsu : 0),
        //.lsu_rd(reg_write_lsu_to_wbu && rd_lsu_valid ? waddr_lsu_to_wbu : 0),
        //.wbu_rd(reg_write && rd_wbu_valid ? waddr : 0)

        // ======== Forwarding接口 (新增/修改) ========
    // EXU级前递
    .exu_rd(waddr_exu_to_lsu),
    .exu_rd_valid(rd_exu_valid),
    .exu_reg_write(reg_write_exu_to_lsu),    // 新增: EXU级是否写寄存器
    .exu_MemRead(MemRead_exu_to_lsu),      // 新增: EXU级是否为Load指令 (load-use需要stall)
    .exu_fwd_data(alu_result_exu_to_lsu),     // 新增: EXU级前递数据 (ALU结果)

    // LSU级前递
    .lsu_rd(waddr_lsu_to_wbu),
    .lsu_rd_valid(rd_lsu_valid),
    .lsu_reg_write(reg_write_lsu_to_wbu),    // 新增: LSU级是否写寄存器
    .lsu_fwd_data(alu_result_lsu_to_wbu),     // 新增: LSU级前递数据 (ALU结果或Mem读取结果)

    // WBU级前递
    .wbu_rd(waddr),
    .wbu_rd_valid(rd_wbu_valid),
    .wbu_reg_write(reg_write),    // 新增: WBU级是否写寄存器
    .wbu_fwd_data(wdata)      // 新增: WBU级前递数据 (最终写回数据)
    );

    wire [`CPU_WIDTH-1:0] wdata;
    wire [`REG_ADDR-1:0] waddr;
    wire reg_write;
    reg [`CPU_WIDTH-1:0] reg_file [31:0];

    //write csr
    wire csr_write;
    wire [1:0] waddr_csr;
    wire [`CPU_WIDTH-1:0] csr_wdata;
    wire ecall;
    wire [`CPU_WIDTH-1:0] csr_reg [3:0]; //difftest
    
    regfile Rgefile (
        .clk(clk),
        .rst_n(rst_n),
        .wdata(wdata),
        .waddr(waddr), //rd
        .wen(reg_write),
        .raddr1(raddr1), //rs1
        .rdata1(rdata1),
        .raddr2(raddr2), //rs2
        .rdata2(rdata2),
        .value1(a5),
        .reg_file(reg_file),  //for difftest

        .raddr_csr(raddr_csr),
        .rdata_csr(rdata_csr),
        .waddr_csr(waddr_csr),
        .wdata_csr(csr_wdata),
        .wen_csr(csr_write),
        .ecall(ecall),
        .pc(pc_wbu_out),

        .csr_reg(csr_reg) //for difftest
        
    );

    wire [`CPU_WIDTH-1:0] alu_result_exu_to_lsu;
    wire [`CPU_WIDTH-1:0] rs1_exu_to_lsu;
    wire [`CPU_WIDTH-1:0] rs2_exu_to_lsu;
    wire [`CPU_WIDTH-1:0] csr_rdata_l_rs1_exu_to_lsu;
    wire [`PC_WIDTH-1:0] npc_exu_to_lsu;
    wire MemRead_exu_to_lsu;
    wire MemWrite_exu_to_lsu;
    wire [3:0] wmask_exu_to_lsu;
    wire [2:0] rmask_exu_to_lsu;
    wire wb_src_exu_to_lsu;
    wire csr_write_exu_to_lsu;
    wire csr_wdta_src_exu_to_lsu;
    wire reg_write_exu_to_lsu;
    wire [`REG_ADDR-1:0] waddr_exu_to_lsu;
    wire ecall_exu_to_lsu;
    wire [1:0] waddr_csr_exu_to_lsu;

    wire valid_exu_to_lsu;
    wire ready_exu_to_lsu;

    wire npc_valid;
    wire rd_exu_valid;

    wire [`PC_WIDTH-1:0] pc_exu_to_lsu;

    exu EXU(
        .clk(clk),
        .rst_n(rst_n),
        .reset_ifu(reset_ifu),
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
        .ecall_i(ecall_idu_to_exu),
        .waddr_csr_i(waddr_csr_idu_to_exu),

        .exu_valid_i(valid_idu_to_exu),
        .exu_ready_o(ready_idu_to_exu),

        //exu to lsu
        .alu_result_o(alu_result_exu_to_lsu),
        .rs1_o(rs1_exu_to_lsu),
        .rs2_o(rs2_exu_to_lsu),
        .csr_rdata_l_rs1_o(csr_rdata_l_rs1_exu_to_lsu),
        .npc_o(npc),
        .MemRead_o(MemRead_exu_to_lsu),
        .MemWrite_o(MemWrite_exu_to_lsu),
        .wmask_o(wmask_exu_to_lsu),
        .rmask_o(rmask_exu_to_lsu),
        .wb_src_o(wb_src_exu_to_lsu),
        .csr_write_o(csr_write_exu_to_lsu),
        .csr_wdata_src_o(csr_wdta_src_exu_to_lsu),
        .reg_write_o(reg_write_exu_to_lsu),
        .waddr_o(waddr_exu_to_lsu),
        .ecall_o(ecall_exu_to_lsu),
        .waddr_csr_o(waddr_csr_exu_to_lsu),

        .exu_valid_o(valid_exu_to_lsu),
        .exu_ready_i(ready_exu_to_lsu),
        .npc_valid(npc_valid),
        .rd_exu_valid(rd_exu_valid),
        
        .pc_o(pc_exu_to_lsu)
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
    wire ecall_lsu_to_wbu;
    wire [1:0] waddr_csr_lsu_to_wbu;

    wire valid_lsu_to_wbu;
    wire ready_lsu_to_wbu;

    wire rd_lsu_valid;

    wire [`PC_WIDTH-1:0] pc_lsu_to_wbu;

    lsu LSU(
        .clk(clk),
        .rst_n(rst_n),

        //exu to lsu
        .alu_result_i(alu_result_exu_to_lsu),
        .rs1_i(rs1_exu_to_lsu),
        .rs2_i(rs2_exu_to_lsu),
        .csr_rdata_l_rs1_i(csr_rdata_l_rs1_exu_to_lsu),
        .MemRead_i(MemRead_exu_to_lsu),
        .MemWrite_i(MemWrite_exu_to_lsu),
        .wmask_i(wmask_exu_to_lsu),
        .rmask_i(rmask_exu_to_lsu),
        .wb_src_i(wb_src_exu_to_lsu),
        .csr_write_i(csr_write_exu_to_lsu),
        .csr_wdata_src_i(csr_wdta_src_exu_to_lsu),
        .reg_write_i(reg_write_exu_to_lsu),
        .waddr_i(waddr_exu_to_lsu),
        .ecall_i(ecall_exu_to_lsu),
        .waddr_csr_i(waddr_csr_exu_to_lsu),

        .lsu_valid_i(valid_exu_to_lsu),
        .lsu_ready_o(ready_exu_to_lsu),
        
        //lsu to wbu
        .alu_result_o(alu_result_lsu_to_wbu),
        .rs1_o(rs1_lsu_to_wbu),
        .csr_rdata_l_rs1_o(csr_rdata_l_rs1_lsu_to_wbu),
        .datamem_readdata_o(datamem_readdata_lsu_to_wbu),
        .rmask_o(rmask_lsu_to_wbu),
        .wb_src_o(wb_src_lsu_to_wbu),
        .csr_write_o(csr_write_lsu_to_wbu),
        .csr_wdata_src_o(csr_wdata_src_lsu_to_wbu),
        .reg_write_o(reg_write_lsu_to_wbu),
        .waddr_o(waddr_lsu_to_wbu),
        .ecall_o(ecall_lsu_to_wbu),
        .waddr_csr_o(waddr_csr_lsu_to_wbu),

        .lsu_valid_o(valid_lsu_to_wbu),
        .lsu_ready_i(ready_lsu_to_wbu),

        //to mem
        .araddr_o(lsu_araddr),
        .arid_o(lsu_arid),
        .arlen_o(lsu_arlen),
        .arsize_o(lsu_arsize),
        .arburst_o(lsu_arburst),
        .arvalid_o(lsu_arvalid),
        .arready_i(lsu_arready),

        .rdata_i(lsu_rdata),
        .rresp_i(lsu_rresp),
        .rlast_i(lsu_rlast),
        .rid_i(lsu_rid),
        .rvalid_i(lsu_rvalid),
        .rready_o(lsu_rready),

        .awaddr_o(lsu_awaddr),
        .awid_o(lsu_awid),
        .awlen_o(lsu_awlen),
        .awsize_o(lsu_awsize),
        .awburst_o(lsu_awburst),
        .awvalid_o(lsu_awvalid),
        .awready_i(lsu_awready),

        .wdata_o(lsu_wdata),
        .wstrb_o(lsu_wstrb),
        .wlast_o(lsu_wlast),
        .wvalid_o(lsu_wvalid),
        .wready_i(lsu_wready),
        
        .bresp_i(lsu_bresp),
        .bid_i(lsu_bid),
        .bvalid_i(lsu_bvalid),
        .bready_o(lsu_bready),

        .bus_busy(bus_busy),
        .rd_lsu_valid(rd_lsu_valid),

        .pc_i(pc_exu_to_lsu),
        .pc_o(pc_lsu_to_wbu)
    );

    wire rd_wbu_valid;

    wire [`PC_WIDTH-1:0] pc_wbu_out;
    
    wbu WBU(
        .clk(clk),
        .rst_n(rst_n),
        //lsu to wbu
        .alu_result_i(alu_result_lsu_to_wbu),
        .rs1_i(rs1_lsu_to_wbu),
        .csr_rdata_l_rs1_i(csr_rdata_l_rs1_lsu_to_wbu),
        .datamem_readdata_i(datamem_readdata_lsu_to_wbu),
        .rmask_i(rmask_lsu_to_wbu),
        .wb_src_i(wb_src_lsu_to_wbu),
        .csr_write_i(csr_write_lsu_to_wbu),
        .csr_wdata_src_i(csr_wdata_src_lsu_to_wbu),
        .reg_write_i(reg_write_lsu_to_wbu),
        .waddr_i(waddr_lsu_to_wbu),
        .ecall_i(ecall_lsu_to_wbu),
        .waddr_csr_i(waddr_csr_lsu_to_wbu),

        .wbu_valid_i(valid_lsu_to_wbu),
        .wbu_ready_o(ready_lsu_to_wbu),

        //wbu to ifu


        //write back
        .csr_wdata_o(csr_wdata),
        .csr_write_o(csr_write),
        .wdata_o(wdata),
        .reg_write_o(reg_write),
        .waddr_o(waddr),
        .ecall_o(ecall),
        .waddr_csr_o(waddr_csr),

        .rd_wbu_valid(rd_wbu_valid),
        .pc_i(pc_lsu_to_wbu),
        .pc_o(pc_wbu_out)
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
        reg_file[31],pc_wbu_out,csr_reg[2],csr_reg[0],csr_reg[3],csr_reg[1]);
    end
    
endmodule

module adder(
    input [31:0]a,
    input [31:0]b,
    output [31:0]out
);

assign out = a + b;

endmodule

module alu_control(
    input [31:0] inst,
    output reg [3:0] alu_op
);
    wire [6:0] opcode;
    wire [2:0] funct3;
    wire [6:0] funct7;
    assign opcode = inst[6:0];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];

    always@(*)begin
        case(opcode)          
            7'b0110111: begin //lui
                alu_op = 4'b0000; //pass b
            end
            7'b0010111: begin //auipc
                alu_op = 4'b0100; //+
            end
            7'b1101111: begin //jal
                alu_op = 4'b0100; //+
            end
            7'b1100111: begin
                case(funct3)
                    3'b000: alu_op = 4'b0100; //+ //jalr
                    default: alu_op = 0;
                endcase
            end
            7'b1100011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0101;//- //beq
                    3'b001: alu_op = 4'b0101;//- //bne
                    3'b100: alu_op = 4'b1010;//s<s //blt
                    3'b101: alu_op = 4'b1010;//s<s //bge
                    3'b110: alu_op = 4'b1001;//u<u //bltu
                    3'b111: alu_op = 4'b1001;//u<u //bgeu
                    default: alu_op = 4'b0101;//- 
                endcase
            end
            7'b0000011: begin //+ //lb lh lw lbu lhu
                case(funct3)
                    3'b000: alu_op = 4'b0100; //+ //lb
                    3'b001: alu_op = 4'b0100; //+ //lh
                    3'b010: alu_op = 4'b0100; //+ //lw
                    3'b100: alu_op = 4'b0100; //+ //lbu
                    3'b101: alu_op = 4'b0100; //+ //lhu
                    default: alu_op = 4'b0100;
                endcase
            end
            7'b0100011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0100; //+ //sb
                    3'b001: alu_op = 4'b0100; //+ //sh
                    3'b010: alu_op = 4'b0100; //+ //sw
                    default: alu_op = 4'b0100;
                endcase
            end
            
            7'b0010011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0100; //+ //addi
                    3'b010: alu_op = 4'b1010; //s<s //slti
                    3'b011: alu_op = 4'b1001; //u<u //sltiu
                    3'b100: alu_op = 4'b0011; //^ //xori
                    3'b110: alu_op = 4'b0010; //| //ori
                    3'b111: alu_op = 4'b0001; //& //andi
                    3'b001: alu_op = 4'b0110; //<< //slli
                    3'b101: begin
                        case(funct7)
                            7'b0000000: alu_op = 4'b0111; //>> //srli
                            7'b0100000: alu_op = 4'b1000; //>> //srai
                            default: alu_op = 4'b0111; //>> //srli
                        endcase
                    end
                    default: alu_op = 0;
                endcase
            end
            7'b0110011: begin
                case(funct3)
                    3'b000: begin
                        case(funct7)
                            7'b0000000: alu_op = 4'b0100;//+ //add
                            7'b0100000: alu_op = 4'b0101;//- //sub
                            default: alu_op = 0;
                        endcase
                    end
                    3'b001: alu_op = 4'b0110; //<< //sll
                    3'b010: alu_op = 4'b1010; //s<s //slt
                    3'b011: alu_op = 4'b1001; //u<u //sltu
                    3'b100: alu_op = 4'b0011; //^ //xor
                    3'b101: begin
                        case(funct7)
                            7'b0000000: alu_op = 4'b0111; //>> //srl
                            7'b0100000: alu_op = 4'b1000; //>> //sra
                            default: alu_op = 0;
                        endcase
                    end
                    3'b110: alu_op = 4'b0010; //| //or
                    3'b111: alu_op = 4'b0001; //& //and
                    default:alu_op = 0;
                endcase
            end
            7'b1110011: begin
                alu_op = 4'b0000;//pass b
            end
            default: alu_op = 0;
        endcase
    end

endmodule

module alu(
    input [31:0]a,
    input [31:0]b,
    input [3:0]op,
    output reg [31:0]alu_result,
    output zero
);

assign zero = ~(| alu_result);

//wire [63:0] mux_tmp;
//assign mux_tmp = a*b;

always@(*) begin
    case(op)
        4'b0000: alu_result = b; 
        4'b0001: alu_result = a & b;
        4'b0010: alu_result = a | b;
        4'b0011: alu_result = a ^ b;
        4'b0100: alu_result = a + b;
        4'b0101: alu_result = a - b;
        4'b0110: alu_result = a << b[4:0];
        4'b0111: alu_result = a >> b[4:0];
        4'b1000: alu_result = ($signed(a)) >>> ($signed(b[4:0]));
        4'b1001: alu_result = (a < b) ? 32'd1 : 32'd0;
        4'b1010: alu_result = ($signed(a) < $signed(b)) ? 32'd1 : 32'd0;
        //4'b1011: alu_result = mux_tmp[31:0];
        //4'b1100: alu_result = mux_tmp[63:32];
        
        default: alu_result = b; 
    endcase

end

endmodule

// ============================================================
//  AXI4 总线仲裁器
//  - AR + R 通道: 先到先得，同时到达则轮询
//    锁定时机: arvalid出现即锁定（而非等待AR握手）
//  - AW + W + B 通道: 直通
// ============================================================

// `define CPU_WIDTH 32   // 若顶层已定义请删除此行

module axi_arbiter (
    input clk,
    input rst_n,

    // ========== Master A (e.g. IFU) ==========
    // AR
    input  [`CPU_WIDTH-1:0] araddr_i_a,
    input  [3:0]            arid_i_a,
    input  [7:0]            arlen_i_a,
    input  [2:0]            arsize_i_a,
    input  [1:0]            arburst_i_a,
    input                   arvalid_i_a,
    output reg              arready_o_a,
    // R
    output reg [`CPU_WIDTH-1:0] rdata_o_a,
    output reg [1:0]            rresp_o_a,
    output reg                  rlast_o_a,
    output reg [3:0]            rid_o_a,
    output reg                  rvalid_o_a,
    input                       rready_i_a,
    // AW
    input  [`CPU_WIDTH-1:0] awaddr_i_a,
    input  [3:0]            awid_i_a,
    input  [7:0]            awlen_i_a,
    input  [2:0]            awsize_i_a,
    input  [1:0]            awburst_i_a,
    input                   awvalid_i_a,
    output reg              awready_o_a,
    // W
    input  [`CPU_WIDTH-1:0] wdata_i_a,
    input  [3:0]            wstrb_i_a,
    input                   wlast_i_a,
    input                   wvalid_i_a,
    output reg              wready_o_a,
    // B
    output reg [1:0]        bresp_o_a,
    output reg [3:0]        bid_o_a,
    output reg              bvalid_o_a,
    input                   bready_i_a,

    // ========== Master B (e.g. LSU) ==========
    // AR
    input  [`CPU_WIDTH-1:0] araddr_i_b,
    input  [3:0]            arid_i_b,
    input  [7:0]            arlen_i_b,
    input  [2:0]            arsize_i_b,
    input  [1:0]            arburst_i_b,
    input                   arvalid_i_b,
    output reg              arready_o_b,
    // R
    output reg [`CPU_WIDTH-1:0] rdata_o_b,
    output reg [1:0]            rresp_o_b,
    output reg                  rlast_o_b,
    output reg [3:0]            rid_o_b,
    output reg                  rvalid_o_b,
    input                       rready_i_b,
    // AW
    input  [`CPU_WIDTH-1:0] awaddr_i_b,
    input  [3:0]            awid_i_b,
    input  [7:0]            awlen_i_b,
    input  [2:0]            awsize_i_b,
    input  [1:0]            awburst_i_b,
    input                   awvalid_i_b,
    output reg              awready_o_b,
    // W
    input  [`CPU_WIDTH-1:0] wdata_i_b,
    input  [3:0]            wstrb_i_b,
    input                   wlast_i_b,
    input                   wvalid_i_b,
    output reg              wready_o_b,
    // B
    output reg [1:0]        bresp_o_b,
    output reg [3:0]        bid_o_b,
    output reg              bvalid_o_b,
    input                   bready_i_b,

    // ========== Slave (Memory) ==========
    // AR
    output [`CPU_WIDTH-1:0] araddr_o,
    output [3:0]            arid_o,
    output [7:0]            arlen_o,
    output [2:0]            arsize_o,
    output [1:0]            arburst_o,
    output                  arvalid_o,
    input                   arready_i,
    // R
    input  [`CPU_WIDTH-1:0] rdata_i,
    input  [1:0]            rresp_i,
    input                   rlast_i,
    input  [3:0]            rid_i,
    input                   rvalid_i,
    output                  rready_o,
    // AW
    output [`CPU_WIDTH-1:0] awaddr_o,
    output [3:0]            awid_o,
    output [7:0]            awlen_o,
    output [2:0]            awsize_o,
    output [1:0]            awburst_o,
    output                  awvalid_o,
    input                   awready_i,
    // W
    output [`CPU_WIDTH-1:0] wdata_o,
    output [3:0]            wstrb_o,
    output                  wlast_o,
    output                  wvalid_o,
    input                   wready_i,
    // B
    input  [1:0]            bresp_i,
    input  [3:0]            bid_i,
    input                   bvalid_i,
    output                  bready_o,

    output bus_busy
);

// ============================================================
// 参数
// ============================================================
localparam MASTER_A = 1'b0;
localparam MASTER_B = 1'b1;

// ============================================================
// AR/R 仲裁内部寄存器
// ============================================================
reg  arb_grant;       // 上一次仲裁结果（用于同时到达时的轮询参考）
reg  arb_locked;      // 仲裁锁：arvalid出现即置1，rlast握手后清0
reg  current_master;  // 本次事务R通道路由目标

// ============================================================
// 关键握手信号
// ============================================================
wire r_last_handshake = rvalid_i & rready_o & rlast_i;  // R通道最后一拍完成

// 任意一方出现arvalid，视为有新请求到来
wire ar_req_appear = arvalid_i_a | arvalid_i_b;

// ============================================================
// 仲裁决策（组合逻辑）
// ============================================================
// 策略：先到先得；同时到达则切换（基于上次 arb_grant 轮转）
// 锁定期间输出维持 arb_grant 不变，由 current_master 接管路由
wire arb_grant_next;
assign arb_grant_next = arb_locked                        ? arb_grant   : // 锁定中，不重新仲裁
                        ( arvalid_i_a & ~arvalid_i_b)     ? MASTER_A    : // 只有A：A先到
                        (~arvalid_i_a &  arvalid_i_b)     ? MASTER_B    : // 只有B：B先到
                        ( arvalid_i_a &  arvalid_i_b)     ? ~arb_grant  : // 同时到达：轮转
                                                             arb_grant;    // 都无请求：保持

// ============================================================
// 仲裁寄存器时序逻辑
// ============================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        arb_grant      <= MASTER_A;
        arb_locked     <= 1'b0;
        current_master <= MASTER_A;
    end else begin
        // rlast握手：解锁，下一拍可重新仲裁
        // arvalid出现且当前未锁定：立即锁定并记录仲裁结果
        // 同一拍 rlast 握手 + 新 arvalid：优先解锁，新请求下一拍再仲裁
        if (r_last_handshake) begin
            arb_locked <= 1'b0;
        end else if (!arb_locked & ar_req_appear) begin
            arb_locked     <= 1'b1;
            arb_grant      <= arb_grant_next;   // 更新轮询指针
            current_master <= arb_grant_next;   // 锁定本次事务的路由目标
        end
    end
end

// ============================================================
// AR 通道 MUX → Memory
// 使用 current_master（寄存器）保证锁定后地址信号稳定
// ============================================================
assign araddr_o  = (current_master == MASTER_A) ? araddr_i_a  : araddr_i_b;
assign arid_o    = (current_master == MASTER_A) ? arid_i_a    : arid_i_b;
assign arlen_o   = (current_master == MASTER_A) ? arlen_i_a   : arlen_i_b;
assign arsize_o  = (current_master == MASTER_A) ? arsize_i_a  : arsize_i_b;
assign arburst_o = (current_master == MASTER_A) ? arburst_i_a : arburst_i_b;

// arvalid：只透传被授权 master 的请求
assign arvalid_o = (current_master == MASTER_A) ? arvalid_i_a : arvalid_i_b;

// arready：只反馈给被授权的 master，另一方阻塞等待
always @(*) begin
    arready_o_a = 1'b0;
    arready_o_b = 1'b0;
    if (current_master == MASTER_A)
        arready_o_a = arready_i;
    else
        arready_o_b = arready_i;
end

// ============================================================
// R 通道路由 Memory → 正确的 Master
// ============================================================
assign rready_o = (current_master == MASTER_A) ? rready_i_a : rready_i_b;

always @(*) begin
    // 默认清零，防止 latch
    rdata_o_a  = {`CPU_WIDTH{1'b0}};
    rresp_o_a  = 2'b0;
    rlast_o_a  = 1'b0;
    rid_o_a    = 4'b0;
    rvalid_o_a = 1'b0;
    rdata_o_b  = {`CPU_WIDTH{1'b0}};
    rresp_o_b  = 2'b0;
    rlast_o_b  = 1'b0;
    rid_o_b    = 4'b0;
    rvalid_o_b = 1'b0;

    if (current_master == MASTER_A) begin
        rdata_o_a  = rdata_i;
        rresp_o_a  = rresp_i;
        rlast_o_a  = rlast_i;
        rid_o_a    = rid_i;
        rvalid_o_a = rvalid_i;
    end else begin
        rdata_o_b  = rdata_i;
        rresp_o_b  = rresp_i;
        rlast_o_b  = rlast_i;
        rid_o_b    = rid_i;
        rvalid_o_b = rvalid_i;
    end
end
    always@(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            bus_busy <= 0;
        end
        else begin
            if(arready_i==1 && arvalid_o==1)
                bus_busy <= 1;
            if(rvalid_i==1 && rready_o==1 && rlast_i==1)
                bus_busy <= 0;

        end
    end
    assign awaddr_o = awaddr_i_b;
    assign awid_o = awid_i_b;
    assign awlen_o = awlen_i_b;
    assign awsize_o = awsize_i_b;
    assign awburst_o = awburst_i_b;
    assign awvalid_o = awvalid_i_b;
    assign awready_o_b = awready_i;

    assign wdata_o = wdata_i_b;
    assign wstrb_o = wstrb_i_b;
    assign wlast_o = wlast_i_b;
    assign wvalid_o = wvalid_i_b;
    assign wready_o_b = wready_i;

    assign bresp_o_b = bresp_i;
    assign bid_o_b = bid_i;
    assign bvalid_o_b = bvalid_i;
    assign bready_o = bready_i_b;

endmodule

module branch_control(
    input [31:0] pc4,
    input [31:0] pc_new,
    input [2:0] pc_srcs,
    input zero,
    input [31:0] alu_result,
    output reg [31:0] npc
);
    always@(*) begin
        case(pc_srcs)
            3'b000: npc = pc4; //pc=pc+4
            3'b001: npc = pc_new; //pc=pc+imm or pc=rs1+imm
            3'b010: begin //beq
                if(zero==1'b1) npc = pc_new; //sub is zero,equal,jump
                else npc = pc4;
            end
            3'b011: begin //bne
                if(zero==1'b0) npc = pc_new; //sub is not zero,unequal,jump
                else npc = pc4;
            end
            3'b100: begin //blt
                if(alu_result==32'd1) npc = pc_new;
                else npc = pc4;
            end
            3'b101: begin //bge
                if(alu_result==32'd0) npc = pc_new;
                else npc = pc4;
            end
            3'b110: begin //bltu
                if(alu_result==32'd1) npc = pc_new;
                else npc = pc4;
            end
            3'b111: begin //bgeu
                if(alu_result==32'd0) npc = pc_new;
                else npc = pc4;
            end
            default: npc = pc4; //pc=pc+4
        endcase

    end

endmodule

`include "header.v"

// =============================================================================
// CLINT — area-optimized
//
// Function: 64-bit mtime counter, AXI4 slave interface
//   Read  0x0200_0048 → mtime[31:0]
//   Read  0x0200_004c → mtime[63:32]
//   Write support for mtimecmp if needed (currently no mtimecmp)
//
// Removed: LFSR delay simulator, 5 separate FSMs, all output registers,
//          wdata/wstrb/awaddr buffers
// Registers: time_counter(64) + araddr_lat(32) + state(3) + aw_done/w_done(2) = 101 bits
// Original: ~171 DFF + DFFR → estimated 1,897 area → ~700
// =============================================================================

module clint (
    input clk,
    input rst_n,

    // AXI AR
    input  [`CPU_WIDTH-1:0] araddr_i,
    input  [3:0]            arid_i,
    input  [7:0]            arlen_i,
    input  [2:0]            arsize_i,
    input  [1:0]            arburst_i,
    input                   arvalid_i,
    output                  arready_o,

    // AXI R
    output [`CPU_WIDTH-1:0] rdata_o,
    output [1:0]            rresp_o,
    output                  rlast_o,
    output [3:0]            rid_o,
    output                  rvalid_o,
    input                   rready_i,

    // AXI AW
    input  [`CPU_WIDTH-1:0] awaddr_i,
    input  [3:0]            awid_i,
    input  [7:0]            awlen_i,
    input  [2:0]            awsize_i,
    input  [1:0]            awburst_i,
    input                   awvalid_i,
    output                  awready_o,

    // AXI W
    input  [`CPU_WIDTH-1:0] wdata_i,
    input  [3:0]            wstrb_i,
    input                   wlast_i,
    input                   wvalid_i,
    output                  wready_o,

    // AXI B
    output [1:0]            bresp_o,
    output [3:0]            bid_o,
    output                  bvalid_o,
    input                   bready_i
);

// =============================================================================
// mtime counter — the only real function of CLINT
// =============================================================================
reg [63:0] time_counter;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        time_counter <= 64'd0;
    else
        time_counter <= time_counter + 1;
end

// =============================================================================
// State machine
// =============================================================================
localparam [2:0]
    S_IDLE  = 3'd0,
    S_RRESP = 3'd1,   // Read: present R data, wait rready
    S_AW    = 3'd2,   // Write: collect AW+W
    S_BRESP = 3'd3;   // Write: present B response, wait bready

reg [2:0] state;

// Latched read address (only need bit 2 to distinguish hi/lo word)
reg [`CPU_WIDTH-1:0] araddr_lat;

// Track AW/W handshakes (can arrive in any order)
reg aw_done, w_done;

// =============================================================================
// AXI outputs — ALL combinational
// =============================================================================

// AR: accept in IDLE
assign arready_o = (state == S_IDLE) && !awvalid_i;  // read lower priority if simultaneous

// R: respond with time_counter
assign rdata_o  = araddr_lat[2] ? time_counter[63:32] : time_counter[31:0];
assign rvalid_o = (state == S_RRESP);
assign rlast_o  = rvalid_o;
assign rresp_o  = 2'b00;
assign rid_o    = 4'd0;

// AW: accept in IDLE or S_AW when not yet done
assign awready_o = (state == S_IDLE && awvalid_i) ||
                   (state == S_AW && !aw_done);

// W: accept in IDLE or S_AW when not yet done
assign wready_o  = (state == S_IDLE && awvalid_i) ||
                   (state == S_AW && !w_done);

// B: respond after write complete
assign bvalid_o = (state == S_BRESP);
assign bresp_o  = 2'b00;
assign bid_o    = 4'd0;

// =============================================================================
// State transitions
// =============================================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state      <= S_IDLE;
        araddr_lat <= 0;
        aw_done    <= 1'b0;
        w_done     <= 1'b0;
    end else begin
        case (state)

            S_IDLE: begin
                if (awvalid_i) begin
                    // Write request — prioritize over read
                    aw_done <= awready_o && awvalid_i;
                    w_done  <= wready_o  && wvalid_i;
                    if ((awready_o && awvalid_i) && (wready_o && wvalid_i)) begin
                        // Both handshake in same cycle
                        state <= S_BRESP;
                    end else begin
                        state <= S_AW;
                    end
                end else if (arvalid_i) begin
                    // Read request
                    araddr_lat <= araddr_i;
                    state      <= S_RRESP;
                end
            end

            S_RRESP: begin
                if (rvalid_o && rready_i)
                    state <= S_IDLE;
            end

            S_AW: begin
                if (awready_o && awvalid_i)
                    aw_done <= 1'b1;
                if (wready_o && wvalid_i)
                    w_done <= 1'b1;

                // Both channels done
                if ((aw_done || (awready_o && awvalid_i)) &&
                    (w_done  || (wready_o  && wvalid_i)))
                    state <= S_BRESP;
            end

            S_BRESP: begin
                if (bvalid_o && bready_i) begin
                    aw_done <= 1'b0;
                    w_done  <= 1'b0;
                    state   <= S_IDLE;
                end
            end

            default: state <= S_IDLE;

        endcase
    end
end

endmodule