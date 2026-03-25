`include "header.v"

// =============================================================================
// XBAR — latch-free, pure combinational crossbar
//
// Original: 102 DLH (latches) due to incomplete assignments in always @(*)
// Fix: all outputs are wire + assign, every path has a defined value.
//
// Routing: address in CLINT range (0x0200_0000 ~ 0x0200_ffff) → clint
//          everything else → sram
//          Write channel always goes to sram (no CLINT write needed)
// =============================================================================

module xbar (
    input clk,
    input rst_n,

    // Upstream (from arbiter)
    input  [`CPU_WIDTH-1:0] axi_araddr_i,
    input  [3:0]            axi_arid_i,
    input  [7:0]            axi_arlen_i,
    input  [2:0]            axi_arsize_i,
    input  [1:0]            axi_arburst_i,
    input                   axi_arvalid_i,
    output                  axi_arready_o,

    output [`CPU_WIDTH-1:0] axi_rdata_o,
    output [1:0]            axi_rresp_o,
    output                  axi_rlast_o,
    output [3:0]            axi_rid_o,
    output                  axi_rvalid_o,
    input                   axi_rready_i,

    input  [`CPU_WIDTH-1:0] axi_awaddr_i,
    input  [3:0]            axi_awid_i,
    input  [7:0]            axi_awlen_i,
    input  [2:0]            axi_awsize_i,
    input  [1:0]            axi_awburst_i,
    input                   axi_awvalid_i,
    output                  axi_awready_o,

    input  [`CPU_WIDTH-1:0] axi_wdata_i,
    input  [3:0]            axi_wstrb_i,
    input                   axi_wlast_i,
    input                   axi_wvalid_i,
    output                  axi_wready_o,

    output [1:0]            axi_bresp_o,
    output [3:0]            axi_bid_o,
    output                  axi_bvalid_o,
    input                   axi_bready_i,

    // Downstream: SRAM
    output [`CPU_WIDTH-1:0] sram_araddr_o,
    output [3:0]            sram_arid_o,
    output [7:0]            sram_arlen_o,
    output [2:0]            sram_arsize_o,
    output [1:0]            sram_arburst_o,
    output                  sram_arvalid_o,
    input                   sram_arready_i,

    input  [`CPU_WIDTH-1:0] sram_rdata_i,
    input  [1:0]            sram_rresp_i,
    input                   sram_rlast_i,
    input  [3:0]            sram_rid_i,
    input                   sram_rvalid_i,
    output                  sram_rready_o,

    output [`CPU_WIDTH-1:0] sram_awaddr_o,
    output [3:0]            sram_awid_o,
    output [7:0]            sram_awlen_o,
    output [2:0]            sram_awsize_o,
    output [1:0]            sram_awburst_o,
    output                  sram_awvalid_o,
    input                   sram_awready_i,

    output [`CPU_WIDTH-1:0] sram_wdata_o,
    output [3:0]            sram_wstrb_o,
    output                  sram_wlast_o,
    output                  sram_wvalid_o,
    input                   sram_wready_i,

    input  [1:0]            sram_bresp_i,
    input  [3:0]            sram_bid_i,
    input                   sram_bvalid_i,
    output                  sram_bready_o,

    // Downstream: CLINT
    output [`CPU_WIDTH-1:0] clint_araddr_o,
    output [3:0]            clint_arid_o,
    output [7:0]            clint_arlen_o,
    output [2:0]            clint_arsize_o,
    output [1:0]            clint_arburst_o,
    output                  clint_arvalid_o,
    input                   clint_arready_i,

    input  [`CPU_WIDTH-1:0] clint_rdata_i,
    input  [1:0]            clint_rresp_i,
    input                   clint_rlast_i,
    input  [3:0]            clint_rid_i,
    input                   clint_rvalid_i,
    output                  clint_rready_o,

    output [`CPU_WIDTH-1:0] clint_awaddr_o,
    output [3:0]            clint_awid_o,
    output [7:0]            clint_awlen_o,
    output [2:0]            clint_awsize_o,
    output [1:0]            clint_awburst_o,
    output                  clint_awvalid_o,
    input                   clint_awready_i,

    output [`CPU_WIDTH-1:0] clint_wdata_o,
    output [3:0]            clint_wstrb_o,
    output                  clint_wlast_o,
    output                  clint_wvalid_o,
    input                   clint_wready_i,

    input  [1:0]            clint_bresp_i,
    input  [3:0]            clint_bid_i,
    input                   clint_bvalid_i,
    output                  clint_bready_o
);

// =============================================================================
// Address decode — pure combinational
// =============================================================================
wire sel_clint = (axi_araddr_i >= 32'h0200_0000) && (axi_araddr_i <= 32'h0200_ffff);

// =============================================================================
// AR channel: route to clint or sram based on address
// Both downstream ports get the address/control, but only the selected
// one gets arvalid. The unselected one sees arvalid=0.
// =============================================================================
assign sram_araddr_o  = axi_araddr_i;
assign sram_arid_o    = axi_arid_i;
assign sram_arlen_o   = axi_arlen_i;
assign sram_arsize_o  = axi_arsize_i;
assign sram_arburst_o = axi_arburst_i;
assign sram_arvalid_o = axi_arvalid_i && !sel_clint;

assign clint_araddr_o  = axi_araddr_i;
assign clint_arid_o    = axi_arid_i;
assign clint_arlen_o   = axi_arlen_i;
assign clint_arsize_o  = axi_arsize_i;
assign clint_arburst_o = axi_arburst_i;
assign clint_arvalid_o = axi_arvalid_i && sel_clint;

assign axi_arready_o = sel_clint ? clint_arready_i : sram_arready_i;

// =============================================================================
// R channel: mux response back from selected slave
// =============================================================================
assign axi_rdata_o  = sel_clint ? clint_rdata_i  : sram_rdata_i;
assign axi_rresp_o  = sel_clint ? clint_rresp_i  : sram_rresp_i;
assign axi_rlast_o  = sel_clint ? clint_rlast_i  : sram_rlast_i;
assign axi_rid_o    = sel_clint ? clint_rid_i     : sram_rid_i;
assign axi_rvalid_o = sel_clint ? clint_rvalid_i  : sram_rvalid_i;

assign sram_rready_o  = axi_rready_i && !sel_clint;
assign clint_rready_o = axi_rready_i && sel_clint;

// =============================================================================
// AW/W/B channels: always route to sram (CLINT has no writes in this design)
// CLINT write ports tied to inactive defaults.
// =============================================================================
assign sram_awaddr_o  = axi_awaddr_i;
assign sram_awid_o    = axi_awid_i;
assign sram_awlen_o   = axi_awlen_i;
assign sram_awsize_o  = axi_awsize_i;
assign sram_awburst_o = axi_awburst_i;
assign sram_awvalid_o = axi_awvalid_i;
assign axi_awready_o  = sram_awready_i;

assign sram_wdata_o   = axi_wdata_i;
assign sram_wstrb_o   = axi_wstrb_i;
assign sram_wlast_o   = axi_wlast_i;
assign sram_wvalid_o  = axi_wvalid_i;
assign axi_wready_o   = sram_wready_i;

assign axi_bresp_o    = sram_bresp_i;
assign axi_bid_o      = sram_bid_i;
assign axi_bvalid_o   = sram_bvalid_i;
assign sram_bready_o  = axi_bready_i;

// CLINT write ports — inactive
assign clint_awaddr_o  = 0;
assign clint_awid_o    = 0;
assign clint_awlen_o   = 0;
assign clint_awsize_o  = 0;
assign clint_awburst_o = 0;
assign clint_awvalid_o = 1'b0;
assign clint_wdata_o   = 0;
assign clint_wstrb_o   = 0;
assign clint_wlast_o   = 1'b0;
assign clint_wvalid_o  = 1'b0;
assign clint_bready_o  = 1'b0;

endmodule