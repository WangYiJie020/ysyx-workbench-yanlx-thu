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
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1326,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1327,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1328,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1329,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1330,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1331,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1332,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1333,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1334,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1335,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1336,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1337,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1338,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1339,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1340,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1341,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1342,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1343,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1344,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1345,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1326,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1327,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1328,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1329,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1330,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1331,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1332,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1333,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1334,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1335,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1336,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1337,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1338,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1339,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1340,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1341,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1342,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1343,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1344,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1345,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+536,"spi_sck", false,-1);
    tracep->declBus(c+1170,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1171,"spi_mosi", false,-1);
    tracep->declBit(c+1346,"spi_miso", false,-1);
    tracep->declBit(c+1344,"uart_rx", false,-1);
    tracep->declBit(c+1345,"uart_tx", false,-1);
    tracep->declBit(c+1347,"psram_sck", false,-1);
    tracep->declBit(c+1305,"psram_ce_n", false,-1);
    tracep->declBus(c+1348,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1349,"sdram_clk", false,-1);
    tracep->declBit(c+1172,"sdram_cke", false,-1);
    tracep->declBit(c+1173,"sdram_cs", false,-1);
    tracep->declBit(c+1174,"sdram_ras", false,-1);
    tracep->declBit(c+1175,"sdram_cas", false,-1);
    tracep->declBit(c+1176,"sdram_we", false,-1);
    tracep->declBus(c+1177,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1178,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1179,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1195,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1326,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1327,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1328,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1329,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1330,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1331,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1332,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1333,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1334,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1335,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1336,"ps2_clk", false,-1);
    tracep->declBit(c+1337,"ps2_data", false,-1);
    tracep->declBus(c+1338,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1339,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1340,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1341,"vga_hsync", false,-1);
    tracep->declBit(c+1342,"vga_vsync", false,-1);
    tracep->declBit(c+1343,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1275,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1026,"in_psel", false,-1);
    tracep->declBit(c+1027,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"in_pwrite", false,-1);
    tracep->declBus(c+1029,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"in_pready", false,-1);
    tracep->declBus(c+1307,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1308,"in_pslverr", false,-1);
    tracep->declBus(c+1275,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1026,"out_psel", false,-1);
    tracep->declBit(c+1027,"out_penable", false,-1);
    tracep->declBus(c+1382,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"out_pwrite", false,-1);
    tracep->declBus(c+1029,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"out_pready", false,-1);
    tracep->declBus(c+1307,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1308,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1026,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1027,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1028,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1275,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1308,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1307,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1156,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1275,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+537,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+538,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1158,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1159,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1276,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1382,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1384,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1385,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1386,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1160,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1161,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1277,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1389,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1162,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1163,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1277,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1390,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1391,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1392,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1278,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1164,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1275,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1350,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+66,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1279,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1280,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1277,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1281,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1351,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1165,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1276,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1382,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+540,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+541,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1282,"sel_0", false,-1);
    tracep->declBit(c+1283,"sel_1", false,-1);
    tracep->declBit(c+1284,"sel_2", false,-1);
    tracep->declBit(c+1285,"sel_3", false,-1);
    tracep->declBit(c+1286,"sel_4", false,-1);
    tracep->declBit(c+1287,"sel_5", false,-1);
    tracep->declBit(c+1288,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1031,"auto_in_awready", false,-1);
    tracep->declBit(c+67,"auto_in_awvalid", false,-1);
    tracep->declBus(c+68,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+70,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+71,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1031,"auto_in_wready", false,-1);
    tracep->declBit(c+72,"auto_in_wvalid", false,-1);
    tracep->declBus(c+73,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+74,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+75,"auto_in_bready", false,-1);
    tracep->declBit(c+1309,"auto_in_bvalid", false,-1);
    tracep->declBus(c+76,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1310,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"auto_in_arready", false,-1);
    tracep->declBit(c+77,"auto_in_arvalid", false,-1);
    tracep->declBus(c+78,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+79,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+80,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+81,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+82,"auto_in_rready", false,-1);
    tracep->declBit(c+1311,"auto_in_rvalid", false,-1);
    tracep->declBus(c+83,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1352,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1310,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1026,"auto_out_psel", false,-1);
    tracep->declBit(c+1027,"auto_out_penable", false,-1);
    tracep->declBit(c+1028,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1275,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1029,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"auto_out_pready", false,-1);
    tracep->declBit(c+1308,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1307,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1027,"nodeOut_penable", false,-1);
    tracep->declBus(c+1033,"state", false,-1, 1,0);
    tracep->declBit(c+1032,"accept_read", false,-1);
    tracep->declBit(c+1031,"accept_write", false,-1);
    tracep->declBit(c+84,"is_write_r", false,-1);
    tracep->declBit(c+1028,"is_write", false,-1);
    tracep->declBus(c+83,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+76,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+85,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+86,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+87,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+88,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1312,"resp", false,-1, 1,0);
    tracep->declBus(c+89,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1310,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1311,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+90,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1309,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+91,"auto_in_awready", false,-1);
    tracep->declBit(c+941,"auto_in_awvalid", false,-1);
    tracep->declBus(c+92,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+942,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+943,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+93,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+94,"auto_in_wready", false,-1);
    tracep->declBit(c+944,"auto_in_wvalid", false,-1);
    tracep->declBus(c+945,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_in_wlast", false,-1);
    tracep->declBit(c+485,"auto_in_bready", false,-1);
    tracep->declBit(c+95,"auto_in_bvalid", false,-1);
    tracep->declBus(c+96,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+97,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+98,"auto_in_arready", false,-1);
    tracep->declBit(c+1201,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1203,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1205,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1353,"auto_in_rready", false,-1);
    tracep->declBit(c+99,"auto_in_rvalid", false,-1);
    tracep->declBus(c+100,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+102,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+103,"auto_in_rlast", false,-1);
    tracep->declBit(c+1031,"auto_out_awready", false,-1);
    tracep->declBit(c+67,"auto_out_awvalid", false,-1);
    tracep->declBus(c+68,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+70,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+71,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1031,"auto_out_wready", false,-1);
    tracep->declBit(c+72,"auto_out_wvalid", false,-1);
    tracep->declBus(c+73,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+74,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+75,"auto_out_bready", false,-1);
    tracep->declBit(c+1309,"auto_out_bvalid", false,-1);
    tracep->declBus(c+76,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1310,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"auto_out_arready", false,-1);
    tracep->declBit(c+77,"auto_out_arvalid", false,-1);
    tracep->declBus(c+78,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+79,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+80,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+81,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+82,"auto_out_rready", false,-1);
    tracep->declBit(c+1311,"auto_out_rvalid", false,-1);
    tracep->declBus(c+83,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1352,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1310,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+75,"io_enq_ready", false,-1);
    tracep->declBit(c+1309,"io_enq_valid", false,-1);
    tracep->declBus(c+76,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1310,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+485,"io_deq_ready", false,-1);
    tracep->declBit(c+95,"io_deq_valid", false,-1);
    tracep->declBus(c+96,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+97,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+104,"wrap", false,-1);
    tracep->declBit(c+105,"wrap_1", false,-1);
    tracep->declBit(c+106,"maybe_full", false,-1);
    tracep->declBit(c+107,"ptr_match", false,-1);
    tracep->declBit(c+108,"empty", false,-1);
    tracep->declBit(c+109,"full", false,-1);
    tracep->declBit(c+1313,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+105,"R0_addr", false,-1);
    tracep->declBit(c+1393,"R0_en", false,-1);
    tracep->declBit(c+1324,"R0_clk", false,-1);
    tracep->declBus(c+110,"R0_data", false,-1, 5,0);
    tracep->declBit(c+104,"W0_addr", false,-1);
    tracep->declBit(c+1313,"W0_en", false,-1);
    tracep->declBit(c+1324,"W0_clk", false,-1);
    tracep->declBus(c+1354,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+111+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+113,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+82,"io_enq_ready", false,-1);
    tracep->declBit(c+1311,"io_enq_valid", false,-1);
    tracep->declBus(c+83,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1352,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1310,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1353,"io_deq_ready", false,-1);
    tracep->declBit(c+99,"io_deq_valid", false,-1);
    tracep->declBus(c+100,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+101,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+102,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+103,"io_deq_bits_last", false,-1);
    tracep->declBit(c+114,"wrap", false,-1);
    tracep->declBit(c+115,"wrap_1", false,-1);
    tracep->declBit(c+116,"maybe_full", false,-1);
    tracep->declBit(c+117,"ptr_match", false,-1);
    tracep->declBit(c+118,"empty", false,-1);
    tracep->declBit(c+119,"full", false,-1);
    tracep->declBit(c+1314,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+115,"R0_addr", false,-1);
    tracep->declBit(c+1393,"R0_en", false,-1);
    tracep->declBit(c+1324,"R0_clk", false,-1);
    tracep->declQuad(c+120,"R0_data", false,-1, 38,0);
    tracep->declBit(c+114,"W0_addr", false,-1);
    tracep->declBit(c+1314,"W0_en", false,-1);
    tracep->declBit(c+1324,"W0_clk", false,-1);
    tracep->declQuad(c+1355,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+122+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+126,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+98,"io_enq_ready", false,-1);
    tracep->declBit(c+1201,"io_enq_valid", false,-1);
    tracep->declBus(c+1202,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1203,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1204,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1205,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1032,"io_deq_ready", false,-1);
    tracep->declBit(c+77,"io_deq_valid", false,-1);
    tracep->declBus(c+78,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+79,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+80,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+81,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+127,"wrap", false,-1);
    tracep->declBit(c+128,"wrap_1", false,-1);
    tracep->declBit(c+129,"maybe_full", false,-1);
    tracep->declBit(c+130,"ptr_match", false,-1);
    tracep->declBit(c+131,"empty", false,-1);
    tracep->declBit(c+132,"full", false,-1);
    tracep->declBit(c+1206,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+128,"R0_addr", false,-1);
    tracep->declBit(c+1393,"R0_en", false,-1);
    tracep->declBit(c+1324,"R0_clk", false,-1);
    tracep->declQuad(c+133,"R0_data", false,-1, 46,0);
    tracep->declBit(c+127,"W0_addr", false,-1);
    tracep->declBit(c+1206,"W0_en", false,-1);
    tracep->declBit(c+1324,"W0_clk", false,-1);
    tracep->declQuad(c+1207,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+135+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+139,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+91,"io_enq_ready", false,-1);
    tracep->declBit(c+941,"io_enq_valid", false,-1);
    tracep->declBus(c+92,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+942,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+943,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+93,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1031,"io_deq_ready", false,-1);
    tracep->declBit(c+67,"io_deq_valid", false,-1);
    tracep->declBus(c+68,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+69,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+70,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+71,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+140,"wrap", false,-1);
    tracep->declBit(c+141,"wrap_1", false,-1);
    tracep->declBit(c+142,"maybe_full", false,-1);
    tracep->declBit(c+143,"ptr_match", false,-1);
    tracep->declBit(c+144,"empty", false,-1);
    tracep->declBit(c+145,"full", false,-1);
    tracep->declBit(c+948,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+141,"R0_addr", false,-1);
    tracep->declBit(c+1393,"R0_en", false,-1);
    tracep->declBit(c+1324,"R0_clk", false,-1);
    tracep->declQuad(c+146,"R0_data", false,-1, 46,0);
    tracep->declBit(c+140,"W0_addr", false,-1);
    tracep->declBit(c+948,"W0_en", false,-1);
    tracep->declBit(c+1324,"W0_clk", false,-1);
    tracep->declQuad(c+486,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+148+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+152,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+94,"io_enq_ready", false,-1);
    tracep->declBit(c+944,"io_enq_valid", false,-1);
    tracep->declBus(c+945,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+946,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+947,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1031,"io_deq_ready", false,-1);
    tracep->declBit(c+72,"io_deq_valid", false,-1);
    tracep->declBus(c+73,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+74,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+153,"wrap", false,-1);
    tracep->declBit(c+154,"wrap_1", false,-1);
    tracep->declBit(c+155,"maybe_full", false,-1);
    tracep->declBit(c+156,"ptr_match", false,-1);
    tracep->declBit(c+157,"empty", false,-1);
    tracep->declBit(c+158,"full", false,-1);
    tracep->declBit(c+949,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+154,"R0_addr", false,-1);
    tracep->declBit(c+1393,"R0_en", false,-1);
    tracep->declBit(c+1324,"R0_clk", false,-1);
    tracep->declQuad(c+159,"R0_data", false,-1, 35,0);
    tracep->declBit(c+153,"W0_addr", false,-1);
    tracep->declBit(c+949,"W0_en", false,-1);
    tracep->declBit(c+1324,"W0_clk", false,-1);
    tracep->declQuad(c+950,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+161+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+165,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+166,"auto_in_awready", false,-1);
    tracep->declBit(c+818,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1394,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+819,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+820,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"auto_in_wready", false,-1);
    tracep->declBit(c+821,"auto_in_wvalid", false,-1);
    tracep->declBus(c+822,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+823,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+824,"auto_in_wlast", false,-1);
    tracep->declBit(c+825,"auto_in_bready", false,-1);
    tracep->declBit(c+168,"auto_in_bvalid", false,-1);
    tracep->declBus(c+169,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1034,"auto_in_arready", false,-1);
    tracep->declBit(c+826,"auto_in_arvalid", false,-1);
    tracep->declBus(c+827,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+829,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+830,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+831,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+832,"auto_in_rready", false,-1);
    tracep->declBit(c+171,"auto_in_rvalid", false,-1);
    tracep->declBus(c+172,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_in_rlast", false,-1);
    tracep->declBit(c+952,"auto_out_awready", false,-1);
    tracep->declBit(c+953,"auto_out_awvalid", false,-1);
    tracep->declBus(c+92,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+942,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+943,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+93,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+176,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+954,"auto_out_wready", false,-1);
    tracep->declBit(c+955,"auto_out_wvalid", false,-1);
    tracep->declBus(c+945,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_out_wlast", false,-1);
    tracep->declBit(c+956,"auto_out_bready", false,-1);
    tracep->declBit(c+177,"auto_out_bvalid", false,-1);
    tracep->declBus(c+169,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+179,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1209,"auto_out_arready", false,-1);
    tracep->declBit(c+1210,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1203,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1205,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1211,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+832,"auto_out_rready", false,-1);
    tracep->declBit(c+171,"auto_out_rvalid", false,-1);
    tracep->declBus(c+172,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+180,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+181,"auto_out_rlast", false,-1);
    tracep->declBit(c+955,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+182,"w_idle", false,-1);
    tracep->declBit(c+957,"in_awready", false,-1);
    tracep->declBit(c+183,"busy", false,-1);
    tracep->declBus(c+184,"r_addr", false,-1, 31,0);
    tracep->declBus(c+185,"r_len", false,-1, 7,0);
    tracep->declBus(c+1212,"len", false,-1, 7,0);
    tracep->declBus(c+1213,"addr", false,-1, 31,0);
    tracep->declBit(c+186,"busy_1", false,-1);
    tracep->declBus(c+187,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+188,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+189,"len_1", false,-1, 7,0);
    tracep->declBus(c+958,"addr_1", false,-1, 31,0);
    tracep->declBit(c+190,"wbeats_latched", false,-1);
    tracep->declBit(c+953,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+959,"wbeats_valid", false,-1);
    tracep->declBus(c+191,"w_counter", false,-1, 8,0);
    tracep->declBus(c+960,"w_todo", false,-1, 8,0);
    tracep->declBit(c+947,"w_last", false,-1);
    tracep->declBit(c+956,"nodeOut_bready", false,-1);
    tracep->declBus(c+192,"error_0", false,-1, 1,0);
    tracep->declBus(c+193,"error_1", false,-1, 1,0);
    tracep->declBus(c+194,"error_2", false,-1, 1,0);
    tracep->declBus(c+195,"error_3", false,-1, 1,0);
    tracep->declBus(c+196,"error_4", false,-1, 1,0);
    tracep->declBus(c+197,"error_5", false,-1, 1,0);
    tracep->declBus(c+198,"error_6", false,-1, 1,0);
    tracep->declBus(c+199,"error_7", false,-1, 1,0);
    tracep->declBus(c+200,"error_8", false,-1, 1,0);
    tracep->declBus(c+201,"error_9", false,-1, 1,0);
    tracep->declBus(c+202,"error_10", false,-1, 1,0);
    tracep->declBus(c+203,"error_11", false,-1, 1,0);
    tracep->declBus(c+204,"error_12", false,-1, 1,0);
    tracep->declBus(c+205,"error_13", false,-1, 1,0);
    tracep->declBus(c+206,"error_14", false,-1, 1,0);
    tracep->declBus(c+207,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1034,"io_enq_ready", false,-1);
    tracep->declBit(c+826,"io_enq_valid", false,-1);
    tracep->declBus(c+827,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+828,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+829,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+830,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+831,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1214,"io_deq_ready", false,-1);
    tracep->declBit(c+1210,"io_deq_valid", false,-1);
    tracep->declBus(c+1202,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1215,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1216,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1204,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1205,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+208,"ram", false,-1, 48,0);
    tracep->declBit(c+1035,"full", false,-1);
    tracep->declBit(c+1210,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1217,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+166,"io_enq_ready", false,-1);
    tracep->declBit(c+818,"io_enq_valid", false,-1);
    tracep->declBus(c+1394,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+819,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1395,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+820,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1396,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+961,"io_deq_ready", false,-1);
    tracep->declBit(c+962,"io_deq_valid", false,-1);
    tracep->declBus(c+92,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+963,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+210,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+943,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+93,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+211,"ram", false,-1, 48,0);
    tracep->declBit(c+213,"full", false,-1);
    tracep->declBit(c+962,"io_deq_valid_0", false,-1);
    tracep->declBit(c+964,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+167,"io_enq_ready", false,-1);
    tracep->declBit(c+821,"io_enq_valid", false,-1);
    tracep->declBus(c+822,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+823,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+824,"io_enq_bits_last", false,-1);
    tracep->declBit(c+965,"io_deq_ready", false,-1);
    tracep->declBit(c+966,"io_deq_valid", false,-1);
    tracep->declBus(c+945,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+946,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1357,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+214,"ram", false,-1, 36,0);
    tracep->declBit(c+216,"full", false,-1);
    tracep->declBit(c+966,"io_deq_valid_0", false,-1);
    tracep->declBit(c+967,"do_enq", false,-1);
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
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+968,"auto_in_awready", false,-1);
    tracep->declBit(c+969,"auto_in_awvalid", false,-1);
    tracep->declBus(c+92,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+971,"auto_in_wready", false,-1);
    tracep->declBit(c+972,"auto_in_wvalid", false,-1);
    tracep->declBus(c+945,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+973,"auto_in_bready", false,-1);
    tracep->declBit(c+217,"auto_in_bvalid", false,-1);
    tracep->declBus(c+218,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+974,"auto_in_arready", false,-1);
    tracep->declBit(c+1218,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+975,"auto_in_rready", false,-1);
    tracep->declBit(c+220,"auto_in_rvalid", false,-1);
    tracep->declBus(c+221,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+222,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+223,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+974,"nodeIn_arready", false,-1);
    tracep->declBit(c+968,"nodeIn_awready", false,-1);
    tracep->declBit(c+976,"w_sel0", false,-1);
    tracep->declBit(c+217,"w_full", false,-1);
    tracep->declBus(c+218,"w_id", false,-1, 3,0);
    tracep->declBit(c+224,"r_sel1", false,-1);
    tracep->declBit(c+225,"w_sel1", false,-1);
    tracep->declBit(c+220,"r_full", false,-1);
    tracep->declBus(c+221,"r_id", false,-1, 3,0);
    tracep->declBit(c+1220,"ren", false,-1);
    tracep->declBit(c+226,"rdata_REG", false,-1);
    tracep->declBus(c+227,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+228,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+229,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+230,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1221,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1220,"R0_en", false,-1);
    tracep->declBit(c+1324,"R0_clk", false,-1);
    tracep->declBus(c+231,"R0_data", false,-1, 31,0);
    tracep->declBus(c+977,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+978,"W0_en", false,-1);
    tracep->declBit(c+1324,"W0_clk", false,-1);
    tracep->declBus(c+945,"W0_data", false,-1, 31,0);
    tracep->declBus(c+946,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+166,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+818,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1394,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+819,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+820,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+821,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+822,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+823,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+824,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+825,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+168,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1034,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+826,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+827,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+829,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+830,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+831,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+832,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+171,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+172,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+166,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+818,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1394,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+819,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+820,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+821,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+822,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+823,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+824,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+825,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+168,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1034,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+826,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+827,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+829,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+830,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+831,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+832,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+171,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+172,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+979,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+980,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+92,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+942,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+943,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+93,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+954,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+955,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+956,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+177,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+169,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1222,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1223,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1203,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1205,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+832,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+171,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+172,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+181,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+968,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+969,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+92,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+971,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+972,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+973,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+217,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+218,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+974,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1218,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+975,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+220,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+221,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+222,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+223,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+981,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+982,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+232,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1224,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1225,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1358,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+233,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+234,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+91,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+941,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+92,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+942,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+943,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+93,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+94,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+944,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+485,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+95,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+96,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+97,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+98,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1201,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1203,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1205,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1353,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+99,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+100,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+101,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+102,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+103,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+177,"in_0_bvalid", false,-1);
    tracep->declBit(c+171,"in_0_rvalid", false,-1);
    tracep->declBit(c+983,"in_0_wready", false,-1);
    tracep->declBit(c+984,"in_0_awready", false,-1);
    tracep->declBit(c+1222,"in_0_arready", false,-1);
    tracep->declBit(c+979,"anonIn_awready", false,-1);
    tracep->declBit(c+1226,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1227,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1228,"requestARIO_0_2", false,-1);
    tracep->declBit(c+985,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+986,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+987,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1229,"arSel", false,-1, 15,0);
    tracep->declBus(c+236,"awSel", false,-1, 15,0);
    tracep->declBus(c+237,"rSel", false,-1, 15,0);
    tracep->declBus(c+238,"bSel", false,-1, 15,0);
    tracep->declBit(c+239,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+240,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+241,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+242,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+243,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+244,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+245,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+246,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+247,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+248,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+249,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+250,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+251,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+252,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+253,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+254,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+255,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+256,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+257,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+258,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+259,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+260,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+261,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+262,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+263,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+264,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+265,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+266,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+267,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+268,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+269,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+270,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+271,"latched", false,-1);
    tracep->declBit(c+988,"in_0_awvalid", false,-1);
    tracep->declBit(c+989,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+990,"in_0_wvalid", false,-1);
    tracep->declBit(c+272,"idle_3", false,-1);
    tracep->declBit(c+273,"anyValid", false,-1);
    tracep->declBus(c+274,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+275,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+276,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+277,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+278,"prefixOR_1", false,-1);
    tracep->declBit(c+279,"winner_3_1", false,-1);
    tracep->declBit(c+280,"winner_3_2", false,-1);
    tracep->declBit(c+281,"state_3_0", false,-1);
    tracep->declBit(c+282,"state_3_1", false,-1);
    tracep->declBit(c+283,"state_3_2", false,-1);
    tracep->declBit(c+284,"muxState_3_0", false,-1);
    tracep->declBit(c+285,"muxState_3_1", false,-1);
    tracep->declBit(c+286,"muxState_3_2", false,-1);
    tracep->declBit(c+287,"idle_4", false,-1);
    tracep->declBit(c+288,"anyValid_1", false,-1);
    tracep->declBus(c+289,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+290,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+291,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+292,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+293,"winner_4_0", false,-1);
    tracep->declBit(c+294,"winner_4_2", false,-1);
    tracep->declBit(c+295,"state_4_0", false,-1);
    tracep->declBit(c+296,"state_4_2", false,-1);
    tracep->declBit(c+297,"muxState_4_0", false,-1);
    tracep->declBit(c+298,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+989,"io_enq_valid", false,-1);
    tracep->declBus(c+991,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+992,"io_deq_ready", false,-1);
    tracep->declBit(c+993,"io_deq_valid", false,-1);
    tracep->declBus(c+994,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+300,"wrap", false,-1);
    tracep->declBit(c+301,"wrap_1", false,-1);
    tracep->declBit(c+302,"maybe_full", false,-1);
    tracep->declBit(c+303,"ptr_match", false,-1);
    tracep->declBit(c+304,"empty", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->declBit(c+993,"io_deq_valid_0", false,-1);
    tracep->declBit(c+995,"do_deq", false,-1);
    tracep->declBit(c+996,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+301,"R0_addr", false,-1);
    tracep->declBit(c+1393,"R0_en", false,-1);
    tracep->declBit(c+1324,"R0_clk", false,-1);
    tracep->declBus(c+306,"R0_data", false,-1, 2,0);
    tracep->declBit(c+300,"W0_addr", false,-1);
    tracep->declBit(c+996,"W0_en", false,-1);
    tracep->declBit(c+1324,"W0_clk", false,-1);
    tracep->declBus(c+991,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+307+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+952,"auto_in_awready", false,-1);
    tracep->declBit(c+953,"auto_in_awvalid", false,-1);
    tracep->declBus(c+92,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+942,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+943,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+93,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+176,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+954,"auto_in_wready", false,-1);
    tracep->declBit(c+955,"auto_in_wvalid", false,-1);
    tracep->declBus(c+945,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_in_wlast", false,-1);
    tracep->declBit(c+956,"auto_in_bready", false,-1);
    tracep->declBit(c+177,"auto_in_bvalid", false,-1);
    tracep->declBus(c+169,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+179,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1209,"auto_in_arready", false,-1);
    tracep->declBit(c+1210,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1203,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1205,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1211,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+832,"auto_in_rready", false,-1);
    tracep->declBit(c+171,"auto_in_rvalid", false,-1);
    tracep->declBus(c+172,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+180,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+181,"auto_in_rlast", false,-1);
    tracep->declBit(c+979,"auto_out_awready", false,-1);
    tracep->declBit(c+980,"auto_out_awvalid", false,-1);
    tracep->declBus(c+92,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+942,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+943,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+93,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+954,"auto_out_wready", false,-1);
    tracep->declBit(c+955,"auto_out_wvalid", false,-1);
    tracep->declBus(c+945,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_out_wlast", false,-1);
    tracep->declBit(c+956,"auto_out_bready", false,-1);
    tracep->declBit(c+177,"auto_out_bvalid", false,-1);
    tracep->declBus(c+169,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1222,"auto_out_arready", false,-1);
    tracep->declBit(c+1223,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1203,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1205,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+832,"auto_out_rready", false,-1);
    tracep->declBit(c+171,"auto_out_rvalid", false,-1);
    tracep->declBus(c+172,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+181,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1230,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+488,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBit(c+311,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"full", false,-1);
    tracep->declBit(c+311,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+312,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1231,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+489,"io_deq_ready", false,-1);
    tracep->declBit(c+314,"io_deq_valid", false,-1);
    tracep->declBit(c+315,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"full", false,-1);
    tracep->declBit(c+315,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1232,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+490,"io_deq_ready", false,-1);
    tracep->declBit(c+318,"io_deq_valid", false,-1);
    tracep->declBit(c+319,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"full", false,-1);
    tracep->declBit(c+319,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1233,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+491,"io_deq_ready", false,-1);
    tracep->declBit(c+322,"io_deq_valid", false,-1);
    tracep->declBit(c+323,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+323,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+324,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1234,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+492,"io_deq_ready", false,-1);
    tracep->declBit(c+326,"io_deq_valid", false,-1);
    tracep->declBit(c+327,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+327,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1235,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+493,"io_deq_ready", false,-1);
    tracep->declBit(c+330,"io_deq_valid", false,-1);
    tracep->declBit(c+331,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"full", false,-1);
    tracep->declBit(c+331,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1236,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+494,"io_deq_ready", false,-1);
    tracep->declBit(c+334,"io_deq_valid", false,-1);
    tracep->declBit(c+335,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+335,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1237,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+495,"io_deq_ready", false,-1);
    tracep->declBit(c+338,"io_deq_valid", false,-1);
    tracep->declBit(c+339,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+338,"full", false,-1);
    tracep->declBit(c+339,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+341,"io_enq_ready", false,-1);
    tracep->declBit(c+496,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+497,"io_deq_ready", false,-1);
    tracep->declBit(c+342,"io_deq_valid", false,-1);
    tracep->declBit(c+343,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+342,"full", false,-1);
    tracep->declBit(c+343,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+344,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+345,"io_enq_ready", false,-1);
    tracep->declBit(c+498,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+499,"io_deq_ready", false,-1);
    tracep->declBit(c+346,"io_deq_valid", false,-1);
    tracep->declBit(c+347,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+346,"full", false,-1);
    tracep->declBit(c+347,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+348,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+349,"io_enq_ready", false,-1);
    tracep->declBit(c+500,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+501,"io_deq_ready", false,-1);
    tracep->declBit(c+350,"io_deq_valid", false,-1);
    tracep->declBit(c+351,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+350,"full", false,-1);
    tracep->declBit(c+351,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+352,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+353,"io_enq_ready", false,-1);
    tracep->declBit(c+502,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+503,"io_deq_ready", false,-1);
    tracep->declBit(c+354,"io_deq_valid", false,-1);
    tracep->declBit(c+355,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+354,"full", false,-1);
    tracep->declBit(c+355,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+356,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+357,"io_enq_ready", false,-1);
    tracep->declBit(c+1238,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+504,"io_deq_ready", false,-1);
    tracep->declBit(c+358,"io_deq_valid", false,-1);
    tracep->declBit(c+359,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+358,"full", false,-1);
    tracep->declBit(c+359,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+360,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+361,"io_enq_ready", false,-1);
    tracep->declBit(c+505,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+506,"io_deq_ready", false,-1);
    tracep->declBit(c+362,"io_deq_valid", false,-1);
    tracep->declBit(c+363,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+362,"full", false,-1);
    tracep->declBit(c+363,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+364,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+365,"io_enq_ready", false,-1);
    tracep->declBit(c+507,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+508,"io_deq_ready", false,-1);
    tracep->declBit(c+366,"io_deq_valid", false,-1);
    tracep->declBit(c+367,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+366,"full", false,-1);
    tracep->declBit(c+367,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+368,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+369,"io_enq_ready", false,-1);
    tracep->declBit(c+509,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+510,"io_deq_ready", false,-1);
    tracep->declBit(c+370,"io_deq_valid", false,-1);
    tracep->declBit(c+371,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+370,"full", false,-1);
    tracep->declBit(c+371,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+372,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+373,"io_enq_ready", false,-1);
    tracep->declBit(c+511,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+512,"io_deq_ready", false,-1);
    tracep->declBit(c+374,"io_deq_valid", false,-1);
    tracep->declBit(c+375,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+374,"full", false,-1);
    tracep->declBit(c+375,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+376,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+377,"io_enq_ready", false,-1);
    tracep->declBit(c+513,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+514,"io_deq_ready", false,-1);
    tracep->declBit(c+378,"io_deq_valid", false,-1);
    tracep->declBit(c+379,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+378,"full", false,-1);
    tracep->declBit(c+379,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+380,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+381,"io_enq_ready", false,-1);
    tracep->declBit(c+515,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+516,"io_deq_ready", false,-1);
    tracep->declBit(c+382,"io_deq_valid", false,-1);
    tracep->declBit(c+383,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+382,"full", false,-1);
    tracep->declBit(c+383,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+384,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+385,"io_enq_ready", false,-1);
    tracep->declBit(c+517,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+518,"io_deq_ready", false,-1);
    tracep->declBit(c+386,"io_deq_valid", false,-1);
    tracep->declBit(c+387,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+386,"full", false,-1);
    tracep->declBit(c+387,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+388,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+389,"io_enq_ready", false,-1);
    tracep->declBit(c+519,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+520,"io_deq_ready", false,-1);
    tracep->declBit(c+390,"io_deq_valid", false,-1);
    tracep->declBit(c+391,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+390,"full", false,-1);
    tracep->declBit(c+391,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+392,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+393,"io_enq_ready", false,-1);
    tracep->declBit(c+521,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+522,"io_deq_ready", false,-1);
    tracep->declBit(c+394,"io_deq_valid", false,-1);
    tracep->declBit(c+395,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->declBit(c+395,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+396,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+397,"io_enq_ready", false,-1);
    tracep->declBit(c+523,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+524,"io_deq_ready", false,-1);
    tracep->declBit(c+398,"io_deq_valid", false,-1);
    tracep->declBit(c+399,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+398,"full", false,-1);
    tracep->declBit(c+399,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+400,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+401,"io_enq_ready", false,-1);
    tracep->declBit(c+1239,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+525,"io_deq_ready", false,-1);
    tracep->declBit(c+402,"io_deq_valid", false,-1);
    tracep->declBit(c+403,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+402,"full", false,-1);
    tracep->declBit(c+403,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+404,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+405,"io_enq_ready", false,-1);
    tracep->declBit(c+526,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+527,"io_deq_ready", false,-1);
    tracep->declBit(c+406,"io_deq_valid", false,-1);
    tracep->declBit(c+407,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+406,"full", false,-1);
    tracep->declBit(c+407,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+408,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+409,"io_enq_ready", false,-1);
    tracep->declBit(c+528,"io_enq_valid", false,-1);
    tracep->declBit(c+176,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+529,"io_deq_ready", false,-1);
    tracep->declBit(c+410,"io_deq_valid", false,-1);
    tracep->declBit(c+411,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+410,"full", false,-1);
    tracep->declBit(c+411,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+412,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+413,"io_enq_ready", false,-1);
    tracep->declBit(c+1240,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+530,"io_deq_ready", false,-1);
    tracep->declBit(c+414,"io_deq_valid", false,-1);
    tracep->declBit(c+415,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+414,"full", false,-1);
    tracep->declBit(c+415,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+416,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+417,"io_enq_ready", false,-1);
    tracep->declBit(c+1241,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+531,"io_deq_ready", false,-1);
    tracep->declBit(c+418,"io_deq_valid", false,-1);
    tracep->declBit(c+419,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+418,"full", false,-1);
    tracep->declBit(c+419,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+420,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+421,"io_enq_ready", false,-1);
    tracep->declBit(c+1242,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+532,"io_deq_ready", false,-1);
    tracep->declBit(c+422,"io_deq_valid", false,-1);
    tracep->declBit(c+423,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+422,"full", false,-1);
    tracep->declBit(c+423,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+424,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+425,"io_enq_ready", false,-1);
    tracep->declBit(c+1243,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+533,"io_deq_ready", false,-1);
    tracep->declBit(c+426,"io_deq_valid", false,-1);
    tracep->declBit(c+427,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+426,"full", false,-1);
    tracep->declBit(c+427,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+428,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+429,"io_enq_ready", false,-1);
    tracep->declBit(c+1244,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+534,"io_deq_ready", false,-1);
    tracep->declBit(c+430,"io_deq_valid", false,-1);
    tracep->declBit(c+431,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+430,"full", false,-1);
    tracep->declBit(c+431,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+432,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+433,"io_enq_ready", false,-1);
    tracep->declBit(c+1245,"io_enq_valid", false,-1);
    tracep->declBit(c+1211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+535,"io_deq_ready", false,-1);
    tracep->declBit(c+434,"io_deq_valid", false,-1);
    tracep->declBit(c+435,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+434,"full", false,-1);
    tracep->declBit(c+435,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+436,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1359,"reset", false,-1);
    tracep->declBit(c+166,"auto_master_out_awready", false,-1);
    tracep->declBit(c+818,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1394,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+819,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+820,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"auto_master_out_wready", false,-1);
    tracep->declBit(c+821,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+822,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+823,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+824,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+825,"auto_master_out_bready", false,-1);
    tracep->declBit(c+168,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+169,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+170,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1034,"auto_master_out_arready", false,-1);
    tracep->declBit(c+826,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+827,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+829,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+830,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+831,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+832,"auto_master_out_rready", false,-1);
    tracep->declBit(c+171,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+172,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1359,"reset", false,-1);
    tracep->declBit(c+1383,"io_interrupt", false,-1);
    tracep->declBit(c+166,"io_master_awready", false,-1);
    tracep->declBit(c+818,"io_master_awvalid", false,-1);
    tracep->declBus(c+819,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1394,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1395,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+820,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+167,"io_master_wready", false,-1);
    tracep->declBit(c+821,"io_master_wvalid", false,-1);
    tracep->declBus(c+822,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+823,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+824,"io_master_wlast", false,-1);
    tracep->declBit(c+825,"io_master_bready", false,-1);
    tracep->declBit(c+168,"io_master_bvalid", false,-1);
    tracep->declBus(c+170,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+169,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1034,"io_master_arready", false,-1);
    tracep->declBit(c+826,"io_master_arvalid", false,-1);
    tracep->declBus(c+828,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+827,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+829,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+830,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+831,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+832,"io_master_rready", false,-1);
    tracep->declBit(c+171,"io_master_rvalid", false,-1);
    tracep->declBus(c+174,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+173,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+175,"io_master_rlast", false,-1);
    tracep->declBus(c+172,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1397,"io_slave_awready", false,-1);
    tracep->declBit(c+1383,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1398,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1394,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1395,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1399,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1400,"io_slave_wready", false,-1);
    tracep->declBit(c+1383,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1398,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1394,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1383,"io_slave_wlast", false,-1);
    tracep->declBit(c+1383,"io_slave_bready", false,-1);
    tracep->declBit(c+1401,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1402,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1403,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1404,"io_slave_arready", false,-1);
    tracep->declBit(c+1383,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1398,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1394,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1395,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1399,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1396,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1383,"io_slave_rready", false,-1);
    tracep->declBit(c+1405,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1406,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1407,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1408,"io_slave_rlast", false,-1);
    tracep->declBus(c+1409,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+7,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+8,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+833,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+834,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+9,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+7,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+8,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+10,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+11,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+12,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1394,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1395,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1410,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1396,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+13,"ifu_arvalid", false,-1);
    tracep->declBit(c+835,"ifu_arready", false,-1);
    tracep->declBus(c+997,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+998,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+999,"ifu_rlast", false,-1);
    tracep->declBus(c+1000,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1001,"ifu_rvalid", false,-1);
    tracep->declBit(c+14,"ifu_rready", false,-1);
    tracep->declBit(c+1411,"useless1", false,-1);
    tracep->declBit(c+1412,"useless2", false,-1);
    tracep->declBit(c+1413,"useless3", false,-1);
    tracep->declBit(c+1414,"useless4", false,-1);
    tracep->declBus(c+836,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1394,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1395,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+837,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1396,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+838,"lsu_arvalid", false,-1);
    tracep->declBit(c+839,"lsu_arready", false,-1);
    tracep->declBus(c+1002,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1003,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1004,"lsu_rlast", false,-1);
    tracep->declBus(c+1005,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1006,"lsu_rvalid", false,-1);
    tracep->declBit(c+840,"lsu_rready", false,-1);
    tracep->declBus(c+836,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1394,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1395,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+841,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+842,"lsu_awvalid", false,-1);
    tracep->declBit(c+1007,"lsu_awready", false,-1);
    tracep->declBus(c+843,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+844,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+845,"lsu_wlast", false,-1);
    tracep->declBit(c+846,"lsu_wvalid", false,-1);
    tracep->declBit(c+1008,"lsu_wready", false,-1);
    tracep->declBus(c+1009,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1010,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1011,"lsu_bvalid", false,-1);
    tracep->declBit(c+847,"lsu_bready", false,-1);
    tracep->declBus(c+848,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1394,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1395,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+849,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1396,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+850,"axi_arvalid", false,-1);
    tracep->declBit(c+1361,"axi_arready", false,-1);
    tracep->declBus(c+1012,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1013,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1014,"axi_rlast", false,-1);
    tracep->declBus(c+1015,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+1016,"axi_rvalid", false,-1);
    tracep->declBit(c+851,"axi_rready", false,-1);
    tracep->declBus(c+819,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1394,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1395,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+820,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+818,"axi_awvalid", false,-1);
    tracep->declBit(c+166,"axi_awready", false,-1);
    tracep->declBus(c+822,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+823,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+824,"axi_wlast", false,-1);
    tracep->declBit(c+821,"axi_wvalid", false,-1);
    tracep->declBit(c+167,"axi_wready", false,-1);
    tracep->declBus(c+170,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+169,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+168,"axi_bvalid", false,-1);
    tracep->declBit(c+825,"axi_bready", false,-1);
    tracep->declBus(c+852,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+853,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+854,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+855,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+856,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+857,"clint_arvalid", false,-1);
    tracep->declBit(c+858,"clint_arready", false,-1);
    tracep->declBus(c+15,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+16,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+17,"clint_rlast", false,-1);
    tracep->declBus(c+1394,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+18,"clint_rvalid", false,-1);
    tracep->declBit(c+859,"clint_rready", false,-1);
    tracep->declBus(c+1415,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1416,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1418,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1419,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1420,"clint_awvalid", false,-1);
    tracep->declBit(c+19,"clint_awready", false,-1);
    tracep->declBus(c+1421,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1422,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1423,"clint_wlast", false,-1);
    tracep->declBit(c+1424,"clint_wvalid", false,-1);
    tracep->declBit(c+20,"clint_wready", false,-1);
    tracep->declBus(c+21,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1394,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+22,"clint_bvalid", false,-1);
    tracep->declBit(c+1425,"clint_bready", false,-1);
    tracep->declBus(c+1249,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1250,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1362,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1363,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1036,"a5", false,-1, 31,0);
    tracep->declBus(c+1251,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1362,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1363,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1252,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1364,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1253,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1254,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1255,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1256,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1257,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1258,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1259,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1260,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1261,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1262,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1263,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1264,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1265,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1266,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1267,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+23,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+860,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1268,"csr_write", false,-1);
    tracep->declBus(c+1269,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1037+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+861,"wdata", false,-1, 31,0);
    tracep->declBus(c+862,"waddr", false,-1, 4,0);
    tracep->declBit(c+863,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1041+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+864,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+865,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+866,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+867,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+868,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+869,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+870,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+871,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+872,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+873,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+874,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+875,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+876,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+877,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+878,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+879,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+836,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+880,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+881,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+882,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+883,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+884,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+885,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+886,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+887,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+888,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+889,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+890,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+891,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+12,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1394,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1395,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1410,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1396,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+13,"arvalid_i_a", false,-1);
    tracep->declBit(c+835,"arready_o_a", false,-1);
    tracep->declBus(c+997,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+998,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+999,"rlast_o_a", false,-1);
    tracep->declBus(c+1000,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+1001,"rvalid_o_a", false,-1);
    tracep->declBit(c+14,"rready_i_a", false,-1);
    tracep->declBus(c+1426,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1394,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1395,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1399,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1396,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1383,"awvalid_i_a", false,-1);
    tracep->declBit(c+1017,"awready_o_a", false,-1);
    tracep->declBus(c+1426,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1394,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1383,"wlast_i_a", false,-1);
    tracep->declBit(c+1383,"wvalid_i_a", false,-1);
    tracep->declBit(c+1018,"wready_o_a", false,-1);
    tracep->declBus(c+1019,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1020,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1021,"bvalid_o_a", false,-1);
    tracep->declBit(c+1383,"bready_i_a", false,-1);
    tracep->declBus(c+836,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1394,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1395,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+837,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1396,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+838,"arvalid_i_b", false,-1);
    tracep->declBit(c+839,"arready_o_b", false,-1);
    tracep->declBus(c+1002,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+1003,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+1004,"rlast_o_b", false,-1);
    tracep->declBus(c+1005,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+1006,"rvalid_o_b", false,-1);
    tracep->declBit(c+840,"rready_i_b", false,-1);
    tracep->declBus(c+836,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1394,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1395,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+841,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1396,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+842,"awvalid_i_b", false,-1);
    tracep->declBit(c+1007,"awready_o_b", false,-1);
    tracep->declBus(c+843,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+844,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+845,"wlast_i_b", false,-1);
    tracep->declBit(c+846,"wvalid_i_b", false,-1);
    tracep->declBit(c+1008,"wready_o_b", false,-1);
    tracep->declBus(c+1009,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1010,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1011,"bvalid_o_b", false,-1);
    tracep->declBit(c+847,"bready_i_b", false,-1);
    tracep->declBus(c+848,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1394,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1395,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+849,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1396,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+850,"arvalid_o", false,-1);
    tracep->declBit(c+1361,"arready_i", false,-1);
    tracep->declBus(c+1012,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1013,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1014,"rlast_i", false,-1);
    tracep->declBus(c+1015,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1016,"rvalid_i", false,-1);
    tracep->declBit(c+851,"rready_o", false,-1);
    tracep->declBus(c+819,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1394,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1395,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+820,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1396,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+818,"awvalid_o", false,-1);
    tracep->declBit(c+166,"awready_i", false,-1);
    tracep->declBus(c+822,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+823,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+824,"wlast_o", false,-1);
    tracep->declBit(c+821,"wvalid_o", false,-1);
    tracep->declBit(c+167,"wready_i", false,-1);
    tracep->declBus(c+170,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+169,"bid_i", false,-1, 3,0);
    tracep->declBit(c+168,"bvalid_i", false,-1);
    tracep->declBit(c+825,"bready_o", false,-1);
    tracep->declBit(c+892,"ar_switch", false,-1);
    tracep->declBit(c+893,"r_switch", false,-1);
    tracep->declBit(c+894,"aw_switch", false,-1);
    tracep->declBit(c+895,"w_switch", false,-1);
    tracep->declBit(c+896,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+852,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+853,"arid_i", false,-1, 3,0);
    tracep->declBus(c+854,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+855,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+856,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+857,"arvalid_i", false,-1);
    tracep->declBit(c+858,"arready_o", false,-1);
    tracep->declBus(c+15,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+16,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+17,"rlast_o", false,-1);
    tracep->declBus(c+1394,"rid_o", false,-1, 3,0);
    tracep->declBit(c+18,"rvalid_o", false,-1);
    tracep->declBit(c+859,"rready_i", false,-1);
    tracep->declBus(c+1415,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1416,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1417,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1418,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1419,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1420,"awvalid_i", false,-1);
    tracep->declBit(c+19,"awready_o", false,-1);
    tracep->declBus(c+1421,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1422,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1423,"wlast_i", false,-1);
    tracep->declBit(c+1424,"wvalid_i", false,-1);
    tracep->declBit(c+20,"wready_o", false,-1);
    tracep->declBus(c+21,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1394,"bid_o", false,-1, 3,0);
    tracep->declBit(c+22,"bvalid_o", false,-1);
    tracep->declBit(c+1425,"bready_i", false,-1);
    tracep->declBit(c+897,"ar_state", false,-1);
    tracep->declBit(c+24,"r_state", false,-1);
    tracep->declBit(c+25,"aw_state", false,-1);
    tracep->declBit(c+26,"w_state", false,-1);
    tracep->declBit(c+1427,"b_state", false,-1);
    tracep->declBus(c+27,"araddr", false,-1, 31,0);
    tracep->declBus(c+28,"awaddr", false,-1, 31,0);
    tracep->declBus(c+29,"wdata", false,-1, 31,0);
    tracep->declBus(c+30,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1428,"wvalid", false,-1);
    tracep->declBit(c+31,"flag_waddr", false,-1);
    tracep->declBit(c+32,"flag_wdata", false,-1);
    tracep->declBit(c+33,"flag_rdata", false,-1);
    tracep->declBit(c+34,"flag_raddr", false,-1);
    tracep->declBit(c+1429,"flag_write", false,-1);
    tracep->declBus(c+35,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+36,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+37,"w_delay", false,-1, 4,0);
    tracep->declBus(c+38,"r_delay", false,-1, 4,0);
    tracep->declBus(c+39,"LFSR", false,-1, 4,0);
    tracep->declBit(c+40,"lfsr_in", false,-1);
    tracep->declBus(c+41,"write_box", false,-1, 1,0);
    tracep->declQuad(c+42,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+1251,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1362,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1363,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1252,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1364,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1253,"a_in_src_i", false,-1);
    tracep->declBus(c+1254,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1255,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1256,"adder_a_src_i", false,-1);
    tracep->declBit(c+1257,"adder_out_src_i", false,-1);
    tracep->declBus(c+1258,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1259,"MemRead_i", false,-1);
    tracep->declBit(c+1260,"MemWrite_i", false,-1);
    tracep->declBus(c+1261,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1262,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1263,"wb_src_i", false,-1);
    tracep->declBit(c+1264,"csr_write_i", false,-1);
    tracep->declBit(c+1265,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1266,"reg_write_i", false,-1);
    tracep->declBus(c+1267,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+23,"exu_valid_i", false,-1);
    tracep->declBit(c+860,"exu_ready_o", false,-1);
    tracep->declBus(c+864,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+865,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+866,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+867,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+868,"npc_o", false,-1, 31,0);
    tracep->declBit(c+869,"MemRead_o", false,-1);
    tracep->declBit(c+870,"MemWrite_o", false,-1);
    tracep->declBus(c+871,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+872,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+873,"wb_src_o", false,-1);
    tracep->declBit(c+874,"csr_write_o", false,-1);
    tracep->declBit(c+875,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+876,"reg_write_o", false,-1);
    tracep->declBus(c+877,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+878,"exu_valid_o", false,-1);
    tracep->declBit(c+879,"exu_ready_i", false,-1);
    tracep->declBus(c+898,"pc", false,-1, 31,0);
    tracep->declBus(c+865,"rs1", false,-1, 31,0);
    tracep->declBus(c+866,"rs2", false,-1, 31,0);
    tracep->declBus(c+899,"imm", false,-1, 31,0);
    tracep->declBus(c+900,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+901,"a_in_src", false,-1);
    tracep->declBus(c+902,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+903,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+904,"adder_a_src", false,-1);
    tracep->declBit(c+905,"adder_out_src", false,-1);
    tracep->declBus(c+906,"alu_op", false,-1, 3,0);
    tracep->declBus(c+907,"a_in", false,-1, 31,0);
    tracep->declBus(c+908,"b_in", false,-1, 31,0);
    tracep->declBus(c+909,"a_out", false,-1, 31,0);
    tracep->declBus(c+910,"add_out", false,-1, 31,0);
    tracep->declBus(c+911,"pc_new", false,-1, 31,0);
    tracep->declBus(c+864,"alu_result", false,-1, 31,0);
    tracep->declBus(c+868,"npc", false,-1, 31,0);
    tracep->declBit(c+912,"zero", false,-1);
    tracep->declBus(c+1396,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1430,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1431,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+913,"current_state", false,-1, 1,0);
    tracep->declBus(c+914,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+907,"a", false,-1, 31,0);
    tracep->declBus(c+908,"b", false,-1, 31,0);
    tracep->declBus(c+906,"op", false,-1, 3,0);
    tracep->declBus(c+864,"alu_result", false,-1, 31,0);
    tracep->declBit(c+912,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1432,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+865,"d0", false,-1, 31,0);
    tracep->declBus(c+898,"d1", false,-1, 31,0);
    tracep->declBit(c+901,"sel", false,-1);
    tracep->declBus(c+907,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1432,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+866,"d0", false,-1, 31,0);
    tracep->declBus(c+899,"d1", false,-1, 31,0);
    tracep->declBus(c+1433,"d2", false,-1, 31,0);
    tracep->declBus(c+900,"d3", false,-1, 31,0);
    tracep->declBus(c+902,"sel", false,-1, 1,0);
    tracep->declBus(c+908,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+909,"a", false,-1, 31,0);
    tracep->declBus(c+899,"b", false,-1, 31,0);
    tracep->declBus(c+910,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1432,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+898,"d0", false,-1, 31,0);
    tracep->declBus(c+865,"d1", false,-1, 31,0);
    tracep->declBit(c+904,"sel", false,-1);
    tracep->declBus(c+909,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1432,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+910,"d0", false,-1, 31,0);
    tracep->declBus(c+900,"d1", false,-1, 31,0);
    tracep->declBit(c+905,"sel", false,-1);
    tracep->declBus(c+911,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+915,"pc4", false,-1, 31,0);
    tracep->declBus(c+911,"pc_new", false,-1, 31,0);
    tracep->declBus(c+903,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+912,"zero", false,-1);
    tracep->declBus(c+864,"alu_result", false,-1, 31,0);
    tracep->declBus(c+868,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+1249,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1250,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1362,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1363,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1036,"a5", false,-1, 31,0);
    tracep->declBus(c+7,"pc_i", false,-1, 31,0);
    tracep->declBus(c+8,"inst_i", false,-1, 31,0);
    tracep->declBit(c+10,"idu_valid_i", false,-1);
    tracep->declBit(c+11,"idu_ready_o", false,-1);
    tracep->declBus(c+1251,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1362,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1363,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1252,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1364,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1253,"a_in_src_o", false,-1);
    tracep->declBus(c+1254,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1255,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1256,"adder_a_src_o", false,-1);
    tracep->declBit(c+1257,"adder_out_src_o", false,-1);
    tracep->declBus(c+1258,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1259,"MemRead_o", false,-1);
    tracep->declBit(c+1260,"MemWrite_o", false,-1);
    tracep->declBus(c+1261,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1262,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1263,"wb_src_o", false,-1);
    tracep->declBit(c+1264,"csr_write_o", false,-1);
    tracep->declBit(c+1265,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1266,"reg_write_o", false,-1);
    tracep->declBus(c+1267,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+23,"idu_valid_o", false,-1);
    tracep->declBit(c+860,"idu_ready_i", false,-1);
    tracep->declBit(c+1268,"csr_write_i", false,-1);
    tracep->declBus(c+1269,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1073+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1251,"pc", false,-1, 31,0);
    tracep->declBus(c+1270,"inst", false,-1, 31,0);
    tracep->declBus(c+1271,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1396,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1430,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1431,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+44,"current_state", false,-1, 1,0);
    tracep->declBus(c+916,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1270,"inst", false,-1, 31,0);
    tracep->declBus(c+1258,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1272,"opcode", false,-1, 6,0);
    tracep->declBus(c+1273,"funct3", false,-1, 2,0);
    tracep->declBus(c+1274,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1268,"wen", false,-1);
    tracep->declBus(c+1270,"inst", false,-1, 31,0);
    tracep->declBus(c+1269,"wdata", false,-1, 31,0);
    tracep->declBus(c+1036,"NO", false,-1, 31,0);
    tracep->declBus(c+1251,"pc", false,-1, 31,0);
    tracep->declBus(c+1364,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1077+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1081,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1082,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1083,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1084,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1434,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1435,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1272,"opcode", false,-1, 6,0);
    tracep->declBus(c+1273,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1270,"inst", false,-1, 31,0);
    tracep->declBit(c+1253,"a_in_src", false,-1);
    tracep->declBus(c+1254,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1266,"reg_write", false,-1);
    tracep->declBus(c+1255,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1256,"adder_a_src", false,-1);
    tracep->declBit(c+1259,"MemRead", false,-1);
    tracep->declBit(c+1260,"MemWrite", false,-1);
    tracep->declBus(c+1271,"wmask", false,-1, 7,0);
    tracep->declBit(c+1263,"wb_src", false,-1);
    tracep->declBus(c+1262,"rmask", false,-1, 2,0);
    tracep->declBit(c+1264,"csr_write", false,-1);
    tracep->declBit(c+1257,"adder_out_src", false,-1);
    tracep->declBit(c+1265,"csr_wdata_src", false,-1);
    tracep->declBus(c+1272,"opcode", false,-1, 6,0);
    tracep->declBus(c+1273,"funct3", false,-1, 2,0);
    tracep->declBus(c+1274,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1432,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1270,"inst", false,-1, 31,0);
    tracep->declBus(c+1252,"data", false,-1, 31,0);
    tracep->declBus(c+1272,"opcode", false,-1, 6,0);
    tracep->declBus(c+1273,"funct3", false,-1, 2,0);
    tracep->declBus(c+1274,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+12,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1394,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1395,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1410,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1396,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+13,"arvalid_o", false,-1);
    tracep->declBit(c+835,"arready_i", false,-1);
    tracep->declBus(c+997,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+998,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+999,"rlast_i", false,-1);
    tracep->declBus(c+1000,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1001,"rvalid_i", false,-1);
    tracep->declBit(c+14,"rready_o", false,-1);
    tracep->declBus(c+833,"npc_i", false,-1, 31,0);
    tracep->declBit(c+834,"ifu_valid_i", false,-1);
    tracep->declBit(c+9,"ifu_ready_o", false,-1);
    tracep->declBus(c+7,"pc_o", false,-1, 31,0);
    tracep->declBus(c+8,"inst_o", false,-1, 31,0);
    tracep->declBit(c+10,"ifu_valid_o", false,-1);
    tracep->declBit(c+11,"ifu_ready_i", false,-1);
    tracep->declBus(c+45,"pc", false,-1, 31,0);
    tracep->declBus(c+1436,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1437,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1438,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1439,"lfsr_in", false,-1);
    tracep->declBit(c+13,"arvalid", false,-1);
    tracep->declBus(c+12,"araddr", false,-1, 31,0);
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBit(c+14,"rready", false,-1);
    tracep->declBus(c+1440,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1441+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1473,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1399,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1382,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1410,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1474,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1475,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+47,"current_state", false,-1, 2,0);
    tracep->declBus(c+1365,"next_state", false,-1, 2,0);
    tracep->declBus(c+48,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+49,"ready_flag", false,-1);
    tracep->declBit(c+50,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+864,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+865,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+866,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+867,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+868,"npc_i", false,-1, 31,0);
    tracep->declBit(c+869,"MemRead_i", false,-1);
    tracep->declBit(c+870,"MemWrite_i", false,-1);
    tracep->declBus(c+871,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+872,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+873,"wb_src_i", false,-1);
    tracep->declBit(c+874,"csr_write_i", false,-1);
    tracep->declBit(c+875,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+876,"reg_write_i", false,-1);
    tracep->declBus(c+877,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+878,"lsu_valid_i", false,-1);
    tracep->declBit(c+879,"lsu_ready_o", false,-1);
    tracep->declBus(c+836,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+880,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+881,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+882,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+883,"npc_o", false,-1, 31,0);
    tracep->declBus(c+884,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+885,"wb_src_o", false,-1);
    tracep->declBit(c+886,"csr_write_o", false,-1);
    tracep->declBit(c+887,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+888,"reg_write_o", false,-1);
    tracep->declBus(c+889,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+890,"lsu_valid_o", false,-1);
    tracep->declBit(c+891,"lsu_ready_i", false,-1);
    tracep->declBus(c+836,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1394,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1395,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+837,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1396,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+838,"arvalid_o", false,-1);
    tracep->declBit(c+839,"arready_i", false,-1);
    tracep->declBus(c+1002,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1003,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1004,"rlast_i", false,-1);
    tracep->declBus(c+1005,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1006,"rvalid_i", false,-1);
    tracep->declBit(c+840,"rready_o", false,-1);
    tracep->declBus(c+836,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1394,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1395,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+841,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1396,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+842,"awvalid_o", false,-1);
    tracep->declBit(c+1007,"awready_i", false,-1);
    tracep->declBus(c+843,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+844,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+845,"wlast_o", false,-1);
    tracep->declBit(c+846,"wvalid_o", false,-1);
    tracep->declBit(c+1008,"wready_i", false,-1);
    tracep->declBus(c+1009,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1010,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1011,"bvalid_i", false,-1);
    tracep->declBit(c+847,"bready_o", false,-1);
    tracep->declBus(c+836,"alu_result", false,-1, 31,0);
    tracep->declBus(c+880,"rs1", false,-1, 31,0);
    tracep->declBus(c+1476,"rs2", false,-1, 31,0);
    tracep->declBus(c+1477,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+884,"rmask", false,-1, 2,0);
    tracep->declBit(c+51,"flag", false,-1);
    tracep->declBit(c+1478,"wvalid_tmp", false,-1);
    tracep->declBus(c+1479,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1480,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1481,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1482,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1483,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1484,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1485,"lfsr_in", false,-1);
    tracep->declBit(c+838,"arvalid", false,-1);
    tracep->declBus(c+836,"araddr", false,-1, 31,0);
    tracep->declBit(c+840,"rready", false,-1);
    tracep->declBus(c+836,"awaddr", false,-1, 31,0);
    tracep->declBit(c+842,"awvalid", false,-1);
    tracep->declBus(c+843,"wdata", false,-1, 31,0);
    tracep->declBus(c+844,"wstrb", false,-1, 3,0);
    tracep->declBit(c+846,"wvalid", false,-1);
    tracep->declBit(c+847,"bready", false,-1);
    tracep->declBus(c+1486,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1487+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1519,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1520,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1521+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1553,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1554+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1586+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1618,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1396,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1430,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1431,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1619,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+917,"current_state", false,-1, 1,0);
    tracep->declBus(c+918,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1620,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1432,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBus(c+861,"wdata", false,-1, 31,0);
    tracep->declBus(c+862,"waddr", false,-1, 4,0);
    tracep->declBit(c+863,"wen", false,-1);
    tracep->declBus(c+1249,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1362,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1250,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1363,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1036,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1085+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1117+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+836,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+880,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+881,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+882,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+883,"npc_i", false,-1, 31,0);
    tracep->declBus(c+884,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+885,"wb_src_i", false,-1);
    tracep->declBit(c+886,"csr_write_i", false,-1);
    tracep->declBit(c+887,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+888,"reg_write_i", false,-1);
    tracep->declBus(c+889,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+890,"wbu_valid_i", false,-1);
    tracep->declBit(c+891,"wbu_ready_o", false,-1);
    tracep->declBus(c+833,"npc_o", false,-1, 31,0);
    tracep->declBit(c+834,"wbu_valid_o", false,-1);
    tracep->declBit(c+9,"wbu_ready_i", false,-1);
    tracep->declBus(c+1269,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+861,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1268,"csr_write_o", false,-1);
    tracep->declBit(c+863,"reg_write_o", false,-1);
    tracep->declBus(c+862,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+919,"mem_data", false,-1, 31,0);
    tracep->declBus(c+920,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+921,"alu_result", false,-1, 31,0);
    tracep->declBus(c+922,"rs1", false,-1, 31,0);
    tracep->declBus(c+923,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+924,"rmask", false,-1, 2,0);
    tracep->declBit(c+925,"wb_src", false,-1);
    tracep->declBit(c+926,"csr_wdata_src", false,-1);
    tracep->declBit(c+927,"difftest_check", false,-1);
    tracep->declBit(c+928,"difftest_check_flag", false,-1);
    tracep->declBus(c+1396,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1430,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1431,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+929,"current_state", false,-1, 1,0);
    tracep->declBus(c+930,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1432,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+922,"d0", false,-1, 31,0);
    tracep->declBus(c+923,"d1", false,-1, 31,0);
    tracep->declBit(c+926,"sel", false,-1);
    tracep->declBus(c+1269,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+920,"read_data", false,-1, 31,0);
    tracep->declBus(c+931,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+924,"rmask", false,-1, 2,0);
    tracep->declBus(c+919,"mem_data", false,-1, 31,0);
    tracep->declBus(c+932,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+933,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+934,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+935,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+936,"byte3", false,-1, 31,0);
    tracep->declBus(c+937,"byte2", false,-1, 31,0);
    tracep->declBus(c+938,"byte1", false,-1, 31,0);
    tracep->declBus(c+939,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1432,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+921,"d0", false,-1, 31,0);
    tracep->declBus(c+919,"d1", false,-1, 31,0);
    tracep->declBit(c+925,"sel", false,-1);
    tracep->declBus(c+861,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1360,"rst_n", false,-1);
    tracep->declBus(c+848,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1394,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1395,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+849,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1396,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+850,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1361,"axi_arready_o", false,-1);
    tracep->declBus(c+1012,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1013,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1014,"axi_rlast_o", false,-1);
    tracep->declBus(c+1015,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1016,"axi_rvalid_o", false,-1);
    tracep->declBit(c+851,"axi_rready_i", false,-1);
    tracep->declBus(c+819,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1394,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1395,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+820,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1396,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+818,"axi_awvalid_i", false,-1);
    tracep->declBit(c+166,"axi_awready_o", false,-1);
    tracep->declBus(c+822,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+823,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+824,"axi_wlast_i", false,-1);
    tracep->declBit(c+821,"axi_wvalid_i", false,-1);
    tracep->declBit(c+167,"axi_wready_o", false,-1);
    tracep->declBus(c+170,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+169,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+168,"axi_bvalid_o", false,-1);
    tracep->declBit(c+825,"axi_bready_i", false,-1);
    tracep->declBus(c+828,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+827,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+829,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+830,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+831,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+826,"sram_arvalid_o", false,-1);
    tracep->declBit(c+1034,"sram_arready_i", false,-1);
    tracep->declBus(c+173,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+174,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+175,"sram_rlast_i", false,-1);
    tracep->declBus(c+172,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+171,"sram_rvalid_i", false,-1);
    tracep->declBit(c+832,"sram_rready_o", false,-1);
    tracep->declBus(c+819,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1394,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1395,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+820,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1396,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+818,"sram_awvalid_o", false,-1);
    tracep->declBit(c+166,"sram_awready_i", false,-1);
    tracep->declBus(c+822,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+823,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+824,"sram_wlast_o", false,-1);
    tracep->declBit(c+821,"sram_wvalid_o", false,-1);
    tracep->declBit(c+167,"sram_wready_i", false,-1);
    tracep->declBus(c+170,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+169,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+168,"sram_bvalid_i", false,-1);
    tracep->declBit(c+825,"sram_bready_o", false,-1);
    tracep->declBus(c+852,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+853,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+854,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+855,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+856,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+857,"clint_arvalid_o", false,-1);
    tracep->declBit(c+858,"clint_arready_i", false,-1);
    tracep->declBus(c+15,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+16,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+17,"clint_rlast_i", false,-1);
    tracep->declBus(c+1394,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+18,"clint_rvalid_i", false,-1);
    tracep->declBit(c+859,"clint_rready_o", false,-1);
    tracep->declBus(c+1415,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1416,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1417,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1418,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1419,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1420,"clint_awvalid_o", false,-1);
    tracep->declBit(c+19,"clint_awready_i", false,-1);
    tracep->declBus(c+1421,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1422,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1423,"clint_wlast_o", false,-1);
    tracep->declBit(c+1424,"clint_wvalid_o", false,-1);
    tracep->declBit(c+20,"clint_wready_i", false,-1);
    tracep->declBus(c+21,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1394,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+22,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1425,"clint_bready_o", false,-1);
    tracep->declBit(c+940,"ar_switch", false,-1);
    tracep->declBit(c+52,"r_switch", false,-1);
    tracep->declBit(c+53,"aw_switch", false,-1);
    tracep->declBit(c+54,"w_switch", false,-1);
    tracep->declBit(c+55,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"io_d", false,-1);
    tracep->declBit(c+437,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"io_d", false,-1);
    tracep->declBit(c+437,"io_q", false,-1);
    tracep->declBit(c+437,"sync_0", false,-1);
    tracep->declBit(c+438,"sync_1", false,-1);
    tracep->declBit(c+439,"sync_2", false,-1);
    tracep->declBit(c+440,"sync_3", false,-1);
    tracep->declBit(c+441,"sync_4", false,-1);
    tracep->declBit(c+442,"sync_5", false,-1);
    tracep->declBit(c+443,"sync_6", false,-1);
    tracep->declBit(c+444,"sync_7", false,-1);
    tracep->declBit(c+445,"sync_8", false,-1);
    tracep->declBit(c+446,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1162,"auto_in_psel", false,-1);
    tracep->declBit(c+1163,"auto_in_penable", false,-1);
    tracep->declBit(c+1028,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1277,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1390,"auto_in_pready", false,-1);
    tracep->declBit(c+1391,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1392,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1326,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1327,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1328,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1329,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1330,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1331,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1332,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1333,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1334,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1335,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1162,"in_psel", false,-1);
    tracep->declBit(c+1163,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"in_pwrite", false,-1);
    tracep->declBus(c+1029,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1390,"in_pready", false,-1);
    tracep->declBus(c+1392,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1391,"in_pslverr", false,-1);
    tracep->declBus(c+1326,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1327,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1328,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1329,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1330,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1331,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1332,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1333,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1334,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1335,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1160,"auto_in_psel", false,-1);
    tracep->declBit(c+1161,"auto_in_penable", false,-1);
    tracep->declBit(c+1028,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1277,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"auto_in_pready", false,-1);
    tracep->declBit(c+1388,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1389,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1336,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1337,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1160,"in_psel", false,-1);
    tracep->declBit(c+1161,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"in_pwrite", false,-1);
    tracep->declBus(c+1029,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"in_pready", false,-1);
    tracep->declBus(c+1389,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1388,"in_pslverr", false,-1);
    tracep->declBit(c+1336,"ps2_clk", false,-1);
    tracep->declBit(c+1337,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+981,"auto_in_awvalid", false,-1);
    tracep->declBit(c+982,"auto_in_wvalid", false,-1);
    tracep->declBit(c+232,"auto_in_arready", false,-1);
    tracep->declBit(c+1224,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1202,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1225,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1358,"auto_in_rready", false,-1);
    tracep->declBit(c+233,"auto_in_rvalid", false,-1);
    tracep->declBus(c+234,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+233,"state", false,-1);
    tracep->declBus(c+235,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+234,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1246,"raddr", false,-1, 31,0);
    tracep->declBit(c+1247,"ren", false,-1);
    tracep->declBus(c+1248,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1278,"auto_in_psel", false,-1);
    tracep->declBit(c+1164,"auto_in_penable", false,-1);
    tracep->declBit(c+1028,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1275,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1350,"auto_in_pready", false,-1);
    tracep->declBit(c+1383,"auto_in_pslverr", false,-1);
    tracep->declBus(c+66,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1347,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1305,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1348,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1275,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1278,"in_psel", false,-1);
    tracep->declBit(c+1164,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"in_pwrite", false,-1);
    tracep->declBus(c+1029,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1350,"in_pready", false,-1);
    tracep->declBus(c+66,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1383,"in_pslverr", false,-1);
    tracep->declBit(c+1347,"qspi_sck", false,-1);
    tracep->declBit(c+1305,"qspi_ce_n", false,-1);
    tracep->declBus(c+1348,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1348,"din", false,-1, 3,0);
    tracep->declBus(c+1366,"dout", false,-1, 3,0);
    tracep->declBus(c+1315,"douten", false,-1, 3,0);
    tracep->declBit(c+1367,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1324,"clk_i", false,-1);
    tracep->declBit(c+1325,"rst_i", false,-1);
    tracep->declBus(c+1275,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1029,"dat_i", false,-1, 31,0);
    tracep->declBus(c+66,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1030,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1278,"cyc_i", false,-1);
    tracep->declBit(c+1278,"stb_i", false,-1);
    tracep->declBit(c+1367,"ack_o", false,-1);
    tracep->declBit(c+1028,"we_i", false,-1);
    tracep->declBit(c+1347,"sck", false,-1);
    tracep->declBit(c+1305,"ce_n", false,-1);
    tracep->declBus(c+1348,"din", false,-1, 3,0);
    tracep->declBus(c+1366,"dout", false,-1, 3,0);
    tracep->declBus(c+1315,"douten", false,-1, 3,0);
    tracep->declBus(c+1396,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1430,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1431,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+542,"mr_sck", false,-1);
    tracep->declBit(c+543,"mr_ce_n", false,-1);
    tracep->declBus(c+1348,"mr_din", false,-1, 3,0);
    tracep->declBus(c+544,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+545,"mr_doe", false,-1);
    tracep->declBit(c+546,"mw_sck", false,-1);
    tracep->declBit(c+547,"mw_ce_n", false,-1);
    tracep->declBus(c+1348,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1167,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+548,"mw_doe", false,-1);
    tracep->declBit(c+1316,"mr_rd", false,-1);
    tracep->declBit(c+549,"mr_done", false,-1);
    tracep->declBit(c+1317,"mw_wr", false,-1);
    tracep->declBit(c+1168,"mw_done", false,-1);
    tracep->declBit(c+1278,"wb_valid", false,-1);
    tracep->declBit(c+1290,"wb_we", false,-1);
    tracep->declBit(c+1291,"wb_re", false,-1);
    tracep->declBus(c+1180,"state", false,-1, 1,0);
    tracep->declBus(c+1368,"nstate", false,-1, 1,0);
    tracep->declBus(c+1369,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1370,"qpi_sck", false,-1);
    tracep->declBus(c+1149,"size", false,-1, 2,0);
    tracep->declBus(c+1150,"byte0", false,-1, 7,0);
    tracep->declBus(c+1151,"byte1", false,-1, 7,0);
    tracep->declBus(c+1152,"byte2", false,-1, 7,0);
    tracep->declBus(c+1153,"byte3", false,-1, 7,0);
    tracep->declBus(c+1154,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1371,"rst_n", false,-1);
    tracep->declBus(c+1292,"addr", false,-1, 23,0);
    tracep->declBit(c+1316,"rd", false,-1);
    tracep->declBus(c+1475,"size", false,-1, 2,0);
    tracep->declBit(c+549,"done", false,-1);
    tracep->declBus(c+66,"line", false,-1, 31,0);
    tracep->declBit(c+542,"sck", false,-1);
    tracep->declBit(c+543,"ce_n", false,-1);
    tracep->declBus(c+1348,"din", false,-1, 3,0);
    tracep->declBus(c+544,"dout", false,-1, 3,0);
    tracep->declBit(c+545,"douten", false,-1);
    tracep->declBus(c+1621,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1622,"READ", false,-1, 0,0);
    tracep->declBus(c+1623,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+550,"state", false,-1);
    tracep->declBit(c+1318,"nstate", false,-1);
    tracep->declBus(c+551,"counter", false,-1, 7,0);
    tracep->declBus(c+552,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+447+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1624,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+553,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1371,"rst_n", false,-1);
    tracep->declBus(c+1293,"addr", false,-1, 23,0);
    tracep->declBus(c+1154,"line", false,-1, 31,0);
    tracep->declBus(c+1149,"size", false,-1, 2,0);
    tracep->declBit(c+1317,"wr", false,-1);
    tracep->declBit(c+1168,"done", false,-1);
    tracep->declBit(c+546,"sck", false,-1);
    tracep->declBit(c+547,"ce_n", false,-1);
    tracep->declBus(c+1348,"din", false,-1, 3,0);
    tracep->declBus(c+1167,"dout", false,-1, 3,0);
    tracep->declBit(c+548,"douten", false,-1);
    tracep->declBus(c+1621,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1622,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1155,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+554,"state", false,-1);
    tracep->declBit(c+1319,"nstate", false,-1);
    tracep->declBus(c+555,"counter", false,-1, 7,0);
    tracep->declBus(c+556,"saddr", false,-1, 23,0);
    tracep->declBus(c+1625,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1156,"auto_in_psel", false,-1);
    tracep->declBit(c+1157,"auto_in_penable", false,-1);
    tracep->declBit(c+1028,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1275,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+537,"auto_in_pready", false,-1);
    tracep->declBit(c+1383,"auto_in_pslverr", false,-1);
    tracep->declBus(c+538,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1349,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1172,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1173,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1174,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1175,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1176,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1177,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1178,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1179,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1195,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1275,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1156,"in_psel", false,-1);
    tracep->declBit(c+1157,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"in_pwrite", false,-1);
    tracep->declBus(c+1029,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+537,"in_pready", false,-1);
    tracep->declBus(c+538,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1383,"in_pslverr", false,-1);
    tracep->declBit(c+1349,"sdram_clk", false,-1);
    tracep->declBit(c+1172,"sdram_cke", false,-1);
    tracep->declBit(c+1173,"sdram_cs", false,-1);
    tracep->declBit(c+1174,"sdram_ras", false,-1);
    tracep->declBit(c+1175,"sdram_cas", false,-1);
    tracep->declBit(c+1176,"sdram_we", false,-1);
    tracep->declBus(c+1181,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1178,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1179,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1195,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+557,"sdram_dout_en", false,-1);
    tracep->declBus(c+558,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+451,"state", false,-1, 1,0);
    tracep->declBit(c+1182,"req_accept", false,-1);
    tracep->declBit(c+1294,"is_read", false,-1);
    tracep->declBit(c+1295,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1324,"clk_i", false,-1);
    tracep->declBit(c+1325,"rst_i", false,-1);
    tracep->declBus(c+1296,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1294,"inport_rd_i", false,-1);
    tracep->declBus(c+1395,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1275,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1029,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1196,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+1182,"inport_accept_o", false,-1);
    tracep->declBit(c+537,"inport_ack_o", false,-1);
    tracep->declBit(c+1383,"inport_error_o", false,-1);
    tracep->declBus(c+538,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1349,"sdram_clk_o", false,-1);
    tracep->declBit(c+1172,"sdram_cke_o", false,-1);
    tracep->declBit(c+1173,"sdram_cs_o", false,-1);
    tracep->declBit(c+1174,"sdram_ras_o", false,-1);
    tracep->declBit(c+1175,"sdram_cas_o", false,-1);
    tracep->declBit(c+1176,"sdram_we_o", false,-1);
    tracep->declBus(c+1179,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1177,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1178,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+559,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+557,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1626,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1627,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1628,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1629,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1629,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1630,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1630,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1631,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1632,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1633,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1634,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1630,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1635,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1636,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1637,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1638,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1639,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1640,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1641,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1394,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1642,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1630,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1394,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1641,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1640,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1636,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1638,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1637,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1639,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1635,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1643,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1644,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1645,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1645,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1432,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1645,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1629,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1629,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1646,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1275,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1296,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1294,"ram_rd_w", false,-1);
    tracep->declBit(c+1182,"ram_accept_w", false,-1);
    tracep->declBus(c+1029,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+538,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+537,"ram_ack_w", false,-1);
    tracep->declBit(c+1297,"ram_req_w", false,-1);
    tracep->declBus(c+1183,"command_q", false,-1, 3,0);
    tracep->declBus(c+1177,"addr_q", false,-1, 12,0);
    tracep->declBus(c+559,"data_q", false,-1, 31,0);
    tracep->declBit(c+560,"data_rd_en_q", false,-1);
    tracep->declBus(c+1179,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1172,"cke_q", false,-1);
    tracep->declBus(c+1178,"bank_q", false,-1, 1,0);
    tracep->declBus(c+538,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+1184,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1197,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+561,"refresh_q", false,-1);
    tracep->declBus(c+562,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+563+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1185,"state_q", false,-1, 3,0);
    tracep->declBus(c+1320,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1321,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+567,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+568,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1298,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1299,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1300,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1630,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+569,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1322,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1647,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1186,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+570,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+571,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+572,"idx", false,-1, 31,0);
    tracep->declBus(c+573,"rd_q", false,-1, 3,0);
    tracep->declBit(c+537,"ack_q", false,-1);
    tracep->declArray(c+1187,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1165,"auto_in_psel", false,-1);
    tracep->declBit(c+1166,"auto_in_penable", false,-1);
    tracep->declBit(c+1028,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1276,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"auto_in_pready", false,-1);
    tracep->declBit(c+540,"auto_in_pslverr", false,-1);
    tracep->declBus(c+541,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+536,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1170,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1171,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1346,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1648,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1649,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1650,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1301,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1165,"in_psel", false,-1);
    tracep->declBit(c+1166,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"in_pwrite", false,-1);
    tracep->declBus(c+1029,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"in_pready", false,-1);
    tracep->declBus(c+541,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+540,"in_pslverr", false,-1);
    tracep->declBit(c+536,"spi_sck", false,-1);
    tracep->declBus(c+1170,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1171,"spi_mosi", false,-1);
    tracep->declBit(c+1346,"spi_miso", false,-1);
    tracep->declBit(c+574,"spi_irq_out", false,-1);
    tracep->declBus(c+1651,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1652,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1651,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1653,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1654,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1655,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1394,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1641,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1640,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1636,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1638,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1637,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1639,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1635,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1643,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1644,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1656,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+575,"xip_state", false,-1, 3,0);
    tracep->declBus(c+576,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+577,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+578,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+579,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+580,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+581,"wb_we_i", false,-1);
    tracep->declBit(c+582,"wb_stb_i", false,-1);
    tracep->declBit(c+583,"wb_cyc_i", false,-1);
    tracep->declBit(c+584,"wb_ack_o", false,-1);
    tracep->declBit(c+1383,"wb_err_o", false,-1);
    tracep->declBit(c+585,"wb_int_o", false,-1);
    tracep->declBit(c+586,"done", false,-1);
    tracep->declBus(c+587,"paddr", false,-1, 31,0);
    tracep->declQuad(c+588,"data", false,-1, 63,0);
    tracep->declBit(c+590,"is_flash_access", false,-1);
    tracep->declBus(c+591,"tmp", false,-1, 31,0);
    tracep->declQuad(c+592,"tmp64", false,-1, 63,0);
    tracep->declBus(c+594,"counter", false,-1, 7,0);
    tracep->declBit(c+595,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1657,"Tp", false,-1, 31,0);
    tracep->declBit(c+1324,"wb_clk_i", false,-1);
    tracep->declBit(c+1325,"wb_rst_i", false,-1);
    tracep->declBus(c+577,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+578,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+579,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+580,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+581,"wb_we_i", false,-1);
    tracep->declBit(c+582,"wb_stb_i", false,-1);
    tracep->declBit(c+583,"wb_cyc_i", false,-1);
    tracep->declBit(c+584,"wb_ack_o", false,-1);
    tracep->declBit(c+1383,"wb_err_o", false,-1);
    tracep->declBit(c+585,"wb_int_o", false,-1);
    tracep->declBus(c+1170,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+536,"sclk_pad_o", false,-1);
    tracep->declBit(c+1171,"mosi_pad_o", false,-1);
    tracep->declBit(c+1346,"miso_pad_i", false,-1);
    tracep->declBus(c+596,"divider", false,-1, 15,0);
    tracep->declBus(c+597,"ctrl", false,-1, 13,0);
    tracep->declBus(c+598,"ss", false,-1, 7,0);
    tracep->declBus(c+599,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+600,"rx", false,-1, 127,0);
    tracep->declBit(c+604,"rx_negedge", false,-1);
    tracep->declBit(c+605,"tx_negedge", false,-1);
    tracep->declBus(c+606,"char_len", false,-1, 6,0);
    tracep->declBit(c+607,"go", false,-1);
    tracep->declBit(c+608,"lsb", false,-1);
    tracep->declBit(c+609,"ie", false,-1);
    tracep->declBit(c+610,"ass", false,-1);
    tracep->declBit(c+611,"spi_divider_sel", false,-1);
    tracep->declBit(c+612,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+613,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+614,"spi_ss_sel", false,-1);
    tracep->declBit(c+615,"tip", false,-1);
    tracep->declBit(c+616,"pos_edge", false,-1);
    tracep->declBit(c+617,"neg_edge", false,-1);
    tracep->declBit(c+618,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1657,"Tp", false,-1, 31,0);
    tracep->declBit(c+1324,"clk_in", false,-1);
    tracep->declBit(c+1325,"rst", false,-1);
    tracep->declBit(c+615,"enable", false,-1);
    tracep->declBit(c+607,"go", false,-1);
    tracep->declBit(c+618,"last_clk", false,-1);
    tracep->declBus(c+596,"divider", false,-1, 15,0);
    tracep->declBit(c+536,"clk_out", false,-1);
    tracep->declBit(c+616,"pos_edge", false,-1);
    tracep->declBit(c+617,"neg_edge", false,-1);
    tracep->declBus(c+619,"cnt", false,-1, 15,0);
    tracep->declBit(c+620,"cnt_zero", false,-1);
    tracep->declBit(c+621,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1657,"Tp", false,-1, 31,0);
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1325,"rst", false,-1);
    tracep->declBus(c+622,"latch", false,-1, 3,0);
    tracep->declBus(c+580,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+606,"len", false,-1, 6,0);
    tracep->declBit(c+608,"lsb", false,-1);
    tracep->declBit(c+607,"go", false,-1);
    tracep->declBit(c+616,"pos_edge", false,-1);
    tracep->declBit(c+617,"neg_edge", false,-1);
    tracep->declBit(c+604,"rx_negedge", false,-1);
    tracep->declBit(c+605,"tx_negedge", false,-1);
    tracep->declBit(c+615,"tip", false,-1);
    tracep->declBit(c+618,"last", false,-1);
    tracep->declBus(c+578,"p_in", false,-1, 31,0);
    tracep->declArray(c+600,"p_out", false,-1, 127,0);
    tracep->declBit(c+536,"s_clk", false,-1);
    tracep->declBit(c+1346,"s_in", false,-1);
    tracep->declBit(c+1171,"s_out", false,-1);
    tracep->declBus(c+623,"cnt", false,-1, 7,0);
    tracep->declArray(c+600,"data", false,-1, 127,0);
    tracep->declBus(c+624,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+625,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+626,"rx_clk", false,-1);
    tracep->declBit(c+627,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1279,"auto_in_psel", false,-1);
    tracep->declBit(c+1280,"auto_in_penable", false,-1);
    tracep->declBit(c+1028,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1277,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1281,"auto_in_pready", false,-1);
    tracep->declBit(c+1383,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1351,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1344,"uart_rx", false,-1);
    tracep->declBit(c+1345,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1279,"in_psel", false,-1);
    tracep->declBit(c+1280,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1281,"in_pready", false,-1);
    tracep->declBit(c+1383,"in_pslverr", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1028,"in_pwrite", false,-1);
    tracep->declBus(c+1351,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1029,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1344,"uart_rx", false,-1);
    tracep->declBit(c+1345,"uart_tx", false,-1);
    tracep->declBit(c+628,"rtsn", false,-1);
    tracep->declBit(c+1383,"ctsn", false,-1);
    tracep->declBit(c+629,"dtr_pad_o", false,-1);
    tracep->declBit(c+1383,"dsr_pad_i", false,-1);
    tracep->declBit(c+1383,"ri_pad_i", false,-1);
    tracep->declBit(c+1383,"dcd_pad_i", false,-1);
    tracep->declBit(c+630,"interrupt", false,-1);
    tracep->declBit(c+1372,"reg_we", false,-1);
    tracep->declBit(c+1373,"reg_re", false,-1);
    tracep->declBus(c+1302,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1303,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+452,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1323,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+631,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1325,"wb_rst_i", false,-1);
    tracep->declBus(c+1302,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1304,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1323,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1372,"wb_we_i", false,-1);
    tracep->declBit(c+1373,"wb_re_i", false,-1);
    tracep->declBit(c+1345,"stx_pad_o", false,-1);
    tracep->declBit(c+1344,"srx_pad_i", false,-1);
    tracep->declBus(c+1643,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+631,"rts_pad_o", false,-1);
    tracep->declBit(c+629,"dtr_pad_o", false,-1);
    tracep->declBit(c+630,"int_o", false,-1);
    tracep->declBit(c+632,"enable", false,-1);
    tracep->declBit(c+633,"srx_pad", false,-1);
    tracep->declBus(c+634,"ier", false,-1, 3,0);
    tracep->declBus(c+635,"iir", false,-1, 3,0);
    tracep->declBus(c+636,"fcr", false,-1, 1,0);
    tracep->declBus(c+637,"mcr", false,-1, 4,0);
    tracep->declBus(c+638,"lcr", false,-1, 7,0);
    tracep->declBus(c+639,"msr", false,-1, 7,0);
    tracep->declBus(c+640,"dl", false,-1, 15,0);
    tracep->declBus(c+641,"scratch", false,-1, 7,0);
    tracep->declBit(c+642,"start_dlc", false,-1);
    tracep->declBit(c+643,"lsr_mask_d", false,-1);
    tracep->declBit(c+644,"msi_reset", false,-1);
    tracep->declBus(c+645,"dlc", false,-1, 15,0);
    tracep->declBus(c+646,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+647,"rx_reset", false,-1);
    tracep->declBit(c+648,"tx_reset", false,-1);
    tracep->declBit(c+649,"dlab", false,-1);
    tracep->declBit(c+1393,"cts_pad_i", false,-1);
    tracep->declBit(c+1383,"dsr_pad_i", false,-1);
    tracep->declBit(c+1383,"ri_pad_i", false,-1);
    tracep->declBit(c+1383,"dcd_pad_i", false,-1);
    tracep->declBit(c+650,"loopback", false,-1);
    tracep->declBit(c+1383,"cts", false,-1);
    tracep->declBit(c+1393,"dsr", false,-1);
    tracep->declBit(c+1393,"ri", false,-1);
    tracep->declBit(c+1393,"dcd", false,-1);
    tracep->declBit(c+651,"cts_c", false,-1);
    tracep->declBit(c+652,"dsr_c", false,-1);
    tracep->declBit(c+653,"ri_c", false,-1);
    tracep->declBit(c+654,"dcd_c", false,-1);
    tracep->declBus(c+655,"lsr", false,-1, 7,0);
    tracep->declBit(c+656,"lsr0", false,-1);
    tracep->declBit(c+657,"lsr1", false,-1);
    tracep->declBit(c+658,"lsr2", false,-1);
    tracep->declBit(c+659,"lsr3", false,-1);
    tracep->declBit(c+660,"lsr4", false,-1);
    tracep->declBit(c+661,"lsr5", false,-1);
    tracep->declBit(c+662,"lsr6", false,-1);
    tracep->declBit(c+663,"lsr7", false,-1);
    tracep->declBit(c+664,"lsr0r", false,-1);
    tracep->declBit(c+665,"lsr1r", false,-1);
    tracep->declBit(c+666,"lsr2r", false,-1);
    tracep->declBit(c+667,"lsr3r", false,-1);
    tracep->declBit(c+668,"lsr4r", false,-1);
    tracep->declBit(c+669,"lsr5r", false,-1);
    tracep->declBit(c+670,"lsr6r", false,-1);
    tracep->declBit(c+671,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+672,"rls_int", false,-1);
    tracep->declBit(c+673,"rda_int", false,-1);
    tracep->declBit(c+674,"ti_int", false,-1);
    tracep->declBit(c+675,"thre_int", false,-1);
    tracep->declBit(c+676,"ms_int", false,-1);
    tracep->declBit(c+677,"tf_push", false,-1);
    tracep->declBit(c+678,"rf_pop", false,-1);
    tracep->declBus(c+1374,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+679,"rf_error_bit", false,-1);
    tracep->declBit(c+657,"rf_overrun", false,-1);
    tracep->declBit(c+680,"rf_push_pulse", false,-1);
    tracep->declBus(c+681,"rf_count", false,-1, 4,0);
    tracep->declBus(c+682,"tf_count", false,-1, 4,0);
    tracep->declBus(c+683,"tstate", false,-1, 2,0);
    tracep->declBus(c+684,"rstate", false,-1, 3,0);
    tracep->declBus(c+685,"counter_t", false,-1, 9,0);
    tracep->declBit(c+686,"thre_set_en", false,-1);
    tracep->declBus(c+687,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+688,"block_value", false,-1, 7,0);
    tracep->declBit(c+689,"serial_out", false,-1);
    tracep->declBit(c+690,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+691,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+692,"lsr0_d", false,-1);
    tracep->declBit(c+693,"lsr1_d", false,-1);
    tracep->declBit(c+694,"lsr2_d", false,-1);
    tracep->declBit(c+695,"lsr3_d", false,-1);
    tracep->declBit(c+696,"lsr4_d", false,-1);
    tracep->declBit(c+697,"lsr5_d", false,-1);
    tracep->declBit(c+698,"lsr6_d", false,-1);
    tracep->declBit(c+699,"lsr7_d", false,-1);
    tracep->declBit(c+700,"rls_int_d", false,-1);
    tracep->declBit(c+701,"thre_int_d", false,-1);
    tracep->declBit(c+702,"ms_int_d", false,-1);
    tracep->declBit(c+703,"ti_int_d", false,-1);
    tracep->declBit(c+704,"rda_int_d", false,-1);
    tracep->declBit(c+705,"rls_int_rise", false,-1);
    tracep->declBit(c+706,"thre_int_rise", false,-1);
    tracep->declBit(c+707,"ms_int_rise", false,-1);
    tracep->declBit(c+708,"ti_int_rise", false,-1);
    tracep->declBit(c+709,"rda_int_rise", false,-1);
    tracep->declBit(c+710,"rls_int_pnd", false,-1);
    tracep->declBit(c+711,"rda_int_pnd", false,-1);
    tracep->declBit(c+712,"thre_int_pnd", false,-1);
    tracep->declBit(c+713,"ms_int_pnd", false,-1);
    tracep->declBit(c+714,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1657,"Tp", false,-1, 31,0);
    tracep->declBus(c+1657,"width", false,-1, 31,0);
    tracep->declBus(c+1622,"init_value", false,-1, 0,0);
    tracep->declBit(c+1325,"rst_i", false,-1);
    tracep->declBit(c+1324,"clk_i", false,-1);
    tracep->declBit(c+1383,"stage1_rst_i", false,-1);
    tracep->declBit(c+1393,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1344,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+633,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+715,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1325,"wb_rst_i", false,-1);
    tracep->declBus(c+638,"lcr", false,-1, 7,0);
    tracep->declBit(c+678,"rf_pop", false,-1);
    tracep->declBit(c+690,"srx_pad_i", false,-1);
    tracep->declBit(c+632,"enable", false,-1);
    tracep->declBit(c+647,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+685,"counter_t", false,-1, 9,0);
    tracep->declBus(c+681,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1374,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+657,"rf_overrun", false,-1);
    tracep->declBit(c+679,"rf_error_bit", false,-1);
    tracep->declBus(c+684,"rstate", false,-1, 3,0);
    tracep->declBit(c+680,"rf_push_pulse", false,-1);
    tracep->declBus(c+716,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+717,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+718,"rshift", false,-1, 7,0);
    tracep->declBit(c+719,"rparity", false,-1);
    tracep->declBit(c+720,"rparity_error", false,-1);
    tracep->declBit(c+721,"rframing_error", false,-1);
    tracep->declBit(c+722,"rbit_in", false,-1);
    tracep->declBit(c+723,"rparity_xor", false,-1);
    tracep->declBus(c+724,"counter_b", false,-1, 7,0);
    tracep->declBit(c+725,"rf_push_q", false,-1);
    tracep->declBus(c+726,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+727,"rf_push", false,-1);
    tracep->declBit(c+728,"break_error", false,-1);
    tracep->declBit(c+729,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+730,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+731,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+732,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1394,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1641,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1640,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1636,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1638,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1637,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1639,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1635,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1643,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1644,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1658,"sr_push", false,-1, 3,0);
    tracep->declBus(c+733,"toc_value", false,-1, 9,0);
    tracep->declBus(c+734,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1659,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1660,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1630,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1620,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1325,"wb_rst_i", false,-1);
    tracep->declBit(c+680,"push", false,-1);
    tracep->declBit(c+678,"pop", false,-1);
    tracep->declBus(c+726,"data_in", false,-1, 10,0);
    tracep->declBit(c+647,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1374,"data_out", false,-1, 10,0);
    tracep->declBit(c+657,"overrun", false,-1);
    tracep->declBus(c+681,"count", false,-1, 4,0);
    tracep->declBit(c+679,"error_bit", false,-1);
    tracep->declBus(c+1375,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+735+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+751,"top", false,-1, 3,0);
    tracep->declBus(c+752,"bottom", false,-1, 3,0);
    tracep->declBus(c+753,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+754,"word0", false,-1, 2,0);
    tracep->declBus(c+755,"word1", false,-1, 2,0);
    tracep->declBus(c+756,"word2", false,-1, 2,0);
    tracep->declBus(c+757,"word3", false,-1, 2,0);
    tracep->declBus(c+758,"word4", false,-1, 2,0);
    tracep->declBus(c+759,"word5", false,-1, 2,0);
    tracep->declBus(c+760,"word6", false,-1, 2,0);
    tracep->declBus(c+761,"word7", false,-1, 2,0);
    tracep->declBus(c+762,"word8", false,-1, 2,0);
    tracep->declBus(c+763,"word9", false,-1, 2,0);
    tracep->declBus(c+764,"word10", false,-1, 2,0);
    tracep->declBus(c+765,"word11", false,-1, 2,0);
    tracep->declBus(c+766,"word12", false,-1, 2,0);
    tracep->declBus(c+767,"word13", false,-1, 2,0);
    tracep->declBus(c+768,"word14", false,-1, 2,0);
    tracep->declBus(c+769,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1630,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1650,"data_width", false,-1, 31,0);
    tracep->declBus(c+1660,"depth", false,-1, 31,0);
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+680,"we", false,-1);
    tracep->declBus(c+751,"a", false,-1, 3,0);
    tracep->declBus(c+752,"dpra", false,-1, 3,0);
    tracep->declBus(c+770,"di", false,-1, 7,0);
    tracep->declBus(c+1375,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+453+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1325,"wb_rst_i", false,-1);
    tracep->declBus(c+638,"lcr", false,-1, 7,0);
    tracep->declBit(c+677,"tf_push", false,-1);
    tracep->declBus(c+1304,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+632,"enable", false,-1);
    tracep->declBit(c+648,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+689,"stx_pad_o", false,-1);
    tracep->declBus(c+683,"tstate", false,-1, 2,0);
    tracep->declBus(c+682,"tf_count", false,-1, 4,0);
    tracep->declBus(c+771,"counter", false,-1, 4,0);
    tracep->declBus(c+772,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+773,"shift_out", false,-1, 6,0);
    tracep->declBit(c+774,"stx_o_tmp", false,-1);
    tracep->declBit(c+775,"parity_xor", false,-1);
    tracep->declBit(c+776,"tf_pop", false,-1);
    tracep->declBit(c+777,"bit_out", false,-1);
    tracep->declBus(c+1304,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1169,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+778,"tf_overrun", false,-1);
    tracep->declBus(c+1399,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1382,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1410,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1474,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1475,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1661,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1650,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1660,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1630,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1620,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+1325,"wb_rst_i", false,-1);
    tracep->declBit(c+677,"push", false,-1);
    tracep->declBit(c+776,"pop", false,-1);
    tracep->declBus(c+1304,"data_in", false,-1, 7,0);
    tracep->declBit(c+648,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1169,"data_out", false,-1, 7,0);
    tracep->declBit(c+778,"overrun", false,-1);
    tracep->declBus(c+682,"count", false,-1, 4,0);
    tracep->declBus(c+779,"top", false,-1, 3,0);
    tracep->declBus(c+780,"bottom", false,-1, 3,0);
    tracep->declBus(c+781,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1630,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1650,"data_width", false,-1, 31,0);
    tracep->declBus(c+1660,"depth", false,-1, 31,0);
    tracep->declBit(c+1324,"clk", false,-1);
    tracep->declBit(c+677,"we", false,-1);
    tracep->declBus(c+779,"a", false,-1, 3,0);
    tracep->declBus(c+780,"dpra", false,-1, 3,0);
    tracep->declBus(c+1304,"di", false,-1, 7,0);
    tracep->declBus(c+1169,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+469+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBit(c+1158,"auto_in_psel", false,-1);
    tracep->declBit(c+1159,"auto_in_penable", false,-1);
    tracep->declBit(c+1028,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1276,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1384,"auto_in_pready", false,-1);
    tracep->declBit(c+1385,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1386,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1338,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1339,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1340,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1341,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1342,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1343,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1324,"clock", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1301,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1158,"in_psel", false,-1);
    tracep->declBit(c+1159,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"in_pwrite", false,-1);
    tracep->declBus(c+1029,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1384,"in_pready", false,-1);
    tracep->declBus(c+1386,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1385,"in_pslverr", false,-1);
    tracep->declBus(c+1338,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1339,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1340,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1341,"vga_hsync", false,-1);
    tracep->declBit(c+1342,"vga_vsync", false,-1);
    tracep->declBit(c+1343,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+536,"sck", false,-1);
    tracep->declBit(c+1190,"ss", false,-1);
    tracep->declBit(c+1171,"mosi", false,-1);
    tracep->declBit(c+1022,"miso", false,-1);
    tracep->declBus(c+1023,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1024,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1376,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+536,"sck", false,-1);
    tracep->declBit(c+1191,"ss", false,-1);
    tracep->declBit(c+1171,"mosi", false,-1);
    tracep->declBit(c+1377,"miso", false,-1);
    tracep->declBit(c+1191,"reset", false,-1);
    tracep->declBus(c+812,"state", false,-1, 2,0);
    tracep->declBus(c+813,"counter", false,-1, 7,0);
    tracep->declBus(c+814,"cmd", false,-1, 7,0);
    tracep->declBus(c+815,"addr", false,-1, 23,0);
    tracep->declBus(c+816,"data", false,-1, 31,0);
    tracep->declBit(c+817,"ren", false,-1);
    tracep->declBus(c+1378,"rdata", false,-1, 31,0);
    tracep->declBus(c+1379,"raddr", false,-1, 31,0);
    tracep->declBus(c+1025,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+536,"clock", false,-1);
    tracep->declBit(c+817,"valid", false,-1);
    tracep->declBus(c+814,"cmd", false,-1, 7,0);
    tracep->declBus(c+1379,"addr", false,-1, 31,0);
    tracep->declBus(c+1378,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1347,"sck", false,-1);
    tracep->declBit(c+1305,"ce_n", false,-1);
    tracep->declBus(c+1348,"dio", false,-1, 3,0);
    tracep->declBus(c+56,"dio_out", false,-1, 3,0);
    tracep->declBus(c+57,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1348,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1426,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1657,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1629,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1662,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1630,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1620,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+58,"state", false,-1, 2,0);
    tracep->declBus(c+1380,"next_state", false,-1, 2,0);
    tracep->declBus(c+59,"counter", false,-1, 7,0);
    tracep->declBus(c+60,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+61,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+62,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+63,"is_read_op", false,-1);
    tracep->declBit(c+64,"is_write_op", false,-1);
    tracep->declBus(c+65,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1381,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1349,"clk", false,-1);
    tracep->declBit(c+1172,"cke", false,-1);
    tracep->declBit(c+1173,"cs", false,-1);
    tracep->declBit(c+1174,"ras", false,-1);
    tracep->declBit(c+1175,"cas", false,-1);
    tracep->declBit(c+1176,"we", false,-1);
    tracep->declBus(c+1177,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1179,"dqm", false,-1, 3,0);
    tracep->declBus(c+1195,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1349,"clk", false,-1);
    tracep->declBit(c+1172,"cke", false,-1);
    tracep->declBit(c+1173,"cs", false,-1);
    tracep->declBit(c+1174,"ras", false,-1);
    tracep->declBit(c+1175,"cas", false,-1);
    tracep->declBit(c+1176,"we", false,-1);
    tracep->declBus(c+1177,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1192,"dqm", false,-1, 1,0);
    tracep->declBus(c+1198,"dq", false,-1, 15,0);
    tracep->declBus(c+1663,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1636,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1637,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1638,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1394,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+782,"cas_la", false,-1, 2,0);
    tracep->declBus(c+783,"bl", false,-1, 2,0);
    tracep->declBus(c+1183,"command", false,-1, 3,0);
    tracep->declBus(c+784,"mode_register", false,-1, 12,0);
    tracep->declBus(c+785,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1193,"col_addr", false,-1, 9,0);
    tracep->declBus(c+786,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1199,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+787,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+788+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+792,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+793,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1664,"state", false,-1, 2,0);
    tracep->declBit(c+794,"write_brust", false,-1);
    tracep->declBit(c+795,"read_burst", false,-1);
    tracep->declBus(c+796,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1349,"clk", false,-1);
    tracep->declBit(c+1172,"cke", false,-1);
    tracep->declBit(c+1173,"cs", false,-1);
    tracep->declBit(c+1174,"ras", false,-1);
    tracep->declBit(c+1175,"cas", false,-1);
    tracep->declBit(c+1176,"we", false,-1);
    tracep->declBus(c+1177,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1194,"dqm", false,-1, 1,0);
    tracep->declBus(c+1196,"dq", false,-1, 15,0);
    tracep->declBus(c+1663,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1636,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1637,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1638,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1394,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+797,"cas_la", false,-1, 2,0);
    tracep->declBus(c+798,"bl", false,-1, 2,0);
    tracep->declBus(c+1183,"command", false,-1, 3,0);
    tracep->declBus(c+799,"mode_register", false,-1, 12,0);
    tracep->declBus(c+800,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1193,"col_addr", false,-1, 9,0);
    tracep->declBus(c+801,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1200,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+802,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+803+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+807,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+808,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1665,"state", false,-1, 2,0);
    tracep->declBit(c+809,"write_brust", false,-1);
    tracep->declBit(c+810,"read_burst", false,-1);
    tracep->declBus(c+811,"dout", false,-1, 15,0);
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+40,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__b_switch));
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+61,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+62,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullIData(oldp+66,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+67,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+68,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+69,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+70,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+71,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+72,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+73,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+74,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+75,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+77,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+78,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+79,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+80,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+81,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+82,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+91,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+94,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+95,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+96,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+97,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+98,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+99,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+100,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+101,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+102,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+103,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+173,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+174,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+175,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+176,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+180,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+182,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+219,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+222,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+223,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+236,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+237,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+238,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+341,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+345,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+349,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+353,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+357,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+361,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+365,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+373,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+377,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+381,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+393,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+397,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+401,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+405,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+413,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+417,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+421,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+425,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+429,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+433,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+485,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+486,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+489,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+490,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+491,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+492,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+493,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+494,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+495,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+496,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))));
    bufp->fullBit(oldp+498,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+499,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+500,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+501,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+502,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+503,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+504,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+505,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+506,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+507,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+508,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+509,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+510,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+511,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+512,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+513,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+514,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+515,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+516,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+517,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+518,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+519,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+520,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+521,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+522,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+523,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+524,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+525,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+526,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+527,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+530,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+531,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+532,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+533,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+534,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+535,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+544,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (8U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    ((0xaU 
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
                                                         : 0U)))))))))),4);
    bufp->fullBit(oldp+545,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+549,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+553,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+557,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+558,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)),16);
    bufp->fullIData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+591,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+592,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+604,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+605,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+606,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+607,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+608,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+609,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+610,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+611,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+618,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+620,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+621,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+624,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+628,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+629,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+631,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+649,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+650,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+651,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+652,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+653,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+654,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+655,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+658,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+659,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+660,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+679,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+686,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+705,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+706,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+707,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+708,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+709,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+728,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+729,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+730,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+731,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+732,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+734,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+753,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+770,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+781,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullCData(oldp+782,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+783,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+784,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+790,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+797,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+798,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+801,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+806,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+811,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+815,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+817,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+825,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullIData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+841,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+844,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+861,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+867,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+868,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+909,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+910,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+912,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+915,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+931,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+932,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+933,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+934,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+935,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+936,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+937,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+938,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+939,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+941,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+944,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+947,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+950,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+970,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+971,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+972,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+976,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+977,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+982,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+986,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
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
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1027,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+1034,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1152,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1153,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1154,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1155,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1156,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1157,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1159,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1160,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1161,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1164,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1166,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+1173,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1174,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1175,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1176,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullSData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),14);
    bufp->fullBit(oldp+1182,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1190,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1192,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1193,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),10);
    bufp->fullCData(oldp+1194,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+1196,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),16);
    bufp->fullIData(oldp+1197,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),32);
    bufp->fullSData(oldp+1198,((vlSelf->ysyxSoCFull__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1201,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1207,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1211,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1218,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1219,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1221,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1224,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1225,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+1229,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+1230,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1231,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1232,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1233,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1234,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1235,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1236,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1238,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1239,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1240,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1241,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1242,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1243,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1244,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1245,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1246,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1249,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1250,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1261,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1267,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1272,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1273,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1274,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+1276,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1277,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1281,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1289,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1292,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1293,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1298,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1299,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1300,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1301,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1302,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1312,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1324,(vlSelf->clock));
    bufp->fullBit(oldp+1325,(vlSelf->reset));
    bufp->fullSData(oldp+1326,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1327,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1328,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1329,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1330,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1331,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1332,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1333,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1334,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1335,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1336,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1337,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1338,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1339,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1340,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1341,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1342,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1343,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1344,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1345,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1346,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1349,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1350,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1351,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1352,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullCData(oldp+1354,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1355,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1357,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1358,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1359,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1361,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch)
                                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready)))));
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1364,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
                                         ? ((0xf11U 
                                             == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U))
                                             ? 0x79737978U
                                             : ((0xf12U 
                                                 == 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0x14U))
                                                 ? 0x17e3c19U
                                                 : 
                                                ((0x300U 
                                                  == 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus
                                                  : 
                                                 ((0x305U 
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
                                                     : 0U))))))
                                         : 0U)) : 0U)),32);
    bufp->fullCData(oldp+1365,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state)
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid))
                                             ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu))
                                             ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu))
                                             ? 3U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state)))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter))
                                             ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid))
                                             ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state)))))),3);
    bufp->fullCData(oldp+1366,((0xfU & vlSelf->__VdfgTmp_hc20ef241__0)),4);
    bufp->fullBit(oldp+1367,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1368,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                                     | ((0x1cU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                     ? 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter))
                                                      ? 0U
                                                      : 2U)
                                                     : 0U)))),2);
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+1371,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1374,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1377,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1379,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullCData(oldp+1382,(1U),3);
    bufp->fullBit(oldp+1383,(0U));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1393,(1U));
    bufp->fullCData(oldp+1394,(0U),4);
    bufp->fullCData(oldp+1395,(0U),8);
    bufp->fullCData(oldp+1396,(0U),2);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1398,(0U),32);
    bufp->fullCData(oldp+1399,(0U),3);
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1410,(2U),3);
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1426,(0U),32);
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1430,(1U),2);
    bufp->fullCData(oldp+1431,(2U),2);
    bufp->fullIData(oldp+1432,(0x20U),32);
    bufp->fullIData(oldp+1433,(4U),32);
    bufp->fullIData(oldp+1434,(0x79737978U),32);
    bufp->fullIData(oldp+1435,(0x17e3c19U),32);
    bufp->fullCData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1474,(3U),3);
    bufp->fullCData(oldp+1475,(4U),3);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1619,(3U),2);
    bufp->fullIData(oldp+1620,(5U),32);
    bufp->fullBit(oldp+1621,(0U));
    bufp->fullBit(oldp+1622,(1U));
    bufp->fullCData(oldp+1623,(0x1bU),8);
    bufp->fullCData(oldp+1624,(0xebU),8);
    bufp->fullCData(oldp+1625,(0x38U),8);
    bufp->fullIData(oldp+1626,(0x64U),32);
    bufp->fullIData(oldp+1627,(0x18U),32);
    bufp->fullIData(oldp+1628,(9U),32);
    bufp->fullIData(oldp+1629,(2U),32);
    bufp->fullIData(oldp+1630,(4U),32);
    bufp->fullIData(oldp+1631,(0xdU),32);
    bufp->fullIData(oldp+1632,(0x2000U),32);
    bufp->fullIData(oldp+1633,(0x2710U),32);
    bufp->fullIData(oldp+1634,(0x30cU),32);
    bufp->fullCData(oldp+1635,(7U),4);
    bufp->fullCData(oldp+1636,(3U),4);
    bufp->fullCData(oldp+1637,(5U),4);
    bufp->fullCData(oldp+1638,(4U),4);
    bufp->fullCData(oldp+1639,(6U),4);
    bufp->fullCData(oldp+1640,(2U),4);
    bufp->fullCData(oldp+1641,(1U),4);
    bufp->fullSData(oldp+1642,(0x21U),13);
    bufp->fullCData(oldp+1643,(8U),4);
    bufp->fullCData(oldp+1644,(9U),4);
    bufp->fullIData(oldp+1645,(0xaU),32);
    bufp->fullIData(oldp+1646,(6U),32);
    bufp->fullIData(oldp+1647,(0x11U),32);
    bufp->fullIData(oldp+1648,(0x30000000U),32);
    bufp->fullIData(oldp+1649,(0x3fffffffU),32);
    bufp->fullIData(oldp+1650,(8U),32);
    bufp->fullCData(oldp+1651,(4U),5);
    bufp->fullCData(oldp+1652,(0U),5);
    bufp->fullCData(oldp+1653,(0x10U),5);
    bufp->fullCData(oldp+1654,(0x14U),5);
    bufp->fullCData(oldp+1655,(0x18U),5);
    bufp->fullIData(oldp+1656,(0x3000000U),32);
    bufp->fullIData(oldp+1657,(1U),32);
    bufp->fullCData(oldp+1658,(0xaU),4);
    bufp->fullIData(oldp+1659,(0xbU),32);
    bufp->fullIData(oldp+1660,(0x10U),32);
    bufp->fullCData(oldp+1661,(5U),3);
    bufp->fullIData(oldp+1662,(3U),32);
    bufp->fullIData(oldp+1663,(0x400000U),32);
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_low__DOT__state),3);
}
