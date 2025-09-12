// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1244,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1245,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1246,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1247,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1248,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1249,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1250,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1251,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1252,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1253,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1254,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1255,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1256,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1257,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1258,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1259,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1260,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1261,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1262,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1263,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1244,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1245,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1246,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1247,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1248,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1249,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1250,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1251,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1252,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1253,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1254,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1255,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1256,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1257,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1258,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1259,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1260,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1261,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1262,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1263,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+553,"spi_sck", false,-1);
    tracep->declBus(c+554,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1264,"spi_mosi", false,-1);
    tracep->declBit(c+1265,"spi_miso", false,-1);
    tracep->declBit(c+1262,"uart_rx", false,-1);
    tracep->declBit(c+1263,"uart_tx", false,-1);
    tracep->declBit(c+1266,"psram_sck", false,-1);
    tracep->declBit(c+1267,"psram_ce_n", false,-1);
    tracep->declBus(c+1195,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1268,"sdram_clk", false,-1);
    tracep->declBit(c+555,"sdram_cke", false,-1);
    tracep->declBit(c+556,"sdram_cs", false,-1);
    tracep->declBit(c+557,"sdram_ras", false,-1);
    tracep->declBit(c+558,"sdram_cas", false,-1);
    tracep->declBit(c+559,"sdram_we", false,-1);
    tracep->declBus(c+560,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+561,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+562,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+563,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1244,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1245,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1246,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1247,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1248,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1249,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1250,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1251,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1252,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1253,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1254,"ps2_clk", false,-1);
    tracep->declBit(c+1255,"ps2_data", false,-1);
    tracep->declBus(c+1256,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1257,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1258,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1259,"vga_hsync", false,-1);
    tracep->declBit(c+1260,"vga_vsync", false,-1);
    tracep->declBit(c+1261,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1031,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+64,"in_psel", false,-1);
    tracep->declBit(c+65,"in_penable", false,-1);
    tracep->declBus(c+1293,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1032,"in_pwrite", false,-1);
    tracep->declBus(c+1033,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"in_pready", false,-1);
    tracep->declBus(c+1197,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1035,"in_pslverr", false,-1);
    tracep->declBus(c+1031,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+64,"out_psel", false,-1);
    tracep->declBit(c+65,"out_penable", false,-1);
    tracep->declBus(c+1293,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1032,"out_pwrite", false,-1);
    tracep->declBus(c+1033,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"out_pready", false,-1);
    tracep->declBus(c+1197,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1035,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+64,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+65,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1032,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1031,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1035,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1197,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+543,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+544,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1031,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+564,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1294,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+565,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+545,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+546,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1293,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1295,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1296,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1297,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+547,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+548,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1037,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1293,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1298,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1299,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1300,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+549,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+550,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1037,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1293,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1303,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1038,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+551,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1031,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1269,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1294,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+66,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1039,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1037,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1293,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1041,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1294,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1270,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1042,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1043,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1293,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+566,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1294,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+567,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1044,"sel_0", false,-1);
    tracep->declBit(c+1045,"sel_1", false,-1);
    tracep->declBit(c+1046,"sel_2", false,-1);
    tracep->declBit(c+1047,"sel_3", false,-1);
    tracep->declBit(c+1048,"sel_4", false,-1);
    tracep->declBit(c+1049,"sel_5", false,-1);
    tracep->declBit(c+1050,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+67,"auto_in_awready", false,-1);
    tracep->declBit(c+68,"auto_in_awvalid", false,-1);
    tracep->declBus(c+69,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+71,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+72,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+67,"auto_in_wready", false,-1);
    tracep->declBit(c+73,"auto_in_wvalid", false,-1);
    tracep->declBus(c+74,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+75,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+76,"auto_in_bready", false,-1);
    tracep->declBit(c+1198,"auto_in_bvalid", false,-1);
    tracep->declBus(c+77,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1051,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+78,"auto_in_arready", false,-1);
    tracep->declBit(c+79,"auto_in_arvalid", false,-1);
    tracep->declBus(c+80,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+82,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+83,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+84,"auto_in_rready", false,-1);
    tracep->declBit(c+1199,"auto_in_rvalid", false,-1);
    tracep->declBus(c+85,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1271,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1051,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+64,"auto_out_psel", false,-1);
    tracep->declBit(c+65,"auto_out_penable", false,-1);
    tracep->declBit(c+1032,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1031,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1033,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"auto_out_pready", false,-1);
    tracep->declBit(c+1035,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1197,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+65,"nodeOut_penable", false,-1);
    tracep->declBus(c+86,"state", false,-1, 1,0);
    tracep->declBit(c+78,"accept_read", false,-1);
    tracep->declBit(c+67,"accept_write", false,-1);
    tracep->declBit(c+87,"is_write_r", false,-1);
    tracep->declBit(c+1032,"is_write", false,-1);
    tracep->declBus(c+85,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+77,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+88,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+89,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+90,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+91,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1052,"resp", false,-1, 1,0);
    tracep->declBus(c+92,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1051,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1199,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+93,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1198,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+94,"auto_in_awready", false,-1);
    tracep->declBit(c+894,"auto_in_awvalid", false,-1);
    tracep->declBus(c+95,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+895,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+97,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+98,"auto_in_wready", false,-1);
    tracep->declBit(c+896,"auto_in_wvalid", false,-1);
    tracep->declBus(c+897,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+898,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+899,"auto_in_wlast", false,-1);
    tracep->declBit(c+492,"auto_in_bready", false,-1);
    tracep->declBit(c+99,"auto_in_bvalid", false,-1);
    tracep->declBus(c+100,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+102,"auto_in_arready", false,-1);
    tracep->declBit(c+900,"auto_in_arvalid", false,-1);
    tracep->declBus(c+901,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+904,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1272,"auto_in_rready", false,-1);
    tracep->declBit(c+103,"auto_in_rvalid", false,-1);
    tracep->declBus(c+104,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+105,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+106,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+107,"auto_in_rlast", false,-1);
    tracep->declBit(c+67,"auto_out_awready", false,-1);
    tracep->declBit(c+68,"auto_out_awvalid", false,-1);
    tracep->declBus(c+69,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+71,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+72,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+67,"auto_out_wready", false,-1);
    tracep->declBit(c+73,"auto_out_wvalid", false,-1);
    tracep->declBus(c+74,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+75,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+76,"auto_out_bready", false,-1);
    tracep->declBit(c+1198,"auto_out_bvalid", false,-1);
    tracep->declBus(c+77,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1051,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+78,"auto_out_arready", false,-1);
    tracep->declBit(c+79,"auto_out_arvalid", false,-1);
    tracep->declBus(c+80,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+82,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+83,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+84,"auto_out_rready", false,-1);
    tracep->declBit(c+1199,"auto_out_rvalid", false,-1);
    tracep->declBus(c+85,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1271,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1051,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+76,"io_enq_ready", false,-1);
    tracep->declBit(c+1198,"io_enq_valid", false,-1);
    tracep->declBus(c+77,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1051,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+492,"io_deq_ready", false,-1);
    tracep->declBit(c+99,"io_deq_valid", false,-1);
    tracep->declBus(c+100,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+101,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+108,"wrap", false,-1);
    tracep->declBit(c+109,"wrap_1", false,-1);
    tracep->declBit(c+110,"maybe_full", false,-1);
    tracep->declBit(c+111,"ptr_match", false,-1);
    tracep->declBit(c+112,"empty", false,-1);
    tracep->declBit(c+113,"full", false,-1);
    tracep->declBit(c+1200,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+109,"R0_addr", false,-1);
    tracep->declBit(c+1304,"R0_en", false,-1);
    tracep->declBit(c+1242,"R0_clk", false,-1);
    tracep->declBus(c+114,"R0_data", false,-1, 5,0);
    tracep->declBit(c+108,"W0_addr", false,-1);
    tracep->declBit(c+1200,"W0_en", false,-1);
    tracep->declBit(c+1242,"W0_clk", false,-1);
    tracep->declBus(c+552,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+115+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+117,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+84,"io_enq_ready", false,-1);
    tracep->declBit(c+1199,"io_enq_valid", false,-1);
    tracep->declBus(c+85,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1271,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1051,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1272,"io_deq_ready", false,-1);
    tracep->declBit(c+103,"io_deq_valid", false,-1);
    tracep->declBus(c+104,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+105,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+106,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+107,"io_deq_bits_last", false,-1);
    tracep->declBit(c+118,"wrap", false,-1);
    tracep->declBit(c+119,"wrap_1", false,-1);
    tracep->declBit(c+120,"maybe_full", false,-1);
    tracep->declBit(c+121,"ptr_match", false,-1);
    tracep->declBit(c+122,"empty", false,-1);
    tracep->declBit(c+123,"full", false,-1);
    tracep->declBit(c+1201,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+119,"R0_addr", false,-1);
    tracep->declBit(c+1304,"R0_en", false,-1);
    tracep->declBit(c+1242,"R0_clk", false,-1);
    tracep->declQuad(c+124,"R0_data", false,-1, 38,0);
    tracep->declBit(c+118,"W0_addr", false,-1);
    tracep->declBit(c+1201,"W0_en", false,-1);
    tracep->declBit(c+1242,"W0_clk", false,-1);
    tracep->declQuad(c+1273,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+126+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+130,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+102,"io_enq_ready", false,-1);
    tracep->declBit(c+900,"io_enq_valid", false,-1);
    tracep->declBus(c+901,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+902,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+903,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+904,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+78,"io_deq_ready", false,-1);
    tracep->declBit(c+79,"io_deq_valid", false,-1);
    tracep->declBus(c+80,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+81,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+82,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+83,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+131,"wrap", false,-1);
    tracep->declBit(c+132,"wrap_1", false,-1);
    tracep->declBit(c+133,"maybe_full", false,-1);
    tracep->declBit(c+134,"ptr_match", false,-1);
    tracep->declBit(c+135,"empty", false,-1);
    tracep->declBit(c+136,"full", false,-1);
    tracep->declBit(c+905,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+132,"R0_addr", false,-1);
    tracep->declBit(c+1304,"R0_en", false,-1);
    tracep->declBit(c+1242,"R0_clk", false,-1);
    tracep->declQuad(c+137,"R0_data", false,-1, 46,0);
    tracep->declBit(c+131,"W0_addr", false,-1);
    tracep->declBit(c+905,"W0_en", false,-1);
    tracep->declBit(c+1242,"W0_clk", false,-1);
    tracep->declQuad(c+906,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+139+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+143,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+94,"io_enq_ready", false,-1);
    tracep->declBit(c+894,"io_enq_valid", false,-1);
    tracep->declBus(c+95,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+895,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+96,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+97,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+67,"io_deq_ready", false,-1);
    tracep->declBit(c+68,"io_deq_valid", false,-1);
    tracep->declBus(c+69,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+70,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+71,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+72,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+144,"wrap", false,-1);
    tracep->declBit(c+145,"wrap_1", false,-1);
    tracep->declBit(c+146,"maybe_full", false,-1);
    tracep->declBit(c+147,"ptr_match", false,-1);
    tracep->declBit(c+148,"empty", false,-1);
    tracep->declBit(c+149,"full", false,-1);
    tracep->declBit(c+908,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+145,"R0_addr", false,-1);
    tracep->declBit(c+1304,"R0_en", false,-1);
    tracep->declBit(c+1242,"R0_clk", false,-1);
    tracep->declQuad(c+150,"R0_data", false,-1, 46,0);
    tracep->declBit(c+144,"W0_addr", false,-1);
    tracep->declBit(c+908,"W0_en", false,-1);
    tracep->declBit(c+1242,"W0_clk", false,-1);
    tracep->declQuad(c+493,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+152+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+156,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+98,"io_enq_ready", false,-1);
    tracep->declBit(c+896,"io_enq_valid", false,-1);
    tracep->declBus(c+897,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+898,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+899,"io_enq_bits_last", false,-1);
    tracep->declBit(c+67,"io_deq_ready", false,-1);
    tracep->declBit(c+73,"io_deq_valid", false,-1);
    tracep->declBus(c+74,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+75,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+157,"wrap", false,-1);
    tracep->declBit(c+158,"wrap_1", false,-1);
    tracep->declBit(c+159,"maybe_full", false,-1);
    tracep->declBit(c+160,"ptr_match", false,-1);
    tracep->declBit(c+161,"empty", false,-1);
    tracep->declBit(c+162,"full", false,-1);
    tracep->declBit(c+909,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+158,"R0_addr", false,-1);
    tracep->declBit(c+1304,"R0_en", false,-1);
    tracep->declBit(c+1242,"R0_clk", false,-1);
    tracep->declQuad(c+163,"R0_data", false,-1, 35,0);
    tracep->declBit(c+157,"W0_addr", false,-1);
    tracep->declBit(c+909,"W0_en", false,-1);
    tracep->declBit(c+1242,"W0_clk", false,-1);
    tracep->declQuad(c+910,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+165+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+169,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+170,"auto_in_awready", false,-1);
    tracep->declBit(c+792,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1305,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1307,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+171,"auto_in_wready", false,-1);
    tracep->declBit(c+794,"auto_in_wvalid", false,-1);
    tracep->declBus(c+795,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+796,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+797,"auto_in_wlast", false,-1);
    tracep->declBit(c+1275,"auto_in_bready", false,-1);
    tracep->declBit(c+172,"auto_in_bvalid", false,-1);
    tracep->declBus(c+173,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_in_arready", false,-1);
    tracep->declBit(c+798,"auto_in_arvalid", false,-1);
    tracep->declBus(c+799,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+800,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+802,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+803,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+804,"auto_in_rready", false,-1);
    tracep->declBit(c+176,"auto_in_rvalid", false,-1);
    tracep->declBus(c+177,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+180,"auto_in_rlast", false,-1);
    tracep->declBit(c+912,"auto_out_awready", false,-1);
    tracep->declBit(c+913,"auto_out_awvalid", false,-1);
    tracep->declBus(c+95,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+895,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+97,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+181,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+914,"auto_out_wready", false,-1);
    tracep->declBit(c+915,"auto_out_wvalid", false,-1);
    tracep->declBus(c+897,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+898,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+899,"auto_out_wlast", false,-1);
    tracep->declBit(c+916,"auto_out_bready", false,-1);
    tracep->declBit(c+182,"auto_out_bvalid", false,-1);
    tracep->declBus(c+173,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+183,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+184,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+917,"auto_out_arready", false,-1);
    tracep->declBit(c+918,"auto_out_arvalid", false,-1);
    tracep->declBus(c+901,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+904,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+919,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+804,"auto_out_rready", false,-1);
    tracep->declBit(c+176,"auto_out_rvalid", false,-1);
    tracep->declBus(c+177,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+179,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+185,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+186,"auto_out_rlast", false,-1);
    tracep->declBit(c+915,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+187,"w_idle", false,-1);
    tracep->declBit(c+920,"in_awready", false,-1);
    tracep->declBit(c+188,"busy", false,-1);
    tracep->declBus(c+189,"r_addr", false,-1, 31,0);
    tracep->declBus(c+190,"r_len", false,-1, 7,0);
    tracep->declBus(c+921,"len", false,-1, 7,0);
    tracep->declBus(c+922,"addr", false,-1, 31,0);
    tracep->declBit(c+191,"busy_1", false,-1);
    tracep->declBus(c+192,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+193,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+194,"len_1", false,-1, 7,0);
    tracep->declBus(c+923,"addr_1", false,-1, 31,0);
    tracep->declBit(c+195,"wbeats_latched", false,-1);
    tracep->declBit(c+913,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+924,"wbeats_valid", false,-1);
    tracep->declBus(c+196,"w_counter", false,-1, 8,0);
    tracep->declBus(c+925,"w_todo", false,-1, 8,0);
    tracep->declBit(c+899,"w_last", false,-1);
    tracep->declBit(c+916,"nodeOut_bready", false,-1);
    tracep->declBus(c+197,"error_0", false,-1, 1,0);
    tracep->declBus(c+198,"error_1", false,-1, 1,0);
    tracep->declBus(c+199,"error_2", false,-1, 1,0);
    tracep->declBus(c+200,"error_3", false,-1, 1,0);
    tracep->declBus(c+201,"error_4", false,-1, 1,0);
    tracep->declBus(c+202,"error_5", false,-1, 1,0);
    tracep->declBus(c+203,"error_6", false,-1, 1,0);
    tracep->declBus(c+204,"error_7", false,-1, 1,0);
    tracep->declBus(c+205,"error_8", false,-1, 1,0);
    tracep->declBus(c+206,"error_9", false,-1, 1,0);
    tracep->declBus(c+207,"error_10", false,-1, 1,0);
    tracep->declBus(c+208,"error_11", false,-1, 1,0);
    tracep->declBus(c+209,"error_12", false,-1, 1,0);
    tracep->declBus(c+210,"error_13", false,-1, 1,0);
    tracep->declBus(c+211,"error_14", false,-1, 1,0);
    tracep->declBus(c+212,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+798,"io_enq_valid", false,-1);
    tracep->declBus(c+799,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+800,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+801,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+802,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+803,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+926,"io_deq_ready", false,-1);
    tracep->declBit(c+918,"io_deq_valid", false,-1);
    tracep->declBus(c+901,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+927,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+928,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+903,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+904,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+213,"ram", false,-1, 48,0);
    tracep->declBit(c+215,"full", false,-1);
    tracep->declBit(c+918,"io_deq_valid_0", false,-1);
    tracep->declBit(c+929,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+170,"io_enq_ready", false,-1);
    tracep->declBit(c+792,"io_enq_valid", false,-1);
    tracep->declBus(c+1305,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+793,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1306,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1307,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1308,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+930,"io_deq_ready", false,-1);
    tracep->declBit(c+931,"io_deq_valid", false,-1);
    tracep->declBus(c+95,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+932,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+216,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+96,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+97,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+217,"ram", false,-1, 48,0);
    tracep->declBit(c+219,"full", false,-1);
    tracep->declBit(c+931,"io_deq_valid_0", false,-1);
    tracep->declBit(c+933,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+794,"io_enq_valid", false,-1);
    tracep->declBus(c+795,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+796,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+797,"io_enq_bits_last", false,-1);
    tracep->declBit(c+934,"io_deq_ready", false,-1);
    tracep->declBit(c+935,"io_deq_valid", false,-1);
    tracep->declBus(c+897,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+898,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1276,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+220,"ram", false,-1, 36,0);
    tracep->declBit(c+222,"full", false,-1);
    tracep->declBit(c+935,"io_deq_valid_0", false,-1);
    tracep->declBit(c+936,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+937,"auto_in_awready", false,-1);
    tracep->declBit(c+938,"auto_in_awvalid", false,-1);
    tracep->declBus(c+95,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+939,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+940,"auto_in_wready", false,-1);
    tracep->declBit(c+941,"auto_in_wvalid", false,-1);
    tracep->declBus(c+897,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+898,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+942,"auto_in_bready", false,-1);
    tracep->declBit(c+223,"auto_in_bvalid", false,-1);
    tracep->declBus(c+224,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+943,"auto_in_arready", false,-1);
    tracep->declBit(c+944,"auto_in_arvalid", false,-1);
    tracep->declBus(c+901,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+946,"auto_in_rready", false,-1);
    tracep->declBit(c+226,"auto_in_rvalid", false,-1);
    tracep->declBus(c+227,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+943,"nodeIn_arready", false,-1);
    tracep->declBit(c+937,"nodeIn_awready", false,-1);
    tracep->declBit(c+947,"w_sel0", false,-1);
    tracep->declBit(c+223,"w_full", false,-1);
    tracep->declBus(c+224,"w_id", false,-1, 3,0);
    tracep->declBit(c+230,"r_sel1", false,-1);
    tracep->declBit(c+231,"w_sel1", false,-1);
    tracep->declBit(c+226,"r_full", false,-1);
    tracep->declBus(c+227,"r_id", false,-1, 3,0);
    tracep->declBit(c+948,"ren", false,-1);
    tracep->declBit(c+232,"rdata_REG", false,-1);
    tracep->declBus(c+233,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+234,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+235,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+236,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+949,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+948,"R0_en", false,-1);
    tracep->declBit(c+1242,"R0_clk", false,-1);
    tracep->declBus(c+237,"R0_data", false,-1, 31,0);
    tracep->declBus(c+950,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+951,"W0_en", false,-1);
    tracep->declBit(c+1242,"W0_clk", false,-1);
    tracep->declBus(c+897,"W0_data", false,-1, 31,0);
    tracep->declBus(c+898,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+170,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+792,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1305,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1307,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+171,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+794,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+795,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+796,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+797,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1275,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+172,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+173,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+798,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+799,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+800,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+802,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+803,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+804,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+176,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+180,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+170,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+792,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1305,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1307,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+171,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+794,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+795,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+796,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+797,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1275,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+172,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+173,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+798,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+799,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+800,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+802,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+803,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+804,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+176,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+180,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+952,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+953,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+95,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+895,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+97,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+914,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+915,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+897,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+898,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+899,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+916,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+182,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+173,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+183,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+954,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+955,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+901,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+904,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+804,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+176,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+179,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+186,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+937,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+938,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+95,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+939,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+940,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+941,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+897,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+898,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+942,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+223,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+224,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+943,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+944,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+901,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+946,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+226,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+227,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+956,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+957,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+238,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+958,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+901,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+959,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1277,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+239,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+240,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+241,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+94,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+894,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+95,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+895,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+97,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+98,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+896,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+897,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+898,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+899,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+492,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+99,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+100,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+102,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+900,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+901,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+904,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1272,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+103,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+104,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+105,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+106,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+107,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+182,"in_0_bvalid", false,-1);
    tracep->declBit(c+176,"in_0_rvalid", false,-1);
    tracep->declBit(c+960,"in_0_wready", false,-1);
    tracep->declBit(c+961,"in_0_awready", false,-1);
    tracep->declBit(c+954,"in_0_arready", false,-1);
    tracep->declBit(c+952,"anonIn_awready", false,-1);
    tracep->declBit(c+962,"requestARIO_0_0", false,-1);
    tracep->declBit(c+963,"requestARIO_0_1", false,-1);
    tracep->declBit(c+964,"requestARIO_0_2", false,-1);
    tracep->declBit(c+965,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+966,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+967,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+968,"arSel", false,-1, 15,0);
    tracep->declBus(c+242,"awSel", false,-1, 15,0);
    tracep->declBus(c+243,"rSel", false,-1, 15,0);
    tracep->declBus(c+244,"bSel", false,-1, 15,0);
    tracep->declBit(c+245,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+246,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+247,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+248,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+249,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+250,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+251,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+252,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+253,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+254,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+255,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+256,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+257,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+258,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+259,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+260,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+261,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+262,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+263,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+264,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+265,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+266,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+267,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+268,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+269,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+270,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+271,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+272,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+273,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+274,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+275,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+276,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+277,"latched", false,-1);
    tracep->declBit(c+969,"in_0_awvalid", false,-1);
    tracep->declBit(c+970,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+971,"in_0_wvalid", false,-1);
    tracep->declBit(c+278,"idle_3", false,-1);
    tracep->declBit(c+279,"anyValid", false,-1);
    tracep->declBus(c+280,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+281,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+282,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+283,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+284,"prefixOR_1", false,-1);
    tracep->declBit(c+285,"winner_3_1", false,-1);
    tracep->declBit(c+286,"winner_3_2", false,-1);
    tracep->declBit(c+287,"state_3_0", false,-1);
    tracep->declBit(c+288,"state_3_1", false,-1);
    tracep->declBit(c+289,"state_3_2", false,-1);
    tracep->declBit(c+290,"muxState_3_0", false,-1);
    tracep->declBit(c+291,"muxState_3_1", false,-1);
    tracep->declBit(c+292,"muxState_3_2", false,-1);
    tracep->declBit(c+293,"idle_4", false,-1);
    tracep->declBit(c+294,"anyValid_1", false,-1);
    tracep->declBus(c+295,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+296,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+297,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+298,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+299,"winner_4_0", false,-1);
    tracep->declBit(c+300,"winner_4_2", false,-1);
    tracep->declBit(c+301,"state_4_0", false,-1);
    tracep->declBit(c+302,"state_4_2", false,-1);
    tracep->declBit(c+303,"muxState_4_0", false,-1);
    tracep->declBit(c+304,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+970,"io_enq_valid", false,-1);
    tracep->declBus(c+972,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+973,"io_deq_ready", false,-1);
    tracep->declBit(c+974,"io_deq_valid", false,-1);
    tracep->declBus(c+975,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+306,"wrap", false,-1);
    tracep->declBit(c+307,"wrap_1", false,-1);
    tracep->declBit(c+308,"maybe_full", false,-1);
    tracep->declBit(c+309,"ptr_match", false,-1);
    tracep->declBit(c+310,"empty", false,-1);
    tracep->declBit(c+311,"full", false,-1);
    tracep->declBit(c+974,"io_deq_valid_0", false,-1);
    tracep->declBit(c+976,"do_deq", false,-1);
    tracep->declBit(c+977,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+307,"R0_addr", false,-1);
    tracep->declBit(c+1304,"R0_en", false,-1);
    tracep->declBit(c+1242,"R0_clk", false,-1);
    tracep->declBus(c+312,"R0_data", false,-1, 2,0);
    tracep->declBit(c+306,"W0_addr", false,-1);
    tracep->declBit(c+977,"W0_en", false,-1);
    tracep->declBit(c+1242,"W0_clk", false,-1);
    tracep->declBus(c+972,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+313+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+912,"auto_in_awready", false,-1);
    tracep->declBit(c+913,"auto_in_awvalid", false,-1);
    tracep->declBus(c+95,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+895,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+97,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+181,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+914,"auto_in_wready", false,-1);
    tracep->declBit(c+915,"auto_in_wvalid", false,-1);
    tracep->declBus(c+897,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+898,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+899,"auto_in_wlast", false,-1);
    tracep->declBit(c+916,"auto_in_bready", false,-1);
    tracep->declBit(c+182,"auto_in_bvalid", false,-1);
    tracep->declBus(c+173,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+183,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+184,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+917,"auto_in_arready", false,-1);
    tracep->declBit(c+918,"auto_in_arvalid", false,-1);
    tracep->declBus(c+901,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+904,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+919,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+804,"auto_in_rready", false,-1);
    tracep->declBit(c+176,"auto_in_rvalid", false,-1);
    tracep->declBus(c+177,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+185,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+186,"auto_in_rlast", false,-1);
    tracep->declBit(c+952,"auto_out_awready", false,-1);
    tracep->declBit(c+953,"auto_out_awvalid", false,-1);
    tracep->declBus(c+95,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+895,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+97,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+914,"auto_out_wready", false,-1);
    tracep->declBit(c+915,"auto_out_wvalid", false,-1);
    tracep->declBus(c+897,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+898,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+899,"auto_out_wlast", false,-1);
    tracep->declBit(c+916,"auto_out_bready", false,-1);
    tracep->declBit(c+182,"auto_out_bvalid", false,-1);
    tracep->declBus(c+173,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+183,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+954,"auto_out_arready", false,-1);
    tracep->declBit(c+955,"auto_out_arvalid", false,-1);
    tracep->declBus(c+901,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+904,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+804,"auto_out_rready", false,-1);
    tracep->declBit(c+176,"auto_out_rvalid", false,-1);
    tracep->declBus(c+177,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+179,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+186,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+978,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+495,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+979,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+496,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+980,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+497,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+981,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+498,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+982,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+499,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+335,"io_enq_ready", false,-1);
    tracep->declBit(c+983,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+500,"io_deq_ready", false,-1);
    tracep->declBit(c+336,"io_deq_valid", false,-1);
    tracep->declBit(c+337,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->declBit(c+337,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+338,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+984,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+501,"io_deq_ready", false,-1);
    tracep->declBit(c+340,"io_deq_valid", false,-1);
    tracep->declBit(c+341,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->declBit(c+341,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+985,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+502,"io_deq_ready", false,-1);
    tracep->declBit(c+344,"io_deq_valid", false,-1);
    tracep->declBit(c+345,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+344,"full", false,-1);
    tracep->declBit(c+345,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+346,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+503,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+504,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+505,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+506,"io_deq_ready", false,-1);
    tracep->declBit(c+352,"io_deq_valid", false,-1);
    tracep->declBit(c+353,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"full", false,-1);
    tracep->declBit(c+353,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+354,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+355,"io_enq_ready", false,-1);
    tracep->declBit(c+507,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+508,"io_deq_ready", false,-1);
    tracep->declBit(c+356,"io_deq_valid", false,-1);
    tracep->declBit(c+357,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBit(c+357,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+358,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+359,"io_enq_ready", false,-1);
    tracep->declBit(c+509,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+510,"io_deq_ready", false,-1);
    tracep->declBit(c+360,"io_deq_valid", false,-1);
    tracep->declBit(c+361,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+360,"full", false,-1);
    tracep->declBit(c+361,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+362,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+363,"io_enq_ready", false,-1);
    tracep->declBit(c+986,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+511,"io_deq_ready", false,-1);
    tracep->declBit(c+364,"io_deq_valid", false,-1);
    tracep->declBit(c+365,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+364,"full", false,-1);
    tracep->declBit(c+365,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+366,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
    tracep->declBit(c+512,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+513,"io_deq_ready", false,-1);
    tracep->declBit(c+368,"io_deq_valid", false,-1);
    tracep->declBit(c+369,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+368,"full", false,-1);
    tracep->declBit(c+369,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+370,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+371,"io_enq_ready", false,-1);
    tracep->declBit(c+514,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+515,"io_deq_ready", false,-1);
    tracep->declBit(c+372,"io_deq_valid", false,-1);
    tracep->declBit(c+373,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+373,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+374,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+375,"io_enq_ready", false,-1);
    tracep->declBit(c+516,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+517,"io_deq_ready", false,-1);
    tracep->declBit(c+376,"io_deq_valid", false,-1);
    tracep->declBit(c+377,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"full", false,-1);
    tracep->declBit(c+377,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+378,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+379,"io_enq_ready", false,-1);
    tracep->declBit(c+518,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+519,"io_deq_ready", false,-1);
    tracep->declBit(c+380,"io_deq_valid", false,-1);
    tracep->declBit(c+381,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"full", false,-1);
    tracep->declBit(c+381,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+382,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+383,"io_enq_ready", false,-1);
    tracep->declBit(c+520,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+521,"io_deq_ready", false,-1);
    tracep->declBit(c+384,"io_deq_valid", false,-1);
    tracep->declBit(c+385,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+384,"full", false,-1);
    tracep->declBit(c+385,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+386,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+387,"io_enq_ready", false,-1);
    tracep->declBit(c+522,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+523,"io_deq_ready", false,-1);
    tracep->declBit(c+388,"io_deq_valid", false,-1);
    tracep->declBit(c+389,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+388,"full", false,-1);
    tracep->declBit(c+389,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+390,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+391,"io_enq_ready", false,-1);
    tracep->declBit(c+524,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+525,"io_deq_ready", false,-1);
    tracep->declBit(c+392,"io_deq_valid", false,-1);
    tracep->declBit(c+393,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+392,"full", false,-1);
    tracep->declBit(c+393,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+394,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+395,"io_enq_ready", false,-1);
    tracep->declBit(c+526,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+527,"io_deq_ready", false,-1);
    tracep->declBit(c+396,"io_deq_valid", false,-1);
    tracep->declBit(c+397,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+396,"full", false,-1);
    tracep->declBit(c+397,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+398,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+399,"io_enq_ready", false,-1);
    tracep->declBit(c+528,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+529,"io_deq_ready", false,-1);
    tracep->declBit(c+400,"io_deq_valid", false,-1);
    tracep->declBit(c+401,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+400,"full", false,-1);
    tracep->declBit(c+401,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+402,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+403,"io_enq_ready", false,-1);
    tracep->declBit(c+530,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+531,"io_deq_ready", false,-1);
    tracep->declBit(c+404,"io_deq_valid", false,-1);
    tracep->declBit(c+405,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+404,"full", false,-1);
    tracep->declBit(c+405,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+406,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+407,"io_enq_ready", false,-1);
    tracep->declBit(c+987,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+532,"io_deq_ready", false,-1);
    tracep->declBit(c+408,"io_deq_valid", false,-1);
    tracep->declBit(c+409,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+408,"full", false,-1);
    tracep->declBit(c+409,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+410,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+411,"io_enq_ready", false,-1);
    tracep->declBit(c+533,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+534,"io_deq_ready", false,-1);
    tracep->declBit(c+412,"io_deq_valid", false,-1);
    tracep->declBit(c+413,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+412,"full", false,-1);
    tracep->declBit(c+413,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+414,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+415,"io_enq_ready", false,-1);
    tracep->declBit(c+535,"io_enq_valid", false,-1);
    tracep->declBit(c+181,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+536,"io_deq_ready", false,-1);
    tracep->declBit(c+416,"io_deq_valid", false,-1);
    tracep->declBit(c+417,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+416,"full", false,-1);
    tracep->declBit(c+417,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+418,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+419,"io_enq_ready", false,-1);
    tracep->declBit(c+988,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+537,"io_deq_ready", false,-1);
    tracep->declBit(c+420,"io_deq_valid", false,-1);
    tracep->declBit(c+421,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+420,"full", false,-1);
    tracep->declBit(c+421,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+422,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+423,"io_enq_ready", false,-1);
    tracep->declBit(c+989,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+538,"io_deq_ready", false,-1);
    tracep->declBit(c+424,"io_deq_valid", false,-1);
    tracep->declBit(c+425,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+424,"full", false,-1);
    tracep->declBit(c+425,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+426,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+427,"io_enq_ready", false,-1);
    tracep->declBit(c+990,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+539,"io_deq_ready", false,-1);
    tracep->declBit(c+428,"io_deq_valid", false,-1);
    tracep->declBit(c+429,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+428,"full", false,-1);
    tracep->declBit(c+429,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+430,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+431,"io_enq_ready", false,-1);
    tracep->declBit(c+991,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+540,"io_deq_ready", false,-1);
    tracep->declBit(c+432,"io_deq_valid", false,-1);
    tracep->declBit(c+433,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+432,"full", false,-1);
    tracep->declBit(c+433,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+434,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+435,"io_enq_ready", false,-1);
    tracep->declBit(c+992,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+541,"io_deq_ready", false,-1);
    tracep->declBit(c+436,"io_deq_valid", false,-1);
    tracep->declBit(c+437,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+436,"full", false,-1);
    tracep->declBit(c+437,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+438,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+439,"io_enq_ready", false,-1);
    tracep->declBit(c+993,"io_enq_valid", false,-1);
    tracep->declBit(c+919,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+542,"io_deq_ready", false,-1);
    tracep->declBit(c+440,"io_deq_valid", false,-1);
    tracep->declBit(c+441,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+440,"full", false,-1);
    tracep->declBit(c+441,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+442,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1278,"reset", false,-1);
    tracep->declBit(c+170,"auto_master_out_awready", false,-1);
    tracep->declBit(c+792,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1305,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1307,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+171,"auto_master_out_wready", false,-1);
    tracep->declBit(c+794,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+795,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+796,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+797,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1275,"auto_master_out_bready", false,-1);
    tracep->declBit(c+172,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+173,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_master_out_arready", false,-1);
    tracep->declBit(c+798,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+799,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+800,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+801,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+802,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+803,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+804,"auto_master_out_rready", false,-1);
    tracep->declBit(c+176,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+177,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+179,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+180,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1278,"reset", false,-1);
    tracep->declBit(c+1294,"io_interrupt", false,-1);
    tracep->declBit(c+170,"io_master_awready", false,-1);
    tracep->declBit(c+792,"io_master_awvalid", false,-1);
    tracep->declBus(c+793,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1305,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1307,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1308,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+171,"io_master_wready", false,-1);
    tracep->declBit(c+794,"io_master_wvalid", false,-1);
    tracep->declBus(c+795,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+796,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+797,"io_master_wlast", false,-1);
    tracep->declBit(c+1275,"io_master_bready", false,-1);
    tracep->declBit(c+172,"io_master_bvalid", false,-1);
    tracep->declBus(c+174,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+173,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+175,"io_master_arready", false,-1);
    tracep->declBit(c+798,"io_master_arvalid", false,-1);
    tracep->declBus(c+800,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+799,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+801,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+802,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+803,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+804,"io_master_rready", false,-1);
    tracep->declBit(c+176,"io_master_rvalid", false,-1);
    tracep->declBus(c+179,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+178,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+180,"io_master_rlast", false,-1);
    tracep->declBus(c+177,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1309,"io_slave_awready", false,-1);
    tracep->declBit(c+1294,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1310,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1305,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1307,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1308,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1311,"io_slave_wready", false,-1);
    tracep->declBit(c+1294,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1310,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1305,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"io_slave_wlast", false,-1);
    tracep->declBit(c+1294,"io_slave_bready", false,-1);
    tracep->declBit(c+1312,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1313,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1314,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1315,"io_slave_arready", false,-1);
    tracep->declBit(c+1294,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1310,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1305,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1307,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1308,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1294,"io_slave_rready", false,-1);
    tracep->declBit(c+1316,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1317,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1318,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1319,"io_slave_rlast", false,-1);
    tracep->declBus(c+1320,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+7,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+8,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+805,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+806,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+9,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+7,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+8,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+10,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+11,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+12,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1305,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1321,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1308,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+13,"ifu_arvalid", false,-1);
    tracep->declBit(c+994,"ifu_arready", false,-1);
    tracep->declBus(c+995,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+996,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+997,"ifu_rlast", false,-1);
    tracep->declBus(c+998,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+999,"ifu_rvalid", false,-1);
    tracep->declBit(c+14,"ifu_rready", false,-1);
    tracep->declBit(c+1322,"useless1", false,-1);
    tracep->declBit(c+1323,"useless2", false,-1);
    tracep->declBit(c+1324,"useless3", false,-1);
    tracep->declBit(c+1325,"useless4", false,-1);
    tracep->declBus(c+807,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1305,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1307,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1308,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+808,"lsu_arvalid", false,-1);
    tracep->declBit(c+1000,"lsu_arready", false,-1);
    tracep->declBus(c+1001,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1002,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1003,"lsu_rlast", false,-1);
    tracep->declBus(c+1004,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1005,"lsu_rvalid", false,-1);
    tracep->declBit(c+809,"lsu_rready", false,-1);
    tracep->declBus(c+807,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1305,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1307,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1308,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+810,"lsu_awvalid", false,-1);
    tracep->declBit(c+1006,"lsu_awready", false,-1);
    tracep->declBus(c+811,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+812,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1304,"lsu_wlast", false,-1);
    tracep->declBit(c+813,"lsu_wvalid", false,-1);
    tracep->declBit(c+1007,"lsu_wready", false,-1);
    tracep->declBus(c+1008,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1009,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1010,"lsu_bvalid", false,-1);
    tracep->declBit(c+814,"lsu_bready", false,-1);
    tracep->declBus(c+815,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1305,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+15,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1308,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+816,"axi_arvalid", false,-1);
    tracep->declBit(c+1011,"axi_arready", false,-1);
    tracep->declBus(c+1012,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1013,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1014,"axi_rlast", false,-1);
    tracep->declBus(c+1015,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+1016,"axi_rvalid", false,-1);
    tracep->declBit(c+817,"axi_rready", false,-1);
    tracep->declBus(c+793,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1305,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1307,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1308,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+792,"axi_awvalid", false,-1);
    tracep->declBit(c+170,"axi_awready", false,-1);
    tracep->declBus(c+795,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+796,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+797,"axi_wlast", false,-1);
    tracep->declBit(c+794,"axi_wvalid", false,-1);
    tracep->declBit(c+171,"axi_wready", false,-1);
    tracep->declBus(c+174,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+173,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+172,"axi_bvalid", false,-1);
    tracep->declBit(c+1275,"axi_bready", false,-1);
    tracep->declBus(c+818,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+16,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+17,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+18,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+19,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+819,"clint_arvalid", false,-1);
    tracep->declBit(c+20,"clint_arready", false,-1);
    tracep->declBus(c+21,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+22,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+23,"clint_rlast", false,-1);
    tracep->declBus(c+1305,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+24,"clint_rvalid", false,-1);
    tracep->declBit(c+820,"clint_rready", false,-1);
    tracep->declBus(c+1326,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1327,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1328,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1329,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1330,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1331,"clint_awvalid", false,-1);
    tracep->declBit(c+25,"clint_awready", false,-1);
    tracep->declBus(c+1332,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1333,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1334,"clint_wlast", false,-1);
    tracep->declBit(c+1335,"clint_wvalid", false,-1);
    tracep->declBit(c+26,"clint_wready", false,-1);
    tracep->declBus(c+27,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1305,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+28,"clint_bvalid", false,-1);
    tracep->declBit(c+1336,"clint_bready", false,-1);
    tracep->declBus(c+1216,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1217,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1280,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1281,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1053,"a5", false,-1, 31,0);
    tracep->declBus(c+1218,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1280,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1281,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1219,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1282,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1220,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1221,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1222,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1223,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1224,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1225,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1226,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1227,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1228,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1229,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1230,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1231,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1232,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1233,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1234,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+29,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+821,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1235,"csr_write", false,-1);
    tracep->declBus(c+1236,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1054+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+822,"wdata", false,-1, 31,0);
    tracep->declBus(c+823,"waddr", false,-1, 4,0);
    tracep->declBit(c+824,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1058+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+825,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+826,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+827,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+828,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+829,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+830,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+831,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+832,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+833,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+834,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+835,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+836,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+837,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+838,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+839,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+840,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+807,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+841,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+842,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1001,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+843,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+844,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+845,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+846,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+847,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+848,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+849,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+850,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+851,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+12,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1305,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1306,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1321,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1308,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+13,"arvalid_i_a", false,-1);
    tracep->declBit(c+994,"arready_o_a", false,-1);
    tracep->declBus(c+995,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+996,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+997,"rlast_o_a", false,-1);
    tracep->declBus(c+998,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+999,"rvalid_o_a", false,-1);
    tracep->declBit(c+14,"rready_i_a", false,-1);
    tracep->declBus(c+1337,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1305,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1306,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1307,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1308,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1294,"awvalid_i_a", false,-1);
    tracep->declBit(c+1017,"awready_o_a", false,-1);
    tracep->declBus(c+1337,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1305,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1294,"wlast_i_a", false,-1);
    tracep->declBit(c+1294,"wvalid_i_a", false,-1);
    tracep->declBit(c+1018,"wready_o_a", false,-1);
    tracep->declBus(c+1019,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1020,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1021,"bvalid_o_a", false,-1);
    tracep->declBit(c+1294,"bready_i_a", false,-1);
    tracep->declBus(c+807,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1305,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1306,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1307,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1308,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+808,"arvalid_i_b", false,-1);
    tracep->declBit(c+1000,"arready_o_b", false,-1);
    tracep->declBus(c+1001,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+1002,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+1003,"rlast_o_b", false,-1);
    tracep->declBus(c+1004,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+1005,"rvalid_o_b", false,-1);
    tracep->declBit(c+809,"rready_i_b", false,-1);
    tracep->declBus(c+807,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1305,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1306,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1307,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1308,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+810,"awvalid_i_b", false,-1);
    tracep->declBit(c+1006,"awready_o_b", false,-1);
    tracep->declBus(c+811,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+812,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1304,"wlast_i_b", false,-1);
    tracep->declBit(c+813,"wvalid_i_b", false,-1);
    tracep->declBit(c+1007,"wready_o_b", false,-1);
    tracep->declBus(c+1008,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1009,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1010,"bvalid_o_b", false,-1);
    tracep->declBit(c+814,"bready_i_b", false,-1);
    tracep->declBus(c+815,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1305,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1306,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+15,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1308,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+816,"arvalid_o", false,-1);
    tracep->declBit(c+1011,"arready_i", false,-1);
    tracep->declBus(c+1012,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1013,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1014,"rlast_i", false,-1);
    tracep->declBus(c+1015,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1016,"rvalid_i", false,-1);
    tracep->declBit(c+817,"rready_o", false,-1);
    tracep->declBus(c+793,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1305,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1306,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1307,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1308,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+792,"awvalid_o", false,-1);
    tracep->declBit(c+170,"awready_i", false,-1);
    tracep->declBus(c+795,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+796,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+797,"wlast_o", false,-1);
    tracep->declBit(c+794,"wvalid_o", false,-1);
    tracep->declBit(c+171,"wready_i", false,-1);
    tracep->declBus(c+174,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+173,"bid_i", false,-1, 3,0);
    tracep->declBit(c+172,"bvalid_i", false,-1);
    tracep->declBit(c+1275,"bready_o", false,-1);
    tracep->declBit(c+30,"ar_switch", false,-1);
    tracep->declBit(c+31,"r_switch", false,-1);
    tracep->declBit(c+32,"aw_switch", false,-1);
    tracep->declBit(c+797,"w_switch", false,-1);
    tracep->declBit(c+33,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+818,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+16,"arid_i", false,-1, 3,0);
    tracep->declBus(c+17,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+18,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+19,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+819,"arvalid_i", false,-1);
    tracep->declBit(c+20,"arready_o", false,-1);
    tracep->declBus(c+21,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+22,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+23,"rlast_o", false,-1);
    tracep->declBus(c+1305,"rid_o", false,-1, 3,0);
    tracep->declBit(c+24,"rvalid_o", false,-1);
    tracep->declBit(c+820,"rready_i", false,-1);
    tracep->declBus(c+1326,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1327,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1328,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1329,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1330,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1331,"awvalid_i", false,-1);
    tracep->declBit(c+25,"awready_o", false,-1);
    tracep->declBus(c+1332,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1333,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1334,"wlast_i", false,-1);
    tracep->declBit(c+1335,"wvalid_i", false,-1);
    tracep->declBit(c+26,"wready_o", false,-1);
    tracep->declBus(c+27,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1305,"bid_o", false,-1, 3,0);
    tracep->declBit(c+28,"bvalid_o", false,-1);
    tracep->declBit(c+1336,"bready_i", false,-1);
    tracep->declBit(c+34,"ar_state", false,-1);
    tracep->declBit(c+35,"r_state", false,-1);
    tracep->declBit(c+36,"aw_state", false,-1);
    tracep->declBit(c+37,"w_state", false,-1);
    tracep->declBit(c+1338,"b_state", false,-1);
    tracep->declBus(c+38,"araddr", false,-1, 31,0);
    tracep->declBus(c+39,"awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"wdata", false,-1, 31,0);
    tracep->declBus(c+41,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1339,"wvalid", false,-1);
    tracep->declBit(c+42,"flag_waddr", false,-1);
    tracep->declBit(c+43,"flag_wdata", false,-1);
    tracep->declBit(c+44,"flag_rdata", false,-1);
    tracep->declBit(c+45,"flag_raddr", false,-1);
    tracep->declBit(c+1340,"flag_write", false,-1);
    tracep->declBus(c+46,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+47,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+48,"w_delay", false,-1, 4,0);
    tracep->declBus(c+49,"r_delay", false,-1, 4,0);
    tracep->declBus(c+50,"LFSR", false,-1, 4,0);
    tracep->declBit(c+51,"lfsr_in", false,-1);
    tracep->declBus(c+52,"write_box", false,-1, 1,0);
    tracep->declQuad(c+53,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+1218,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1280,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1281,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1219,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1282,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1220,"a_in_src_i", false,-1);
    tracep->declBus(c+1221,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1222,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1223,"adder_a_src_i", false,-1);
    tracep->declBit(c+1224,"adder_out_src_i", false,-1);
    tracep->declBus(c+1225,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1226,"MemRead_i", false,-1);
    tracep->declBit(c+1227,"MemWrite_i", false,-1);
    tracep->declBus(c+1228,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1229,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1230,"wb_src_i", false,-1);
    tracep->declBit(c+1231,"csr_write_i", false,-1);
    tracep->declBit(c+1232,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1233,"reg_write_i", false,-1);
    tracep->declBus(c+1234,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+29,"exu_valid_i", false,-1);
    tracep->declBit(c+821,"exu_ready_o", false,-1);
    tracep->declBus(c+825,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+826,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+827,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+828,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+829,"npc_o", false,-1, 31,0);
    tracep->declBit(c+830,"MemRead_o", false,-1);
    tracep->declBit(c+831,"MemWrite_o", false,-1);
    tracep->declBus(c+832,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+833,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+834,"wb_src_o", false,-1);
    tracep->declBit(c+835,"csr_write_o", false,-1);
    tracep->declBit(c+836,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+837,"reg_write_o", false,-1);
    tracep->declBus(c+838,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+839,"exu_valid_o", false,-1);
    tracep->declBit(c+840,"exu_ready_i", false,-1);
    tracep->declBus(c+852,"pc", false,-1, 31,0);
    tracep->declBus(c+826,"rs1", false,-1, 31,0);
    tracep->declBus(c+827,"rs2", false,-1, 31,0);
    tracep->declBus(c+853,"imm", false,-1, 31,0);
    tracep->declBus(c+854,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+855,"a_in_src", false,-1);
    tracep->declBus(c+856,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+857,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+858,"adder_a_src", false,-1);
    tracep->declBit(c+859,"adder_out_src", false,-1);
    tracep->declBus(c+860,"alu_op", false,-1, 3,0);
    tracep->declBus(c+861,"a_in", false,-1, 31,0);
    tracep->declBus(c+862,"b_in", false,-1, 31,0);
    tracep->declBus(c+863,"a_out", false,-1, 31,0);
    tracep->declBus(c+864,"add_out", false,-1, 31,0);
    tracep->declBus(c+865,"pc_new", false,-1, 31,0);
    tracep->declBus(c+825,"alu_result", false,-1, 31,0);
    tracep->declBus(c+829,"npc", false,-1, 31,0);
    tracep->declBit(c+866,"zero", false,-1);
    tracep->declBus(c+1308,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1341,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1342,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+867,"current_state", false,-1, 1,0);
    tracep->declBus(c+868,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+861,"a", false,-1, 31,0);
    tracep->declBus(c+862,"b", false,-1, 31,0);
    tracep->declBus(c+860,"op", false,-1, 3,0);
    tracep->declBus(c+825,"alu_result", false,-1, 31,0);
    tracep->declBit(c+866,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1343,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+826,"d0", false,-1, 31,0);
    tracep->declBus(c+852,"d1", false,-1, 31,0);
    tracep->declBit(c+855,"sel", false,-1);
    tracep->declBus(c+861,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1343,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+827,"d0", false,-1, 31,0);
    tracep->declBus(c+853,"d1", false,-1, 31,0);
    tracep->declBus(c+1344,"d2", false,-1, 31,0);
    tracep->declBus(c+854,"d3", false,-1, 31,0);
    tracep->declBus(c+856,"sel", false,-1, 1,0);
    tracep->declBus(c+862,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+863,"a", false,-1, 31,0);
    tracep->declBus(c+853,"b", false,-1, 31,0);
    tracep->declBus(c+864,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1343,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+852,"d0", false,-1, 31,0);
    tracep->declBus(c+826,"d1", false,-1, 31,0);
    tracep->declBit(c+858,"sel", false,-1);
    tracep->declBus(c+863,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1343,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+864,"d0", false,-1, 31,0);
    tracep->declBus(c+854,"d1", false,-1, 31,0);
    tracep->declBit(c+859,"sel", false,-1);
    tracep->declBus(c+865,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+869,"pc4", false,-1, 31,0);
    tracep->declBus(c+865,"pc_new", false,-1, 31,0);
    tracep->declBus(c+857,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+866,"zero", false,-1);
    tracep->declBus(c+825,"alu_result", false,-1, 31,0);
    tracep->declBus(c+829,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+1216,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1217,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1280,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1281,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1053,"a5", false,-1, 31,0);
    tracep->declBus(c+7,"pc_i", false,-1, 31,0);
    tracep->declBus(c+8,"inst_i", false,-1, 31,0);
    tracep->declBit(c+10,"idu_valid_i", false,-1);
    tracep->declBit(c+11,"idu_ready_o", false,-1);
    tracep->declBus(c+1218,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1280,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1281,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1219,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1282,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1220,"a_in_src_o", false,-1);
    tracep->declBus(c+1221,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1222,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1223,"adder_a_src_o", false,-1);
    tracep->declBit(c+1224,"adder_out_src_o", false,-1);
    tracep->declBus(c+1225,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1226,"MemRead_o", false,-1);
    tracep->declBit(c+1227,"MemWrite_o", false,-1);
    tracep->declBus(c+1228,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1229,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1230,"wb_src_o", false,-1);
    tracep->declBit(c+1231,"csr_write_o", false,-1);
    tracep->declBit(c+1232,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1233,"reg_write_o", false,-1);
    tracep->declBus(c+1234,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+29,"idu_valid_o", false,-1);
    tracep->declBit(c+821,"idu_ready_i", false,-1);
    tracep->declBit(c+1235,"csr_write_i", false,-1);
    tracep->declBus(c+1236,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1090+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1218,"pc", false,-1, 31,0);
    tracep->declBus(c+1237,"inst", false,-1, 31,0);
    tracep->declBus(c+1238,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1308,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1341,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1342,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+55,"current_state", false,-1, 1,0);
    tracep->declBus(c+870,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1237,"inst", false,-1, 31,0);
    tracep->declBus(c+1225,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1239,"opcode", false,-1, 6,0);
    tracep->declBus(c+1240,"funct3", false,-1, 2,0);
    tracep->declBus(c+1241,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1235,"wen", false,-1);
    tracep->declBus(c+1237,"inst", false,-1, 31,0);
    tracep->declBus(c+1236,"wdata", false,-1, 31,0);
    tracep->declBus(c+1053,"NO", false,-1, 31,0);
    tracep->declBus(c+1218,"pc", false,-1, 31,0);
    tracep->declBus(c+1282,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1094+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1098,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1099,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1100,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1101,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1239,"opcode", false,-1, 6,0);
    tracep->declBus(c+1240,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1237,"inst", false,-1, 31,0);
    tracep->declBit(c+1220,"a_in_src", false,-1);
    tracep->declBus(c+1221,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1233,"reg_write", false,-1);
    tracep->declBus(c+1222,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1223,"adder_a_src", false,-1);
    tracep->declBit(c+1226,"MemRead", false,-1);
    tracep->declBit(c+1227,"MemWrite", false,-1);
    tracep->declBus(c+1238,"wmask", false,-1, 7,0);
    tracep->declBit(c+1230,"wb_src", false,-1);
    tracep->declBus(c+1229,"rmask", false,-1, 2,0);
    tracep->declBit(c+1231,"csr_write", false,-1);
    tracep->declBit(c+1224,"adder_out_src", false,-1);
    tracep->declBit(c+1232,"csr_wdata_src", false,-1);
    tracep->declBus(c+1239,"opcode", false,-1, 6,0);
    tracep->declBus(c+1240,"funct3", false,-1, 2,0);
    tracep->declBus(c+1241,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1343,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1237,"inst", false,-1, 31,0);
    tracep->declBus(c+1219,"data", false,-1, 31,0);
    tracep->declBus(c+1239,"opcode", false,-1, 6,0);
    tracep->declBus(c+1240,"funct3", false,-1, 2,0);
    tracep->declBus(c+1241,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+12,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1305,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1306,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1321,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1308,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+13,"arvalid_o", false,-1);
    tracep->declBit(c+994,"arready_i", false,-1);
    tracep->declBus(c+995,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+996,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+997,"rlast_i", false,-1);
    tracep->declBus(c+998,"rid_i", false,-1, 3,0);
    tracep->declBit(c+999,"rvalid_i", false,-1);
    tracep->declBit(c+14,"rready_o", false,-1);
    tracep->declBus(c+805,"npc_i", false,-1, 31,0);
    tracep->declBit(c+806,"ifu_valid_i", false,-1);
    tracep->declBit(c+9,"ifu_ready_o", false,-1);
    tracep->declBus(c+7,"pc_o", false,-1, 31,0);
    tracep->declBus(c+8,"inst_o", false,-1, 31,0);
    tracep->declBit(c+10,"ifu_valid_o", false,-1);
    tracep->declBit(c+11,"ifu_ready_i", false,-1);
    tracep->declBus(c+443,"pc", false,-1, 31,0);
    tracep->declBus(c+871,"npc", false,-1, 31,0);
    tracep->declBus(c+1345,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1346,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1347,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1348,"lfsr_in", false,-1);
    tracep->declBit(c+13,"arvalid", false,-1);
    tracep->declBus(c+12,"araddr", false,-1, 31,0);
    tracep->declBus(c+1349,"inst", false,-1, 31,0);
    tracep->declBit(c+14,"rready", false,-1);
    tracep->declBus(c+1350,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1351+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1383,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1307,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1293,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1321,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1384,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1385,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+56,"current_state", false,-1, 2,0);
    tracep->declBus(c+872,"next_state", false,-1, 2,0);
    tracep->declBus(c+57,"receive_counter", false,-1, 1,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+1343,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1386,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+871,"din", false,-1, 31,0);
    tracep->declBus(c+443,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+825,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+826,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+827,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+828,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+829,"npc_i", false,-1, 31,0);
    tracep->declBit(c+830,"MemRead_i", false,-1);
    tracep->declBit(c+831,"MemWrite_i", false,-1);
    tracep->declBus(c+832,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+833,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+834,"wb_src_i", false,-1);
    tracep->declBit(c+835,"csr_write_i", false,-1);
    tracep->declBit(c+836,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+837,"reg_write_i", false,-1);
    tracep->declBus(c+838,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+839,"lsu_valid_i", false,-1);
    tracep->declBit(c+840,"lsu_ready_o", false,-1);
    tracep->declBus(c+807,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+841,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+842,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1001,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+843,"npc_o", false,-1, 31,0);
    tracep->declBus(c+844,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+845,"wb_src_o", false,-1);
    tracep->declBit(c+846,"csr_write_o", false,-1);
    tracep->declBit(c+847,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+848,"reg_write_o", false,-1);
    tracep->declBus(c+849,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+850,"lsu_valid_o", false,-1);
    tracep->declBit(c+851,"lsu_ready_i", false,-1);
    tracep->declBus(c+807,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1305,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1306,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1307,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1308,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+808,"arvalid_o", false,-1);
    tracep->declBit(c+1000,"arready_i", false,-1);
    tracep->declBus(c+1001,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1002,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1003,"rlast_i", false,-1);
    tracep->declBus(c+1004,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1005,"rvalid_i", false,-1);
    tracep->declBit(c+809,"rready_o", false,-1);
    tracep->declBus(c+807,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1305,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1306,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1307,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1308,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+810,"awvalid_o", false,-1);
    tracep->declBit(c+1006,"awready_i", false,-1);
    tracep->declBus(c+811,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+812,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1304,"wlast_o", false,-1);
    tracep->declBit(c+813,"wvalid_o", false,-1);
    tracep->declBit(c+1007,"wready_i", false,-1);
    tracep->declBus(c+1008,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1009,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1010,"bvalid_i", false,-1);
    tracep->declBit(c+814,"bready_o", false,-1);
    tracep->declBus(c+807,"alu_result", false,-1, 31,0);
    tracep->declBus(c+841,"rs1", false,-1, 31,0);
    tracep->declBus(c+1387,"rs2", false,-1, 31,0);
    tracep->declBus(c+1388,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+844,"rmask", false,-1, 2,0);
    tracep->declBit(c+58,"flag", false,-1);
    tracep->declBit(c+1389,"wvalid_tmp", false,-1);
    tracep->declBus(c+1390,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1391,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1392,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1393,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1394,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1395,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1396,"lfsr_in", false,-1);
    tracep->declBit(c+808,"arvalid", false,-1);
    tracep->declBus(c+807,"araddr", false,-1, 31,0);
    tracep->declBit(c+809,"rready", false,-1);
    tracep->declBus(c+807,"awaddr", false,-1, 31,0);
    tracep->declBit(c+810,"awvalid", false,-1);
    tracep->declBus(c+811,"wdata", false,-1, 31,0);
    tracep->declBus(c+812,"wstrb", false,-1, 3,0);
    tracep->declBit(c+813,"wvalid", false,-1);
    tracep->declBit(c+814,"bready", false,-1);
    tracep->declBus(c+1397,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1398+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1430,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1431,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1432+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1464,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1465+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1497+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1529,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1308,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1341,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1342,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1530,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+873,"current_state", false,-1, 1,0);
    tracep->declBus(c+874,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1531,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1343,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBus(c+822,"wdata", false,-1, 31,0);
    tracep->declBus(c+823,"waddr", false,-1, 4,0);
    tracep->declBit(c+824,"wen", false,-1);
    tracep->declBus(c+1216,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1280,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1217,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1281,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1053,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1102+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1134+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+807,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+841,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+842,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1001,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+843,"npc_i", false,-1, 31,0);
    tracep->declBus(c+844,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+845,"wb_src_i", false,-1);
    tracep->declBit(c+846,"csr_write_i", false,-1);
    tracep->declBit(c+847,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+848,"reg_write_i", false,-1);
    tracep->declBus(c+849,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+850,"wbu_valid_i", false,-1);
    tracep->declBit(c+851,"wbu_ready_o", false,-1);
    tracep->declBus(c+805,"npc_o", false,-1, 31,0);
    tracep->declBit(c+806,"wbu_valid_o", false,-1);
    tracep->declBit(c+9,"wbu_ready_i", false,-1);
    tracep->declBus(c+1236,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+822,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1235,"csr_write_o", false,-1);
    tracep->declBit(c+824,"reg_write_o", false,-1);
    tracep->declBus(c+823,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+875,"mem_data", false,-1, 31,0);
    tracep->declBus(c+876,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+877,"alu_result", false,-1, 31,0);
    tracep->declBus(c+878,"rs1", false,-1, 31,0);
    tracep->declBus(c+879,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+880,"rmask", false,-1, 2,0);
    tracep->declBit(c+881,"wb_src", false,-1);
    tracep->declBit(c+882,"csr_wdata_src", false,-1);
    tracep->declBus(c+1308,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1341,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1342,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+883,"current_state", false,-1, 1,0);
    tracep->declBus(c+884,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1343,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+878,"d0", false,-1, 31,0);
    tracep->declBus(c+879,"d1", false,-1, 31,0);
    tracep->declBit(c+882,"sel", false,-1);
    tracep->declBus(c+1236,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+876,"read_data", false,-1, 31,0);
    tracep->declBus(c+885,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+880,"rmask", false,-1, 2,0);
    tracep->declBus(c+875,"mem_data", false,-1, 31,0);
    tracep->declBus(c+886,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+887,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+888,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+889,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+890,"byte3", false,-1, 31,0);
    tracep->declBus(c+891,"byte2", false,-1, 31,0);
    tracep->declBus(c+892,"byte1", false,-1, 31,0);
    tracep->declBus(c+893,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1343,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+877,"d0", false,-1, 31,0);
    tracep->declBus(c+875,"d1", false,-1, 31,0);
    tracep->declBit(c+881,"sel", false,-1);
    tracep->declBus(c+822,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1279,"rst_n", false,-1);
    tracep->declBus(c+815,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1305,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1306,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+15,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1308,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+816,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1011,"axi_arready_o", false,-1);
    tracep->declBus(c+1012,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1013,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1014,"axi_rlast_o", false,-1);
    tracep->declBus(c+1015,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1016,"axi_rvalid_o", false,-1);
    tracep->declBit(c+817,"axi_rready_i", false,-1);
    tracep->declBus(c+793,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1305,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1306,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1307,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1308,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+792,"axi_awvalid_i", false,-1);
    tracep->declBit(c+170,"axi_awready_o", false,-1);
    tracep->declBus(c+795,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+796,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+797,"axi_wlast_i", false,-1);
    tracep->declBit(c+794,"axi_wvalid_i", false,-1);
    tracep->declBit(c+171,"axi_wready_o", false,-1);
    tracep->declBus(c+174,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+173,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+172,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1275,"axi_bready_i", false,-1);
    tracep->declBus(c+800,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+799,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+801,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+802,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+803,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+798,"sram_arvalid_o", false,-1);
    tracep->declBit(c+175,"sram_arready_i", false,-1);
    tracep->declBus(c+178,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+179,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+180,"sram_rlast_i", false,-1);
    tracep->declBus(c+177,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+176,"sram_rvalid_i", false,-1);
    tracep->declBit(c+804,"sram_rready_o", false,-1);
    tracep->declBus(c+793,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1305,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1306,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1307,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1308,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+792,"sram_awvalid_o", false,-1);
    tracep->declBit(c+170,"sram_awready_i", false,-1);
    tracep->declBus(c+795,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+796,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+797,"sram_wlast_o", false,-1);
    tracep->declBit(c+794,"sram_wvalid_o", false,-1);
    tracep->declBit(c+171,"sram_wready_i", false,-1);
    tracep->declBus(c+174,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+173,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+172,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1275,"sram_bready_o", false,-1);
    tracep->declBus(c+818,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+16,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+17,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+18,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+19,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+819,"clint_arvalid_o", false,-1);
    tracep->declBit(c+20,"clint_arready_i", false,-1);
    tracep->declBus(c+21,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+22,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+23,"clint_rlast_i", false,-1);
    tracep->declBus(c+1305,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+24,"clint_rvalid_i", false,-1);
    tracep->declBit(c+820,"clint_rready_o", false,-1);
    tracep->declBus(c+1326,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1327,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1328,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1329,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1330,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1331,"clint_awvalid_o", false,-1);
    tracep->declBit(c+25,"clint_awready_i", false,-1);
    tracep->declBus(c+1332,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1333,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1334,"clint_wlast_o", false,-1);
    tracep->declBit(c+1335,"clint_wvalid_o", false,-1);
    tracep->declBit(c+26,"clint_wready_i", false,-1);
    tracep->declBus(c+27,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1305,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+28,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1336,"clint_bready_o", false,-1);
    tracep->declBit(c+59,"ar_switch", false,-1);
    tracep->declBit(c+60,"r_switch", false,-1);
    tracep->declBit(c+61,"aw_switch", false,-1);
    tracep->declBit(c+62,"w_switch", false,-1);
    tracep->declBit(c+63,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"io_d", false,-1);
    tracep->declBit(c+444,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"io_d", false,-1);
    tracep->declBit(c+444,"io_q", false,-1);
    tracep->declBit(c+444,"sync_0", false,-1);
    tracep->declBit(c+445,"sync_1", false,-1);
    tracep->declBit(c+446,"sync_2", false,-1);
    tracep->declBit(c+447,"sync_3", false,-1);
    tracep->declBit(c+448,"sync_4", false,-1);
    tracep->declBit(c+449,"sync_5", false,-1);
    tracep->declBit(c+450,"sync_6", false,-1);
    tracep->declBit(c+451,"sync_7", false,-1);
    tracep->declBit(c+452,"sync_8", false,-1);
    tracep->declBit(c+453,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+549,"auto_in_psel", false,-1);
    tracep->declBit(c+550,"auto_in_penable", false,-1);
    tracep->declBit(c+1032,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1037,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1293,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_in_pready", false,-1);
    tracep->declBit(c+1302,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1303,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1244,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1245,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1246,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1247,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1248,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1249,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1250,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1251,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1252,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1253,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1166,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+549,"in_psel", false,-1);
    tracep->declBit(c+550,"in_penable", false,-1);
    tracep->declBus(c+1293,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1032,"in_pwrite", false,-1);
    tracep->declBus(c+1033,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"in_pready", false,-1);
    tracep->declBus(c+1303,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1302,"in_pslverr", false,-1);
    tracep->declBus(c+1244,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1245,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1246,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1247,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1248,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1249,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1250,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1251,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1252,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1253,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+547,"auto_in_psel", false,-1);
    tracep->declBit(c+548,"auto_in_penable", false,-1);
    tracep->declBit(c+1032,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1037,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1293,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1298,"auto_in_pready", false,-1);
    tracep->declBit(c+1299,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1300,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1254,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1255,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1166,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+547,"in_psel", false,-1);
    tracep->declBit(c+548,"in_penable", false,-1);
    tracep->declBus(c+1293,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1032,"in_pwrite", false,-1);
    tracep->declBus(c+1033,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1298,"in_pready", false,-1);
    tracep->declBus(c+1300,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1299,"in_pslverr", false,-1);
    tracep->declBit(c+1254,"ps2_clk", false,-1);
    tracep->declBit(c+1255,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+956,"auto_in_awvalid", false,-1);
    tracep->declBit(c+957,"auto_in_wvalid", false,-1);
    tracep->declBit(c+238,"auto_in_arready", false,-1);
    tracep->declBit(c+958,"auto_in_arvalid", false,-1);
    tracep->declBus(c+901,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+959,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1277,"auto_in_rready", false,-1);
    tracep->declBit(c+239,"auto_in_rvalid", false,-1);
    tracep->declBus(c+240,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+241,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+239,"state", false,-1);
    tracep->declBus(c+241,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+240,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1022,"raddr", false,-1, 31,0);
    tracep->declBit(c+1023,"ren", false,-1);
    tracep->declBus(c+1024,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+1038,"auto_in_psel", false,-1);
    tracep->declBit(c+551,"auto_in_penable", false,-1);
    tracep->declBit(c+1032,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1031,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1269,"auto_in_pready", false,-1);
    tracep->declBit(c+1294,"auto_in_pslverr", false,-1);
    tracep->declBus(c+66,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1266,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1267,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1195,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1031,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1038,"in_psel", false,-1);
    tracep->declBit(c+551,"in_penable", false,-1);
    tracep->declBus(c+1293,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1032,"in_pwrite", false,-1);
    tracep->declBus(c+1033,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1269,"in_pready", false,-1);
    tracep->declBus(c+66,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1294,"in_pslverr", false,-1);
    tracep->declBit(c+1266,"qspi_sck", false,-1);
    tracep->declBit(c+1267,"qspi_ce_n", false,-1);
    tracep->declBus(c+1195,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1195,"din", false,-1, 3,0);
    tracep->declBus(c+1202,"dout", false,-1, 3,0);
    tracep->declBus(c+1203,"douten", false,-1, 3,0);
    tracep->declBit(c+1283,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1242,"clk_i", false,-1);
    tracep->declBit(c+1243,"rst_i", false,-1);
    tracep->declBus(c+1031,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1033,"dat_i", false,-1, 31,0);
    tracep->declBus(c+66,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1034,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1038,"cyc_i", false,-1);
    tracep->declBit(c+1038,"stb_i", false,-1);
    tracep->declBit(c+1283,"ack_o", false,-1);
    tracep->declBit(c+1032,"we_i", false,-1);
    tracep->declBit(c+1266,"sck", false,-1);
    tracep->declBit(c+1267,"ce_n", false,-1);
    tracep->declBus(c+1195,"din", false,-1, 3,0);
    tracep->declBus(c+1202,"dout", false,-1, 3,0);
    tracep->declBus(c+1203,"douten", false,-1, 3,0);
    tracep->declBus(c+1532,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1533,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+568,"mr_sck", false,-1);
    tracep->declBit(c+569,"mr_ce_n", false,-1);
    tracep->declBus(c+1195,"mr_din", false,-1, 3,0);
    tracep->declBus(c+570,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+571,"mr_doe", false,-1);
    tracep->declBit(c+572,"mw_sck", false,-1);
    tracep->declBit(c+573,"mw_ce_n", false,-1);
    tracep->declBus(c+1195,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1204,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+574,"mw_doe", false,-1);
    tracep->declBit(c+1205,"mr_rd", false,-1);
    tracep->declBit(c+575,"mr_done", false,-1);
    tracep->declBit(c+1206,"mw_wr", false,-1);
    tracep->declBit(c+1207,"mw_done", false,-1);
    tracep->declBit(c+1038,"wb_valid", false,-1);
    tracep->declBit(c+1167,"wb_we", false,-1);
    tracep->declBit(c+1168,"wb_re", false,-1);
    tracep->declBit(c+576,"state", false,-1);
    tracep->declBit(c+1208,"nstate", false,-1);
    tracep->declBus(c+1169,"size", false,-1, 2,0);
    tracep->declBus(c+1170,"byte0", false,-1, 7,0);
    tracep->declBus(c+1171,"byte1", false,-1, 7,0);
    tracep->declBus(c+1172,"byte2", false,-1, 7,0);
    tracep->declBus(c+1173,"byte3", false,-1, 7,0);
    tracep->declBus(c+1174,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1284,"rst_n", false,-1);
    tracep->declBus(c+1175,"addr", false,-1, 23,0);
    tracep->declBit(c+1205,"rd", false,-1);
    tracep->declBus(c+1385,"size", false,-1, 2,0);
    tracep->declBit(c+575,"done", false,-1);
    tracep->declBus(c+66,"line", false,-1, 31,0);
    tracep->declBit(c+568,"sck", false,-1);
    tracep->declBit(c+569,"ce_n", false,-1);
    tracep->declBus(c+1195,"din", false,-1, 3,0);
    tracep->declBus(c+570,"dout", false,-1, 3,0);
    tracep->declBit(c+571,"douten", false,-1);
    tracep->declBus(c+1532,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1533,"READ", false,-1, 0,0);
    tracep->declBus(c+1534,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+577,"state", false,-1);
    tracep->declBit(c+1209,"nstate", false,-1);
    tracep->declBus(c+578,"counter", false,-1, 7,0);
    tracep->declBus(c+579,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+454+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1535,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+580,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1284,"rst_n", false,-1);
    tracep->declBus(c+1176,"addr", false,-1, 23,0);
    tracep->declBus(c+1174,"line", false,-1, 31,0);
    tracep->declBus(c+1169,"size", false,-1, 2,0);
    tracep->declBit(c+1206,"wr", false,-1);
    tracep->declBit(c+1207,"done", false,-1);
    tracep->declBit(c+572,"sck", false,-1);
    tracep->declBit(c+573,"ce_n", false,-1);
    tracep->declBus(c+1195,"din", false,-1, 3,0);
    tracep->declBus(c+1204,"dout", false,-1, 3,0);
    tracep->declBit(c+574,"douten", false,-1);
    tracep->declBus(c+1532,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1533,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1177,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+581,"state", false,-1);
    tracep->declBit(c+1210,"nstate", false,-1);
    tracep->declBus(c+582,"counter", false,-1, 7,0);
    tracep->declBus(c+583,"saddr", false,-1, 23,0);
    tracep->declBus(c+1536,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+543,"auto_in_psel", false,-1);
    tracep->declBit(c+544,"auto_in_penable", false,-1);
    tracep->declBit(c+1032,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1031,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+564,"auto_in_pready", false,-1);
    tracep->declBit(c+1294,"auto_in_pslverr", false,-1);
    tracep->declBus(c+565,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1268,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+555,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+556,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+557,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+558,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+559,"sdram_bundle_we", false,-1);
    tracep->declBus(c+560,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+561,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+562,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+563,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1031,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+543,"in_psel", false,-1);
    tracep->declBit(c+544,"in_penable", false,-1);
    tracep->declBus(c+1293,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1032,"in_pwrite", false,-1);
    tracep->declBus(c+1033,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+564,"in_pready", false,-1);
    tracep->declBus(c+565,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1294,"in_pslverr", false,-1);
    tracep->declBit(c+1268,"sdram_clk", false,-1);
    tracep->declBit(c+555,"sdram_cke", false,-1);
    tracep->declBit(c+556,"sdram_cs", false,-1);
    tracep->declBit(c+557,"sdram_ras", false,-1);
    tracep->declBit(c+558,"sdram_cas", false,-1);
    tracep->declBit(c+559,"sdram_we", false,-1);
    tracep->declBus(c+560,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+561,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+562,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+563,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+584,"sdram_dout_en", false,-1);
    tracep->declBus(c+585,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+458,"state", false,-1, 1,0);
    tracep->declBit(c+586,"req_accept", false,-1);
    tracep->declBit(c+1178,"is_read", false,-1);
    tracep->declBit(c+1179,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1242,"clk_i", false,-1);
    tracep->declBit(c+1243,"rst_i", false,-1);
    tracep->declBus(c+1180,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1178,"inport_rd_i", false,-1);
    tracep->declBus(c+1306,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1031,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1033,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+563,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+586,"inport_accept_o", false,-1);
    tracep->declBit(c+564,"inport_ack_o", false,-1);
    tracep->declBit(c+1294,"inport_error_o", false,-1);
    tracep->declBus(c+565,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1268,"sdram_clk_o", false,-1);
    tracep->declBit(c+555,"sdram_cke_o", false,-1);
    tracep->declBit(c+556,"sdram_cs_o", false,-1);
    tracep->declBit(c+557,"sdram_ras_o", false,-1);
    tracep->declBit(c+558,"sdram_cas_o", false,-1);
    tracep->declBit(c+559,"sdram_we_o", false,-1);
    tracep->declBus(c+562,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+560,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+561,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+585,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+584,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1537,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1538,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1539,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1540,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1540,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1540,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1541,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1542,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1543,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1544,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1545,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1541,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1546,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1547,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1548,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1549,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1550,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1551,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1552,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1305,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1553,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1541,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1305,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1552,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1551,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1547,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1549,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1548,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1550,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1546,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1554,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1555,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1556,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1556,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1557,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1556,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1540,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1540,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1558,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1031,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1180,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1178,"ram_rd_w", false,-1);
    tracep->declBit(c+586,"ram_accept_w", false,-1);
    tracep->declBus(c+1033,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+565,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+564,"ram_ack_w", false,-1);
    tracep->declBit(c+1181,"ram_req_w", false,-1);
    tracep->declBus(c+587,"command_q", false,-1, 3,0);
    tracep->declBus(c+560,"addr_q", false,-1, 12,0);
    tracep->declBus(c+585,"data_q", false,-1, 15,0);
    tracep->declBit(c+588,"data_rd_en_q", false,-1);
    tracep->declBus(c+562,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+555,"cke_q", false,-1);
    tracep->declBus(c+561,"bank_q", false,-1, 1,0);
    tracep->declBus(c+589,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+590,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+563,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+591,"refresh_q", false,-1);
    tracep->declBus(c+592,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+593+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+597,"state_q", false,-1, 3,0);
    tracep->declBus(c+1211,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1212,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+598,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+599,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1182,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1183,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1184,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1541,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+600,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1213,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1559,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+601,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+602,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+603,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+604,"idx", false,-1, 31,0);
    tracep->declBus(c+605,"rd_q", false,-1, 3,0);
    tracep->declBit(c+564,"ack_q", false,-1);
    tracep->declArray(c+606,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+1042,"auto_in_psel", false,-1);
    tracep->declBit(c+1043,"auto_in_penable", false,-1);
    tracep->declBit(c+1032,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1293,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+566,"auto_in_pready", false,-1);
    tracep->declBit(c+1294,"auto_in_pslverr", false,-1);
    tracep->declBus(c+567,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+553,"spi_bundle_sck", false,-1);
    tracep->declBus(c+554,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1264,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1265,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1560,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1561,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1562,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1185,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1042,"in_psel", false,-1);
    tracep->declBit(c+1043,"in_penable", false,-1);
    tracep->declBus(c+1293,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1032,"in_pwrite", false,-1);
    tracep->declBus(c+1033,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+566,"in_pready", false,-1);
    tracep->declBus(c+567,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1294,"in_pslverr", false,-1);
    tracep->declBit(c+553,"spi_sck", false,-1);
    tracep->declBus(c+554,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1264,"spi_mosi", false,-1);
    tracep->declBit(c+1265,"spi_miso", false,-1);
    tracep->declBit(c+609,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1563,"Tp", false,-1, 31,0);
    tracep->declBit(c+1242,"wb_clk_i", false,-1);
    tracep->declBit(c+1243,"wb_rst_i", false,-1);
    tracep->declBus(c+1186,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1033,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+567,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1034,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1032,"wb_we_i", false,-1);
    tracep->declBit(c+1042,"wb_stb_i", false,-1);
    tracep->declBit(c+1043,"wb_cyc_i", false,-1);
    tracep->declBit(c+566,"wb_ack_o", false,-1);
    tracep->declBit(c+1294,"wb_err_o", false,-1);
    tracep->declBit(c+609,"wb_int_o", false,-1);
    tracep->declBus(c+554,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+553,"sclk_pad_o", false,-1);
    tracep->declBit(c+1264,"mosi_pad_o", false,-1);
    tracep->declBit(c+1265,"miso_pad_i", false,-1);
    tracep->declBus(c+610,"divider", false,-1, 15,0);
    tracep->declBus(c+611,"ctrl", false,-1, 13,0);
    tracep->declBus(c+612,"ss", false,-1, 7,0);
    tracep->declBus(c+1214,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+613,"rx", false,-1, 127,0);
    tracep->declBit(c+617,"rx_negedge", false,-1);
    tracep->declBit(c+618,"tx_negedge", false,-1);
    tracep->declBus(c+619,"char_len", false,-1, 6,0);
    tracep->declBit(c+620,"go", false,-1);
    tracep->declBit(c+621,"lsb", false,-1);
    tracep->declBit(c+622,"ie", false,-1);
    tracep->declBit(c+623,"ass", false,-1);
    tracep->declBit(c+1187,"spi_divider_sel", false,-1);
    tracep->declBit(c+1188,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1189,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1190,"spi_ss_sel", false,-1);
    tracep->declBit(c+624,"tip", false,-1);
    tracep->declBit(c+625,"pos_edge", false,-1);
    tracep->declBit(c+626,"neg_edge", false,-1);
    tracep->declBit(c+627,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1563,"Tp", false,-1, 31,0);
    tracep->declBit(c+1242,"clk_in", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBit(c+624,"enable", false,-1);
    tracep->declBit(c+620,"go", false,-1);
    tracep->declBit(c+627,"last_clk", false,-1);
    tracep->declBus(c+610,"divider", false,-1, 15,0);
    tracep->declBit(c+553,"clk_out", false,-1);
    tracep->declBit(c+625,"pos_edge", false,-1);
    tracep->declBit(c+626,"neg_edge", false,-1);
    tracep->declBus(c+628,"cnt", false,-1, 15,0);
    tracep->declBit(c+629,"cnt_zero", false,-1);
    tracep->declBit(c+630,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1563,"Tp", false,-1, 31,0);
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBus(c+1191,"latch", false,-1, 3,0);
    tracep->declBus(c+1034,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+619,"len", false,-1, 6,0);
    tracep->declBit(c+621,"lsb", false,-1);
    tracep->declBit(c+620,"go", false,-1);
    tracep->declBit(c+625,"pos_edge", false,-1);
    tracep->declBit(c+626,"neg_edge", false,-1);
    tracep->declBit(c+617,"rx_negedge", false,-1);
    tracep->declBit(c+618,"tx_negedge", false,-1);
    tracep->declBit(c+624,"tip", false,-1);
    tracep->declBit(c+627,"last", false,-1);
    tracep->declBus(c+1033,"p_in", false,-1, 31,0);
    tracep->declArray(c+613,"p_out", false,-1, 127,0);
    tracep->declBit(c+553,"s_clk", false,-1);
    tracep->declBit(c+1265,"s_in", false,-1);
    tracep->declBit(c+1264,"s_out", false,-1);
    tracep->declBus(c+631,"cnt", false,-1, 7,0);
    tracep->declArray(c+613,"data", false,-1, 127,0);
    tracep->declBus(c+632,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+633,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+634,"rx_clk", false,-1);
    tracep->declBit(c+635,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+1039,"auto_in_psel", false,-1);
    tracep->declBit(c+1040,"auto_in_penable", false,-1);
    tracep->declBit(c+1032,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1037,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1293,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1041,"auto_in_pready", false,-1);
    tracep->declBit(c+1294,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1270,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1262,"uart_rx", false,-1);
    tracep->declBit(c+1263,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1039,"in_psel", false,-1);
    tracep->declBit(c+1040,"in_penable", false,-1);
    tracep->declBus(c+1293,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1041,"in_pready", false,-1);
    tracep->declBit(c+1294,"in_pslverr", false,-1);
    tracep->declBus(c+1166,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1032,"in_pwrite", false,-1);
    tracep->declBus(c+1270,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1033,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1262,"uart_rx", false,-1);
    tracep->declBit(c+1263,"uart_tx", false,-1);
    tracep->declBit(c+636,"rtsn", false,-1);
    tracep->declBit(c+1294,"ctsn", false,-1);
    tracep->declBit(c+637,"dtr_pad_o", false,-1);
    tracep->declBit(c+1294,"dsr_pad_i", false,-1);
    tracep->declBit(c+1294,"ri_pad_i", false,-1);
    tracep->declBit(c+1294,"dcd_pad_i", false,-1);
    tracep->declBit(c+638,"interrupt", false,-1);
    tracep->declBit(c+1285,"reg_we", false,-1);
    tracep->declBit(c+1286,"reg_re", false,-1);
    tracep->declBus(c+1192,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1193,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+459,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1215,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+639,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1243,"wb_rst_i", false,-1);
    tracep->declBus(c+1192,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1194,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1215,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1285,"wb_we_i", false,-1);
    tracep->declBit(c+1286,"wb_re_i", false,-1);
    tracep->declBit(c+1263,"stx_pad_o", false,-1);
    tracep->declBit(c+1262,"srx_pad_i", false,-1);
    tracep->declBus(c+1554,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+639,"rts_pad_o", false,-1);
    tracep->declBit(c+637,"dtr_pad_o", false,-1);
    tracep->declBit(c+638,"int_o", false,-1);
    tracep->declBit(c+640,"enable", false,-1);
    tracep->declBit(c+641,"srx_pad", false,-1);
    tracep->declBus(c+642,"ier", false,-1, 3,0);
    tracep->declBus(c+643,"iir", false,-1, 3,0);
    tracep->declBus(c+644,"fcr", false,-1, 1,0);
    tracep->declBus(c+645,"mcr", false,-1, 4,0);
    tracep->declBus(c+646,"lcr", false,-1, 7,0);
    tracep->declBus(c+647,"msr", false,-1, 7,0);
    tracep->declBus(c+648,"dl", false,-1, 15,0);
    tracep->declBus(c+649,"scratch", false,-1, 7,0);
    tracep->declBit(c+650,"start_dlc", false,-1);
    tracep->declBit(c+651,"lsr_mask_d", false,-1);
    tracep->declBit(c+652,"msi_reset", false,-1);
    tracep->declBus(c+653,"dlc", false,-1, 15,0);
    tracep->declBus(c+654,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+655,"rx_reset", false,-1);
    tracep->declBit(c+656,"tx_reset", false,-1);
    tracep->declBit(c+657,"dlab", false,-1);
    tracep->declBit(c+1304,"cts_pad_i", false,-1);
    tracep->declBit(c+1294,"dsr_pad_i", false,-1);
    tracep->declBit(c+1294,"ri_pad_i", false,-1);
    tracep->declBit(c+1294,"dcd_pad_i", false,-1);
    tracep->declBit(c+658,"loopback", false,-1);
    tracep->declBit(c+1294,"cts", false,-1);
    tracep->declBit(c+1304,"dsr", false,-1);
    tracep->declBit(c+1304,"ri", false,-1);
    tracep->declBit(c+1304,"dcd", false,-1);
    tracep->declBit(c+659,"cts_c", false,-1);
    tracep->declBit(c+660,"dsr_c", false,-1);
    tracep->declBit(c+661,"ri_c", false,-1);
    tracep->declBit(c+662,"dcd_c", false,-1);
    tracep->declBus(c+663,"lsr", false,-1, 7,0);
    tracep->declBit(c+664,"lsr0", false,-1);
    tracep->declBit(c+665,"lsr1", false,-1);
    tracep->declBit(c+666,"lsr2", false,-1);
    tracep->declBit(c+667,"lsr3", false,-1);
    tracep->declBit(c+668,"lsr4", false,-1);
    tracep->declBit(c+669,"lsr5", false,-1);
    tracep->declBit(c+670,"lsr6", false,-1);
    tracep->declBit(c+671,"lsr7", false,-1);
    tracep->declBit(c+672,"lsr0r", false,-1);
    tracep->declBit(c+673,"lsr1r", false,-1);
    tracep->declBit(c+674,"lsr2r", false,-1);
    tracep->declBit(c+675,"lsr3r", false,-1);
    tracep->declBit(c+676,"lsr4r", false,-1);
    tracep->declBit(c+677,"lsr5r", false,-1);
    tracep->declBit(c+678,"lsr6r", false,-1);
    tracep->declBit(c+679,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+680,"rls_int", false,-1);
    tracep->declBit(c+681,"rda_int", false,-1);
    tracep->declBit(c+682,"ti_int", false,-1);
    tracep->declBit(c+683,"thre_int", false,-1);
    tracep->declBit(c+684,"ms_int", false,-1);
    tracep->declBit(c+685,"tf_push", false,-1);
    tracep->declBit(c+686,"rf_pop", false,-1);
    tracep->declBus(c+1287,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+687,"rf_error_bit", false,-1);
    tracep->declBit(c+665,"rf_overrun", false,-1);
    tracep->declBit(c+688,"rf_push_pulse", false,-1);
    tracep->declBus(c+689,"rf_count", false,-1, 4,0);
    tracep->declBus(c+690,"tf_count", false,-1, 4,0);
    tracep->declBus(c+691,"tstate", false,-1, 2,0);
    tracep->declBus(c+692,"rstate", false,-1, 3,0);
    tracep->declBus(c+693,"counter_t", false,-1, 9,0);
    tracep->declBit(c+694,"thre_set_en", false,-1);
    tracep->declBus(c+695,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+696,"block_value", false,-1, 7,0);
    tracep->declBit(c+697,"serial_out", false,-1);
    tracep->declBit(c+698,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+699,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+700,"lsr0_d", false,-1);
    tracep->declBit(c+701,"lsr1_d", false,-1);
    tracep->declBit(c+702,"lsr2_d", false,-1);
    tracep->declBit(c+703,"lsr3_d", false,-1);
    tracep->declBit(c+704,"lsr4_d", false,-1);
    tracep->declBit(c+705,"lsr5_d", false,-1);
    tracep->declBit(c+706,"lsr6_d", false,-1);
    tracep->declBit(c+707,"lsr7_d", false,-1);
    tracep->declBit(c+708,"rls_int_d", false,-1);
    tracep->declBit(c+709,"thre_int_d", false,-1);
    tracep->declBit(c+710,"ms_int_d", false,-1);
    tracep->declBit(c+711,"ti_int_d", false,-1);
    tracep->declBit(c+712,"rda_int_d", false,-1);
    tracep->declBit(c+713,"rls_int_rise", false,-1);
    tracep->declBit(c+714,"thre_int_rise", false,-1);
    tracep->declBit(c+715,"ms_int_rise", false,-1);
    tracep->declBit(c+716,"ti_int_rise", false,-1);
    tracep->declBit(c+717,"rda_int_rise", false,-1);
    tracep->declBit(c+718,"rls_int_pnd", false,-1);
    tracep->declBit(c+719,"rda_int_pnd", false,-1);
    tracep->declBit(c+720,"thre_int_pnd", false,-1);
    tracep->declBit(c+721,"ms_int_pnd", false,-1);
    tracep->declBit(c+722,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1563,"Tp", false,-1, 31,0);
    tracep->declBus(c+1563,"width", false,-1, 31,0);
    tracep->declBus(c+1533,"init_value", false,-1, 0,0);
    tracep->declBit(c+1243,"rst_i", false,-1);
    tracep->declBit(c+1242,"clk_i", false,-1);
    tracep->declBit(c+1294,"stage1_rst_i", false,-1);
    tracep->declBit(c+1304,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1262,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+641,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+723,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1243,"wb_rst_i", false,-1);
    tracep->declBus(c+646,"lcr", false,-1, 7,0);
    tracep->declBit(c+686,"rf_pop", false,-1);
    tracep->declBit(c+698,"srx_pad_i", false,-1);
    tracep->declBit(c+640,"enable", false,-1);
    tracep->declBit(c+655,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+693,"counter_t", false,-1, 9,0);
    tracep->declBus(c+689,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1287,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+665,"rf_overrun", false,-1);
    tracep->declBit(c+687,"rf_error_bit", false,-1);
    tracep->declBus(c+692,"rstate", false,-1, 3,0);
    tracep->declBit(c+688,"rf_push_pulse", false,-1);
    tracep->declBus(c+724,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+725,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+726,"rshift", false,-1, 7,0);
    tracep->declBit(c+727,"rparity", false,-1);
    tracep->declBit(c+728,"rparity_error", false,-1);
    tracep->declBit(c+729,"rframing_error", false,-1);
    tracep->declBit(c+730,"rbit_in", false,-1);
    tracep->declBit(c+731,"rparity_xor", false,-1);
    tracep->declBus(c+732,"counter_b", false,-1, 7,0);
    tracep->declBit(c+733,"rf_push_q", false,-1);
    tracep->declBus(c+734,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+735,"rf_push", false,-1);
    tracep->declBit(c+736,"break_error", false,-1);
    tracep->declBit(c+737,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+738,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+739,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+740,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1305,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1552,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1551,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1547,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1549,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1548,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1550,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1546,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1554,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1555,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1564,"sr_push", false,-1, 3,0);
    tracep->declBus(c+741,"toc_value", false,-1, 9,0);
    tracep->declBus(c+742,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1565,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1557,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1541,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1531,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1243,"wb_rst_i", false,-1);
    tracep->declBit(c+688,"push", false,-1);
    tracep->declBit(c+686,"pop", false,-1);
    tracep->declBus(c+734,"data_in", false,-1, 10,0);
    tracep->declBit(c+655,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1287,"data_out", false,-1, 10,0);
    tracep->declBit(c+665,"overrun", false,-1);
    tracep->declBus(c+689,"count", false,-1, 4,0);
    tracep->declBit(c+687,"error_bit", false,-1);
    tracep->declBus(c+1288,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+743+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+759,"top", false,-1, 3,0);
    tracep->declBus(c+760,"bottom", false,-1, 3,0);
    tracep->declBus(c+761,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+762,"word0", false,-1, 2,0);
    tracep->declBus(c+763,"word1", false,-1, 2,0);
    tracep->declBus(c+764,"word2", false,-1, 2,0);
    tracep->declBus(c+765,"word3", false,-1, 2,0);
    tracep->declBus(c+766,"word4", false,-1, 2,0);
    tracep->declBus(c+767,"word5", false,-1, 2,0);
    tracep->declBus(c+768,"word6", false,-1, 2,0);
    tracep->declBus(c+769,"word7", false,-1, 2,0);
    tracep->declBus(c+770,"word8", false,-1, 2,0);
    tracep->declBus(c+771,"word9", false,-1, 2,0);
    tracep->declBus(c+772,"word10", false,-1, 2,0);
    tracep->declBus(c+773,"word11", false,-1, 2,0);
    tracep->declBus(c+774,"word12", false,-1, 2,0);
    tracep->declBus(c+775,"word13", false,-1, 2,0);
    tracep->declBus(c+776,"word14", false,-1, 2,0);
    tracep->declBus(c+777,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1541,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1562,"data_width", false,-1, 31,0);
    tracep->declBus(c+1557,"depth", false,-1, 31,0);
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+688,"we", false,-1);
    tracep->declBus(c+759,"a", false,-1, 3,0);
    tracep->declBus(c+760,"dpra", false,-1, 3,0);
    tracep->declBus(c+778,"di", false,-1, 7,0);
    tracep->declBus(c+1288,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+460+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1243,"wb_rst_i", false,-1);
    tracep->declBus(c+646,"lcr", false,-1, 7,0);
    tracep->declBit(c+685,"tf_push", false,-1);
    tracep->declBus(c+1194,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+640,"enable", false,-1);
    tracep->declBit(c+656,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+697,"stx_pad_o", false,-1);
    tracep->declBus(c+691,"tstate", false,-1, 2,0);
    tracep->declBus(c+690,"tf_count", false,-1, 4,0);
    tracep->declBus(c+779,"counter", false,-1, 4,0);
    tracep->declBus(c+780,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+781,"shift_out", false,-1, 6,0);
    tracep->declBit(c+782,"stx_o_tmp", false,-1);
    tracep->declBit(c+783,"parity_xor", false,-1);
    tracep->declBit(c+784,"tf_pop", false,-1);
    tracep->declBit(c+785,"bit_out", false,-1);
    tracep->declBus(c+1194,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1289,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+786,"tf_overrun", false,-1);
    tracep->declBus(c+1307,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1293,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1321,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1384,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1385,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1566,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1562,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1557,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1541,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1531,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+1243,"wb_rst_i", false,-1);
    tracep->declBit(c+685,"push", false,-1);
    tracep->declBit(c+784,"pop", false,-1);
    tracep->declBus(c+1194,"data_in", false,-1, 7,0);
    tracep->declBit(c+656,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1289,"data_out", false,-1, 7,0);
    tracep->declBit(c+786,"overrun", false,-1);
    tracep->declBus(c+690,"count", false,-1, 4,0);
    tracep->declBus(c+787,"top", false,-1, 3,0);
    tracep->declBus(c+788,"bottom", false,-1, 3,0);
    tracep->declBus(c+789,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1541,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1562,"data_width", false,-1, 31,0);
    tracep->declBus(c+1557,"depth", false,-1, 31,0);
    tracep->declBit(c+1242,"clk", false,-1);
    tracep->declBit(c+685,"we", false,-1);
    tracep->declBus(c+787,"a", false,-1, 3,0);
    tracep->declBus(c+788,"dpra", false,-1, 3,0);
    tracep->declBus(c+1194,"di", false,-1, 7,0);
    tracep->declBus(c+1289,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+476+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+545,"auto_in_psel", false,-1);
    tracep->declBit(c+546,"auto_in_penable", false,-1);
    tracep->declBit(c+1032,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1293,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1033,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1295,"auto_in_pready", false,-1);
    tracep->declBit(c+1296,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1297,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1256,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1257,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1258,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1259,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1260,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1261,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1242,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBus(c+1185,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+545,"in_psel", false,-1);
    tracep->declBit(c+546,"in_penable", false,-1);
    tracep->declBus(c+1293,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1032,"in_pwrite", false,-1);
    tracep->declBus(c+1033,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1034,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1295,"in_pready", false,-1);
    tracep->declBus(c+1297,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1296,"in_pslverr", false,-1);
    tracep->declBus(c+1256,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1257,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1258,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1259,"vga_hsync", false,-1);
    tracep->declBit(c+1260,"vga_vsync", false,-1);
    tracep->declBit(c+1261,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+553,"sck", false,-1);
    tracep->declBit(c+790,"ss", false,-1);
    tracep->declBit(c+1264,"mosi", false,-1);
    tracep->declBit(c+1304,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+553,"sck", false,-1);
    tracep->declBit(c+791,"ss", false,-1);
    tracep->declBit(c+1264,"mosi", false,-1);
    tracep->declBit(c+1265,"miso", false,-1);
    tracep->declBit(c+791,"reset", false,-1);
    tracep->declBus(c+1025,"state", false,-1, 2,0);
    tracep->declBus(c+1026,"counter", false,-1, 7,0);
    tracep->declBus(c+1027,"cmd", false,-1, 7,0);
    tracep->declBus(c+1028,"addr", false,-1, 23,0);
    tracep->declBus(c+1029,"data", false,-1, 31,0);
    tracep->declBit(c+1030,"ren", false,-1);
    tracep->declBus(c+1290,"rdata", false,-1, 31,0);
    tracep->declBus(c+1291,"raddr", false,-1, 31,0);
    tracep->declBus(c+1292,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+1030,"valid", false,-1);
    tracep->declBus(c+1027,"cmd", false,-1, 7,0);
    tracep->declBus(c+1291,"addr", false,-1, 31,0);
    tracep->declBus(c+1290,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1266,"sck", false,-1);
    tracep->declBit(c+1267,"ce_n", false,-1);
    tracep->declBus(c+1195,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1268,"clk", false,-1);
    tracep->declBit(c+555,"cke", false,-1);
    tracep->declBit(c+556,"cs", false,-1);
    tracep->declBit(c+557,"ras", false,-1);
    tracep->declBit(c+558,"cas", false,-1);
    tracep->declBit(c+559,"we", false,-1);
    tracep->declBus(c+560,"a", false,-1, 12,0);
    tracep->declBus(c+561,"ba", false,-1, 1,0);
    tracep->declBus(c+562,"dqm", false,-1, 1,0);
    tracep->declBus(c+563,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullIData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullCData(oldp+15,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch)
                               ? 0U : 2U)),3);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+51,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),2);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__b_switch));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+65,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+66,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+68,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+69,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+70,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+71,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+72,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+73,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+74,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+75,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+76,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+79,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+80,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+81,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+82,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+83,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+84,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+94,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+98,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+99,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+100,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+101,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+102,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+103,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+104,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+105,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+106,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+107,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+178,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+179,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+180,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+181,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+185,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+187,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+225,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+228,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+238,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+242,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+243,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+244,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+335,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+375,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+387,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+399,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+407,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+411,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+415,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+419,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+423,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+427,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+431,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+439,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+493,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+496,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+497,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+498,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+499,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+500,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+501,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+502,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))));
    bufp->fullBit(oldp+505,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+506,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+507,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+508,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+509,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+510,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+511,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+512,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+513,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+514,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+515,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+516,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+517,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+518,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+519,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+520,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+521,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+522,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+523,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+524,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+525,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+526,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+527,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+528,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+529,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+530,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+531,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+532,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+533,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+534,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+535,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+537,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+538,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+539,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+540,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+541,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+542,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+544,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+545,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+546,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+547,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+548,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+552,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+556,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+557,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+558,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+559,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+563,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+565,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+570,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+571,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+574,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+575,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+580,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+586,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+617,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+618,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+619,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+621,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+622,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+623,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+627,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+629,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+630,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+632,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+636,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+637,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+639,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+657,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+658,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+659,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+660,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+661,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+662,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+663,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+666,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+667,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+668,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+687,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+694,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+713,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+714,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+715,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+716,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+717,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+736,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+737,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+738,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+739,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+740,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+742,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+761,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+778,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+789,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+790,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullIData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+812,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+822,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+828,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+829,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                        ? ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))
                                        : ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)))
                                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                        ? ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))
                                        : ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))))
                                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                        ? ((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))
                                        : ((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)
                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new))
                                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                        : ((IData)(4U) 
                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))))),32);
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+863,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+864,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+866,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+869,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+885,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+886,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+887,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+888,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+889,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+890,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+891,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+892,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+893,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullBit(oldp+894,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+896,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+899,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+900,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+906,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+910,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+919,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+939,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+941,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+944,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+945,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+947,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+949,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+950,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+956,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+957,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+958,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+959,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+966,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+968,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+979,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+980,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+981,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+982,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+983,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+984,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+986,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+987,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+988,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+989,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+990,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+991,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+992,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+993,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullIData(oldp+1022,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1030,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1036,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1037,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1041,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1052,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1166,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1172,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1173,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1174,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1175,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1176,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+1177,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1182,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1183,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1184,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1185,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1186,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+1187,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+1188,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+1189,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
    bufp->fullBit(oldp+1190,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1192,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullCData(oldp+1195,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                   | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1216,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1217,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1228,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1234,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1239,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1240,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1241,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1242,(vlSelf->clock));
    bufp->fullBit(oldp+1243,(vlSelf->reset));
    bufp->fullSData(oldp+1244,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1245,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1246,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1247,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1248,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1249,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1250,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1251,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1252,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1253,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1254,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1255,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1256,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1257,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1258,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1259,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1260,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1261,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1262,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1263,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1265,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1267,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1268,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1269,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1270,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1271,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1272,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+1273,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullBit(oldp+1275,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullBit(oldp+1276,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch)))));
    bufp->fullBit(oldp+1277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1278,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1282,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
                                 ? ((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0xcU)))
                                     ? ((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                         : ((0x30200073U 
                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                             : 0U))
                                     : (((1U == (7U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                    >> 0xcU))) 
                                         | (2U == (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                      >> 0xcU))))
                                         ? ((0x300U 
                                             == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus
                                             : ((0x305U 
                                                 == 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0x14U))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                                 : 
                                                ((0x341U 
                                                  == 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                    >> 0x14U))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause
                                                   : 0U))))
                                         : 0U)) : 0U)),32);
    bufp->fullBit(oldp+1283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1284,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1287,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1291,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1293,(1U),3);
    bufp->fullBit(oldp+1294,(0U));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1304,(1U));
    bufp->fullCData(oldp+1305,(0U),4);
    bufp->fullCData(oldp+1306,(0U),8);
    bufp->fullCData(oldp+1307,(0U),3);
    bufp->fullCData(oldp+1308,(0U),2);
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1310,(0U),32);
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1321,(2U),3);
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1337,(0U),32);
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1341,(1U),2);
    bufp->fullCData(oldp+1342,(2U),2);
    bufp->fullIData(oldp+1343,(0x20U),32);
    bufp->fullIData(oldp+1344,(4U),32);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1384,(3U),3);
    bufp->fullCData(oldp+1385,(4U),3);
    bufp->fullIData(oldp+1386,(0x20000008U),32);
    bufp->fullIData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1530,(3U),2);
    bufp->fullIData(oldp+1531,(5U),32);
    bufp->fullBit(oldp+1532,(0U));
    bufp->fullBit(oldp+1533,(1U));
    bufp->fullCData(oldp+1534,(0x1bU),8);
    bufp->fullCData(oldp+1535,(0xebU),8);
    bufp->fullCData(oldp+1536,(0x38U),8);
    bufp->fullIData(oldp+1537,(0x64U),32);
    bufp->fullIData(oldp+1538,(0x18U),32);
    bufp->fullIData(oldp+1539,(9U),32);
    bufp->fullIData(oldp+1540,(2U),32);
    bufp->fullIData(oldp+1541,(4U),32);
    bufp->fullIData(oldp+1542,(0xdU),32);
    bufp->fullIData(oldp+1543,(0x2000U),32);
    bufp->fullIData(oldp+1544,(0x2710U),32);
    bufp->fullIData(oldp+1545,(0x30cU),32);
    bufp->fullCData(oldp+1546,(7U),4);
    bufp->fullCData(oldp+1547,(3U),4);
    bufp->fullCData(oldp+1548,(5U),4);
    bufp->fullCData(oldp+1549,(4U),4);
    bufp->fullCData(oldp+1550,(6U),4);
    bufp->fullCData(oldp+1551,(2U),4);
    bufp->fullCData(oldp+1552,(1U),4);
    bufp->fullSData(oldp+1553,(0x21U),13);
    bufp->fullCData(oldp+1554,(8U),4);
    bufp->fullCData(oldp+1555,(9U),4);
    bufp->fullIData(oldp+1556,(0xaU),32);
    bufp->fullIData(oldp+1557,(0x10U),32);
    bufp->fullIData(oldp+1558,(6U),32);
    bufp->fullIData(oldp+1559,(0x11U),32);
    bufp->fullIData(oldp+1560,(0x30000000U),32);
    bufp->fullIData(oldp+1561,(0x3fffffffU),32);
    bufp->fullIData(oldp+1562,(8U),32);
    bufp->fullIData(oldp+1563,(1U),32);
    bufp->fullCData(oldp+1564,(0xaU),4);
    bufp->fullIData(oldp+1565,(0xbU),32);
    bufp->fullCData(oldp+1566,(5U),3);
}
