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
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1338,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1339,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1340,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1341,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1342,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1343,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1344,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1345,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1346,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1347,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1348,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1349,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1350,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1351,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1352,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1353,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1354,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1355,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1356,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1357,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1338,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1339,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1340,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1341,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1342,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1343,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1344,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1345,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1346,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1347,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1348,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1349,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1350,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1351,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1352,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1353,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1354,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1355,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1356,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1357,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+538,"spi_sck", false,-1);
    tracep->declBus(c+1182,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1183,"spi_mosi", false,-1);
    tracep->declBit(c+1358,"spi_miso", false,-1);
    tracep->declBit(c+1356,"uart_rx", false,-1);
    tracep->declBit(c+1357,"uart_tx", false,-1);
    tracep->declBit(c+1359,"psram_sck", false,-1);
    tracep->declBit(c+1317,"psram_ce_n", false,-1);
    tracep->declBus(c+1360,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1361,"sdram_clk", false,-1);
    tracep->declBit(c+1184,"sdram_cke", false,-1);
    tracep->declBit(c+1185,"sdram_cs", false,-1);
    tracep->declBit(c+1186,"sdram_ras", false,-1);
    tracep->declBit(c+1187,"sdram_cas", false,-1);
    tracep->declBit(c+1188,"sdram_we", false,-1);
    tracep->declBus(c+1189,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1190,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1191,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1208,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1338,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1339,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1340,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1341,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1342,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1343,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1344,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1345,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1346,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1347,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1348,"ps2_clk", false,-1);
    tracep->declBit(c+1349,"ps2_data", false,-1);
    tracep->declBus(c+1350,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1351,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1352,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1353,"vga_hsync", false,-1);
    tracep->declBit(c+1354,"vga_vsync", false,-1);
    tracep->declBit(c+1355,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1287,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1038,"in_psel", false,-1);
    tracep->declBit(c+1039,"in_penable", false,-1);
    tracep->declBus(c+1395,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1040,"in_pwrite", false,-1);
    tracep->declBus(c+1041,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1318,"in_pready", false,-1);
    tracep->declBus(c+1319,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1320,"in_pslverr", false,-1);
    tracep->declBus(c+1287,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1038,"out_psel", false,-1);
    tracep->declBit(c+1039,"out_penable", false,-1);
    tracep->declBus(c+1395,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1040,"out_pwrite", false,-1);
    tracep->declBus(c+1041,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1318,"out_pready", false,-1);
    tracep->declBus(c+1319,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1320,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1038,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1039,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1040,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1287,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1318,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1320,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1319,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1168,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1169,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1287,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1396,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+540,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1170,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1171,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1288,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1395,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1397,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1398,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1399,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1172,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1173,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1289,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1395,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1400,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1401,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1402,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1174,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1175,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1289,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1395,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1403,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1404,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1405,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1290,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1176,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1287,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1362,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1396,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+68,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1291,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1292,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1289,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1395,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1293,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1396,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1363,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1177,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1178,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1288,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1395,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+541,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+542,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+543,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1294,"sel_0", false,-1);
    tracep->declBit(c+1295,"sel_1", false,-1);
    tracep->declBit(c+1296,"sel_2", false,-1);
    tracep->declBit(c+1297,"sel_3", false,-1);
    tracep->declBit(c+1298,"sel_4", false,-1);
    tracep->declBit(c+1299,"sel_5", false,-1);
    tracep->declBit(c+1300,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1043,"auto_in_awready", false,-1);
    tracep->declBit(c+69,"auto_in_awvalid", false,-1);
    tracep->declBus(c+70,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+72,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+73,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1043,"auto_in_wready", false,-1);
    tracep->declBit(c+74,"auto_in_wvalid", false,-1);
    tracep->declBus(c+75,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+76,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+77,"auto_in_bready", false,-1);
    tracep->declBit(c+1321,"auto_in_bvalid", false,-1);
    tracep->declBus(c+78,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1322,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1044,"auto_in_arready", false,-1);
    tracep->declBit(c+79,"auto_in_arvalid", false,-1);
    tracep->declBus(c+80,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+82,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+83,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+84,"auto_in_rready", false,-1);
    tracep->declBit(c+1323,"auto_in_rvalid", false,-1);
    tracep->declBus(c+85,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1322,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1038,"auto_out_psel", false,-1);
    tracep->declBit(c+1039,"auto_out_penable", false,-1);
    tracep->declBit(c+1040,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1287,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1041,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1318,"auto_out_pready", false,-1);
    tracep->declBit(c+1320,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1319,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1039,"nodeOut_penable", false,-1);
    tracep->declBus(c+1045,"state", false,-1, 1,0);
    tracep->declBit(c+1044,"accept_read", false,-1);
    tracep->declBit(c+1043,"accept_write", false,-1);
    tracep->declBit(c+86,"is_write_r", false,-1);
    tracep->declBit(c+1040,"is_write", false,-1);
    tracep->declBus(c+85,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+78,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+87,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+88,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+89,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+90,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1324,"resp", false,-1, 1,0);
    tracep->declBus(c+91,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1322,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1323,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+92,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1321,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+93,"auto_in_awready", false,-1);
    tracep->declBit(c+953,"auto_in_awvalid", false,-1);
    tracep->declBus(c+94,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+96,"auto_in_wready", false,-1);
    tracep->declBit(c+956,"auto_in_wvalid", false,-1);
    tracep->declBus(c+957,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_in_wlast", false,-1);
    tracep->declBit(c+487,"auto_in_bready", false,-1);
    tracep->declBit(c+97,"auto_in_bvalid", false,-1);
    tracep->declBus(c+98,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+99,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+100,"auto_in_arready", false,-1);
    tracep->declBit(c+1213,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1215,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1216,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1365,"auto_in_rready", false,-1);
    tracep->declBit(c+101,"auto_in_rvalid", false,-1);
    tracep->declBus(c+102,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+103,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+105,"auto_in_rlast", false,-1);
    tracep->declBit(c+1043,"auto_out_awready", false,-1);
    tracep->declBit(c+69,"auto_out_awvalid", false,-1);
    tracep->declBus(c+70,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+72,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+73,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1043,"auto_out_wready", false,-1);
    tracep->declBit(c+74,"auto_out_wvalid", false,-1);
    tracep->declBus(c+75,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+76,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+77,"auto_out_bready", false,-1);
    tracep->declBit(c+1321,"auto_out_bvalid", false,-1);
    tracep->declBus(c+78,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1322,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1044,"auto_out_arready", false,-1);
    tracep->declBit(c+79,"auto_out_arvalid", false,-1);
    tracep->declBus(c+80,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+82,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+83,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+84,"auto_out_rready", false,-1);
    tracep->declBit(c+1323,"auto_out_rvalid", false,-1);
    tracep->declBus(c+85,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1322,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+77,"io_enq_ready", false,-1);
    tracep->declBit(c+1321,"io_enq_valid", false,-1);
    tracep->declBus(c+78,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1322,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+487,"io_deq_ready", false,-1);
    tracep->declBit(c+97,"io_deq_valid", false,-1);
    tracep->declBus(c+98,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+99,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+106,"wrap", false,-1);
    tracep->declBit(c+107,"wrap_1", false,-1);
    tracep->declBit(c+108,"maybe_full", false,-1);
    tracep->declBit(c+109,"ptr_match", false,-1);
    tracep->declBit(c+110,"empty", false,-1);
    tracep->declBit(c+111,"full", false,-1);
    tracep->declBit(c+1325,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+107,"R0_addr", false,-1);
    tracep->declBit(c+1406,"R0_en", false,-1);
    tracep->declBit(c+1336,"R0_clk", false,-1);
    tracep->declBus(c+112,"R0_data", false,-1, 5,0);
    tracep->declBit(c+106,"W0_addr", false,-1);
    tracep->declBit(c+1325,"W0_en", false,-1);
    tracep->declBit(c+1336,"W0_clk", false,-1);
    tracep->declBus(c+1366,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+113+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+115,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+84,"io_enq_ready", false,-1);
    tracep->declBit(c+1323,"io_enq_valid", false,-1);
    tracep->declBus(c+85,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1364,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1322,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1365,"io_deq_ready", false,-1);
    tracep->declBit(c+101,"io_deq_valid", false,-1);
    tracep->declBus(c+102,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+103,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+104,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+105,"io_deq_bits_last", false,-1);
    tracep->declBit(c+116,"wrap", false,-1);
    tracep->declBit(c+117,"wrap_1", false,-1);
    tracep->declBit(c+118,"maybe_full", false,-1);
    tracep->declBit(c+119,"ptr_match", false,-1);
    tracep->declBit(c+120,"empty", false,-1);
    tracep->declBit(c+121,"full", false,-1);
    tracep->declBit(c+1326,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+117,"R0_addr", false,-1);
    tracep->declBit(c+1406,"R0_en", false,-1);
    tracep->declBit(c+1336,"R0_clk", false,-1);
    tracep->declQuad(c+122,"R0_data", false,-1, 38,0);
    tracep->declBit(c+116,"W0_addr", false,-1);
    tracep->declBit(c+1326,"W0_en", false,-1);
    tracep->declBit(c+1336,"W0_clk", false,-1);
    tracep->declQuad(c+1367,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+124+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+128,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+100,"io_enq_ready", false,-1);
    tracep->declBit(c+1213,"io_enq_valid", false,-1);
    tracep->declBus(c+1214,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1215,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1216,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1217,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1044,"io_deq_ready", false,-1);
    tracep->declBit(c+79,"io_deq_valid", false,-1);
    tracep->declBus(c+80,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+81,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+82,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+83,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+129,"wrap", false,-1);
    tracep->declBit(c+130,"wrap_1", false,-1);
    tracep->declBit(c+131,"maybe_full", false,-1);
    tracep->declBit(c+132,"ptr_match", false,-1);
    tracep->declBit(c+133,"empty", false,-1);
    tracep->declBit(c+134,"full", false,-1);
    tracep->declBit(c+1218,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+130,"R0_addr", false,-1);
    tracep->declBit(c+1406,"R0_en", false,-1);
    tracep->declBit(c+1336,"R0_clk", false,-1);
    tracep->declQuad(c+135,"R0_data", false,-1, 46,0);
    tracep->declBit(c+129,"W0_addr", false,-1);
    tracep->declBit(c+1218,"W0_en", false,-1);
    tracep->declBit(c+1336,"W0_clk", false,-1);
    tracep->declQuad(c+1219,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+137+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+141,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+93,"io_enq_ready", false,-1);
    tracep->declBit(c+953,"io_enq_valid", false,-1);
    tracep->declBus(c+94,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+954,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+955,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+95,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
    tracep->declBit(c+69,"io_deq_valid", false,-1);
    tracep->declBus(c+70,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+71,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+72,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+73,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+142,"wrap", false,-1);
    tracep->declBit(c+143,"wrap_1", false,-1);
    tracep->declBit(c+144,"maybe_full", false,-1);
    tracep->declBit(c+145,"ptr_match", false,-1);
    tracep->declBit(c+146,"empty", false,-1);
    tracep->declBit(c+147,"full", false,-1);
    tracep->declBit(c+960,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+143,"R0_addr", false,-1);
    tracep->declBit(c+1406,"R0_en", false,-1);
    tracep->declBit(c+1336,"R0_clk", false,-1);
    tracep->declQuad(c+148,"R0_data", false,-1, 46,0);
    tracep->declBit(c+142,"W0_addr", false,-1);
    tracep->declBit(c+960,"W0_en", false,-1);
    tracep->declBit(c+1336,"W0_clk", false,-1);
    tracep->declQuad(c+488,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+150+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+154,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+96,"io_enq_ready", false,-1);
    tracep->declBit(c+956,"io_enq_valid", false,-1);
    tracep->declBus(c+957,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+958,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+959,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
    tracep->declBit(c+74,"io_deq_valid", false,-1);
    tracep->declBus(c+75,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+76,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+155,"wrap", false,-1);
    tracep->declBit(c+156,"wrap_1", false,-1);
    tracep->declBit(c+157,"maybe_full", false,-1);
    tracep->declBit(c+158,"ptr_match", false,-1);
    tracep->declBit(c+159,"empty", false,-1);
    tracep->declBit(c+160,"full", false,-1);
    tracep->declBit(c+961,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+156,"R0_addr", false,-1);
    tracep->declBit(c+1406,"R0_en", false,-1);
    tracep->declBit(c+1336,"R0_clk", false,-1);
    tracep->declQuad(c+161,"R0_data", false,-1, 35,0);
    tracep->declBit(c+155,"W0_addr", false,-1);
    tracep->declBit(c+961,"W0_en", false,-1);
    tracep->declBit(c+1336,"W0_clk", false,-1);
    tracep->declQuad(c+962,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+163+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+167,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+168,"auto_in_awready", false,-1);
    tracep->declBit(c+830,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1407,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+832,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+169,"auto_in_wready", false,-1);
    tracep->declBit(c+833,"auto_in_wvalid", false,-1);
    tracep->declBus(c+834,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+835,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+836,"auto_in_wlast", false,-1);
    tracep->declBit(c+837,"auto_in_bready", false,-1);
    tracep->declBit(c+170,"auto_in_bvalid", false,-1);
    tracep->declBus(c+171,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+172,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1046,"auto_in_arready", false,-1);
    tracep->declBit(c+838,"auto_in_arvalid", false,-1);
    tracep->declBus(c+839,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+840,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+841,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+842,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+843,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+844,"auto_in_rready", false,-1);
    tracep->declBit(c+173,"auto_in_rvalid", false,-1);
    tracep->declBus(c+174,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+176,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+177,"auto_in_rlast", false,-1);
    tracep->declBit(c+964,"auto_out_awready", false,-1);
    tracep->declBit(c+965,"auto_out_awvalid", false,-1);
    tracep->declBus(c+94,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+178,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+966,"auto_out_wready", false,-1);
    tracep->declBit(c+967,"auto_out_wvalid", false,-1);
    tracep->declBus(c+957,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_out_wlast", false,-1);
    tracep->declBit(c+968,"auto_out_bready", false,-1);
    tracep->declBit(c+179,"auto_out_bvalid", false,-1);
    tracep->declBus(c+171,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+181,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1221,"auto_out_arready", false,-1);
    tracep->declBit(c+1222,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1215,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1216,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1223,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+844,"auto_out_rready", false,-1);
    tracep->declBit(c+173,"auto_out_rvalid", false,-1);
    tracep->declBus(c+174,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+176,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+182,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+183,"auto_out_rlast", false,-1);
    tracep->declBit(c+967,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+184,"w_idle", false,-1);
    tracep->declBit(c+969,"in_awready", false,-1);
    tracep->declBit(c+185,"busy", false,-1);
    tracep->declBus(c+186,"r_addr", false,-1, 31,0);
    tracep->declBus(c+187,"r_len", false,-1, 7,0);
    tracep->declBus(c+1224,"len", false,-1, 7,0);
    tracep->declBus(c+1225,"addr", false,-1, 31,0);
    tracep->declBit(c+188,"busy_1", false,-1);
    tracep->declBus(c+189,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+190,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+191,"len_1", false,-1, 7,0);
    tracep->declBus(c+970,"addr_1", false,-1, 31,0);
    tracep->declBit(c+192,"wbeats_latched", false,-1);
    tracep->declBit(c+965,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+971,"wbeats_valid", false,-1);
    tracep->declBus(c+193,"w_counter", false,-1, 8,0);
    tracep->declBus(c+972,"w_todo", false,-1, 8,0);
    tracep->declBit(c+959,"w_last", false,-1);
    tracep->declBit(c+968,"nodeOut_bready", false,-1);
    tracep->declBus(c+194,"error_0", false,-1, 1,0);
    tracep->declBus(c+195,"error_1", false,-1, 1,0);
    tracep->declBus(c+196,"error_2", false,-1, 1,0);
    tracep->declBus(c+197,"error_3", false,-1, 1,0);
    tracep->declBus(c+198,"error_4", false,-1, 1,0);
    tracep->declBus(c+199,"error_5", false,-1, 1,0);
    tracep->declBus(c+200,"error_6", false,-1, 1,0);
    tracep->declBus(c+201,"error_7", false,-1, 1,0);
    tracep->declBus(c+202,"error_8", false,-1, 1,0);
    tracep->declBus(c+203,"error_9", false,-1, 1,0);
    tracep->declBus(c+204,"error_10", false,-1, 1,0);
    tracep->declBus(c+205,"error_11", false,-1, 1,0);
    tracep->declBus(c+206,"error_12", false,-1, 1,0);
    tracep->declBus(c+207,"error_13", false,-1, 1,0);
    tracep->declBus(c+208,"error_14", false,-1, 1,0);
    tracep->declBus(c+209,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1046,"io_enq_ready", false,-1);
    tracep->declBit(c+838,"io_enq_valid", false,-1);
    tracep->declBus(c+839,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+840,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+841,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+842,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+843,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1226,"io_deq_ready", false,-1);
    tracep->declBit(c+1222,"io_deq_valid", false,-1);
    tracep->declBus(c+1214,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1227,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1228,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1216,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1217,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+210,"ram", false,-1, 48,0);
    tracep->declBit(c+1047,"full", false,-1);
    tracep->declBit(c+1222,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1229,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+830,"io_enq_valid", false,-1);
    tracep->declBus(c+1407,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+831,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1408,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+832,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1409,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+973,"io_deq_ready", false,-1);
    tracep->declBit(c+974,"io_deq_valid", false,-1);
    tracep->declBus(c+94,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+975,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+212,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+955,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+95,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+213,"ram", false,-1, 48,0);
    tracep->declBit(c+215,"full", false,-1);
    tracep->declBit(c+974,"io_deq_valid_0", false,-1);
    tracep->declBit(c+976,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+169,"io_enq_ready", false,-1);
    tracep->declBit(c+833,"io_enq_valid", false,-1);
    tracep->declBus(c+834,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+835,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+836,"io_enq_bits_last", false,-1);
    tracep->declBit(c+977,"io_deq_ready", false,-1);
    tracep->declBit(c+978,"io_deq_valid", false,-1);
    tracep->declBus(c+957,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+958,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1369,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+216,"ram", false,-1, 36,0);
    tracep->declBit(c+218,"full", false,-1);
    tracep->declBit(c+978,"io_deq_valid_0", false,-1);
    tracep->declBit(c+979,"do_enq", false,-1);
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
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+980,"auto_in_awready", false,-1);
    tracep->declBit(c+981,"auto_in_awvalid", false,-1);
    tracep->declBus(c+94,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+982,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+983,"auto_in_wready", false,-1);
    tracep->declBit(c+984,"auto_in_wvalid", false,-1);
    tracep->declBus(c+957,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"auto_in_bready", false,-1);
    tracep->declBit(c+219,"auto_in_bvalid", false,-1);
    tracep->declBus(c+220,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+986,"auto_in_arready", false,-1);
    tracep->declBit(c+1230,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1231,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+987,"auto_in_rready", false,-1);
    tracep->declBit(c+222,"auto_in_rvalid", false,-1);
    tracep->declBus(c+223,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+224,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+225,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+986,"nodeIn_arready", false,-1);
    tracep->declBit(c+980,"nodeIn_awready", false,-1);
    tracep->declBit(c+988,"w_sel0", false,-1);
    tracep->declBit(c+219,"w_full", false,-1);
    tracep->declBus(c+220,"w_id", false,-1, 3,0);
    tracep->declBit(c+226,"r_sel1", false,-1);
    tracep->declBit(c+227,"w_sel1", false,-1);
    tracep->declBit(c+222,"r_full", false,-1);
    tracep->declBus(c+223,"r_id", false,-1, 3,0);
    tracep->declBit(c+1232,"ren", false,-1);
    tracep->declBit(c+228,"rdata_REG", false,-1);
    tracep->declBus(c+229,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+230,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+231,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+232,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1233,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1232,"R0_en", false,-1);
    tracep->declBit(c+1336,"R0_clk", false,-1);
    tracep->declBus(c+233,"R0_data", false,-1, 31,0);
    tracep->declBus(c+989,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+990,"W0_en", false,-1);
    tracep->declBit(c+1336,"W0_clk", false,-1);
    tracep->declBus(c+957,"W0_data", false,-1, 31,0);
    tracep->declBus(c+958,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+168,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+830,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1407,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+832,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+169,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+833,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+834,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+835,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+836,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+837,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+170,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+171,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+172,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1046,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+838,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+839,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+840,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+841,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+842,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+843,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+844,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+173,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+174,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+176,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+177,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+168,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+830,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1407,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+832,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+169,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+833,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+834,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+835,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+836,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+837,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+170,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+171,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+172,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1046,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+838,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+839,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+840,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+841,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+842,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+843,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+844,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+173,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+174,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+176,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+177,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+991,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+992,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+94,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+966,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+967,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+957,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+968,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+179,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+171,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1234,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1235,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1215,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1216,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+844,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+173,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+174,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+176,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+183,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+980,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+981,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+94,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+982,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+983,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+984,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+957,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+219,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+220,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+986,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1230,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1231,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+987,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+222,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+223,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+224,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+225,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+993,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+994,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+234,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1236,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1237,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1370,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+235,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+236,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+237,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+93,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+953,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+94,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+96,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+956,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+957,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+487,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+97,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+98,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+99,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+100,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1213,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1215,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1216,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1365,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+101,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+102,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+103,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+105,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+179,"in_0_bvalid", false,-1);
    tracep->declBit(c+173,"in_0_rvalid", false,-1);
    tracep->declBit(c+995,"in_0_wready", false,-1);
    tracep->declBit(c+996,"in_0_awready", false,-1);
    tracep->declBit(c+1234,"in_0_arready", false,-1);
    tracep->declBit(c+991,"anonIn_awready", false,-1);
    tracep->declBit(c+1238,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1239,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1240,"requestARIO_0_2", false,-1);
    tracep->declBit(c+997,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+998,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+999,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1241,"arSel", false,-1, 15,0);
    tracep->declBus(c+238,"awSel", false,-1, 15,0);
    tracep->declBus(c+239,"rSel", false,-1, 15,0);
    tracep->declBus(c+240,"bSel", false,-1, 15,0);
    tracep->declBit(c+241,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+242,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+243,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+244,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+245,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+246,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+247,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+248,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+249,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+250,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+251,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+252,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+253,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+254,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+255,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+256,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+257,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+258,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+259,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+260,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+261,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+262,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+263,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+264,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+265,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+266,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+267,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+268,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+269,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+270,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+271,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+272,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+273,"latched", false,-1);
    tracep->declBit(c+1000,"in_0_awvalid", false,-1);
    tracep->declBit(c+1001,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1002,"in_0_wvalid", false,-1);
    tracep->declBit(c+274,"idle_3", false,-1);
    tracep->declBit(c+275,"anyValid", false,-1);
    tracep->declBus(c+276,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+277,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+278,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+279,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+280,"prefixOR_1", false,-1);
    tracep->declBit(c+281,"winner_3_1", false,-1);
    tracep->declBit(c+282,"winner_3_2", false,-1);
    tracep->declBit(c+283,"state_3_0", false,-1);
    tracep->declBit(c+284,"state_3_1", false,-1);
    tracep->declBit(c+285,"state_3_2", false,-1);
    tracep->declBit(c+286,"muxState_3_0", false,-1);
    tracep->declBit(c+287,"muxState_3_1", false,-1);
    tracep->declBit(c+288,"muxState_3_2", false,-1);
    tracep->declBit(c+289,"idle_4", false,-1);
    tracep->declBit(c+290,"anyValid_1", false,-1);
    tracep->declBus(c+291,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+292,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+293,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+294,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+295,"winner_4_0", false,-1);
    tracep->declBit(c+296,"winner_4_2", false,-1);
    tracep->declBit(c+297,"state_4_0", false,-1);
    tracep->declBit(c+298,"state_4_2", false,-1);
    tracep->declBit(c+299,"muxState_4_0", false,-1);
    tracep->declBit(c+300,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1001,"io_enq_valid", false,-1);
    tracep->declBus(c+1003,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1004,"io_deq_ready", false,-1);
    tracep->declBit(c+1005,"io_deq_valid", false,-1);
    tracep->declBus(c+1006,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+302,"wrap", false,-1);
    tracep->declBit(c+303,"wrap_1", false,-1);
    tracep->declBit(c+304,"maybe_full", false,-1);
    tracep->declBit(c+305,"ptr_match", false,-1);
    tracep->declBit(c+306,"empty", false,-1);
    tracep->declBit(c+307,"full", false,-1);
    tracep->declBit(c+1005,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1007,"do_deq", false,-1);
    tracep->declBit(c+1008,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+303,"R0_addr", false,-1);
    tracep->declBit(c+1406,"R0_en", false,-1);
    tracep->declBit(c+1336,"R0_clk", false,-1);
    tracep->declBus(c+308,"R0_data", false,-1, 2,0);
    tracep->declBit(c+302,"W0_addr", false,-1);
    tracep->declBit(c+1008,"W0_en", false,-1);
    tracep->declBit(c+1336,"W0_clk", false,-1);
    tracep->declBus(c+1003,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+309+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+964,"auto_in_awready", false,-1);
    tracep->declBit(c+965,"auto_in_awvalid", false,-1);
    tracep->declBus(c+94,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+178,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+966,"auto_in_wready", false,-1);
    tracep->declBit(c+967,"auto_in_wvalid", false,-1);
    tracep->declBus(c+957,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_in_wlast", false,-1);
    tracep->declBit(c+968,"auto_in_bready", false,-1);
    tracep->declBit(c+179,"auto_in_bvalid", false,-1);
    tracep->declBus(c+171,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+181,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1221,"auto_in_arready", false,-1);
    tracep->declBit(c+1222,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1215,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1216,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1223,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+844,"auto_in_rready", false,-1);
    tracep->declBit(c+173,"auto_in_rvalid", false,-1);
    tracep->declBus(c+174,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+176,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+182,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+183,"auto_in_rlast", false,-1);
    tracep->declBit(c+991,"auto_out_awready", false,-1);
    tracep->declBit(c+992,"auto_out_awvalid", false,-1);
    tracep->declBus(c+94,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+966,"auto_out_wready", false,-1);
    tracep->declBit(c+967,"auto_out_wvalid", false,-1);
    tracep->declBus(c+957,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_out_wlast", false,-1);
    tracep->declBit(c+968,"auto_out_bready", false,-1);
    tracep->declBit(c+179,"auto_out_bvalid", false,-1);
    tracep->declBus(c+171,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1234,"auto_out_arready", false,-1);
    tracep->declBit(c+1235,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1215,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1216,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+844,"auto_out_rready", false,-1);
    tracep->declBit(c+173,"auto_out_rvalid", false,-1);
    tracep->declBus(c+174,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+176,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+183,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+311,"io_enq_ready", false,-1);
    tracep->declBit(c+1242,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+490,"io_deq_ready", false,-1);
    tracep->declBit(c+312,"io_deq_valid", false,-1);
    tracep->declBit(c+313,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+312,"full", false,-1);
    tracep->declBit(c+313,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+314,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+1243,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+491,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+1244,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+492,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+1245,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+493,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+1246,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+494,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+1247,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+495,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+335,"io_enq_ready", false,-1);
    tracep->declBit(c+1248,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+496,"io_deq_ready", false,-1);
    tracep->declBit(c+336,"io_deq_valid", false,-1);
    tracep->declBit(c+337,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->declBit(c+337,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+338,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+1249,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+497,"io_deq_ready", false,-1);
    tracep->declBit(c+340,"io_deq_valid", false,-1);
    tracep->declBit(c+341,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->declBit(c+341,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+498,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+499,"io_deq_ready", false,-1);
    tracep->declBit(c+344,"io_deq_valid", false,-1);
    tracep->declBit(c+345,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+344,"full", false,-1);
    tracep->declBit(c+345,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+346,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+500,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+501,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+502,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+503,"io_deq_ready", false,-1);
    tracep->declBit(c+352,"io_deq_valid", false,-1);
    tracep->declBit(c+353,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"full", false,-1);
    tracep->declBit(c+353,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+354,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+355,"io_enq_ready", false,-1);
    tracep->declBit(c+504,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+505,"io_deq_ready", false,-1);
    tracep->declBit(c+356,"io_deq_valid", false,-1);
    tracep->declBit(c+357,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBit(c+357,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+358,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+359,"io_enq_ready", false,-1);
    tracep->declBit(c+1250,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+506,"io_deq_ready", false,-1);
    tracep->declBit(c+360,"io_deq_valid", false,-1);
    tracep->declBit(c+361,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+360,"full", false,-1);
    tracep->declBit(c+361,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+362,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+363,"io_enq_ready", false,-1);
    tracep->declBit(c+507,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+508,"io_deq_ready", false,-1);
    tracep->declBit(c+364,"io_deq_valid", false,-1);
    tracep->declBit(c+365,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+364,"full", false,-1);
    tracep->declBit(c+365,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+366,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
    tracep->declBit(c+509,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+510,"io_deq_ready", false,-1);
    tracep->declBit(c+368,"io_deq_valid", false,-1);
    tracep->declBit(c+369,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+368,"full", false,-1);
    tracep->declBit(c+369,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+370,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+371,"io_enq_ready", false,-1);
    tracep->declBit(c+511,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+512,"io_deq_ready", false,-1);
    tracep->declBit(c+372,"io_deq_valid", false,-1);
    tracep->declBit(c+373,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+373,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+374,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+375,"io_enq_ready", false,-1);
    tracep->declBit(c+513,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+514,"io_deq_ready", false,-1);
    tracep->declBit(c+376,"io_deq_valid", false,-1);
    tracep->declBit(c+377,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"full", false,-1);
    tracep->declBit(c+377,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+378,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+379,"io_enq_ready", false,-1);
    tracep->declBit(c+515,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+516,"io_deq_ready", false,-1);
    tracep->declBit(c+380,"io_deq_valid", false,-1);
    tracep->declBit(c+381,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"full", false,-1);
    tracep->declBit(c+381,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+382,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+383,"io_enq_ready", false,-1);
    tracep->declBit(c+517,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+518,"io_deq_ready", false,-1);
    tracep->declBit(c+384,"io_deq_valid", false,-1);
    tracep->declBit(c+385,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+384,"full", false,-1);
    tracep->declBit(c+385,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+386,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+387,"io_enq_ready", false,-1);
    tracep->declBit(c+519,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+520,"io_deq_ready", false,-1);
    tracep->declBit(c+388,"io_deq_valid", false,-1);
    tracep->declBit(c+389,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+388,"full", false,-1);
    tracep->declBit(c+389,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+390,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+391,"io_enq_ready", false,-1);
    tracep->declBit(c+521,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+522,"io_deq_ready", false,-1);
    tracep->declBit(c+392,"io_deq_valid", false,-1);
    tracep->declBit(c+393,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+392,"full", false,-1);
    tracep->declBit(c+393,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+394,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+395,"io_enq_ready", false,-1);
    tracep->declBit(c+523,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+524,"io_deq_ready", false,-1);
    tracep->declBit(c+396,"io_deq_valid", false,-1);
    tracep->declBit(c+397,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+396,"full", false,-1);
    tracep->declBit(c+397,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+398,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+399,"io_enq_ready", false,-1);
    tracep->declBit(c+525,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+526,"io_deq_ready", false,-1);
    tracep->declBit(c+400,"io_deq_valid", false,-1);
    tracep->declBit(c+401,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+400,"full", false,-1);
    tracep->declBit(c+401,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+402,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+403,"io_enq_ready", false,-1);
    tracep->declBit(c+1251,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+527,"io_deq_ready", false,-1);
    tracep->declBit(c+404,"io_deq_valid", false,-1);
    tracep->declBit(c+405,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+404,"full", false,-1);
    tracep->declBit(c+405,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+406,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+407,"io_enq_ready", false,-1);
    tracep->declBit(c+528,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+529,"io_deq_ready", false,-1);
    tracep->declBit(c+408,"io_deq_valid", false,-1);
    tracep->declBit(c+409,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+408,"full", false,-1);
    tracep->declBit(c+409,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+410,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+411,"io_enq_ready", false,-1);
    tracep->declBit(c+530,"io_enq_valid", false,-1);
    tracep->declBit(c+178,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+531,"io_deq_ready", false,-1);
    tracep->declBit(c+412,"io_deq_valid", false,-1);
    tracep->declBit(c+413,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+412,"full", false,-1);
    tracep->declBit(c+413,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+414,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+415,"io_enq_ready", false,-1);
    tracep->declBit(c+1252,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+532,"io_deq_ready", false,-1);
    tracep->declBit(c+416,"io_deq_valid", false,-1);
    tracep->declBit(c+417,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+416,"full", false,-1);
    tracep->declBit(c+417,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+418,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+419,"io_enq_ready", false,-1);
    tracep->declBit(c+1253,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+533,"io_deq_ready", false,-1);
    tracep->declBit(c+420,"io_deq_valid", false,-1);
    tracep->declBit(c+421,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+420,"full", false,-1);
    tracep->declBit(c+421,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+422,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+423,"io_enq_ready", false,-1);
    tracep->declBit(c+1254,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+534,"io_deq_ready", false,-1);
    tracep->declBit(c+424,"io_deq_valid", false,-1);
    tracep->declBit(c+425,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+424,"full", false,-1);
    tracep->declBit(c+425,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+426,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+427,"io_enq_ready", false,-1);
    tracep->declBit(c+1255,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+535,"io_deq_ready", false,-1);
    tracep->declBit(c+428,"io_deq_valid", false,-1);
    tracep->declBit(c+429,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+428,"full", false,-1);
    tracep->declBit(c+429,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+430,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+431,"io_enq_ready", false,-1);
    tracep->declBit(c+1256,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+536,"io_deq_ready", false,-1);
    tracep->declBit(c+432,"io_deq_valid", false,-1);
    tracep->declBit(c+433,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+432,"full", false,-1);
    tracep->declBit(c+433,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+434,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+435,"io_enq_ready", false,-1);
    tracep->declBit(c+1257,"io_enq_valid", false,-1);
    tracep->declBit(c+1223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+537,"io_deq_ready", false,-1);
    tracep->declBit(c+436,"io_deq_valid", false,-1);
    tracep->declBit(c+437,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+436,"full", false,-1);
    tracep->declBit(c+437,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+438,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1371,"reset", false,-1);
    tracep->declBit(c+168,"auto_master_out_awready", false,-1);
    tracep->declBit(c+830,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1407,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+832,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+169,"auto_master_out_wready", false,-1);
    tracep->declBit(c+833,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+834,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+835,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+836,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+837,"auto_master_out_bready", false,-1);
    tracep->declBit(c+170,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+171,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+172,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1046,"auto_master_out_arready", false,-1);
    tracep->declBit(c+838,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+839,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+840,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+841,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+842,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+843,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+844,"auto_master_out_rready", false,-1);
    tracep->declBit(c+173,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+174,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+176,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+177,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1371,"reset", false,-1);
    tracep->declBit(c+1396,"io_interrupt", false,-1);
    tracep->declBit(c+168,"io_master_awready", false,-1);
    tracep->declBit(c+830,"io_master_awvalid", false,-1);
    tracep->declBus(c+831,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1407,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1408,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+832,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+169,"io_master_wready", false,-1);
    tracep->declBit(c+833,"io_master_wvalid", false,-1);
    tracep->declBus(c+834,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+835,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+836,"io_master_wlast", false,-1);
    tracep->declBit(c+837,"io_master_bready", false,-1);
    tracep->declBit(c+170,"io_master_bvalid", false,-1);
    tracep->declBus(c+172,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+171,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1046,"io_master_arready", false,-1);
    tracep->declBit(c+838,"io_master_arvalid", false,-1);
    tracep->declBus(c+840,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+839,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+841,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+842,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+843,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+844,"io_master_rready", false,-1);
    tracep->declBit(c+173,"io_master_rvalid", false,-1);
    tracep->declBus(c+176,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+175,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+177,"io_master_rlast", false,-1);
    tracep->declBus(c+174,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1410,"io_slave_awready", false,-1);
    tracep->declBit(c+1396,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1411,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1407,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1408,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1412,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1413,"io_slave_wready", false,-1);
    tracep->declBit(c+1396,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1411,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1407,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1396,"io_slave_wlast", false,-1);
    tracep->declBit(c+1396,"io_slave_bready", false,-1);
    tracep->declBit(c+1414,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1415,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1416,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1417,"io_slave_arready", false,-1);
    tracep->declBit(c+1396,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1411,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1407,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1408,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1412,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1409,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1396,"io_slave_rready", false,-1);
    tracep->declBit(c+1418,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1419,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1420,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1421,"io_slave_rlast", false,-1);
    tracep->declBus(c+1422,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+9,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+10,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+845,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+846,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+11,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+9,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+10,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+12,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+13,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+14,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1407,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1408,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1423,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1409,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+15,"ifu_arvalid", false,-1);
    tracep->declBit(c+847,"ifu_arready", false,-1);
    tracep->declBus(c+1009,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1010,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1011,"ifu_rlast", false,-1);
    tracep->declBus(c+1012,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1013,"ifu_rvalid", false,-1);
    tracep->declBit(c+16,"ifu_rready", false,-1);
    tracep->declBit(c+1424,"useless1", false,-1);
    tracep->declBit(c+1425,"useless2", false,-1);
    tracep->declBit(c+1426,"useless3", false,-1);
    tracep->declBit(c+1427,"useless4", false,-1);
    tracep->declBus(c+848,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1407,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1408,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+849,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1409,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+850,"lsu_arvalid", false,-1);
    tracep->declBit(c+851,"lsu_arready", false,-1);
    tracep->declBus(c+1014,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1015,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1016,"lsu_rlast", false,-1);
    tracep->declBus(c+1017,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1018,"lsu_rvalid", false,-1);
    tracep->declBit(c+852,"lsu_rready", false,-1);
    tracep->declBus(c+848,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1407,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1408,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+853,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+854,"lsu_awvalid", false,-1);
    tracep->declBit(c+1019,"lsu_awready", false,-1);
    tracep->declBus(c+855,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+856,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+857,"lsu_wlast", false,-1);
    tracep->declBit(c+858,"lsu_wvalid", false,-1);
    tracep->declBit(c+1020,"lsu_wready", false,-1);
    tracep->declBus(c+1021,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1022,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1023,"lsu_bvalid", false,-1);
    tracep->declBit(c+859,"lsu_bready", false,-1);
    tracep->declBus(c+860,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1407,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1408,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+861,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1409,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+862,"axi_arvalid", false,-1);
    tracep->declBit(c+1373,"axi_arready", false,-1);
    tracep->declBus(c+1024,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1025,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1026,"axi_rlast", false,-1);
    tracep->declBus(c+1027,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+1028,"axi_rvalid", false,-1);
    tracep->declBit(c+863,"axi_rready", false,-1);
    tracep->declBus(c+831,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1407,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1408,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+832,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+830,"axi_awvalid", false,-1);
    tracep->declBit(c+168,"axi_awready", false,-1);
    tracep->declBus(c+834,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+835,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+836,"axi_wlast", false,-1);
    tracep->declBit(c+833,"axi_wvalid", false,-1);
    tracep->declBit(c+169,"axi_wready", false,-1);
    tracep->declBus(c+172,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+171,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+170,"axi_bvalid", false,-1);
    tracep->declBit(c+837,"axi_bready", false,-1);
    tracep->declBus(c+864,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+865,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+866,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+867,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+868,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+869,"clint_arvalid", false,-1);
    tracep->declBit(c+870,"clint_arready", false,-1);
    tracep->declBus(c+17,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+18,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+19,"clint_rlast", false,-1);
    tracep->declBus(c+1407,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+20,"clint_rvalid", false,-1);
    tracep->declBit(c+871,"clint_rready", false,-1);
    tracep->declBus(c+1428,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1429,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1430,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1431,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1432,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1433,"clint_awvalid", false,-1);
    tracep->declBit(c+21,"clint_awready", false,-1);
    tracep->declBus(c+1434,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1435,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1436,"clint_wlast", false,-1);
    tracep->declBit(c+1437,"clint_wvalid", false,-1);
    tracep->declBit(c+22,"clint_wready", false,-1);
    tracep->declBus(c+23,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1407,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+24,"clint_bvalid", false,-1);
    tracep->declBit(c+1438,"clint_bready", false,-1);
    tracep->declBus(c+1261,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1262,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1374,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1375,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1048,"a5", false,-1, 31,0);
    tracep->declBus(c+1263,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1374,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1375,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1264,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1376,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1265,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1266,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1267,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1268,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1269,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1270,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1271,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1272,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1273,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1274,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1275,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1276,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1277,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1278,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1279,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+25,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+872,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1280,"csr_write", false,-1);
    tracep->declBus(c+1281,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1049+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+873,"wdata", false,-1, 31,0);
    tracep->declBus(c+874,"waddr", false,-1, 4,0);
    tracep->declBit(c+875,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1053+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+876,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+877,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+878,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+879,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+880,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+881,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+882,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+883,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+884,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+885,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+886,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+887,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+888,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+889,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+890,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+891,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+848,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+892,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+893,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+894,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+895,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+896,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+897,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+898,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+899,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+900,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+901,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+902,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+903,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+14,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1407,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1408,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1423,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1409,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+15,"arvalid_i_a", false,-1);
    tracep->declBit(c+847,"arready_o_a", false,-1);
    tracep->declBus(c+1009,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+1010,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+1011,"rlast_o_a", false,-1);
    tracep->declBus(c+1012,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+1013,"rvalid_o_a", false,-1);
    tracep->declBit(c+16,"rready_i_a", false,-1);
    tracep->declBus(c+1439,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1407,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1408,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1412,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1409,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1396,"awvalid_i_a", false,-1);
    tracep->declBit(c+1029,"awready_o_a", false,-1);
    tracep->declBus(c+1439,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1407,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1396,"wlast_i_a", false,-1);
    tracep->declBit(c+1396,"wvalid_i_a", false,-1);
    tracep->declBit(c+1030,"wready_o_a", false,-1);
    tracep->declBus(c+1031,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1032,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1033,"bvalid_o_a", false,-1);
    tracep->declBit(c+1396,"bready_i_a", false,-1);
    tracep->declBus(c+848,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1407,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1408,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+849,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1409,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+850,"arvalid_i_b", false,-1);
    tracep->declBit(c+851,"arready_o_b", false,-1);
    tracep->declBus(c+1014,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+1015,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+1016,"rlast_o_b", false,-1);
    tracep->declBus(c+1017,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+1018,"rvalid_o_b", false,-1);
    tracep->declBit(c+852,"rready_i_b", false,-1);
    tracep->declBus(c+848,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1407,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1408,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+853,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1409,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+854,"awvalid_i_b", false,-1);
    tracep->declBit(c+1019,"awready_o_b", false,-1);
    tracep->declBus(c+855,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+856,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+857,"wlast_i_b", false,-1);
    tracep->declBit(c+858,"wvalid_i_b", false,-1);
    tracep->declBit(c+1020,"wready_o_b", false,-1);
    tracep->declBus(c+1021,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1022,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1023,"bvalid_o_b", false,-1);
    tracep->declBit(c+859,"bready_i_b", false,-1);
    tracep->declBus(c+860,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1407,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1408,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+861,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1409,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+862,"arvalid_o", false,-1);
    tracep->declBit(c+1373,"arready_i", false,-1);
    tracep->declBus(c+1024,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1025,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1026,"rlast_i", false,-1);
    tracep->declBus(c+1027,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1028,"rvalid_i", false,-1);
    tracep->declBit(c+863,"rready_o", false,-1);
    tracep->declBus(c+831,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1407,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1408,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+832,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1409,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+830,"awvalid_o", false,-1);
    tracep->declBit(c+168,"awready_i", false,-1);
    tracep->declBus(c+834,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+835,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+836,"wlast_o", false,-1);
    tracep->declBit(c+833,"wvalid_o", false,-1);
    tracep->declBit(c+169,"wready_i", false,-1);
    tracep->declBus(c+172,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+171,"bid_i", false,-1, 3,0);
    tracep->declBit(c+170,"bvalid_i", false,-1);
    tracep->declBit(c+837,"bready_o", false,-1);
    tracep->declBit(c+904,"ar_switch", false,-1);
    tracep->declBit(c+905,"r_switch", false,-1);
    tracep->declBit(c+906,"aw_switch", false,-1);
    tracep->declBit(c+907,"w_switch", false,-1);
    tracep->declBit(c+908,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+864,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+865,"arid_i", false,-1, 3,0);
    tracep->declBus(c+866,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+867,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+868,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+869,"arvalid_i", false,-1);
    tracep->declBit(c+870,"arready_o", false,-1);
    tracep->declBus(c+17,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+18,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+19,"rlast_o", false,-1);
    tracep->declBus(c+1407,"rid_o", false,-1, 3,0);
    tracep->declBit(c+20,"rvalid_o", false,-1);
    tracep->declBit(c+871,"rready_i", false,-1);
    tracep->declBus(c+1428,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1429,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1430,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1431,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1432,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1433,"awvalid_i", false,-1);
    tracep->declBit(c+21,"awready_o", false,-1);
    tracep->declBus(c+1434,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1435,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1436,"wlast_i", false,-1);
    tracep->declBit(c+1437,"wvalid_i", false,-1);
    tracep->declBit(c+22,"wready_o", false,-1);
    tracep->declBus(c+23,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1407,"bid_o", false,-1, 3,0);
    tracep->declBit(c+24,"bvalid_o", false,-1);
    tracep->declBit(c+1438,"bready_i", false,-1);
    tracep->declBit(c+909,"ar_state", false,-1);
    tracep->declBit(c+26,"r_state", false,-1);
    tracep->declBit(c+27,"aw_state", false,-1);
    tracep->declBit(c+28,"w_state", false,-1);
    tracep->declBit(c+1440,"b_state", false,-1);
    tracep->declBus(c+29,"araddr", false,-1, 31,0);
    tracep->declBus(c+30,"awaddr", false,-1, 31,0);
    tracep->declBus(c+31,"wdata", false,-1, 31,0);
    tracep->declBus(c+32,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1441,"wvalid", false,-1);
    tracep->declBit(c+33,"flag_waddr", false,-1);
    tracep->declBit(c+34,"flag_wdata", false,-1);
    tracep->declBit(c+35,"flag_rdata", false,-1);
    tracep->declBit(c+36,"flag_raddr", false,-1);
    tracep->declBit(c+1442,"flag_write", false,-1);
    tracep->declBus(c+37,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+38,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+39,"w_delay", false,-1, 4,0);
    tracep->declBus(c+40,"r_delay", false,-1, 4,0);
    tracep->declBus(c+41,"LFSR", false,-1, 4,0);
    tracep->declBit(c+42,"lfsr_in", false,-1);
    tracep->declBus(c+43,"write_box", false,-1, 1,0);
    tracep->declQuad(c+44,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+1263,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1374,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1375,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1264,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1376,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1265,"a_in_src_i", false,-1);
    tracep->declBus(c+1266,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1267,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1268,"adder_a_src_i", false,-1);
    tracep->declBit(c+1269,"adder_out_src_i", false,-1);
    tracep->declBus(c+1270,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1271,"MemRead_i", false,-1);
    tracep->declBit(c+1272,"MemWrite_i", false,-1);
    tracep->declBus(c+1273,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1274,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1275,"wb_src_i", false,-1);
    tracep->declBit(c+1276,"csr_write_i", false,-1);
    tracep->declBit(c+1277,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1278,"reg_write_i", false,-1);
    tracep->declBus(c+1279,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+25,"exu_valid_i", false,-1);
    tracep->declBit(c+872,"exu_ready_o", false,-1);
    tracep->declBus(c+876,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+877,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+878,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+879,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+880,"npc_o", false,-1, 31,0);
    tracep->declBit(c+881,"MemRead_o", false,-1);
    tracep->declBit(c+882,"MemWrite_o", false,-1);
    tracep->declBus(c+883,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+884,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+885,"wb_src_o", false,-1);
    tracep->declBit(c+886,"csr_write_o", false,-1);
    tracep->declBit(c+887,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+888,"reg_write_o", false,-1);
    tracep->declBus(c+889,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+890,"exu_valid_o", false,-1);
    tracep->declBit(c+891,"exu_ready_i", false,-1);
    tracep->declBus(c+910,"pc", false,-1, 31,0);
    tracep->declBus(c+877,"rs1", false,-1, 31,0);
    tracep->declBus(c+878,"rs2", false,-1, 31,0);
    tracep->declBus(c+911,"imm", false,-1, 31,0);
    tracep->declBus(c+912,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+913,"a_in_src", false,-1);
    tracep->declBus(c+914,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+915,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+916,"adder_a_src", false,-1);
    tracep->declBit(c+917,"adder_out_src", false,-1);
    tracep->declBus(c+918,"alu_op", false,-1, 3,0);
    tracep->declBus(c+919,"a_in", false,-1, 31,0);
    tracep->declBus(c+920,"b_in", false,-1, 31,0);
    tracep->declBus(c+921,"a_out", false,-1, 31,0);
    tracep->declBus(c+922,"add_out", false,-1, 31,0);
    tracep->declBus(c+923,"pc_new", false,-1, 31,0);
    tracep->declBus(c+876,"alu_result", false,-1, 31,0);
    tracep->declBus(c+880,"npc", false,-1, 31,0);
    tracep->declBit(c+924,"zero", false,-1);
    tracep->declBus(c+1409,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1443,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1444,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+925,"current_state", false,-1, 1,0);
    tracep->declBus(c+926,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+919,"a", false,-1, 31,0);
    tracep->declBus(c+920,"b", false,-1, 31,0);
    tracep->declBus(c+918,"op", false,-1, 3,0);
    tracep->declBus(c+876,"alu_result", false,-1, 31,0);
    tracep->declBit(c+924,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1445,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+877,"d0", false,-1, 31,0);
    tracep->declBus(c+910,"d1", false,-1, 31,0);
    tracep->declBit(c+913,"sel", false,-1);
    tracep->declBus(c+919,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1445,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+878,"d0", false,-1, 31,0);
    tracep->declBus(c+911,"d1", false,-1, 31,0);
    tracep->declBus(c+1446,"d2", false,-1, 31,0);
    tracep->declBus(c+912,"d3", false,-1, 31,0);
    tracep->declBus(c+914,"sel", false,-1, 1,0);
    tracep->declBus(c+920,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+921,"a", false,-1, 31,0);
    tracep->declBus(c+911,"b", false,-1, 31,0);
    tracep->declBus(c+922,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1445,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+910,"d0", false,-1, 31,0);
    tracep->declBus(c+877,"d1", false,-1, 31,0);
    tracep->declBit(c+916,"sel", false,-1);
    tracep->declBus(c+921,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1445,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+922,"d0", false,-1, 31,0);
    tracep->declBus(c+912,"d1", false,-1, 31,0);
    tracep->declBit(c+917,"sel", false,-1);
    tracep->declBus(c+923,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+927,"pc4", false,-1, 31,0);
    tracep->declBus(c+923,"pc_new", false,-1, 31,0);
    tracep->declBus(c+915,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+924,"zero", false,-1);
    tracep->declBus(c+876,"alu_result", false,-1, 31,0);
    tracep->declBus(c+880,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+1261,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1262,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1374,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1375,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1048,"a5", false,-1, 31,0);
    tracep->declBus(c+9,"pc_i", false,-1, 31,0);
    tracep->declBus(c+10,"inst_i", false,-1, 31,0);
    tracep->declBit(c+12,"idu_valid_i", false,-1);
    tracep->declBit(c+13,"idu_ready_o", false,-1);
    tracep->declBus(c+1263,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1374,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1375,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1264,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1376,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1265,"a_in_src_o", false,-1);
    tracep->declBus(c+1266,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1267,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1268,"adder_a_src_o", false,-1);
    tracep->declBit(c+1269,"adder_out_src_o", false,-1);
    tracep->declBus(c+1270,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1271,"MemRead_o", false,-1);
    tracep->declBit(c+1272,"MemWrite_o", false,-1);
    tracep->declBus(c+1273,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1274,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1275,"wb_src_o", false,-1);
    tracep->declBit(c+1276,"csr_write_o", false,-1);
    tracep->declBit(c+1277,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1278,"reg_write_o", false,-1);
    tracep->declBus(c+1279,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+25,"idu_valid_o", false,-1);
    tracep->declBit(c+872,"idu_ready_i", false,-1);
    tracep->declBit(c+1280,"csr_write_i", false,-1);
    tracep->declBus(c+1281,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1085+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1263,"pc", false,-1, 31,0);
    tracep->declBus(c+1282,"inst", false,-1, 31,0);
    tracep->declBus(c+1283,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1409,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1443,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1444,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+46,"current_state", false,-1, 1,0);
    tracep->declBus(c+928,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1282,"inst", false,-1, 31,0);
    tracep->declBus(c+1270,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1284,"opcode", false,-1, 6,0);
    tracep->declBus(c+1285,"funct3", false,-1, 2,0);
    tracep->declBus(c+1286,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1280,"wen", false,-1);
    tracep->declBus(c+1282,"inst", false,-1, 31,0);
    tracep->declBus(c+1281,"wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"NO", false,-1, 31,0);
    tracep->declBus(c+1263,"pc", false,-1, 31,0);
    tracep->declBus(c+1376,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1089+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1093,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1094,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1095,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1096,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1447,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1448,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1284,"opcode", false,-1, 6,0);
    tracep->declBus(c+1285,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1282,"inst", false,-1, 31,0);
    tracep->declBit(c+1265,"a_in_src", false,-1);
    tracep->declBus(c+1266,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1278,"reg_write", false,-1);
    tracep->declBus(c+1267,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1268,"adder_a_src", false,-1);
    tracep->declBit(c+1271,"MemRead", false,-1);
    tracep->declBit(c+1272,"MemWrite", false,-1);
    tracep->declBus(c+1283,"wmask", false,-1, 7,0);
    tracep->declBit(c+1275,"wb_src", false,-1);
    tracep->declBus(c+1274,"rmask", false,-1, 2,0);
    tracep->declBit(c+1276,"csr_write", false,-1);
    tracep->declBit(c+1269,"adder_out_src", false,-1);
    tracep->declBit(c+1277,"csr_wdata_src", false,-1);
    tracep->declBus(c+1284,"opcode", false,-1, 6,0);
    tracep->declBus(c+1285,"funct3", false,-1, 2,0);
    tracep->declBus(c+1286,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1445,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1282,"inst", false,-1, 31,0);
    tracep->declBus(c+1264,"data", false,-1, 31,0);
    tracep->declBus(c+1284,"opcode", false,-1, 6,0);
    tracep->declBus(c+1285,"funct3", false,-1, 2,0);
    tracep->declBus(c+1286,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+14,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1407,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1408,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1423,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1409,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+15,"arvalid_o", false,-1);
    tracep->declBit(c+847,"arready_i", false,-1);
    tracep->declBus(c+1009,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1010,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1011,"rlast_i", false,-1);
    tracep->declBus(c+1012,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1013,"rvalid_i", false,-1);
    tracep->declBit(c+16,"rready_o", false,-1);
    tracep->declBus(c+845,"npc_i", false,-1, 31,0);
    tracep->declBit(c+846,"ifu_valid_i", false,-1);
    tracep->declBit(c+11,"ifu_ready_o", false,-1);
    tracep->declBus(c+9,"pc_o", false,-1, 31,0);
    tracep->declBus(c+10,"inst_o", false,-1, 31,0);
    tracep->declBit(c+12,"ifu_valid_o", false,-1);
    tracep->declBit(c+13,"ifu_ready_i", false,-1);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->declBus(c+1449,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1450,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1451,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1452,"lfsr_in", false,-1);
    tracep->declBit(c+15,"arvalid", false,-1);
    tracep->declBus(c+14,"araddr", false,-1, 31,0);
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->declBit(c+16,"rready", false,-1);
    tracep->declBus(c+1453,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1454+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1486,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1412,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1395,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1423,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1487,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1488,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+49,"current_state", false,-1, 2,0);
    tracep->declBus(c+1377,"next_state", false,-1, 2,0);
    tracep->declBus(c+50,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+51,"ready_flag", false,-1);
    tracep->declBit(c+52,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+876,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+877,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+878,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+879,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+880,"npc_i", false,-1, 31,0);
    tracep->declBit(c+881,"MemRead_i", false,-1);
    tracep->declBit(c+882,"MemWrite_i", false,-1);
    tracep->declBus(c+883,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+884,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+885,"wb_src_i", false,-1);
    tracep->declBit(c+886,"csr_write_i", false,-1);
    tracep->declBit(c+887,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+888,"reg_write_i", false,-1);
    tracep->declBus(c+889,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+890,"lsu_valid_i", false,-1);
    tracep->declBit(c+891,"lsu_ready_o", false,-1);
    tracep->declBus(c+848,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+892,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+893,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+894,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+895,"npc_o", false,-1, 31,0);
    tracep->declBus(c+896,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+897,"wb_src_o", false,-1);
    tracep->declBit(c+898,"csr_write_o", false,-1);
    tracep->declBit(c+899,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+900,"reg_write_o", false,-1);
    tracep->declBus(c+901,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+902,"lsu_valid_o", false,-1);
    tracep->declBit(c+903,"lsu_ready_i", false,-1);
    tracep->declBus(c+848,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1407,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1408,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+849,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1409,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+850,"arvalid_o", false,-1);
    tracep->declBit(c+851,"arready_i", false,-1);
    tracep->declBus(c+1014,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1015,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1016,"rlast_i", false,-1);
    tracep->declBus(c+1017,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1018,"rvalid_i", false,-1);
    tracep->declBit(c+852,"rready_o", false,-1);
    tracep->declBus(c+848,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1407,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1408,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+853,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1409,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+854,"awvalid_o", false,-1);
    tracep->declBit(c+1019,"awready_i", false,-1);
    tracep->declBus(c+855,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+856,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+857,"wlast_o", false,-1);
    tracep->declBit(c+858,"wvalid_o", false,-1);
    tracep->declBit(c+1020,"wready_i", false,-1);
    tracep->declBus(c+1021,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1022,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1023,"bvalid_i", false,-1);
    tracep->declBit(c+859,"bready_o", false,-1);
    tracep->declBus(c+848,"alu_result", false,-1, 31,0);
    tracep->declBus(c+892,"rs1", false,-1, 31,0);
    tracep->declBus(c+1489,"rs2", false,-1, 31,0);
    tracep->declBus(c+1490,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+896,"rmask", false,-1, 2,0);
    tracep->declBit(c+53,"flag", false,-1);
    tracep->declBit(c+1491,"wvalid_tmp", false,-1);
    tracep->declBus(c+1492,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1493,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1494,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1495,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1496,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1497,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1498,"lfsr_in", false,-1);
    tracep->declBit(c+850,"arvalid", false,-1);
    tracep->declBus(c+848,"araddr", false,-1, 31,0);
    tracep->declBit(c+852,"rready", false,-1);
    tracep->declBus(c+848,"awaddr", false,-1, 31,0);
    tracep->declBit(c+854,"awvalid", false,-1);
    tracep->declBus(c+855,"wdata", false,-1, 31,0);
    tracep->declBus(c+856,"wstrb", false,-1, 3,0);
    tracep->declBit(c+858,"wvalid", false,-1);
    tracep->declBit(c+859,"bready", false,-1);
    tracep->declBus(c+1499,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1500+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1532,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1533,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1534+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1566,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1567+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1599+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1631,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1409,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1443,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1444,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1632,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+929,"current_state", false,-1, 1,0);
    tracep->declBus(c+930,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1633,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1445,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBus(c+873,"wdata", false,-1, 31,0);
    tracep->declBus(c+874,"waddr", false,-1, 4,0);
    tracep->declBit(c+875,"wen", false,-1);
    tracep->declBus(c+1261,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1374,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1262,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1375,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1048,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1097+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1129+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+848,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+892,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+893,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+894,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+895,"npc_i", false,-1, 31,0);
    tracep->declBus(c+896,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+897,"wb_src_i", false,-1);
    tracep->declBit(c+898,"csr_write_i", false,-1);
    tracep->declBit(c+899,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+900,"reg_write_i", false,-1);
    tracep->declBus(c+901,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+902,"wbu_valid_i", false,-1);
    tracep->declBit(c+903,"wbu_ready_o", false,-1);
    tracep->declBus(c+845,"npc_o", false,-1, 31,0);
    tracep->declBit(c+846,"wbu_valid_o", false,-1);
    tracep->declBit(c+11,"wbu_ready_i", false,-1);
    tracep->declBus(c+1281,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+873,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1280,"csr_write_o", false,-1);
    tracep->declBit(c+875,"reg_write_o", false,-1);
    tracep->declBus(c+874,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+931,"mem_data", false,-1, 31,0);
    tracep->declBus(c+932,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+933,"alu_result", false,-1, 31,0);
    tracep->declBus(c+934,"rs1", false,-1, 31,0);
    tracep->declBus(c+935,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+936,"rmask", false,-1, 2,0);
    tracep->declBit(c+937,"wb_src", false,-1);
    tracep->declBit(c+938,"csr_wdata_src", false,-1);
    tracep->declBit(c+939,"difftest_check", false,-1);
    tracep->declBit(c+940,"difftest_check_flag", false,-1);
    tracep->declBus(c+1409,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1443,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1444,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+941,"current_state", false,-1, 1,0);
    tracep->declBus(c+942,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1445,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+934,"d0", false,-1, 31,0);
    tracep->declBus(c+935,"d1", false,-1, 31,0);
    tracep->declBit(c+938,"sel", false,-1);
    tracep->declBus(c+1281,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+932,"read_data", false,-1, 31,0);
    tracep->declBus(c+943,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+936,"rmask", false,-1, 2,0);
    tracep->declBus(c+931,"mem_data", false,-1, 31,0);
    tracep->declBus(c+944,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+945,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+946,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+947,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+948,"byte3", false,-1, 31,0);
    tracep->declBus(c+949,"byte2", false,-1, 31,0);
    tracep->declBus(c+950,"byte1", false,-1, 31,0);
    tracep->declBus(c+951,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1445,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+933,"d0", false,-1, 31,0);
    tracep->declBus(c+931,"d1", false,-1, 31,0);
    tracep->declBit(c+937,"sel", false,-1);
    tracep->declBus(c+873,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1372,"rst_n", false,-1);
    tracep->declBus(c+860,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1407,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1408,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+861,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1409,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+862,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1373,"axi_arready_o", false,-1);
    tracep->declBus(c+1024,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1025,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1026,"axi_rlast_o", false,-1);
    tracep->declBus(c+1027,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1028,"axi_rvalid_o", false,-1);
    tracep->declBit(c+863,"axi_rready_i", false,-1);
    tracep->declBus(c+831,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1407,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1408,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+832,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1409,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+830,"axi_awvalid_i", false,-1);
    tracep->declBit(c+168,"axi_awready_o", false,-1);
    tracep->declBus(c+834,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+835,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+836,"axi_wlast_i", false,-1);
    tracep->declBit(c+833,"axi_wvalid_i", false,-1);
    tracep->declBit(c+169,"axi_wready_o", false,-1);
    tracep->declBus(c+172,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+171,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+170,"axi_bvalid_o", false,-1);
    tracep->declBit(c+837,"axi_bready_i", false,-1);
    tracep->declBus(c+840,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+839,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+841,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+842,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+843,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+838,"sram_arvalid_o", false,-1);
    tracep->declBit(c+1046,"sram_arready_i", false,-1);
    tracep->declBus(c+175,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+176,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+177,"sram_rlast_i", false,-1);
    tracep->declBus(c+174,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+173,"sram_rvalid_i", false,-1);
    tracep->declBit(c+844,"sram_rready_o", false,-1);
    tracep->declBus(c+831,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1407,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1408,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+832,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1409,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+830,"sram_awvalid_o", false,-1);
    tracep->declBit(c+168,"sram_awready_i", false,-1);
    tracep->declBus(c+834,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+835,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+836,"sram_wlast_o", false,-1);
    tracep->declBit(c+833,"sram_wvalid_o", false,-1);
    tracep->declBit(c+169,"sram_wready_i", false,-1);
    tracep->declBus(c+172,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+171,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+170,"sram_bvalid_i", false,-1);
    tracep->declBit(c+837,"sram_bready_o", false,-1);
    tracep->declBus(c+864,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+865,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+866,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+867,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+868,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+869,"clint_arvalid_o", false,-1);
    tracep->declBit(c+870,"clint_arready_i", false,-1);
    tracep->declBus(c+17,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+18,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+19,"clint_rlast_i", false,-1);
    tracep->declBus(c+1407,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+20,"clint_rvalid_i", false,-1);
    tracep->declBit(c+871,"clint_rready_o", false,-1);
    tracep->declBus(c+1428,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1429,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1430,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1431,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1432,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1433,"clint_awvalid_o", false,-1);
    tracep->declBit(c+21,"clint_awready_i", false,-1);
    tracep->declBus(c+1434,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1435,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1436,"clint_wlast_o", false,-1);
    tracep->declBit(c+1437,"clint_wvalid_o", false,-1);
    tracep->declBit(c+22,"clint_wready_i", false,-1);
    tracep->declBus(c+23,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1407,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+24,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1438,"clint_bready_o", false,-1);
    tracep->declBit(c+952,"ar_switch", false,-1);
    tracep->declBit(c+54,"r_switch", false,-1);
    tracep->declBit(c+55,"aw_switch", false,-1);
    tracep->declBit(c+56,"w_switch", false,-1);
    tracep->declBit(c+57,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"io_d", false,-1);
    tracep->declBit(c+439,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"io_d", false,-1);
    tracep->declBit(c+439,"io_q", false,-1);
    tracep->declBit(c+439,"sync_0", false,-1);
    tracep->declBit(c+440,"sync_1", false,-1);
    tracep->declBit(c+441,"sync_2", false,-1);
    tracep->declBit(c+442,"sync_3", false,-1);
    tracep->declBit(c+443,"sync_4", false,-1);
    tracep->declBit(c+444,"sync_5", false,-1);
    tracep->declBit(c+445,"sync_6", false,-1);
    tracep->declBit(c+446,"sync_7", false,-1);
    tracep->declBit(c+447,"sync_8", false,-1);
    tracep->declBit(c+448,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1174,"auto_in_psel", false,-1);
    tracep->declBit(c+1175,"auto_in_penable", false,-1);
    tracep->declBit(c+1040,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1289,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1395,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1403,"auto_in_pready", false,-1);
    tracep->declBit(c+1404,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1405,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1338,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1339,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1340,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1341,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1342,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1343,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1344,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1345,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1346,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1347,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1301,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1174,"in_psel", false,-1);
    tracep->declBit(c+1175,"in_penable", false,-1);
    tracep->declBus(c+1395,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1040,"in_pwrite", false,-1);
    tracep->declBus(c+1041,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1403,"in_pready", false,-1);
    tracep->declBus(c+1405,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1404,"in_pslverr", false,-1);
    tracep->declBus(c+1338,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1339,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1340,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1341,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1342,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1343,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1344,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1345,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1346,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1347,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1172,"auto_in_psel", false,-1);
    tracep->declBit(c+1173,"auto_in_penable", false,-1);
    tracep->declBit(c+1040,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1289,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1395,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1400,"auto_in_pready", false,-1);
    tracep->declBit(c+1401,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1402,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1348,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1349,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1301,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1172,"in_psel", false,-1);
    tracep->declBit(c+1173,"in_penable", false,-1);
    tracep->declBus(c+1395,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1040,"in_pwrite", false,-1);
    tracep->declBus(c+1041,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1400,"in_pready", false,-1);
    tracep->declBus(c+1402,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1401,"in_pslverr", false,-1);
    tracep->declBit(c+1348,"ps2_clk", false,-1);
    tracep->declBit(c+1349,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+993,"auto_in_awvalid", false,-1);
    tracep->declBit(c+994,"auto_in_wvalid", false,-1);
    tracep->declBit(c+234,"auto_in_arready", false,-1);
    tracep->declBit(c+1236,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1237,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1370,"auto_in_rready", false,-1);
    tracep->declBit(c+235,"auto_in_rvalid", false,-1);
    tracep->declBus(c+236,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+237,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+235,"state", false,-1);
    tracep->declBus(c+237,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+236,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1258,"raddr", false,-1, 31,0);
    tracep->declBit(c+1259,"ren", false,-1);
    tracep->declBus(c+1260,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1290,"auto_in_psel", false,-1);
    tracep->declBit(c+1176,"auto_in_penable", false,-1);
    tracep->declBit(c+1040,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1287,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1362,"auto_in_pready", false,-1);
    tracep->declBit(c+1396,"auto_in_pslverr", false,-1);
    tracep->declBus(c+68,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1359,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1317,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1360,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1287,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1290,"in_psel", false,-1);
    tracep->declBit(c+1176,"in_penable", false,-1);
    tracep->declBus(c+1395,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1040,"in_pwrite", false,-1);
    tracep->declBus(c+1041,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1362,"in_pready", false,-1);
    tracep->declBus(c+68,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1396,"in_pslverr", false,-1);
    tracep->declBit(c+1359,"qspi_sck", false,-1);
    tracep->declBit(c+1317,"qspi_ce_n", false,-1);
    tracep->declBus(c+1360,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1360,"din", false,-1, 3,0);
    tracep->declBus(c+1378,"dout", false,-1, 3,0);
    tracep->declBus(c+1327,"douten", false,-1, 3,0);
    tracep->declBit(c+1379,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1336,"clk_i", false,-1);
    tracep->declBit(c+1337,"rst_i", false,-1);
    tracep->declBus(c+1287,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1041,"dat_i", false,-1, 31,0);
    tracep->declBus(c+68,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1042,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1290,"cyc_i", false,-1);
    tracep->declBit(c+1290,"stb_i", false,-1);
    tracep->declBit(c+1379,"ack_o", false,-1);
    tracep->declBit(c+1040,"we_i", false,-1);
    tracep->declBit(c+1359,"sck", false,-1);
    tracep->declBit(c+1317,"ce_n", false,-1);
    tracep->declBus(c+1360,"din", false,-1, 3,0);
    tracep->declBus(c+1378,"dout", false,-1, 3,0);
    tracep->declBus(c+1327,"douten", false,-1, 3,0);
    tracep->declBus(c+1409,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1443,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1444,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+544,"mr_sck", false,-1);
    tracep->declBit(c+545,"mr_ce_n", false,-1);
    tracep->declBus(c+1360,"mr_din", false,-1, 3,0);
    tracep->declBus(c+546,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+547,"mr_doe", false,-1);
    tracep->declBit(c+548,"mw_sck", false,-1);
    tracep->declBit(c+549,"mw_ce_n", false,-1);
    tracep->declBus(c+1360,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1179,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+550,"mw_doe", false,-1);
    tracep->declBit(c+1328,"mr_rd", false,-1);
    tracep->declBit(c+551,"mr_done", false,-1);
    tracep->declBit(c+1329,"mw_wr", false,-1);
    tracep->declBit(c+1180,"mw_done", false,-1);
    tracep->declBit(c+1290,"wb_valid", false,-1);
    tracep->declBit(c+1302,"wb_we", false,-1);
    tracep->declBit(c+1303,"wb_re", false,-1);
    tracep->declBus(c+1192,"state", false,-1, 1,0);
    tracep->declBus(c+1380,"nstate", false,-1, 1,0);
    tracep->declBus(c+1381,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1382,"qpi_sck", false,-1);
    tracep->declBus(c+1161,"size", false,-1, 2,0);
    tracep->declBus(c+1162,"byte0", false,-1, 7,0);
    tracep->declBus(c+1163,"byte1", false,-1, 7,0);
    tracep->declBus(c+1164,"byte2", false,-1, 7,0);
    tracep->declBus(c+1165,"byte3", false,-1, 7,0);
    tracep->declBus(c+1166,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1383,"rst_n", false,-1);
    tracep->declBus(c+1304,"addr", false,-1, 23,0);
    tracep->declBit(c+1328,"rd", false,-1);
    tracep->declBus(c+1488,"size", false,-1, 2,0);
    tracep->declBit(c+551,"done", false,-1);
    tracep->declBus(c+68,"line", false,-1, 31,0);
    tracep->declBit(c+544,"sck", false,-1);
    tracep->declBit(c+545,"ce_n", false,-1);
    tracep->declBus(c+1360,"din", false,-1, 3,0);
    tracep->declBus(c+546,"dout", false,-1, 3,0);
    tracep->declBit(c+547,"douten", false,-1);
    tracep->declBus(c+1634,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1635,"READ", false,-1, 0,0);
    tracep->declBus(c+1636,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+552,"state", false,-1);
    tracep->declBit(c+1330,"nstate", false,-1);
    tracep->declBus(c+553,"counter", false,-1, 7,0);
    tracep->declBus(c+554,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+449+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1637,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+555,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1383,"rst_n", false,-1);
    tracep->declBus(c+1305,"addr", false,-1, 23,0);
    tracep->declBus(c+1166,"line", false,-1, 31,0);
    tracep->declBus(c+1161,"size", false,-1, 2,0);
    tracep->declBit(c+1329,"wr", false,-1);
    tracep->declBit(c+1180,"done", false,-1);
    tracep->declBit(c+548,"sck", false,-1);
    tracep->declBit(c+549,"ce_n", false,-1);
    tracep->declBus(c+1360,"din", false,-1, 3,0);
    tracep->declBus(c+1179,"dout", false,-1, 3,0);
    tracep->declBit(c+550,"douten", false,-1);
    tracep->declBus(c+1634,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1635,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1167,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+556,"state", false,-1);
    tracep->declBit(c+1331,"nstate", false,-1);
    tracep->declBus(c+557,"counter", false,-1, 7,0);
    tracep->declBus(c+558,"saddr", false,-1, 23,0);
    tracep->declBus(c+1638,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1168,"auto_in_psel", false,-1);
    tracep->declBit(c+1169,"auto_in_penable", false,-1);
    tracep->declBit(c+1040,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1287,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"auto_in_pready", false,-1);
    tracep->declBit(c+1396,"auto_in_pslverr", false,-1);
    tracep->declBus(c+540,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1361,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1184,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1185,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1186,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1187,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1188,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1189,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1190,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1191,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1208,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1287,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1168,"in_psel", false,-1);
    tracep->declBit(c+1169,"in_penable", false,-1);
    tracep->declBus(c+1395,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1040,"in_pwrite", false,-1);
    tracep->declBus(c+1041,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"in_pready", false,-1);
    tracep->declBus(c+540,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1396,"in_pslverr", false,-1);
    tracep->declBit(c+1361,"sdram_clk", false,-1);
    tracep->declBit(c+1184,"sdram_cke", false,-1);
    tracep->declBit(c+1185,"sdram_cs", false,-1);
    tracep->declBit(c+1186,"sdram_ras", false,-1);
    tracep->declBit(c+1187,"sdram_cas", false,-1);
    tracep->declBit(c+1188,"sdram_we", false,-1);
    tracep->declBus(c+1384,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1190,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1191,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1208,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+559,"sdram_dout_en", false,-1);
    tracep->declBus(c+560,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+453,"state", false,-1, 1,0);
    tracep->declBit(c+1193,"req_accept", false,-1);
    tracep->declBit(c+1306,"is_read", false,-1);
    tracep->declBit(c+1307,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1336,"clk_i", false,-1);
    tracep->declBit(c+1337,"rst_i", false,-1);
    tracep->declBus(c+1308,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1306,"inport_rd_i", false,-1);
    tracep->declBus(c+1408,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1287,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1041,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1208,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1193,"inport_accept_o", false,-1);
    tracep->declBit(c+539,"inport_ack_o", false,-1);
    tracep->declBit(c+1396,"inport_error_o", false,-1);
    tracep->declBus(c+540,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1361,"sdram_clk_o", false,-1);
    tracep->declBit(c+1184,"sdram_cke_o", false,-1);
    tracep->declBit(c+1185,"sdram_cs_o", false,-1);
    tracep->declBit(c+1186,"sdram_ras_o", false,-1);
    tracep->declBit(c+1187,"sdram_cas_o", false,-1);
    tracep->declBit(c+1188,"sdram_we_o", false,-1);
    tracep->declBus(c+1191,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1384,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1190,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+560,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+559,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1639,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1640,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1641,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1642,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1642,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1643,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1643,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1644,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1645,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1646,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1647,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1643,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1648,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1649,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1650,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1651,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1652,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1653,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1654,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1407,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1655,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1643,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1407,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1654,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1653,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1649,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1651,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1650,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1652,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1648,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1656,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1657,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1658,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1658,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1445,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1658,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1642,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1642,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1659,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1287,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1308,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1306,"ram_rd_w", false,-1);
    tracep->declBit(c+1193,"ram_accept_w", false,-1);
    tracep->declBus(c+1041,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+540,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+539,"ram_ack_w", false,-1);
    tracep->declBit(c+1309,"ram_req_w", false,-1);
    tracep->declBus(c+1194,"command_q", false,-1, 3,0);
    tracep->declBus(c+1189,"addr_q", false,-1, 12,0);
    tracep->declBus(c+560,"data_q", false,-1, 31,0);
    tracep->declBit(c+561,"data_rd_en_q", false,-1);
    tracep->declBus(c+1191,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1184,"cke_q", false,-1);
    tracep->declBus(c+1190,"bank_q", false,-1, 1,0);
    tracep->declBus(c+540,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+562,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1208,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+563,"refresh_q", false,-1);
    tracep->declBus(c+564,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+565+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1195,"state_q", false,-1, 3,0);
    tracep->declBus(c+1332,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1333,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+569,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+570,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1310,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1311,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1312,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1643,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+571,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1334,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1660,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1196,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+572,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+573,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+574,"idx", false,-1, 31,0);
    tracep->declBus(c+575,"rd_q", false,-1, 3,0);
    tracep->declBit(c+539,"ack_q", false,-1);
    tracep->declArray(c+1197,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1177,"auto_in_psel", false,-1);
    tracep->declBit(c+1178,"auto_in_penable", false,-1);
    tracep->declBit(c+1040,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1288,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1395,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+541,"auto_in_pready", false,-1);
    tracep->declBit(c+542,"auto_in_pslverr", false,-1);
    tracep->declBus(c+543,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+538,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1182,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1183,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1358,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1661,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1662,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1663,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1313,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1177,"in_psel", false,-1);
    tracep->declBit(c+1178,"in_penable", false,-1);
    tracep->declBus(c+1395,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1040,"in_pwrite", false,-1);
    tracep->declBus(c+1041,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+541,"in_pready", false,-1);
    tracep->declBus(c+543,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+542,"in_pslverr", false,-1);
    tracep->declBit(c+538,"spi_sck", false,-1);
    tracep->declBus(c+1182,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1183,"spi_mosi", false,-1);
    tracep->declBit(c+1358,"spi_miso", false,-1);
    tracep->declBit(c+576,"spi_irq_out", false,-1);
    tracep->declBus(c+1664,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1665,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1664,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1666,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1667,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1668,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1407,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1654,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1653,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1649,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1651,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1650,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1652,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1648,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1656,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1657,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1669,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+577,"xip_state", false,-1, 3,0);
    tracep->declBus(c+578,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+579,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+580,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+581,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+582,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+583,"wb_we_i", false,-1);
    tracep->declBit(c+584,"wb_stb_i", false,-1);
    tracep->declBit(c+585,"wb_cyc_i", false,-1);
    tracep->declBit(c+586,"wb_ack_o", false,-1);
    tracep->declBit(c+1396,"wb_err_o", false,-1);
    tracep->declBit(c+587,"wb_int_o", false,-1);
    tracep->declBit(c+588,"done", false,-1);
    tracep->declBus(c+589,"paddr", false,-1, 31,0);
    tracep->declQuad(c+590,"data", false,-1, 63,0);
    tracep->declBit(c+592,"is_flash_access", false,-1);
    tracep->declBus(c+593,"tmp", false,-1, 31,0);
    tracep->declQuad(c+594,"tmp64", false,-1, 63,0);
    tracep->declBus(c+596,"counter", false,-1, 7,0);
    tracep->declBit(c+597,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1670,"Tp", false,-1, 31,0);
    tracep->declBit(c+1336,"wb_clk_i", false,-1);
    tracep->declBit(c+1337,"wb_rst_i", false,-1);
    tracep->declBus(c+579,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+580,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+581,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+582,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+583,"wb_we_i", false,-1);
    tracep->declBit(c+584,"wb_stb_i", false,-1);
    tracep->declBit(c+585,"wb_cyc_i", false,-1);
    tracep->declBit(c+586,"wb_ack_o", false,-1);
    tracep->declBit(c+1396,"wb_err_o", false,-1);
    tracep->declBit(c+587,"wb_int_o", false,-1);
    tracep->declBus(c+1182,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+538,"sclk_pad_o", false,-1);
    tracep->declBit(c+1183,"mosi_pad_o", false,-1);
    tracep->declBit(c+1358,"miso_pad_i", false,-1);
    tracep->declBus(c+598,"divider", false,-1, 15,0);
    tracep->declBus(c+599,"ctrl", false,-1, 13,0);
    tracep->declBus(c+600,"ss", false,-1, 7,0);
    tracep->declBus(c+601,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+602,"rx", false,-1, 127,0);
    tracep->declBit(c+606,"rx_negedge", false,-1);
    tracep->declBit(c+607,"tx_negedge", false,-1);
    tracep->declBus(c+608,"char_len", false,-1, 6,0);
    tracep->declBit(c+609,"go", false,-1);
    tracep->declBit(c+610,"lsb", false,-1);
    tracep->declBit(c+611,"ie", false,-1);
    tracep->declBit(c+612,"ass", false,-1);
    tracep->declBit(c+613,"spi_divider_sel", false,-1);
    tracep->declBit(c+614,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+615,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+616,"spi_ss_sel", false,-1);
    tracep->declBit(c+617,"tip", false,-1);
    tracep->declBit(c+618,"pos_edge", false,-1);
    tracep->declBit(c+619,"neg_edge", false,-1);
    tracep->declBit(c+620,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1670,"Tp", false,-1, 31,0);
    tracep->declBit(c+1336,"clk_in", false,-1);
    tracep->declBit(c+1337,"rst", false,-1);
    tracep->declBit(c+617,"enable", false,-1);
    tracep->declBit(c+609,"go", false,-1);
    tracep->declBit(c+620,"last_clk", false,-1);
    tracep->declBus(c+598,"divider", false,-1, 15,0);
    tracep->declBit(c+538,"clk_out", false,-1);
    tracep->declBit(c+618,"pos_edge", false,-1);
    tracep->declBit(c+619,"neg_edge", false,-1);
    tracep->declBus(c+621,"cnt", false,-1, 15,0);
    tracep->declBit(c+622,"cnt_zero", false,-1);
    tracep->declBit(c+623,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1670,"Tp", false,-1, 31,0);
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1337,"rst", false,-1);
    tracep->declBus(c+624,"latch", false,-1, 3,0);
    tracep->declBus(c+582,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+608,"len", false,-1, 6,0);
    tracep->declBit(c+610,"lsb", false,-1);
    tracep->declBit(c+609,"go", false,-1);
    tracep->declBit(c+618,"pos_edge", false,-1);
    tracep->declBit(c+619,"neg_edge", false,-1);
    tracep->declBit(c+606,"rx_negedge", false,-1);
    tracep->declBit(c+607,"tx_negedge", false,-1);
    tracep->declBit(c+617,"tip", false,-1);
    tracep->declBit(c+620,"last", false,-1);
    tracep->declBus(c+580,"p_in", false,-1, 31,0);
    tracep->declArray(c+602,"p_out", false,-1, 127,0);
    tracep->declBit(c+538,"s_clk", false,-1);
    tracep->declBit(c+1358,"s_in", false,-1);
    tracep->declBit(c+1183,"s_out", false,-1);
    tracep->declBus(c+625,"cnt", false,-1, 7,0);
    tracep->declArray(c+602,"data", false,-1, 127,0);
    tracep->declBus(c+626,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+627,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+628,"rx_clk", false,-1);
    tracep->declBit(c+629,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1291,"auto_in_psel", false,-1);
    tracep->declBit(c+1292,"auto_in_penable", false,-1);
    tracep->declBit(c+1040,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1289,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1395,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1293,"auto_in_pready", false,-1);
    tracep->declBit(c+1396,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1363,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1356,"uart_rx", false,-1);
    tracep->declBit(c+1357,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1291,"in_psel", false,-1);
    tracep->declBit(c+1292,"in_penable", false,-1);
    tracep->declBus(c+1395,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1293,"in_pready", false,-1);
    tracep->declBit(c+1396,"in_pslverr", false,-1);
    tracep->declBus(c+1301,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1040,"in_pwrite", false,-1);
    tracep->declBus(c+1363,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1041,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1356,"uart_rx", false,-1);
    tracep->declBit(c+1357,"uart_tx", false,-1);
    tracep->declBit(c+630,"rtsn", false,-1);
    tracep->declBit(c+1396,"ctsn", false,-1);
    tracep->declBit(c+631,"dtr_pad_o", false,-1);
    tracep->declBit(c+1396,"dsr_pad_i", false,-1);
    tracep->declBit(c+1396,"ri_pad_i", false,-1);
    tracep->declBit(c+1396,"dcd_pad_i", false,-1);
    tracep->declBit(c+632,"interrupt", false,-1);
    tracep->declBit(c+1385,"reg_we", false,-1);
    tracep->declBit(c+1386,"reg_re", false,-1);
    tracep->declBus(c+1314,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1315,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+454,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1335,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+633,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1337,"wb_rst_i", false,-1);
    tracep->declBus(c+1314,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1316,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1335,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1385,"wb_we_i", false,-1);
    tracep->declBit(c+1386,"wb_re_i", false,-1);
    tracep->declBit(c+1357,"stx_pad_o", false,-1);
    tracep->declBit(c+1356,"srx_pad_i", false,-1);
    tracep->declBus(c+1656,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+633,"rts_pad_o", false,-1);
    tracep->declBit(c+631,"dtr_pad_o", false,-1);
    tracep->declBit(c+632,"int_o", false,-1);
    tracep->declBit(c+634,"enable", false,-1);
    tracep->declBit(c+635,"srx_pad", false,-1);
    tracep->declBus(c+636,"ier", false,-1, 3,0);
    tracep->declBus(c+637,"iir", false,-1, 3,0);
    tracep->declBus(c+638,"fcr", false,-1, 1,0);
    tracep->declBus(c+639,"mcr", false,-1, 4,0);
    tracep->declBus(c+640,"lcr", false,-1, 7,0);
    tracep->declBus(c+641,"msr", false,-1, 7,0);
    tracep->declBus(c+642,"dl", false,-1, 15,0);
    tracep->declBus(c+643,"scratch", false,-1, 7,0);
    tracep->declBit(c+644,"start_dlc", false,-1);
    tracep->declBit(c+645,"lsr_mask_d", false,-1);
    tracep->declBit(c+646,"msi_reset", false,-1);
    tracep->declBus(c+647,"dlc", false,-1, 15,0);
    tracep->declBus(c+648,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+649,"rx_reset", false,-1);
    tracep->declBit(c+650,"tx_reset", false,-1);
    tracep->declBit(c+651,"dlab", false,-1);
    tracep->declBit(c+1406,"cts_pad_i", false,-1);
    tracep->declBit(c+1396,"dsr_pad_i", false,-1);
    tracep->declBit(c+1396,"ri_pad_i", false,-1);
    tracep->declBit(c+1396,"dcd_pad_i", false,-1);
    tracep->declBit(c+652,"loopback", false,-1);
    tracep->declBit(c+1396,"cts", false,-1);
    tracep->declBit(c+1406,"dsr", false,-1);
    tracep->declBit(c+1406,"ri", false,-1);
    tracep->declBit(c+1406,"dcd", false,-1);
    tracep->declBit(c+653,"cts_c", false,-1);
    tracep->declBit(c+654,"dsr_c", false,-1);
    tracep->declBit(c+655,"ri_c", false,-1);
    tracep->declBit(c+656,"dcd_c", false,-1);
    tracep->declBus(c+657,"lsr", false,-1, 7,0);
    tracep->declBit(c+658,"lsr0", false,-1);
    tracep->declBit(c+659,"lsr1", false,-1);
    tracep->declBit(c+660,"lsr2", false,-1);
    tracep->declBit(c+661,"lsr3", false,-1);
    tracep->declBit(c+662,"lsr4", false,-1);
    tracep->declBit(c+663,"lsr5", false,-1);
    tracep->declBit(c+664,"lsr6", false,-1);
    tracep->declBit(c+665,"lsr7", false,-1);
    tracep->declBit(c+666,"lsr0r", false,-1);
    tracep->declBit(c+667,"lsr1r", false,-1);
    tracep->declBit(c+668,"lsr2r", false,-1);
    tracep->declBit(c+669,"lsr3r", false,-1);
    tracep->declBit(c+670,"lsr4r", false,-1);
    tracep->declBit(c+671,"lsr5r", false,-1);
    tracep->declBit(c+672,"lsr6r", false,-1);
    tracep->declBit(c+673,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+674,"rls_int", false,-1);
    tracep->declBit(c+675,"rda_int", false,-1);
    tracep->declBit(c+676,"ti_int", false,-1);
    tracep->declBit(c+677,"thre_int", false,-1);
    tracep->declBit(c+678,"ms_int", false,-1);
    tracep->declBit(c+679,"tf_push", false,-1);
    tracep->declBit(c+680,"rf_pop", false,-1);
    tracep->declBus(c+1387,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+681,"rf_error_bit", false,-1);
    tracep->declBit(c+659,"rf_overrun", false,-1);
    tracep->declBit(c+682,"rf_push_pulse", false,-1);
    tracep->declBus(c+683,"rf_count", false,-1, 4,0);
    tracep->declBus(c+684,"tf_count", false,-1, 4,0);
    tracep->declBus(c+685,"tstate", false,-1, 2,0);
    tracep->declBus(c+686,"rstate", false,-1, 3,0);
    tracep->declBus(c+687,"counter_t", false,-1, 9,0);
    tracep->declBit(c+688,"thre_set_en", false,-1);
    tracep->declBus(c+689,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+690,"block_value", false,-1, 7,0);
    tracep->declBit(c+691,"serial_out", false,-1);
    tracep->declBit(c+692,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+693,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+694,"lsr0_d", false,-1);
    tracep->declBit(c+695,"lsr1_d", false,-1);
    tracep->declBit(c+696,"lsr2_d", false,-1);
    tracep->declBit(c+697,"lsr3_d", false,-1);
    tracep->declBit(c+698,"lsr4_d", false,-1);
    tracep->declBit(c+699,"lsr5_d", false,-1);
    tracep->declBit(c+700,"lsr6_d", false,-1);
    tracep->declBit(c+701,"lsr7_d", false,-1);
    tracep->declBit(c+702,"rls_int_d", false,-1);
    tracep->declBit(c+703,"thre_int_d", false,-1);
    tracep->declBit(c+704,"ms_int_d", false,-1);
    tracep->declBit(c+705,"ti_int_d", false,-1);
    tracep->declBit(c+706,"rda_int_d", false,-1);
    tracep->declBit(c+707,"rls_int_rise", false,-1);
    tracep->declBit(c+708,"thre_int_rise", false,-1);
    tracep->declBit(c+709,"ms_int_rise", false,-1);
    tracep->declBit(c+710,"ti_int_rise", false,-1);
    tracep->declBit(c+711,"rda_int_rise", false,-1);
    tracep->declBit(c+712,"rls_int_pnd", false,-1);
    tracep->declBit(c+713,"rda_int_pnd", false,-1);
    tracep->declBit(c+714,"thre_int_pnd", false,-1);
    tracep->declBit(c+715,"ms_int_pnd", false,-1);
    tracep->declBit(c+716,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1670,"Tp", false,-1, 31,0);
    tracep->declBus(c+1670,"width", false,-1, 31,0);
    tracep->declBus(c+1635,"init_value", false,-1, 0,0);
    tracep->declBit(c+1337,"rst_i", false,-1);
    tracep->declBit(c+1336,"clk_i", false,-1);
    tracep->declBit(c+1396,"stage1_rst_i", false,-1);
    tracep->declBit(c+1406,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1356,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+635,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+717,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1337,"wb_rst_i", false,-1);
    tracep->declBus(c+640,"lcr", false,-1, 7,0);
    tracep->declBit(c+680,"rf_pop", false,-1);
    tracep->declBit(c+692,"srx_pad_i", false,-1);
    tracep->declBit(c+634,"enable", false,-1);
    tracep->declBit(c+649,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+687,"counter_t", false,-1, 9,0);
    tracep->declBus(c+683,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1387,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+659,"rf_overrun", false,-1);
    tracep->declBit(c+681,"rf_error_bit", false,-1);
    tracep->declBus(c+686,"rstate", false,-1, 3,0);
    tracep->declBit(c+682,"rf_push_pulse", false,-1);
    tracep->declBus(c+718,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+719,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+720,"rshift", false,-1, 7,0);
    tracep->declBit(c+721,"rparity", false,-1);
    tracep->declBit(c+722,"rparity_error", false,-1);
    tracep->declBit(c+723,"rframing_error", false,-1);
    tracep->declBit(c+724,"rbit_in", false,-1);
    tracep->declBit(c+725,"rparity_xor", false,-1);
    tracep->declBus(c+726,"counter_b", false,-1, 7,0);
    tracep->declBit(c+727,"rf_push_q", false,-1);
    tracep->declBus(c+728,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+729,"rf_push", false,-1);
    tracep->declBit(c+730,"break_error", false,-1);
    tracep->declBit(c+731,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+732,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+733,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+734,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1407,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1654,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1653,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1649,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1651,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1650,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1652,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1648,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1656,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1657,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1671,"sr_push", false,-1, 3,0);
    tracep->declBus(c+735,"toc_value", false,-1, 9,0);
    tracep->declBus(c+736,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1672,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1673,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1643,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1633,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1337,"wb_rst_i", false,-1);
    tracep->declBit(c+682,"push", false,-1);
    tracep->declBit(c+680,"pop", false,-1);
    tracep->declBus(c+728,"data_in", false,-1, 10,0);
    tracep->declBit(c+649,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1387,"data_out", false,-1, 10,0);
    tracep->declBit(c+659,"overrun", false,-1);
    tracep->declBus(c+683,"count", false,-1, 4,0);
    tracep->declBit(c+681,"error_bit", false,-1);
    tracep->declBus(c+1388,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+737+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+753,"top", false,-1, 3,0);
    tracep->declBus(c+754,"bottom", false,-1, 3,0);
    tracep->declBus(c+755,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+756,"word0", false,-1, 2,0);
    tracep->declBus(c+757,"word1", false,-1, 2,0);
    tracep->declBus(c+758,"word2", false,-1, 2,0);
    tracep->declBus(c+759,"word3", false,-1, 2,0);
    tracep->declBus(c+760,"word4", false,-1, 2,0);
    tracep->declBus(c+761,"word5", false,-1, 2,0);
    tracep->declBus(c+762,"word6", false,-1, 2,0);
    tracep->declBus(c+763,"word7", false,-1, 2,0);
    tracep->declBus(c+764,"word8", false,-1, 2,0);
    tracep->declBus(c+765,"word9", false,-1, 2,0);
    tracep->declBus(c+766,"word10", false,-1, 2,0);
    tracep->declBus(c+767,"word11", false,-1, 2,0);
    tracep->declBus(c+768,"word12", false,-1, 2,0);
    tracep->declBus(c+769,"word13", false,-1, 2,0);
    tracep->declBus(c+770,"word14", false,-1, 2,0);
    tracep->declBus(c+771,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1643,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1663,"data_width", false,-1, 31,0);
    tracep->declBus(c+1673,"depth", false,-1, 31,0);
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+682,"we", false,-1);
    tracep->declBus(c+753,"a", false,-1, 3,0);
    tracep->declBus(c+754,"dpra", false,-1, 3,0);
    tracep->declBus(c+772,"di", false,-1, 7,0);
    tracep->declBus(c+1388,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+455+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1337,"wb_rst_i", false,-1);
    tracep->declBus(c+640,"lcr", false,-1, 7,0);
    tracep->declBit(c+679,"tf_push", false,-1);
    tracep->declBus(c+1316,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+634,"enable", false,-1);
    tracep->declBit(c+650,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+691,"stx_pad_o", false,-1);
    tracep->declBus(c+685,"tstate", false,-1, 2,0);
    tracep->declBus(c+684,"tf_count", false,-1, 4,0);
    tracep->declBus(c+773,"counter", false,-1, 4,0);
    tracep->declBus(c+774,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+775,"shift_out", false,-1, 6,0);
    tracep->declBit(c+776,"stx_o_tmp", false,-1);
    tracep->declBit(c+777,"parity_xor", false,-1);
    tracep->declBit(c+778,"tf_pop", false,-1);
    tracep->declBit(c+779,"bit_out", false,-1);
    tracep->declBus(c+1316,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1181,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+780,"tf_overrun", false,-1);
    tracep->declBus(c+1412,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1395,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1423,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1487,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1488,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1674,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1663,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1673,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1643,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1633,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+1337,"wb_rst_i", false,-1);
    tracep->declBit(c+679,"push", false,-1);
    tracep->declBit(c+778,"pop", false,-1);
    tracep->declBus(c+1316,"data_in", false,-1, 7,0);
    tracep->declBit(c+650,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1181,"data_out", false,-1, 7,0);
    tracep->declBit(c+780,"overrun", false,-1);
    tracep->declBus(c+684,"count", false,-1, 4,0);
    tracep->declBus(c+781,"top", false,-1, 3,0);
    tracep->declBus(c+782,"bottom", false,-1, 3,0);
    tracep->declBus(c+783,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1643,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1663,"data_width", false,-1, 31,0);
    tracep->declBus(c+1673,"depth", false,-1, 31,0);
    tracep->declBit(c+1336,"clk", false,-1);
    tracep->declBit(c+679,"we", false,-1);
    tracep->declBus(c+781,"a", false,-1, 3,0);
    tracep->declBus(c+782,"dpra", false,-1, 3,0);
    tracep->declBus(c+1316,"di", false,-1, 7,0);
    tracep->declBus(c+1181,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+471+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBit(c+1170,"auto_in_psel", false,-1);
    tracep->declBit(c+1171,"auto_in_penable", false,-1);
    tracep->declBit(c+1040,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1288,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1395,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1041,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1397,"auto_in_pready", false,-1);
    tracep->declBit(c+1398,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1399,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1350,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1351,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1352,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1353,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1354,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1355,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1336,"clock", false,-1);
    tracep->declBit(c+1337,"reset", false,-1);
    tracep->declBus(c+1313,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1170,"in_psel", false,-1);
    tracep->declBit(c+1171,"in_penable", false,-1);
    tracep->declBus(c+1395,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1040,"in_pwrite", false,-1);
    tracep->declBus(c+1041,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1042,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1397,"in_pready", false,-1);
    tracep->declBus(c+1399,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1398,"in_pslverr", false,-1);
    tracep->declBus(c+1350,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1351,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1352,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1353,"vga_hsync", false,-1);
    tracep->declBit(c+1354,"vga_vsync", false,-1);
    tracep->declBit(c+1355,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+538,"sck", false,-1);
    tracep->declBit(c+1200,"ss", false,-1);
    tracep->declBit(c+1183,"mosi", false,-1);
    tracep->declBit(c+1034,"miso", false,-1);
    tracep->declBus(c+1035,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1036,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1389,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+538,"sck", false,-1);
    tracep->declBit(c+1201,"ss", false,-1);
    tracep->declBit(c+1183,"mosi", false,-1);
    tracep->declBit(c+1390,"miso", false,-1);
    tracep->declBit(c+1201,"reset", false,-1);
    tracep->declBus(c+824,"state", false,-1, 2,0);
    tracep->declBus(c+825,"counter", false,-1, 7,0);
    tracep->declBus(c+826,"cmd", false,-1, 7,0);
    tracep->declBus(c+827,"addr", false,-1, 23,0);
    tracep->declBus(c+828,"data", false,-1, 31,0);
    tracep->declBit(c+829,"ren", false,-1);
    tracep->declBus(c+1391,"rdata", false,-1, 31,0);
    tracep->declBus(c+1392,"raddr", false,-1, 31,0);
    tracep->declBus(c+1037,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+538,"clock", false,-1);
    tracep->declBit(c+829,"valid", false,-1);
    tracep->declBus(c+826,"cmd", false,-1, 7,0);
    tracep->declBus(c+1392,"addr", false,-1, 31,0);
    tracep->declBus(c+1391,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1359,"sck", false,-1);
    tracep->declBit(c+1317,"ce_n", false,-1);
    tracep->declBus(c+1360,"dio", false,-1, 3,0);
    tracep->declBus(c+58,"dio_out", false,-1, 3,0);
    tracep->declBus(c+59,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1360,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1439,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1670,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1642,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1675,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1643,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1633,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+60,"state", false,-1, 2,0);
    tracep->declBus(c+1393,"next_state", false,-1, 2,0);
    tracep->declBus(c+61,"counter", false,-1, 7,0);
    tracep->declBus(c+62,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+63,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+64,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+65,"is_read_op", false,-1);
    tracep->declBit(c+66,"is_write_op", false,-1);
    tracep->declBus(c+67,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1394,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1361,"clk", false,-1);
    tracep->declBit(c+1184,"cke", false,-1);
    tracep->declBit(c+1185,"cs", false,-1);
    tracep->declBit(c+1186,"ras", false,-1);
    tracep->declBit(c+1187,"cas", false,-1);
    tracep->declBit(c+1188,"we", false,-1);
    tracep->declBus(c+1202,"a", false,-1, 13,0);
    tracep->declBus(c+1190,"ba", false,-1, 1,0);
    tracep->declBus(c+1191,"dqm", false,-1, 3,0);
    tracep->declBus(c+1208,"dq", false,-1, 31,0);
    tracep->declBit(c+1185,"cs_0", false,-1);
    tracep->declBit(c+1186,"ras_0", false,-1);
    tracep->declBit(c+1187,"cas_0", false,-1);
    tracep->declBit(c+1188,"we_0", false,-1);
    tracep->declBit(c+1406,"cs_1", false,-1);
    tracep->declBit(c+1406,"ras_1", false,-1);
    tracep->declBit(c+1406,"cas_1", false,-1);
    tracep->declBit(c+1406,"we_1", false,-1);
    tracep->pushNamePrefix("sdram_0_to_64MB ");
    tracep->declBit(c+1361,"clk", false,-1);
    tracep->declBit(c+1184,"cke", false,-1);
    tracep->declBit(c+1185,"cs", false,-1);
    tracep->declBit(c+1186,"ras", false,-1);
    tracep->declBit(c+1187,"cas", false,-1);
    tracep->declBit(c+1188,"we", false,-1);
    tracep->declBus(c+1189,"a", false,-1, 12,0);
    tracep->declBus(c+1190,"ba", false,-1, 1,0);
    tracep->declBus(c+1191,"dqm", false,-1, 3,0);
    tracep->declBus(c+1208,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_bitex_high ");
    tracep->declBit(c+1361,"clk", false,-1);
    tracep->declBit(c+1184,"cke", false,-1);
    tracep->declBit(c+1185,"cs", false,-1);
    tracep->declBit(c+1186,"ras", false,-1);
    tracep->declBit(c+1187,"cas", false,-1);
    tracep->declBit(c+1188,"we", false,-1);
    tracep->declBus(c+1189,"a", false,-1, 12,0);
    tracep->declBus(c+1190,"ba", false,-1, 1,0);
    tracep->declBus(c+1203,"dqm", false,-1, 1,0);
    tracep->declBus(c+1209,"dq", false,-1, 15,0);
    tracep->declBus(c+1676,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1649,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1650,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1651,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1407,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+784,"cas_la", false,-1, 2,0);
    tracep->declBus(c+785,"bl", false,-1, 2,0);
    tracep->declBus(c+1194,"command", false,-1, 3,0);
    tracep->declBus(c+786,"mode_register", false,-1, 12,0);
    tracep->declBus(c+787,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1204,"col_addr", false,-1, 9,0);
    tracep->declBus(c+788,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1210,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+789,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+790+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+794,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+795,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1677,"state", false,-1, 2,0);
    tracep->declBit(c+796,"write_brust", false,-1);
    tracep->declBit(c+797,"read_burst", false,-1);
    tracep->declBus(c+798,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_bitex_low ");
    tracep->declBit(c+1361,"clk", false,-1);
    tracep->declBit(c+1184,"cke", false,-1);
    tracep->declBit(c+1185,"cs", false,-1);
    tracep->declBit(c+1186,"ras", false,-1);
    tracep->declBit(c+1187,"cas", false,-1);
    tracep->declBit(c+1188,"we", false,-1);
    tracep->declBus(c+1189,"a", false,-1, 12,0);
    tracep->declBus(c+1190,"ba", false,-1, 1,0);
    tracep->declBus(c+1205,"dqm", false,-1, 1,0);
    tracep->declBus(c+1211,"dq", false,-1, 15,0);
    tracep->declBus(c+1676,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1649,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1650,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1651,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1407,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+799,"cas_la", false,-1, 2,0);
    tracep->declBus(c+800,"bl", false,-1, 2,0);
    tracep->declBus(c+1194,"command", false,-1, 3,0);
    tracep->declBus(c+801,"mode_register", false,-1, 12,0);
    tracep->declBus(c+802,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1204,"col_addr", false,-1, 9,0);
    tracep->declBus(c+803,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1212,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+804,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+805+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+809,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+810,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1678,"state", false,-1, 2,0);
    tracep->declBit(c+811,"write_brust", false,-1);
    tracep->declBit(c+812,"read_burst", false,-1);
    tracep->declBus(c+813,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_64_to_128MB ");
    tracep->declBit(c+1361,"clk", false,-1);
    tracep->declBit(c+1184,"cke", false,-1);
    tracep->declBit(c+1406,"cs", false,-1);
    tracep->declBit(c+1406,"ras", false,-1);
    tracep->declBit(c+1406,"cas", false,-1);
    tracep->declBit(c+1406,"we", false,-1);
    tracep->declBus(c+1189,"a", false,-1, 12,0);
    tracep->declBus(c+1190,"ba", false,-1, 1,0);
    tracep->declBus(c+1191,"dqm", false,-1, 3,0);
    tracep->declBus(c+1208,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_bitex_high ");
    tracep->declBit(c+1361,"clk", false,-1);
    tracep->declBit(c+1184,"cke", false,-1);
    tracep->declBit(c+1406,"cs", false,-1);
    tracep->declBit(c+1406,"ras", false,-1);
    tracep->declBit(c+1406,"cas", false,-1);
    tracep->declBit(c+1406,"we", false,-1);
    tracep->declBus(c+1189,"a", false,-1, 12,0);
    tracep->declBus(c+1190,"ba", false,-1, 1,0);
    tracep->declBus(c+1203,"dqm", false,-1, 1,0);
    tracep->declBus(c+1209,"dq", false,-1, 15,0);
    tracep->declBus(c+1676,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1649,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1650,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1651,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1407,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1679,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1680,"bl", false,-1, 2,0);
    tracep->declBus(c+1681,"command", false,-1, 3,0);
    tracep->declBus(c+1682,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1683,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1204,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1684,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1206,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1685+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+814,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+815,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1689,"state", false,-1, 2,0);
    tracep->declBit(c+816,"write_brust", false,-1);
    tracep->declBit(c+817,"read_burst", false,-1);
    tracep->declBus(c+818,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_bitex_low ");
    tracep->declBit(c+1361,"clk", false,-1);
    tracep->declBit(c+1184,"cke", false,-1);
    tracep->declBit(c+1406,"cs", false,-1);
    tracep->declBit(c+1406,"ras", false,-1);
    tracep->declBit(c+1406,"cas", false,-1);
    tracep->declBit(c+1406,"we", false,-1);
    tracep->declBus(c+1189,"a", false,-1, 12,0);
    tracep->declBus(c+1190,"ba", false,-1, 1,0);
    tracep->declBus(c+1205,"dqm", false,-1, 1,0);
    tracep->declBus(c+1211,"dq", false,-1, 15,0);
    tracep->declBus(c+1676,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1649,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1650,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1651,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1407,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1690,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1691,"bl", false,-1, 2,0);
    tracep->declBus(c+1681,"command", false,-1, 3,0);
    tracep->declBus(c+1692,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1693,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1204,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1694,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1207,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+2,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1695+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+819,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+820,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1699,"state", false,-1, 2,0);
    tracep->declBit(c+821,"write_brust", false,-1);
    tracep->declBit(c+822,"read_burst", false,-1);
    tracep->declBus(c+823,"dout", false,-1, 15,0);
    tracep->popNamePrefix(4);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__r_bank_addr),22);
    bufp->fullIData(oldp+2,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__r_bank_addr),22);
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullIData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+42,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__b_switch));
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+63,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+64,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullIData(oldp+68,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+69,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+70,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+71,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+72,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+73,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+74,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+75,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+76,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+77,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
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
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+93,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+96,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+97,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+98,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+99,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+100,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+101,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+102,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+103,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+104,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+105,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+169,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+175,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+176,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+177,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+178,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+182,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+184,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+221,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+224,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+225,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+234,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+238,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+239,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+240,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+335,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+375,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+387,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+399,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+407,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+411,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+415,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+419,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+423,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+427,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+431,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+487,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+488,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+490,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+491,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+492,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+493,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+494,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+495,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+496,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+497,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+498,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))));
    bufp->fullBit(oldp+500,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+501,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+502,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+503,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+504,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+505,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+506,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+507,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+508,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+509,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+510,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+511,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+512,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+513,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+514,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+515,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+516,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+517,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+518,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+519,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+520,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+521,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+522,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+523,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+524,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+525,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+526,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+527,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+528,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+529,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+532,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+533,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+534,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+535,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+536,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+537,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+546,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+547,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+550,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+551,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+555,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+559,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+593,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+594,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+606,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+607,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+608,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+609,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+610,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+611,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+612,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+616,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+620,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+622,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+623,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+626,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+630,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+631,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+633,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+651,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+652,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+653,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+654,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+655,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+656,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+657,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+660,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+661,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+662,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+681,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+688,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+707,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+708,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+709,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+710,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+711,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+730,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+731,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+732,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+733,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+734,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+736,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+755,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+772,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+783,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullCData(oldp+784,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+785,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__mode_register),13);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__r_ba),2);
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+790,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+792,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+793,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__write_brust));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__read_burst));
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__dout),16);
    bufp->fullCData(oldp+799,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+800,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+801,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__mode_register),13);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__r_ba),2);
    bufp->fullSData(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+806,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+807,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+808,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__write_brust));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__read_burst));
    bufp->fullSData(oldp+813,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__dout),16);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__write_brust));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__read_burst));
    bufp->fullSData(oldp+818,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__dout),16);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__write_brust));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__read_burst));
    bufp->fullSData(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__dout),16);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+829,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+837,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullIData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+853,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+856,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+873,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+879,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+880,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+921,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+922,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+924,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+927,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+943,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+944,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+945,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+946,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+947,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+948,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+949,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+950,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+951,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+953,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+956,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+959,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+962,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+982,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+984,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+988,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+989,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+993,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+994,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+998,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1039,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+1046,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullIData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1164,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1165,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1166,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1167,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1168,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1169,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1170,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1171,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1172,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1173,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1174,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1175,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1176,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1177,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1178,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+1185,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1186,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1187,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1188,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1193,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1200,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),14);
    bufp->fullCData(oldp+1203,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1204,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),10);
    bufp->fullCData(oldp+1205,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1209,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1211,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1213,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1219,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1223,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1230,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1231,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1233,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1237,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+1241,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1243,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1244,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1245,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1246,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1247,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1248,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1249,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1250,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1251,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1252,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1253,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1254,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1255,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1256,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1257,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1258,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1261,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1262,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1273,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1279,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1284,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1285,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1286,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+1288,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1289,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1301,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1304,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1305,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1310,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1311,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1312,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1313,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1314,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1336,(vlSelf->clock));
    bufp->fullBit(oldp+1337,(vlSelf->reset));
    bufp->fullSData(oldp+1338,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1339,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1340,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1341,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1342,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1343,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1344,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1345,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1346,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1347,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1348,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1349,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1350,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1351,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1352,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1353,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1354,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1355,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1356,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1357,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1358,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1361,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1362,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1363,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1364,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1365,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullCData(oldp+1366,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1367,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1369,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1370,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1371,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1373,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch)
                                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready)))));
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1376,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1377,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
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
    bufp->fullCData(oldp+1378,((0xfU & vlSelf->__VdfgTmp_hc20ef241__0)),4);
    bufp->fullBit(oldp+1379,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1380,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+1383,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullSData(oldp+1384,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1387,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1390,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1392,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullCData(oldp+1395,(1U),3);
    bufp->fullBit(oldp+1396,(0U));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1406,(1U));
    bufp->fullCData(oldp+1407,(0U),4);
    bufp->fullCData(oldp+1408,(0U),8);
    bufp->fullCData(oldp+1409,(0U),2);
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1411,(0U),32);
    bufp->fullCData(oldp+1412,(0U),3);
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1423,(2U),3);
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1439,(0U),32);
    bufp->fullBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1443,(1U),2);
    bufp->fullCData(oldp+1444,(2U),2);
    bufp->fullIData(oldp+1445,(0x20U),32);
    bufp->fullIData(oldp+1446,(4U),32);
    bufp->fullIData(oldp+1447,(0x79737978U),32);
    bufp->fullIData(oldp+1448,(0x17e3c19U),32);
    bufp->fullCData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1487,(3U),3);
    bufp->fullCData(oldp+1488,(4U),3);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1632,(3U),2);
    bufp->fullIData(oldp+1633,(5U),32);
    bufp->fullBit(oldp+1634,(0U));
    bufp->fullBit(oldp+1635,(1U));
    bufp->fullCData(oldp+1636,(0x1bU),8);
    bufp->fullCData(oldp+1637,(0xebU),8);
    bufp->fullCData(oldp+1638,(0x38U),8);
    bufp->fullIData(oldp+1639,(0x64U),32);
    bufp->fullIData(oldp+1640,(0x18U),32);
    bufp->fullIData(oldp+1641,(9U),32);
    bufp->fullIData(oldp+1642,(2U),32);
    bufp->fullIData(oldp+1643,(4U),32);
    bufp->fullIData(oldp+1644,(0xdU),32);
    bufp->fullIData(oldp+1645,(0x2000U),32);
    bufp->fullIData(oldp+1646,(0x2710U),32);
    bufp->fullIData(oldp+1647,(0x30cU),32);
    bufp->fullCData(oldp+1648,(7U),4);
    bufp->fullCData(oldp+1649,(3U),4);
    bufp->fullCData(oldp+1650,(5U),4);
    bufp->fullCData(oldp+1651,(4U),4);
    bufp->fullCData(oldp+1652,(6U),4);
    bufp->fullCData(oldp+1653,(2U),4);
    bufp->fullCData(oldp+1654,(1U),4);
    bufp->fullSData(oldp+1655,(0x20U),13);
    bufp->fullCData(oldp+1656,(8U),4);
    bufp->fullCData(oldp+1657,(9U),4);
    bufp->fullIData(oldp+1658,(0xaU),32);
    bufp->fullIData(oldp+1659,(6U),32);
    bufp->fullIData(oldp+1660,(0x11U),32);
    bufp->fullIData(oldp+1661,(0x30000000U),32);
    bufp->fullIData(oldp+1662,(0x3fffffffU),32);
    bufp->fullIData(oldp+1663,(8U),32);
    bufp->fullCData(oldp+1664,(4U),5);
    bufp->fullCData(oldp+1665,(0U),5);
    bufp->fullCData(oldp+1666,(0x10U),5);
    bufp->fullCData(oldp+1667,(0x14U),5);
    bufp->fullCData(oldp+1668,(0x18U),5);
    bufp->fullIData(oldp+1669,(0x3000000U),32);
    bufp->fullIData(oldp+1670,(1U),32);
    bufp->fullCData(oldp+1671,(0xaU),4);
    bufp->fullIData(oldp+1672,(0xbU),32);
    bufp->fullIData(oldp+1673,(0x10U),32);
    bufp->fullCData(oldp+1674,(5U),3);
    bufp->fullIData(oldp+1675,(3U),32);
    bufp->fullIData(oldp+1676,(0x400000U),32);
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_high__DOT__state),3);
    bufp->fullCData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_0_to_64MB__DOT__sdram_bitex_low__DOT__state),3);
    bufp->fullCData(oldp+1679,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1680,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__mode_register))))),3);
    bufp->fullCData(oldp+1681,(0xfU),4);
    bufp->fullSData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__r_col_addr),10);
    bufp->fullSData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_high__DOT__state),3);
    bufp->fullCData(oldp+1690,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1691,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__r_col_addr),10);
    bufp->fullSData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1696,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1698,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_64_to_128MB__DOT__sdram_bitex_low__DOT__state),3);
}
