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
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1400,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1401,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1402,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1403,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1404,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1405,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1406,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1407,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1408,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1409,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1410,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1411,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1412,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1413,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1414,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1415,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1416,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1417,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1418,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1419,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1400,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1401,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1402,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1403,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1404,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1405,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1406,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1407,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1408,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1409,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1410,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1411,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1412,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1413,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1414,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1415,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1416,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1417,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1418,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1419,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+682,"spi_sck", false,-1);
    tracep->declBus(c+1246,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1247,"spi_mosi", false,-1);
    tracep->declBit(c+1420,"spi_miso", false,-1);
    tracep->declBit(c+1418,"uart_rx", false,-1);
    tracep->declBit(c+1419,"uart_tx", false,-1);
    tracep->declBit(c+1421,"psram_sck", false,-1);
    tracep->declBit(c+1377,"psram_ce_n", false,-1);
    tracep->declBus(c+1422,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1423,"sdram_clk", false,-1);
    tracep->declBit(c+1248,"sdram_cke", false,-1);
    tracep->declBit(c+683,"sdram_cs", false,-1);
    tracep->declBit(c+684,"sdram_ras", false,-1);
    tracep->declBit(c+685,"sdram_cas", false,-1);
    tracep->declBit(c+686,"sdram_we", false,-1);
    tracep->declBus(c+1424,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1249,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1250,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1264,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1400,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1401,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1402,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1403,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1404,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1405,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1406,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1407,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1408,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1409,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1410,"ps2_clk", false,-1);
    tracep->declBit(c+1411,"ps2_data", false,-1);
    tracep->declBus(c+1412,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1413,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1414,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1415,"vga_hsync", false,-1);
    tracep->declBit(c+1416,"vga_vsync", false,-1);
    tracep->declBit(c+1417,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1345,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1100,"in_psel", false,-1);
    tracep->declBit(c+1101,"in_penable", false,-1);
    tracep->declBus(c+1457,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1102,"in_pwrite", false,-1);
    tracep->declBus(c+1103,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1378,"in_pready", false,-1);
    tracep->declBus(c+1379,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1380,"in_pslverr", false,-1);
    tracep->declBus(c+1345,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1100,"out_psel", false,-1);
    tracep->declBit(c+1101,"out_penable", false,-1);
    tracep->declBus(c+1457,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1102,"out_pwrite", false,-1);
    tracep->declBus(c+1103,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1378,"out_pready", false,-1);
    tracep->declBus(c+1379,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1380,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1100,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1101,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1102,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1457,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1378,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1380,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1379,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1230,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1231,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1457,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+687,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1458,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+688,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1232,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1233,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1346,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1457,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1460,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1461,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1234,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1235,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1347,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1457,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+7,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1458,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+8,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1348,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1347,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1457,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+689,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1458,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+690,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1350,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1236,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1457,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1425,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1458,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+9,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1351,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1352,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1347,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1457,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1353,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1458,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1426,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1237,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1238,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1346,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1457,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+691,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+692,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+693,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"sel_0", false,-1);
    tracep->declBit(c+1355,"sel_1", false,-1);
    tracep->declBit(c+1356,"sel_2", false,-1);
    tracep->declBit(c+1357,"sel_3", false,-1);
    tracep->declBit(c+1358,"sel_4", false,-1);
    tracep->declBit(c+1359,"sel_5", false,-1);
    tracep->declBit(c+1360,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1105,"auto_in_awready", false,-1);
    tracep->declBit(c+10,"auto_in_awvalid", false,-1);
    tracep->declBus(c+11,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+12,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+14,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1105,"auto_in_wready", false,-1);
    tracep->declBit(c+15,"auto_in_wvalid", false,-1);
    tracep->declBus(c+16,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+18,"auto_in_bready", false,-1);
    tracep->declBit(c+1381,"auto_in_bvalid", false,-1);
    tracep->declBus(c+19,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1382,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1106,"auto_in_arready", false,-1);
    tracep->declBit(c+20,"auto_in_arvalid", false,-1);
    tracep->declBus(c+21,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+24,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+25,"auto_in_rready", false,-1);
    tracep->declBit(c+1383,"auto_in_rvalid", false,-1);
    tracep->declBus(c+26,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1427,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1100,"auto_out_psel", false,-1);
    tracep->declBit(c+1101,"auto_out_penable", false,-1);
    tracep->declBit(c+1102,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1378,"auto_out_pready", false,-1);
    tracep->declBit(c+1380,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1379,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1101,"nodeOut_penable", false,-1);
    tracep->declBus(c+1107,"state", false,-1, 1,0);
    tracep->declBit(c+1106,"accept_read", false,-1);
    tracep->declBit(c+1105,"accept_write", false,-1);
    tracep->declBit(c+27,"is_write_r", false,-1);
    tracep->declBit(c+1102,"is_write", false,-1);
    tracep->declBus(c+26,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+19,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+28,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+29,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+30,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+31,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1384,"resp", false,-1, 1,0);
    tracep->declBus(c+32,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1382,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1383,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+33,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1381,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+34,"auto_in_awready", false,-1);
    tracep->declBit(c+1019,"auto_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1020,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+37,"auto_in_wready", false,-1);
    tracep->declBit(c+1022,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_in_wlast", false,-1);
    tracep->declBit(c+449,"auto_in_bready", false,-1);
    tracep->declBit(c+38,"auto_in_bvalid", false,-1);
    tracep->declBus(c+39,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+41,"auto_in_arready", false,-1);
    tracep->declBit(c+1271,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1273,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1274,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1275,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1428,"auto_in_rready", false,-1);
    tracep->declBit(c+42,"auto_in_rvalid", false,-1);
    tracep->declBus(c+43,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+45,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_rlast", false,-1);
    tracep->declBit(c+1105,"auto_out_awready", false,-1);
    tracep->declBit(c+10,"auto_out_awvalid", false,-1);
    tracep->declBus(c+11,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+12,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+14,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1105,"auto_out_wready", false,-1);
    tracep->declBit(c+15,"auto_out_wvalid", false,-1);
    tracep->declBus(c+16,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+18,"auto_out_bready", false,-1);
    tracep->declBit(c+1381,"auto_out_bvalid", false,-1);
    tracep->declBus(c+19,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1382,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1106,"auto_out_arready", false,-1);
    tracep->declBit(c+20,"auto_out_arvalid", false,-1);
    tracep->declBus(c+21,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+24,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+25,"auto_out_rready", false,-1);
    tracep->declBit(c+1383,"auto_out_rvalid", false,-1);
    tracep->declBus(c+26,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1427,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+18,"io_enq_ready", false,-1);
    tracep->declBit(c+1381,"io_enq_valid", false,-1);
    tracep->declBus(c+19,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1382,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+449,"io_deq_ready", false,-1);
    tracep->declBit(c+38,"io_deq_valid", false,-1);
    tracep->declBus(c+39,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+40,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+47,"wrap", false,-1);
    tracep->declBit(c+48,"wrap_1", false,-1);
    tracep->declBit(c+49,"maybe_full", false,-1);
    tracep->declBit(c+50,"ptr_match", false,-1);
    tracep->declBit(c+51,"empty", false,-1);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1385,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+48,"R0_addr", false,-1);
    tracep->declBit(c+1462,"R0_en", false,-1);
    tracep->declBit(c+1398,"R0_clk", false,-1);
    tracep->declBus(c+53,"R0_data", false,-1, 5,0);
    tracep->declBit(c+47,"W0_addr", false,-1);
    tracep->declBit(c+1385,"W0_en", false,-1);
    tracep->declBit(c+1398,"W0_clk", false,-1);
    tracep->declBus(c+1429,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+54+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+56,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+25,"io_enq_ready", false,-1);
    tracep->declBit(c+1383,"io_enq_valid", false,-1);
    tracep->declBus(c+26,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1427,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1382,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1428,"io_deq_ready", false,-1);
    tracep->declBit(c+42,"io_deq_valid", false,-1);
    tracep->declBus(c+43,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+44,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+45,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+46,"io_deq_bits_last", false,-1);
    tracep->declBit(c+57,"wrap", false,-1);
    tracep->declBit(c+58,"wrap_1", false,-1);
    tracep->declBit(c+59,"maybe_full", false,-1);
    tracep->declBit(c+60,"ptr_match", false,-1);
    tracep->declBit(c+61,"empty", false,-1);
    tracep->declBit(c+62,"full", false,-1);
    tracep->declBit(c+1386,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+58,"R0_addr", false,-1);
    tracep->declBit(c+1462,"R0_en", false,-1);
    tracep->declBit(c+1398,"R0_clk", false,-1);
    tracep->declQuad(c+63,"R0_data", false,-1, 38,0);
    tracep->declBit(c+57,"W0_addr", false,-1);
    tracep->declBit(c+1386,"W0_en", false,-1);
    tracep->declBit(c+1398,"W0_clk", false,-1);
    tracep->declQuad(c+1430,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+65+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+69,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+41,"io_enq_ready", false,-1);
    tracep->declBit(c+1271,"io_enq_valid", false,-1);
    tracep->declBus(c+1272,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1273,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1274,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1275,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1106,"io_deq_ready", false,-1);
    tracep->declBit(c+20,"io_deq_valid", false,-1);
    tracep->declBus(c+21,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+22,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+23,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+24,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+70,"wrap", false,-1);
    tracep->declBit(c+71,"wrap_1", false,-1);
    tracep->declBit(c+72,"maybe_full", false,-1);
    tracep->declBit(c+73,"ptr_match", false,-1);
    tracep->declBit(c+74,"empty", false,-1);
    tracep->declBit(c+75,"full", false,-1);
    tracep->declBit(c+1276,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+71,"R0_addr", false,-1);
    tracep->declBit(c+1462,"R0_en", false,-1);
    tracep->declBit(c+1398,"R0_clk", false,-1);
    tracep->declQuad(c+76,"R0_data", false,-1, 46,0);
    tracep->declBit(c+70,"W0_addr", false,-1);
    tracep->declBit(c+1276,"W0_en", false,-1);
    tracep->declBit(c+1398,"W0_clk", false,-1);
    tracep->declQuad(c+1277,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+78+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+82,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+34,"io_enq_ready", false,-1);
    tracep->declBit(c+1019,"io_enq_valid", false,-1);
    tracep->declBus(c+35,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1020,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1021,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+36,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1105,"io_deq_ready", false,-1);
    tracep->declBit(c+10,"io_deq_valid", false,-1);
    tracep->declBus(c+11,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+12,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+13,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+14,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+83,"wrap", false,-1);
    tracep->declBit(c+84,"wrap_1", false,-1);
    tracep->declBit(c+85,"maybe_full", false,-1);
    tracep->declBit(c+86,"ptr_match", false,-1);
    tracep->declBit(c+87,"empty", false,-1);
    tracep->declBit(c+88,"full", false,-1);
    tracep->declBit(c+1026,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+84,"R0_addr", false,-1);
    tracep->declBit(c+1462,"R0_en", false,-1);
    tracep->declBit(c+1398,"R0_clk", false,-1);
    tracep->declQuad(c+89,"R0_data", false,-1, 46,0);
    tracep->declBit(c+83,"W0_addr", false,-1);
    tracep->declBit(c+1026,"W0_en", false,-1);
    tracep->declBit(c+1398,"W0_clk", false,-1);
    tracep->declQuad(c+450,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+91+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+95,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+37,"io_enq_ready", false,-1);
    tracep->declBit(c+1022,"io_enq_valid", false,-1);
    tracep->declBus(c+1023,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1024,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1025,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1105,"io_deq_ready", false,-1);
    tracep->declBit(c+15,"io_deq_valid", false,-1);
    tracep->declBus(c+16,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+17,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+96,"wrap", false,-1);
    tracep->declBit(c+97,"wrap_1", false,-1);
    tracep->declBit(c+98,"maybe_full", false,-1);
    tracep->declBit(c+99,"ptr_match", false,-1);
    tracep->declBit(c+100,"empty", false,-1);
    tracep->declBit(c+101,"full", false,-1);
    tracep->declBit(c+1027,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+97,"R0_addr", false,-1);
    tracep->declBit(c+1462,"R0_en", false,-1);
    tracep->declBit(c+1398,"R0_clk", false,-1);
    tracep->declQuad(c+102,"R0_data", false,-1, 35,0);
    tracep->declBit(c+96,"W0_addr", false,-1);
    tracep->declBit(c+1027,"W0_en", false,-1);
    tracep->declBit(c+1398,"W0_clk", false,-1);
    tracep->declQuad(c+1028,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+104+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+108,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+109,"auto_in_awready", false,-1);
    tracep->declBit(c+500,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1463,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+501,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1464,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+502,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1465,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_in_wready", false,-1);
    tracep->declBit(c+503,"auto_in_wvalid", false,-1);
    tracep->declBus(c+504,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+505,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+506,"auto_in_wlast", false,-1);
    tracep->declBit(c+507,"auto_in_bready", false,-1);
    tracep->declBit(c+111,"auto_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_in_arready", false,-1);
    tracep->declBit(c+508,"auto_in_arvalid", false,-1);
    tracep->declBus(c+509,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+510,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+511,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+512,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+513,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"auto_in_rready", false,-1);
    tracep->declBit(c+114,"auto_in_rvalid", false,-1);
    tracep->declBus(c+115,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_in_rlast", false,-1);
    tracep->declBit(c+1030,"auto_out_awready", false,-1);
    tracep->declBit(c+1031,"auto_out_awvalid", false,-1);
    tracep->declBus(c+35,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1020,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1032,"auto_out_wready", false,-1);
    tracep->declBit(c+1033,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_out_wlast", false,-1);
    tracep->declBit(c+1034,"auto_out_bready", false,-1);
    tracep->declBit(c+120,"auto_out_bvalid", false,-1);
    tracep->declBus(c+112,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+122,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1279,"auto_out_arready", false,-1);
    tracep->declBit(c+1280,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1273,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1274,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1275,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1281,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+514,"auto_out_rready", false,-1);
    tracep->declBit(c+114,"auto_out_rvalid", false,-1);
    tracep->declBus(c+115,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+124,"auto_out_rlast", false,-1);
    tracep->declBit(c+1033,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+125,"w_idle", false,-1);
    tracep->declBit(c+1035,"in_awready", false,-1);
    tracep->declBit(c+126,"busy", false,-1);
    tracep->declBus(c+127,"r_addr", false,-1, 31,0);
    tracep->declBus(c+128,"r_len", false,-1, 7,0);
    tracep->declBus(c+1282,"len", false,-1, 7,0);
    tracep->declBus(c+1283,"addr", false,-1, 31,0);
    tracep->declBit(c+129,"busy_1", false,-1);
    tracep->declBus(c+130,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+131,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+132,"len_1", false,-1, 7,0);
    tracep->declBus(c+1036,"addr_1", false,-1, 31,0);
    tracep->declBit(c+133,"wbeats_latched", false,-1);
    tracep->declBit(c+1031,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1037,"wbeats_valid", false,-1);
    tracep->declBus(c+134,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1038,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1025,"w_last", false,-1);
    tracep->declBit(c+1034,"nodeOut_bready", false,-1);
    tracep->declBus(c+135,"error_0", false,-1, 1,0);
    tracep->declBus(c+136,"error_1", false,-1, 1,0);
    tracep->declBus(c+137,"error_2", false,-1, 1,0);
    tracep->declBus(c+138,"error_3", false,-1, 1,0);
    tracep->declBus(c+139,"error_4", false,-1, 1,0);
    tracep->declBus(c+140,"error_5", false,-1, 1,0);
    tracep->declBus(c+141,"error_6", false,-1, 1,0);
    tracep->declBus(c+142,"error_7", false,-1, 1,0);
    tracep->declBus(c+143,"error_8", false,-1, 1,0);
    tracep->declBus(c+144,"error_9", false,-1, 1,0);
    tracep->declBus(c+145,"error_10", false,-1, 1,0);
    tracep->declBus(c+146,"error_11", false,-1, 1,0);
    tracep->declBus(c+147,"error_12", false,-1, 1,0);
    tracep->declBus(c+148,"error_13", false,-1, 1,0);
    tracep->declBus(c+149,"error_14", false,-1, 1,0);
    tracep->declBus(c+150,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1108,"io_enq_ready", false,-1);
    tracep->declBit(c+508,"io_enq_valid", false,-1);
    tracep->declBus(c+509,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+510,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+511,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+512,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+513,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1284,"io_deq_ready", false,-1);
    tracep->declBit(c+1280,"io_deq_valid", false,-1);
    tracep->declBus(c+1272,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1285,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1286,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1274,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1275,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+151,"ram", false,-1, 48,0);
    tracep->declBit(c+1109,"full", false,-1);
    tracep->declBit(c+1280,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1287,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+109,"io_enq_ready", false,-1);
    tracep->declBit(c+500,"io_enq_valid", false,-1);
    tracep->declBus(c+1463,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+501,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1464,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+502,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1465,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1039,"io_deq_ready", false,-1);
    tracep->declBit(c+1040,"io_deq_valid", false,-1);
    tracep->declBus(c+35,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1041,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+153,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1021,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+36,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+154,"ram", false,-1, 48,0);
    tracep->declBit(c+156,"full", false,-1);
    tracep->declBit(c+1040,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1042,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+110,"io_enq_ready", false,-1);
    tracep->declBit(c+503,"io_enq_valid", false,-1);
    tracep->declBus(c+504,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+505,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+506,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
    tracep->declBit(c+1044,"io_deq_valid", false,-1);
    tracep->declBus(c+1023,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1024,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1432,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+157,"ram", false,-1, 36,0);
    tracep->declBit(c+159,"full", false,-1);
    tracep->declBit(c+1044,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1045,"do_enq", false,-1);
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
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1046,"auto_in_awready", false,-1);
    tracep->declBit(c+1047,"auto_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1048,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1049,"auto_in_wready", false,-1);
    tracep->declBit(c+1050,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1051,"auto_in_bready", false,-1);
    tracep->declBit(c+160,"auto_in_bvalid", false,-1);
    tracep->declBus(c+161,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+162,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1052,"auto_in_arready", false,-1);
    tracep->declBit(c+1288,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1053,"auto_in_rready", false,-1);
    tracep->declBit(c+163,"auto_in_rvalid", false,-1);
    tracep->declBus(c+164,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+165,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+166,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1052,"nodeIn_arready", false,-1);
    tracep->declBit(c+1046,"nodeIn_awready", false,-1);
    tracep->declBit(c+1054,"w_sel0", false,-1);
    tracep->declBit(c+160,"w_full", false,-1);
    tracep->declBus(c+161,"w_id", false,-1, 3,0);
    tracep->declBit(c+167,"r_sel1", false,-1);
    tracep->declBit(c+168,"w_sel1", false,-1);
    tracep->declBit(c+163,"r_full", false,-1);
    tracep->declBus(c+164,"r_id", false,-1, 3,0);
    tracep->declBit(c+1290,"ren", false,-1);
    tracep->declBit(c+169,"rdata_REG", false,-1);
    tracep->declBus(c+170,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+171,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+172,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+173,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1291,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1290,"R0_en", false,-1);
    tracep->declBit(c+1398,"R0_clk", false,-1);
    tracep->declBus(c+174,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1055,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1056,"W0_en", false,-1);
    tracep->declBit(c+1398,"W0_clk", false,-1);
    tracep->declBus(c+1023,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1024,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+109,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+500,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1463,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+501,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1464,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+502,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1465,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+503,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+504,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+505,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+506,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+507,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+111,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+508,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+509,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+510,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+511,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+512,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+513,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+114,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+115,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+109,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+500,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1463,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+501,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1464,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+502,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1465,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+503,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+504,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+505,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+506,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+507,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+111,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+112,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+508,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+509,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+510,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+511,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+512,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+513,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+114,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+115,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1057,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1058,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1020,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1032,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1033,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1034,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+120,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1292,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1293,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1273,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1274,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1275,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+114,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+115,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1046,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1047,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1048,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1049,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1050,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1051,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+160,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+161,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+162,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1052,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1288,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1053,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+163,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+164,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+165,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+166,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1059,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1060,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+175,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1294,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1295,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1433,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+176,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+34,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1020,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+37,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1022,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+449,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+38,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+41,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1271,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1273,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1274,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1275,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1428,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+42,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+43,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+45,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+120,"in_0_bvalid", false,-1);
    tracep->declBit(c+114,"in_0_rvalid", false,-1);
    tracep->declBit(c+1061,"in_0_wready", false,-1);
    tracep->declBit(c+1062,"in_0_awready", false,-1);
    tracep->declBit(c+1292,"in_0_arready", false,-1);
    tracep->declBit(c+1057,"anonIn_awready", false,-1);
    tracep->declBit(c+1296,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1297,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1298,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1063,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1064,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1065,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1299,"arSel", false,-1, 15,0);
    tracep->declBus(c+179,"awSel", false,-1, 15,0);
    tracep->declBus(c+180,"rSel", false,-1, 15,0);
    tracep->declBus(c+181,"bSel", false,-1, 15,0);
    tracep->declBit(c+182,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+183,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+184,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+185,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+186,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+187,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+188,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+189,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+190,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+191,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+192,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+193,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+194,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+195,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+196,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+197,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+198,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+199,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+200,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+201,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+202,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+203,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+204,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+205,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+206,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+207,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+208,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+209,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+210,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+211,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+212,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+213,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+214,"latched", false,-1);
    tracep->declBit(c+1066,"in_0_awvalid", false,-1);
    tracep->declBit(c+1067,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1068,"in_0_wvalid", false,-1);
    tracep->declBit(c+215,"idle_3", false,-1);
    tracep->declBit(c+216,"anyValid", false,-1);
    tracep->declBus(c+217,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+218,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+219,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+220,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+221,"prefixOR_1", false,-1);
    tracep->declBit(c+222,"winner_3_1", false,-1);
    tracep->declBit(c+223,"winner_3_2", false,-1);
    tracep->declBit(c+224,"state_3_0", false,-1);
    tracep->declBit(c+225,"state_3_1", false,-1);
    tracep->declBit(c+226,"state_3_2", false,-1);
    tracep->declBit(c+227,"muxState_3_0", false,-1);
    tracep->declBit(c+228,"muxState_3_1", false,-1);
    tracep->declBit(c+229,"muxState_3_2", false,-1);
    tracep->declBit(c+230,"idle_4", false,-1);
    tracep->declBit(c+231,"anyValid_1", false,-1);
    tracep->declBus(c+232,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+233,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+234,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+235,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+236,"winner_4_0", false,-1);
    tracep->declBit(c+237,"winner_4_2", false,-1);
    tracep->declBit(c+238,"state_4_0", false,-1);
    tracep->declBit(c+239,"state_4_2", false,-1);
    tracep->declBit(c+240,"muxState_4_0", false,-1);
    tracep->declBit(c+241,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+242,"io_enq_ready", false,-1);
    tracep->declBit(c+1067,"io_enq_valid", false,-1);
    tracep->declBus(c+1069,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1070,"io_deq_ready", false,-1);
    tracep->declBit(c+1071,"io_deq_valid", false,-1);
    tracep->declBus(c+1072,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+243,"wrap", false,-1);
    tracep->declBit(c+244,"wrap_1", false,-1);
    tracep->declBit(c+245,"maybe_full", false,-1);
    tracep->declBit(c+246,"ptr_match", false,-1);
    tracep->declBit(c+247,"empty", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+1071,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1073,"do_deq", false,-1);
    tracep->declBit(c+1074,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+244,"R0_addr", false,-1);
    tracep->declBit(c+1462,"R0_en", false,-1);
    tracep->declBit(c+1398,"R0_clk", false,-1);
    tracep->declBus(c+249,"R0_data", false,-1, 2,0);
    tracep->declBit(c+243,"W0_addr", false,-1);
    tracep->declBit(c+1074,"W0_en", false,-1);
    tracep->declBit(c+1398,"W0_clk", false,-1);
    tracep->declBus(c+1069,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+250+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1030,"auto_in_awready", false,-1);
    tracep->declBit(c+1031,"auto_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1020,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1032,"auto_in_wready", false,-1);
    tracep->declBit(c+1033,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_in_wlast", false,-1);
    tracep->declBit(c+1034,"auto_in_bready", false,-1);
    tracep->declBit(c+120,"auto_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+122,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1279,"auto_in_arready", false,-1);
    tracep->declBit(c+1280,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1273,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1274,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1275,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1281,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+514,"auto_in_rready", false,-1);
    tracep->declBit(c+114,"auto_in_rvalid", false,-1);
    tracep->declBus(c+115,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+124,"auto_in_rlast", false,-1);
    tracep->declBit(c+1057,"auto_out_awready", false,-1);
    tracep->declBit(c+1058,"auto_out_awvalid", false,-1);
    tracep->declBus(c+35,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1020,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1032,"auto_out_wready", false,-1);
    tracep->declBit(c+1033,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_out_wlast", false,-1);
    tracep->declBit(c+1034,"auto_out_bready", false,-1);
    tracep->declBit(c+120,"auto_out_bvalid", false,-1);
    tracep->declBus(c+112,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1292,"auto_out_arready", false,-1);
    tracep->declBit(c+1293,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1273,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1274,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1275,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"auto_out_rready", false,-1);
    tracep->declBit(c+114,"auto_out_rvalid", false,-1);
    tracep->declBus(c+115,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+1300,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+452,"io_deq_ready", false,-1);
    tracep->declBit(c+253,"io_deq_valid", false,-1);
    tracep->declBit(c+254,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+253,"full", false,-1);
    tracep->declBit(c+254,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+255,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+1301,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+453,"io_deq_ready", false,-1);
    tracep->declBit(c+257,"io_deq_valid", false,-1);
    tracep->declBit(c+258,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+257,"full", false,-1);
    tracep->declBit(c+258,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+259,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+1302,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+454,"io_deq_ready", false,-1);
    tracep->declBit(c+261,"io_deq_valid", false,-1);
    tracep->declBit(c+262,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+261,"full", false,-1);
    tracep->declBit(c+262,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+263,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+1303,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+455,"io_deq_ready", false,-1);
    tracep->declBit(c+265,"io_deq_valid", false,-1);
    tracep->declBit(c+266,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+265,"full", false,-1);
    tracep->declBit(c+266,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+267,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+268,"io_enq_ready", false,-1);
    tracep->declBit(c+1304,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+456,"io_deq_ready", false,-1);
    tracep->declBit(c+269,"io_deq_valid", false,-1);
    tracep->declBit(c+270,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+269,"full", false,-1);
    tracep->declBit(c+270,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+271,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+272,"io_enq_ready", false,-1);
    tracep->declBit(c+1305,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+457,"io_deq_ready", false,-1);
    tracep->declBit(c+273,"io_deq_valid", false,-1);
    tracep->declBit(c+274,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+273,"full", false,-1);
    tracep->declBit(c+274,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+275,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+1306,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+458,"io_deq_ready", false,-1);
    tracep->declBit(c+277,"io_deq_valid", false,-1);
    tracep->declBit(c+278,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+278,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+279,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+280,"io_enq_ready", false,-1);
    tracep->declBit(c+1307,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+459,"io_deq_ready", false,-1);
    tracep->declBit(c+281,"io_deq_valid", false,-1);
    tracep->declBit(c+282,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+281,"full", false,-1);
    tracep->declBit(c+282,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+283,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+460,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+461,"io_deq_ready", false,-1);
    tracep->declBit(c+285,"io_deq_valid", false,-1);
    tracep->declBit(c+286,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+285,"full", false,-1);
    tracep->declBit(c+286,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+287,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+288,"io_enq_ready", false,-1);
    tracep->declBit(c+462,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+463,"io_deq_ready", false,-1);
    tracep->declBit(c+289,"io_deq_valid", false,-1);
    tracep->declBit(c+290,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+289,"full", false,-1);
    tracep->declBit(c+290,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+464,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+465,"io_deq_ready", false,-1);
    tracep->declBit(c+293,"io_deq_valid", false,-1);
    tracep->declBit(c+294,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+293,"full", false,-1);
    tracep->declBit(c+294,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+295,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+466,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+467,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBit(c+298,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+297,"full", false,-1);
    tracep->declBit(c+298,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+1308,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+468,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+469,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+470,"io_deq_ready", false,-1);
    tracep->declBit(c+305,"io_deq_valid", false,-1);
    tracep->declBit(c+306,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->declBit(c+306,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+307,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+471,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+472,"io_deq_ready", false,-1);
    tracep->declBit(c+309,"io_deq_valid", false,-1);
    tracep->declBit(c+310,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->declBit(c+310,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+311,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+473,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+474,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+475,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+476,"io_deq_ready", false,-1);
    tracep->declBit(c+317,"io_deq_valid", false,-1);
    tracep->declBit(c+318,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+317,"full", false,-1);
    tracep->declBit(c+318,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+319,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+477,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+478,"io_deq_ready", false,-1);
    tracep->declBit(c+321,"io_deq_valid", false,-1);
    tracep->declBit(c+322,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->declBit(c+322,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+324,"io_enq_ready", false,-1);
    tracep->declBit(c+479,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+480,"io_deq_ready", false,-1);
    tracep->declBit(c+325,"io_deq_valid", false,-1);
    tracep->declBit(c+326,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+325,"full", false,-1);
    tracep->declBit(c+326,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+481,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+482,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBit(c+330,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+330,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+331,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+483,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+484,"io_deq_ready", false,-1);
    tracep->declBit(c+333,"io_deq_valid", false,-1);
    tracep->declBit(c+334,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+333,"full", false,-1);
    tracep->declBit(c+334,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+335,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+485,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+486,"io_deq_ready", false,-1);
    tracep->declBit(c+337,"io_deq_valid", false,-1);
    tracep->declBit(c+338,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+338,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+340,"io_enq_ready", false,-1);
    tracep->declBit(c+487,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+488,"io_deq_ready", false,-1);
    tracep->declBit(c+341,"io_deq_valid", false,-1);
    tracep->declBit(c+342,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+341,"full", false,-1);
    tracep->declBit(c+342,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+343,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+344,"io_enq_ready", false,-1);
    tracep->declBit(c+1309,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+489,"io_deq_ready", false,-1);
    tracep->declBit(c+345,"io_deq_valid", false,-1);
    tracep->declBit(c+346,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+345,"full", false,-1);
    tracep->declBit(c+346,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+347,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+490,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+491,"io_deq_ready", false,-1);
    tracep->declBit(c+349,"io_deq_valid", false,-1);
    tracep->declBit(c+350,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+349,"full", false,-1);
    tracep->declBit(c+350,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+351,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+492,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+493,"io_deq_ready", false,-1);
    tracep->declBit(c+353,"io_deq_valid", false,-1);
    tracep->declBit(c+354,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+353,"full", false,-1);
    tracep->declBit(c+354,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+1310,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+494,"io_deq_ready", false,-1);
    tracep->declBit(c+357,"io_deq_valid", false,-1);
    tracep->declBit(c+358,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->declBit(c+358,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+359,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+360,"io_enq_ready", false,-1);
    tracep->declBit(c+1311,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+495,"io_deq_ready", false,-1);
    tracep->declBit(c+361,"io_deq_valid", false,-1);
    tracep->declBit(c+362,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+361,"full", false,-1);
    tracep->declBit(c+362,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+363,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+1312,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+496,"io_deq_ready", false,-1);
    tracep->declBit(c+365,"io_deq_valid", false,-1);
    tracep->declBit(c+366,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+365,"full", false,-1);
    tracep->declBit(c+366,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+367,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+1313,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+497,"io_deq_ready", false,-1);
    tracep->declBit(c+369,"io_deq_valid", false,-1);
    tracep->declBit(c+370,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+369,"full", false,-1);
    tracep->declBit(c+370,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+371,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+1314,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+498,"io_deq_ready", false,-1);
    tracep->declBit(c+373,"io_deq_valid", false,-1);
    tracep->declBit(c+374,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+373,"full", false,-1);
    tracep->declBit(c+374,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+375,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+1315,"io_enq_valid", false,-1);
    tracep->declBit(c+1281,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+499,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1434,"reset", false,-1);
    tracep->declBit(c+109,"auto_master_out_awready", false,-1);
    tracep->declBit(c+500,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1463,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+501,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1464,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+502,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1465,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_master_out_wready", false,-1);
    tracep->declBit(c+503,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+504,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+505,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+506,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+507,"auto_master_out_bready", false,-1);
    tracep->declBit(c+111,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+112,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_master_out_arready", false,-1);
    tracep->declBit(c+508,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+509,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+510,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+511,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+512,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+513,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"auto_master_out_rready", false,-1);
    tracep->declBit(c+114,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+115,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1434,"reset", false,-1);
    tracep->declBit(c+1458,"io_interrupt", false,-1);
    tracep->declBit(c+109,"io_master_awready", false,-1);
    tracep->declBit(c+500,"io_master_awvalid", false,-1);
    tracep->declBus(c+501,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1463,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1464,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+502,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1465,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"io_master_wready", false,-1);
    tracep->declBit(c+503,"io_master_wvalid", false,-1);
    tracep->declBus(c+504,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+505,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+506,"io_master_wlast", false,-1);
    tracep->declBit(c+507,"io_master_bready", false,-1);
    tracep->declBit(c+111,"io_master_bvalid", false,-1);
    tracep->declBus(c+113,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+112,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1108,"io_master_arready", false,-1);
    tracep->declBit(c+508,"io_master_arvalid", false,-1);
    tracep->declBus(c+510,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+509,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+511,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+512,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+513,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"io_master_rready", false,-1);
    tracep->declBit(c+114,"io_master_rvalid", false,-1);
    tracep->declBus(c+117,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+116,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+118,"io_master_rlast", false,-1);
    tracep->declBus(c+115,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1466,"io_slave_awready", false,-1);
    tracep->declBit(c+1458,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1467,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1463,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1464,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1468,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1465,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1469,"io_slave_wready", false,-1);
    tracep->declBit(c+1458,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1467,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1463,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1458,"io_slave_wlast", false,-1);
    tracep->declBit(c+1458,"io_slave_bready", false,-1);
    tracep->declBit(c+1470,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1471,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1472,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1473,"io_slave_arready", false,-1);
    tracep->declBit(c+1458,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1467,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1463,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1464,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1468,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1465,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1458,"io_slave_rready", false,-1);
    tracep->declBit(c+1474,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1475,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1476,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1477,"io_slave_rlast", false,-1);
    tracep->declBus(c+1478,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+515,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+516,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+517,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+518,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+519,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+515,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+516,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+520,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+521,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+522,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1463,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1464,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1479,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1465,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+523,"ifu_arvalid", false,-1);
    tracep->declBit(c+524,"ifu_arready", false,-1);
    tracep->declBus(c+1075,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1076,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1077,"ifu_rlast", false,-1);
    tracep->declBus(c+1078,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1079,"ifu_rvalid", false,-1);
    tracep->declBit(c+525,"ifu_rready", false,-1);
    tracep->declBit(c+1480,"useless1", false,-1);
    tracep->declBit(c+1481,"useless2", false,-1);
    tracep->declBit(c+1482,"useless3", false,-1);
    tracep->declBit(c+1483,"useless4", false,-1);
    tracep->declBus(c+526,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1463,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1464,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+527,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1465,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+528,"lsu_arvalid", false,-1);
    tracep->declBit(c+529,"lsu_arready", false,-1);
    tracep->declBus(c+1080,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1081,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1082,"lsu_rlast", false,-1);
    tracep->declBus(c+1083,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1084,"lsu_rvalid", false,-1);
    tracep->declBit(c+530,"lsu_rready", false,-1);
    tracep->declBus(c+526,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1463,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1464,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+531,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1465,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+532,"lsu_awvalid", false,-1);
    tracep->declBit(c+1085,"lsu_awready", false,-1);
    tracep->declBus(c+533,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+534,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+535,"lsu_wlast", false,-1);
    tracep->declBit(c+536,"lsu_wvalid", false,-1);
    tracep->declBit(c+1086,"lsu_wready", false,-1);
    tracep->declBus(c+1087,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1088,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1089,"lsu_bvalid", false,-1);
    tracep->declBit(c+537,"lsu_bready", false,-1);
    tracep->declBus(c+538,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1463,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1464,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+539,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1465,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+540,"axi_arvalid", false,-1);
    tracep->declBit(c+1436,"axi_arready", false,-1);
    tracep->declBus(c+1090,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1091,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1092,"axi_rlast", false,-1);
    tracep->declBus(c+1093,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+1094,"axi_rvalid", false,-1);
    tracep->declBit(c+541,"axi_rready", false,-1);
    tracep->declBus(c+501,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1463,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1464,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+502,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1465,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+500,"axi_awvalid", false,-1);
    tracep->declBit(c+109,"axi_awready", false,-1);
    tracep->declBus(c+504,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+505,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+506,"axi_wlast", false,-1);
    tracep->declBit(c+503,"axi_wvalid", false,-1);
    tracep->declBit(c+110,"axi_wready", false,-1);
    tracep->declBus(c+113,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+112,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+111,"axi_bvalid", false,-1);
    tracep->declBit(c+507,"axi_bready", false,-1);
    tracep->declBus(c+542,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+543,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+544,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+545,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+546,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+547,"clint_arvalid", false,-1);
    tracep->declBit(c+548,"clint_arready", false,-1);
    tracep->declBus(c+549,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+550,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+551,"clint_rlast", false,-1);
    tracep->declBus(c+1463,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+552,"clint_rvalid", false,-1);
    tracep->declBit(c+553,"clint_rready", false,-1);
    tracep->declBus(c+1484,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1485,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1486,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1487,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1488,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1489,"clint_awvalid", false,-1);
    tracep->declBit(c+554,"clint_awready", false,-1);
    tracep->declBus(c+1490,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1491,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1492,"clint_wlast", false,-1);
    tracep->declBit(c+1493,"clint_wvalid", false,-1);
    tracep->declBit(c+555,"clint_wready", false,-1);
    tracep->declBus(c+556,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1463,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+557,"clint_bvalid", false,-1);
    tracep->declBit(c+1494,"clint_bready", false,-1);
    tracep->declBus(c+1319,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1320,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1437,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1438,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1110,"a5", false,-1, 31,0);
    tracep->declBus(c+1321,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1437,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1438,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1322,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1439,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1323,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1324,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1325,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1326,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1327,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1328,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1329,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1330,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1331,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1332,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1333,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1334,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1335,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1336,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1337,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+558,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+559,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1338,"csr_write", false,-1);
    tracep->declBus(c+1339,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1111+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+560,"wdata", false,-1, 31,0);
    tracep->declBus(c+561,"waddr", false,-1, 4,0);
    tracep->declBit(c+562,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1115+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+563,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+564,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+565,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+566,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+567,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+568,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+569,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+570,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+571,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+572,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+573,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+574,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+575,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+576,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+577,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+578,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+526,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+579,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+580,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+581,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+582,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+583,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+584,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+585,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+586,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+587,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+588,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+589,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+590,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+522,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1463,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1464,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1479,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1465,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+523,"arvalid_i_a", false,-1);
    tracep->declBit(c+524,"arready_o_a", false,-1);
    tracep->declBus(c+1075,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+1076,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+1077,"rlast_o_a", false,-1);
    tracep->declBus(c+1078,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+1079,"rvalid_o_a", false,-1);
    tracep->declBit(c+525,"rready_i_a", false,-1);
    tracep->declBus(c+1495,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1463,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1464,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1468,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1465,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1458,"awvalid_i_a", false,-1);
    tracep->declBit(c+1095,"awready_o_a", false,-1);
    tracep->declBus(c+1495,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1463,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1458,"wlast_i_a", false,-1);
    tracep->declBit(c+1458,"wvalid_i_a", false,-1);
    tracep->declBit(c+1096,"wready_o_a", false,-1);
    tracep->declBus(c+1097,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1098,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1099,"bvalid_o_a", false,-1);
    tracep->declBit(c+1458,"bready_i_a", false,-1);
    tracep->declBus(c+526,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1463,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1464,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+527,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1465,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+528,"arvalid_i_b", false,-1);
    tracep->declBit(c+529,"arready_o_b", false,-1);
    tracep->declBus(c+1080,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+1081,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+1082,"rlast_o_b", false,-1);
    tracep->declBus(c+1083,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+1084,"rvalid_o_b", false,-1);
    tracep->declBit(c+530,"rready_i_b", false,-1);
    tracep->declBus(c+526,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1463,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1464,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+531,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1465,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+532,"awvalid_i_b", false,-1);
    tracep->declBit(c+1085,"awready_o_b", false,-1);
    tracep->declBus(c+533,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+534,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+535,"wlast_i_b", false,-1);
    tracep->declBit(c+536,"wvalid_i_b", false,-1);
    tracep->declBit(c+1086,"wready_o_b", false,-1);
    tracep->declBus(c+1087,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1088,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1089,"bvalid_o_b", false,-1);
    tracep->declBit(c+537,"bready_i_b", false,-1);
    tracep->declBus(c+538,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1463,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1464,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+539,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1465,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+540,"arvalid_o", false,-1);
    tracep->declBit(c+1436,"arready_i", false,-1);
    tracep->declBus(c+1090,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1091,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1092,"rlast_i", false,-1);
    tracep->declBus(c+1093,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1094,"rvalid_i", false,-1);
    tracep->declBit(c+541,"rready_o", false,-1);
    tracep->declBus(c+501,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1463,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1464,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+502,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1465,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+500,"awvalid_o", false,-1);
    tracep->declBit(c+109,"awready_i", false,-1);
    tracep->declBus(c+504,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+505,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+506,"wlast_o", false,-1);
    tracep->declBit(c+503,"wvalid_o", false,-1);
    tracep->declBit(c+110,"wready_i", false,-1);
    tracep->declBus(c+113,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+112,"bid_i", false,-1, 3,0);
    tracep->declBit(c+111,"bvalid_i", false,-1);
    tracep->declBit(c+507,"bready_o", false,-1);
    tracep->declBit(c+591,"ar_switch", false,-1);
    tracep->declBit(c+592,"r_switch", false,-1);
    tracep->declBit(c+593,"aw_switch", false,-1);
    tracep->declBit(c+594,"w_switch", false,-1);
    tracep->declBit(c+595,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+542,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+543,"arid_i", false,-1, 3,0);
    tracep->declBus(c+544,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+545,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+546,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+547,"arvalid_i", false,-1);
    tracep->declBit(c+548,"arready_o", false,-1);
    tracep->declBus(c+549,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+550,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+551,"rlast_o", false,-1);
    tracep->declBus(c+1463,"rid_o", false,-1, 3,0);
    tracep->declBit(c+552,"rvalid_o", false,-1);
    tracep->declBit(c+553,"rready_i", false,-1);
    tracep->declBus(c+1484,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1485,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1486,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1487,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1488,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1489,"awvalid_i", false,-1);
    tracep->declBit(c+554,"awready_o", false,-1);
    tracep->declBus(c+1490,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1491,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1492,"wlast_i", false,-1);
    tracep->declBit(c+1493,"wvalid_i", false,-1);
    tracep->declBit(c+555,"wready_o", false,-1);
    tracep->declBus(c+556,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1463,"bid_o", false,-1, 3,0);
    tracep->declBit(c+557,"bvalid_o", false,-1);
    tracep->declBit(c+1494,"bready_i", false,-1);
    tracep->declBit(c+596,"ar_state", false,-1);
    tracep->declBit(c+597,"r_state", false,-1);
    tracep->declBit(c+598,"aw_state", false,-1);
    tracep->declBit(c+599,"w_state", false,-1);
    tracep->declBit(c+1496,"b_state", false,-1);
    tracep->declBus(c+600,"araddr", false,-1, 31,0);
    tracep->declBus(c+601,"awaddr", false,-1, 31,0);
    tracep->declBus(c+602,"wdata", false,-1, 31,0);
    tracep->declBus(c+603,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1497,"wvalid", false,-1);
    tracep->declBit(c+604,"flag_waddr", false,-1);
    tracep->declBit(c+605,"flag_wdata", false,-1);
    tracep->declBit(c+606,"flag_rdata", false,-1);
    tracep->declBit(c+607,"flag_raddr", false,-1);
    tracep->declBit(c+1498,"flag_write", false,-1);
    tracep->declBus(c+608,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+609,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+610,"w_delay", false,-1, 4,0);
    tracep->declBus(c+611,"r_delay", false,-1, 4,0);
    tracep->declBus(c+612,"LFSR", false,-1, 4,0);
    tracep->declBit(c+613,"lfsr_in", false,-1);
    tracep->declBus(c+614,"write_box", false,-1, 1,0);
    tracep->declQuad(c+615,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+1321,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1437,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1438,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1322,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1439,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1323,"a_in_src_i", false,-1);
    tracep->declBus(c+1324,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1325,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1326,"adder_a_src_i", false,-1);
    tracep->declBit(c+1327,"adder_out_src_i", false,-1);
    tracep->declBus(c+1328,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1329,"MemRead_i", false,-1);
    tracep->declBit(c+1330,"MemWrite_i", false,-1);
    tracep->declBus(c+1331,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1332,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1333,"wb_src_i", false,-1);
    tracep->declBit(c+1334,"csr_write_i", false,-1);
    tracep->declBit(c+1335,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1336,"reg_write_i", false,-1);
    tracep->declBus(c+1337,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+558,"exu_valid_i", false,-1);
    tracep->declBit(c+559,"exu_ready_o", false,-1);
    tracep->declBus(c+563,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+564,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+565,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+566,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+567,"npc_o", false,-1, 31,0);
    tracep->declBit(c+568,"MemRead_o", false,-1);
    tracep->declBit(c+569,"MemWrite_o", false,-1);
    tracep->declBus(c+570,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+571,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+572,"wb_src_o", false,-1);
    tracep->declBit(c+573,"csr_write_o", false,-1);
    tracep->declBit(c+574,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+575,"reg_write_o", false,-1);
    tracep->declBus(c+576,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+577,"exu_valid_o", false,-1);
    tracep->declBit(c+578,"exu_ready_i", false,-1);
    tracep->declBus(c+617,"pc", false,-1, 31,0);
    tracep->declBus(c+564,"rs1", false,-1, 31,0);
    tracep->declBus(c+565,"rs2", false,-1, 31,0);
    tracep->declBus(c+618,"imm", false,-1, 31,0);
    tracep->declBus(c+619,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+620,"a_in_src", false,-1);
    tracep->declBus(c+621,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+622,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+623,"adder_a_src", false,-1);
    tracep->declBit(c+624,"adder_out_src", false,-1);
    tracep->declBus(c+625,"alu_op", false,-1, 3,0);
    tracep->declBus(c+626,"a_in", false,-1, 31,0);
    tracep->declBus(c+627,"b_in", false,-1, 31,0);
    tracep->declBus(c+628,"a_out", false,-1, 31,0);
    tracep->declBus(c+629,"add_out", false,-1, 31,0);
    tracep->declBus(c+630,"pc_new", false,-1, 31,0);
    tracep->declBus(c+563,"alu_result", false,-1, 31,0);
    tracep->declBus(c+567,"npc", false,-1, 31,0);
    tracep->declBit(c+631,"zero", false,-1);
    tracep->declBus(c+1465,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1499,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1500,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+632,"current_state", false,-1, 1,0);
    tracep->declBus(c+633,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+626,"a", false,-1, 31,0);
    tracep->declBus(c+627,"b", false,-1, 31,0);
    tracep->declBus(c+625,"op", false,-1, 3,0);
    tracep->declBus(c+563,"alu_result", false,-1, 31,0);
    tracep->declBit(c+631,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+564,"d0", false,-1, 31,0);
    tracep->declBus(c+617,"d1", false,-1, 31,0);
    tracep->declBit(c+620,"sel", false,-1);
    tracep->declBus(c+626,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+565,"d0", false,-1, 31,0);
    tracep->declBus(c+618,"d1", false,-1, 31,0);
    tracep->declBus(c+1502,"d2", false,-1, 31,0);
    tracep->declBus(c+619,"d3", false,-1, 31,0);
    tracep->declBus(c+621,"sel", false,-1, 1,0);
    tracep->declBus(c+627,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+628,"a", false,-1, 31,0);
    tracep->declBus(c+618,"b", false,-1, 31,0);
    tracep->declBus(c+629,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"d0", false,-1, 31,0);
    tracep->declBus(c+564,"d1", false,-1, 31,0);
    tracep->declBit(c+623,"sel", false,-1);
    tracep->declBus(c+628,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+629,"d0", false,-1, 31,0);
    tracep->declBus(c+619,"d1", false,-1, 31,0);
    tracep->declBit(c+624,"sel", false,-1);
    tracep->declBus(c+630,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+634,"pc4", false,-1, 31,0);
    tracep->declBus(c+630,"pc_new", false,-1, 31,0);
    tracep->declBus(c+622,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+631,"zero", false,-1);
    tracep->declBus(c+563,"alu_result", false,-1, 31,0);
    tracep->declBus(c+567,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+1319,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1320,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1437,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1438,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1110,"a5", false,-1, 31,0);
    tracep->declBus(c+515,"pc_i", false,-1, 31,0);
    tracep->declBus(c+516,"inst_i", false,-1, 31,0);
    tracep->declBit(c+520,"idu_valid_i", false,-1);
    tracep->declBit(c+521,"idu_ready_o", false,-1);
    tracep->declBus(c+1321,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1437,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1438,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1322,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1439,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1323,"a_in_src_o", false,-1);
    tracep->declBus(c+1324,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1325,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1326,"adder_a_src_o", false,-1);
    tracep->declBit(c+1327,"adder_out_src_o", false,-1);
    tracep->declBus(c+1328,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1329,"MemRead_o", false,-1);
    tracep->declBit(c+1330,"MemWrite_o", false,-1);
    tracep->declBus(c+1331,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1332,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1333,"wb_src_o", false,-1);
    tracep->declBit(c+1334,"csr_write_o", false,-1);
    tracep->declBit(c+1335,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1336,"reg_write_o", false,-1);
    tracep->declBus(c+1337,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+558,"idu_valid_o", false,-1);
    tracep->declBit(c+559,"idu_ready_i", false,-1);
    tracep->declBit(c+1338,"csr_write_i", false,-1);
    tracep->declBus(c+1339,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1147+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1321,"pc", false,-1, 31,0);
    tracep->declBus(c+1340,"inst", false,-1, 31,0);
    tracep->declBus(c+1341,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1465,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1499,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1500,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+635,"current_state", false,-1, 1,0);
    tracep->declBus(c+636,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1340,"inst", false,-1, 31,0);
    tracep->declBus(c+1328,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1342,"opcode", false,-1, 6,0);
    tracep->declBus(c+1343,"funct3", false,-1, 2,0);
    tracep->declBus(c+1344,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1338,"wen", false,-1);
    tracep->declBus(c+1340,"inst", false,-1, 31,0);
    tracep->declBus(c+1339,"wdata", false,-1, 31,0);
    tracep->declBus(c+1110,"NO", false,-1, 31,0);
    tracep->declBus(c+1321,"pc", false,-1, 31,0);
    tracep->declBus(c+1439,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1151+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1155,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1156,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1157,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1158,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1503,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1504,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1342,"opcode", false,-1, 6,0);
    tracep->declBus(c+1343,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1340,"inst", false,-1, 31,0);
    tracep->declBit(c+1323,"a_in_src", false,-1);
    tracep->declBus(c+1324,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1336,"reg_write", false,-1);
    tracep->declBus(c+1325,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1326,"adder_a_src", false,-1);
    tracep->declBit(c+1329,"MemRead", false,-1);
    tracep->declBit(c+1330,"MemWrite", false,-1);
    tracep->declBus(c+1341,"wmask", false,-1, 7,0);
    tracep->declBit(c+1333,"wb_src", false,-1);
    tracep->declBus(c+1332,"rmask", false,-1, 2,0);
    tracep->declBit(c+1334,"csr_write", false,-1);
    tracep->declBit(c+1327,"adder_out_src", false,-1);
    tracep->declBit(c+1335,"csr_wdata_src", false,-1);
    tracep->declBus(c+1342,"opcode", false,-1, 6,0);
    tracep->declBus(c+1343,"funct3", false,-1, 2,0);
    tracep->declBus(c+1344,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1501,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1340,"inst", false,-1, 31,0);
    tracep->declBus(c+1322,"data", false,-1, 31,0);
    tracep->declBus(c+1342,"opcode", false,-1, 6,0);
    tracep->declBus(c+1343,"funct3", false,-1, 2,0);
    tracep->declBus(c+1344,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+522,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1463,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1464,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1479,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1465,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+523,"arvalid_o", false,-1);
    tracep->declBit(c+524,"arready_i", false,-1);
    tracep->declBus(c+1075,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1076,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1077,"rlast_i", false,-1);
    tracep->declBus(c+1078,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1079,"rvalid_i", false,-1);
    tracep->declBit(c+525,"rready_o", false,-1);
    tracep->declBus(c+517,"npc_i", false,-1, 31,0);
    tracep->declBit(c+518,"ifu_valid_i", false,-1);
    tracep->declBit(c+519,"ifu_ready_o", false,-1);
    tracep->declBus(c+515,"pc_o", false,-1, 31,0);
    tracep->declBus(c+516,"inst_o", false,-1, 31,0);
    tracep->declBit(c+520,"ifu_valid_o", false,-1);
    tracep->declBit(c+521,"ifu_ready_i", false,-1);
    tracep->declBus(c+637,"pc", false,-1, 31,0);
    tracep->declBus(c+1505,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1506,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1507,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1508,"lfsr_in", false,-1);
    tracep->declBit(c+523,"arvalid", false,-1);
    tracep->declBus(c+522,"araddr", false,-1, 31,0);
    tracep->declBus(c+638,"inst", false,-1, 31,0);
    tracep->declBit(c+525,"rready", false,-1);
    tracep->declBus(c+1509,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1510+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1542,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1468,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1457,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1479,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1543,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1544,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+639,"current_state", false,-1, 2,0);
    tracep->declBus(c+1440,"next_state", false,-1, 2,0);
    tracep->declBus(c+640,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+641,"ready_flag", false,-1);
    tracep->declBit(c+642,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+563,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+564,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+565,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+566,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+567,"npc_i", false,-1, 31,0);
    tracep->declBit(c+568,"MemRead_i", false,-1);
    tracep->declBit(c+569,"MemWrite_i", false,-1);
    tracep->declBus(c+570,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+571,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+572,"wb_src_i", false,-1);
    tracep->declBit(c+573,"csr_write_i", false,-1);
    tracep->declBit(c+574,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+575,"reg_write_i", false,-1);
    tracep->declBus(c+576,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+577,"lsu_valid_i", false,-1);
    tracep->declBit(c+578,"lsu_ready_o", false,-1);
    tracep->declBus(c+526,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+579,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+580,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+581,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+582,"npc_o", false,-1, 31,0);
    tracep->declBus(c+583,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+584,"wb_src_o", false,-1);
    tracep->declBit(c+585,"csr_write_o", false,-1);
    tracep->declBit(c+586,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+587,"reg_write_o", false,-1);
    tracep->declBus(c+588,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+589,"lsu_valid_o", false,-1);
    tracep->declBit(c+590,"lsu_ready_i", false,-1);
    tracep->declBus(c+526,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1463,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1464,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+527,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1465,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+528,"arvalid_o", false,-1);
    tracep->declBit(c+529,"arready_i", false,-1);
    tracep->declBus(c+1080,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1081,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1082,"rlast_i", false,-1);
    tracep->declBus(c+1083,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1084,"rvalid_i", false,-1);
    tracep->declBit(c+530,"rready_o", false,-1);
    tracep->declBus(c+526,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1463,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1464,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+531,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1465,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+532,"awvalid_o", false,-1);
    tracep->declBit(c+1085,"awready_i", false,-1);
    tracep->declBus(c+533,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+534,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+535,"wlast_o", false,-1);
    tracep->declBit(c+536,"wvalid_o", false,-1);
    tracep->declBit(c+1086,"wready_i", false,-1);
    tracep->declBus(c+1087,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1088,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1089,"bvalid_i", false,-1);
    tracep->declBit(c+537,"bready_o", false,-1);
    tracep->declBus(c+526,"alu_result", false,-1, 31,0);
    tracep->declBus(c+579,"rs1", false,-1, 31,0);
    tracep->declBus(c+1545,"rs2", false,-1, 31,0);
    tracep->declBus(c+1546,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+583,"rmask", false,-1, 2,0);
    tracep->declBit(c+643,"flag", false,-1);
    tracep->declBit(c+1547,"wvalid_tmp", false,-1);
    tracep->declBus(c+1548,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1549,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1550,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1551,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1552,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1553,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1554,"lfsr_in", false,-1);
    tracep->declBit(c+528,"arvalid", false,-1);
    tracep->declBus(c+526,"araddr", false,-1, 31,0);
    tracep->declBit(c+530,"rready", false,-1);
    tracep->declBus(c+526,"awaddr", false,-1, 31,0);
    tracep->declBit(c+532,"awvalid", false,-1);
    tracep->declBus(c+533,"wdata", false,-1, 31,0);
    tracep->declBus(c+534,"wstrb", false,-1, 3,0);
    tracep->declBit(c+536,"wvalid", false,-1);
    tracep->declBit(c+537,"bready", false,-1);
    tracep->declBus(c+1555,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1556+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1588,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1589,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1590+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1622,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1623+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1655+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1687,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1465,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1499,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1500,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1688,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+644,"current_state", false,-1, 1,0);
    tracep->declBus(c+645,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1689,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1501,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBus(c+560,"wdata", false,-1, 31,0);
    tracep->declBus(c+561,"waddr", false,-1, 4,0);
    tracep->declBit(c+562,"wen", false,-1);
    tracep->declBus(c+1319,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1437,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1320,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1438,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1110,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1159+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1191+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+526,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+579,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+580,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+581,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+582,"npc_i", false,-1, 31,0);
    tracep->declBus(c+583,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+584,"wb_src_i", false,-1);
    tracep->declBit(c+585,"csr_write_i", false,-1);
    tracep->declBit(c+586,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+587,"reg_write_i", false,-1);
    tracep->declBus(c+588,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+589,"wbu_valid_i", false,-1);
    tracep->declBit(c+590,"wbu_ready_o", false,-1);
    tracep->declBus(c+517,"npc_o", false,-1, 31,0);
    tracep->declBit(c+518,"wbu_valid_o", false,-1);
    tracep->declBit(c+519,"wbu_ready_i", false,-1);
    tracep->declBus(c+1339,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+560,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1338,"csr_write_o", false,-1);
    tracep->declBit(c+562,"reg_write_o", false,-1);
    tracep->declBus(c+561,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+646,"mem_data", false,-1, 31,0);
    tracep->declBus(c+647,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+648,"alu_result", false,-1, 31,0);
    tracep->declBus(c+649,"rs1", false,-1, 31,0);
    tracep->declBus(c+650,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+651,"rmask", false,-1, 2,0);
    tracep->declBit(c+652,"wb_src", false,-1);
    tracep->declBit(c+653,"csr_wdata_src", false,-1);
    tracep->declBit(c+654,"difftest_check", false,-1);
    tracep->declBit(c+655,"difftest_check_flag", false,-1);
    tracep->declBus(c+1465,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1499,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1500,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+656,"current_state", false,-1, 1,0);
    tracep->declBus(c+657,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+649,"d0", false,-1, 31,0);
    tracep->declBus(c+650,"d1", false,-1, 31,0);
    tracep->declBit(c+653,"sel", false,-1);
    tracep->declBus(c+1339,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+647,"read_data", false,-1, 31,0);
    tracep->declBus(c+658,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+651,"rmask", false,-1, 2,0);
    tracep->declBus(c+646,"mem_data", false,-1, 31,0);
    tracep->declBus(c+659,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+660,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+661,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+662,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+663,"byte3", false,-1, 31,0);
    tracep->declBus(c+664,"byte2", false,-1, 31,0);
    tracep->declBus(c+665,"byte1", false,-1, 31,0);
    tracep->declBus(c+666,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+648,"d0", false,-1, 31,0);
    tracep->declBus(c+646,"d1", false,-1, 31,0);
    tracep->declBit(c+652,"sel", false,-1);
    tracep->declBus(c+560,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1435,"rst_n", false,-1);
    tracep->declBus(c+538,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1463,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1464,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+539,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1465,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+540,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1436,"axi_arready_o", false,-1);
    tracep->declBus(c+1090,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1091,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1092,"axi_rlast_o", false,-1);
    tracep->declBus(c+1093,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1094,"axi_rvalid_o", false,-1);
    tracep->declBit(c+541,"axi_rready_i", false,-1);
    tracep->declBus(c+501,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1463,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1464,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+502,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1465,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+500,"axi_awvalid_i", false,-1);
    tracep->declBit(c+109,"axi_awready_o", false,-1);
    tracep->declBus(c+504,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+505,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+506,"axi_wlast_i", false,-1);
    tracep->declBit(c+503,"axi_wvalid_i", false,-1);
    tracep->declBit(c+110,"axi_wready_o", false,-1);
    tracep->declBus(c+113,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+112,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+111,"axi_bvalid_o", false,-1);
    tracep->declBit(c+507,"axi_bready_i", false,-1);
    tracep->declBus(c+510,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+509,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+511,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+512,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+513,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+508,"sram_arvalid_o", false,-1);
    tracep->declBit(c+1108,"sram_arready_i", false,-1);
    tracep->declBus(c+116,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+117,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+118,"sram_rlast_i", false,-1);
    tracep->declBus(c+115,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+114,"sram_rvalid_i", false,-1);
    tracep->declBit(c+514,"sram_rready_o", false,-1);
    tracep->declBus(c+501,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1463,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1464,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+502,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1465,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+500,"sram_awvalid_o", false,-1);
    tracep->declBit(c+109,"sram_awready_i", false,-1);
    tracep->declBus(c+504,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+505,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+506,"sram_wlast_o", false,-1);
    tracep->declBit(c+503,"sram_wvalid_o", false,-1);
    tracep->declBit(c+110,"sram_wready_i", false,-1);
    tracep->declBus(c+113,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+112,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+111,"sram_bvalid_i", false,-1);
    tracep->declBit(c+507,"sram_bready_o", false,-1);
    tracep->declBus(c+542,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+543,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+544,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+545,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+546,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+547,"clint_arvalid_o", false,-1);
    tracep->declBit(c+548,"clint_arready_i", false,-1);
    tracep->declBus(c+549,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+550,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+551,"clint_rlast_i", false,-1);
    tracep->declBus(c+1463,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+552,"clint_rvalid_i", false,-1);
    tracep->declBit(c+553,"clint_rready_o", false,-1);
    tracep->declBus(c+1484,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1485,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1486,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1487,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1488,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1489,"clint_awvalid_o", false,-1);
    tracep->declBit(c+554,"clint_awready_i", false,-1);
    tracep->declBus(c+1490,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1491,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1492,"clint_wlast_o", false,-1);
    tracep->declBit(c+1493,"clint_wvalid_o", false,-1);
    tracep->declBit(c+555,"clint_wready_i", false,-1);
    tracep->declBus(c+556,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1463,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+557,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1494,"clint_bready_o", false,-1);
    tracep->declBit(c+667,"ar_switch", false,-1);
    tracep->declBit(c+668,"r_switch", false,-1);
    tracep->declBit(c+669,"aw_switch", false,-1);
    tracep->declBit(c+670,"w_switch", false,-1);
    tracep->declBit(c+671,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"io_d", false,-1);
    tracep->declBit(c+380,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"io_d", false,-1);
    tracep->declBit(c+380,"io_q", false,-1);
    tracep->declBit(c+380,"sync_0", false,-1);
    tracep->declBit(c+381,"sync_1", false,-1);
    tracep->declBit(c+382,"sync_2", false,-1);
    tracep->declBit(c+383,"sync_3", false,-1);
    tracep->declBit(c+384,"sync_4", false,-1);
    tracep->declBit(c+385,"sync_5", false,-1);
    tracep->declBit(c+386,"sync_6", false,-1);
    tracep->declBit(c+387,"sync_7", false,-1);
    tracep->declBit(c+388,"sync_8", false,-1);
    tracep->declBit(c+389,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1348,"auto_in_psel", false,-1);
    tracep->declBit(c+1349,"auto_in_penable", false,-1);
    tracep->declBit(c+1102,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1347,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1457,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+689,"auto_in_pready", false,-1);
    tracep->declBit(c+1458,"auto_in_pslverr", false,-1);
    tracep->declBus(c+690,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1400,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1401,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1402,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1403,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1404,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1405,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1406,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1407,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1408,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1409,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1361,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1348,"in_psel", false,-1);
    tracep->declBit(c+1349,"in_penable", false,-1);
    tracep->declBus(c+1457,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1102,"in_pwrite", false,-1);
    tracep->declBus(c+1103,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+689,"in_pready", false,-1);
    tracep->declBus(c+690,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1458,"in_pslverr", false,-1);
    tracep->declBus(c+1400,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1401,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1402,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1403,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1404,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1405,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1406,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1407,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1408,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1409,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+694,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+690,"rdata", false,-1, 31,0);
    tracep->declBus(c+695,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+689,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+696,"num", false,-1, 3,0);
    tracep->declBus(c+1402,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+697,"num", false,-1, 3,0);
    tracep->declBus(c+1403,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+698,"num", false,-1, 3,0);
    tracep->declBus(c+1404,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+699,"num", false,-1, 3,0);
    tracep->declBus(c+1405,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+700,"num", false,-1, 3,0);
    tracep->declBus(c+1406,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+701,"num", false,-1, 3,0);
    tracep->declBus(c+1407,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+702,"num", false,-1, 3,0);
    tracep->declBus(c+1408,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+703,"num", false,-1, 3,0);
    tracep->declBus(c+1409,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1234,"auto_in_psel", false,-1);
    tracep->declBit(c+1235,"auto_in_penable", false,-1);
    tracep->declBit(c+1102,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1347,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1457,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+7,"auto_in_pready", false,-1);
    tracep->declBit(c+1458,"auto_in_pslverr", false,-1);
    tracep->declBus(c+8,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1410,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1411,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1361,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1234,"in_psel", false,-1);
    tracep->declBit(c+1235,"in_penable", false,-1);
    tracep->declBus(c+1457,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1102,"in_pwrite", false,-1);
    tracep->declBus(c+1103,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+7,"in_pready", false,-1);
    tracep->declBus(c+8,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1458,"in_pslverr", false,-1);
    tracep->declBit(c+1410,"ps2_clk", false,-1);
    tracep->declBit(c+1411,"ps2_data", false,-1);
    tracep->declBus(c+390,"data_r", false,-1, 7,0);
    tracep->declBus(c+391,"data_asic", false,-1, 7,0);
    tracep->declBus(c+1690,"buffer", false,-1, 7,0);
    tracep->declBit(c+392,"ready", false,-1);
    tracep->declBit(c+393,"nextdata_n", false,-1);
    tracep->declBit(c+394,"overflow", false,-1);
    tracep->declBus(c+395,"count", false,-1, 7,0);
    tracep->declBit(c+396,"en", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1441,"clrn", false,-1);
    tracep->declBit(c+1410,"ps2_clk", false,-1);
    tracep->declBit(c+1411,"ps2_data", false,-1);
    tracep->declBit(c+393,"nextdata_n", false,-1);
    tracep->declBus(c+390,"data", false,-1, 7,0);
    tracep->declBit(c+392,"ready", false,-1);
    tracep->declBit(c+394,"overflow", false,-1);
    tracep->declBus(c+397,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+398+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+406,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+407,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+408,"count", false,-1, 3,0);
    tracep->declBus(c+409,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+410,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1059,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1060,"auto_in_wvalid", false,-1);
    tracep->declBit(c+175,"auto_in_arready", false,-1);
    tracep->declBit(c+1294,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1272,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1295,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1433,"auto_in_rready", false,-1);
    tracep->declBit(c+176,"auto_in_rvalid", false,-1);
    tracep->declBus(c+177,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+176,"state", false,-1);
    tracep->declBus(c+178,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+177,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1316,"raddr", false,-1, 31,0);
    tracep->declBit(c+1317,"ren", false,-1);
    tracep->declBus(c+1318,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1350,"auto_in_psel", false,-1);
    tracep->declBit(c+1236,"auto_in_penable", false,-1);
    tracep->declBit(c+1102,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1457,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1425,"auto_in_pready", false,-1);
    tracep->declBit(c+1458,"auto_in_pslverr", false,-1);
    tracep->declBus(c+9,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1421,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1377,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1422,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1345,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1350,"in_psel", false,-1);
    tracep->declBit(c+1236,"in_penable", false,-1);
    tracep->declBus(c+1457,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1102,"in_pwrite", false,-1);
    tracep->declBus(c+1103,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1425,"in_pready", false,-1);
    tracep->declBus(c+9,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1458,"in_pslverr", false,-1);
    tracep->declBit(c+1421,"qspi_sck", false,-1);
    tracep->declBit(c+1377,"qspi_ce_n", false,-1);
    tracep->declBus(c+1422,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1422,"din", false,-1, 3,0);
    tracep->declBus(c+1442,"dout", false,-1, 3,0);
    tracep->declBus(c+1387,"douten", false,-1, 3,0);
    tracep->declBit(c+1443,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1398,"clk_i", false,-1);
    tracep->declBit(c+1399,"rst_i", false,-1);
    tracep->declBus(c+1345,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1103,"dat_i", false,-1, 31,0);
    tracep->declBus(c+9,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1104,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1350,"cyc_i", false,-1);
    tracep->declBit(c+1350,"stb_i", false,-1);
    tracep->declBit(c+1443,"ack_o", false,-1);
    tracep->declBit(c+1102,"we_i", false,-1);
    tracep->declBit(c+1421,"sck", false,-1);
    tracep->declBit(c+1377,"ce_n", false,-1);
    tracep->declBus(c+1422,"din", false,-1, 3,0);
    tracep->declBus(c+1442,"dout", false,-1, 3,0);
    tracep->declBus(c+1387,"douten", false,-1, 3,0);
    tracep->declBus(c+1465,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1499,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1500,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+704,"mr_sck", false,-1);
    tracep->declBit(c+705,"mr_ce_n", false,-1);
    tracep->declBus(c+1422,"mr_din", false,-1, 3,0);
    tracep->declBus(c+706,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+707,"mr_doe", false,-1);
    tracep->declBit(c+708,"mw_sck", false,-1);
    tracep->declBit(c+709,"mw_ce_n", false,-1);
    tracep->declBus(c+1422,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1243,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+710,"mw_doe", false,-1);
    tracep->declBit(c+1388,"mr_rd", false,-1);
    tracep->declBit(c+711,"mr_done", false,-1);
    tracep->declBit(c+1389,"mw_wr", false,-1);
    tracep->declBit(c+1244,"mw_done", false,-1);
    tracep->declBit(c+1350,"wb_valid", false,-1);
    tracep->declBit(c+1362,"wb_we", false,-1);
    tracep->declBit(c+1363,"wb_re", false,-1);
    tracep->declBus(c+1251,"state", false,-1, 1,0);
    tracep->declBus(c+1444,"nstate", false,-1, 1,0);
    tracep->declBus(c+1445,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1446,"qpi_sck", false,-1);
    tracep->declBus(c+1223,"size", false,-1, 2,0);
    tracep->declBus(c+1224,"byte0", false,-1, 7,0);
    tracep->declBus(c+1225,"byte1", false,-1, 7,0);
    tracep->declBus(c+1226,"byte2", false,-1, 7,0);
    tracep->declBus(c+1227,"byte3", false,-1, 7,0);
    tracep->declBus(c+1228,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1441,"rst_n", false,-1);
    tracep->declBus(c+1364,"addr", false,-1, 23,0);
    tracep->declBit(c+1388,"rd", false,-1);
    tracep->declBus(c+1544,"size", false,-1, 2,0);
    tracep->declBit(c+711,"done", false,-1);
    tracep->declBus(c+9,"line", false,-1, 31,0);
    tracep->declBit(c+704,"sck", false,-1);
    tracep->declBit(c+705,"ce_n", false,-1);
    tracep->declBus(c+1422,"din", false,-1, 3,0);
    tracep->declBus(c+706,"dout", false,-1, 3,0);
    tracep->declBit(c+707,"douten", false,-1);
    tracep->declBus(c+1691,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1692,"READ", false,-1, 0,0);
    tracep->declBus(c+1693,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+712,"state", false,-1);
    tracep->declBit(c+1390,"nstate", false,-1);
    tracep->declBus(c+713,"counter", false,-1, 7,0);
    tracep->declBus(c+714,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+411+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1694,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+715,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1441,"rst_n", false,-1);
    tracep->declBus(c+1365,"addr", false,-1, 23,0);
    tracep->declBus(c+1228,"line", false,-1, 31,0);
    tracep->declBus(c+1223,"size", false,-1, 2,0);
    tracep->declBit(c+1389,"wr", false,-1);
    tracep->declBit(c+1244,"done", false,-1);
    tracep->declBit(c+708,"sck", false,-1);
    tracep->declBit(c+709,"ce_n", false,-1);
    tracep->declBus(c+1422,"din", false,-1, 3,0);
    tracep->declBus(c+1243,"dout", false,-1, 3,0);
    tracep->declBit(c+710,"douten", false,-1);
    tracep->declBus(c+1691,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1692,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1229,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+716,"state", false,-1);
    tracep->declBit(c+1391,"nstate", false,-1);
    tracep->declBus(c+717,"counter", false,-1, 7,0);
    tracep->declBus(c+718,"saddr", false,-1, 23,0);
    tracep->declBus(c+1695,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1230,"auto_in_psel", false,-1);
    tracep->declBit(c+1231,"auto_in_penable", false,-1);
    tracep->declBit(c+1102,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1457,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+687,"auto_in_pready", false,-1);
    tracep->declBit(c+1458,"auto_in_pslverr", false,-1);
    tracep->declBus(c+688,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1423,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1248,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+683,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+684,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+685,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+686,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1424,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1249,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1250,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1264,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1345,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1230,"in_psel", false,-1);
    tracep->declBit(c+1231,"in_penable", false,-1);
    tracep->declBus(c+1457,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1102,"in_pwrite", false,-1);
    tracep->declBus(c+1103,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+687,"in_pready", false,-1);
    tracep->declBus(c+688,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1458,"in_pslverr", false,-1);
    tracep->declBit(c+1423,"sdram_clk", false,-1);
    tracep->declBit(c+1248,"sdram_cke", false,-1);
    tracep->declBit(c+683,"sdram_cs", false,-1);
    tracep->declBit(c+684,"sdram_ras", false,-1);
    tracep->declBit(c+685,"sdram_cas", false,-1);
    tracep->declBit(c+686,"sdram_we", false,-1);
    tracep->declBus(c+1424,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1249,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1250,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1264,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+719,"sdram_dout_en", false,-1);
    tracep->declBus(c+720,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+415,"state", false,-1, 1,0);
    tracep->declBit(c+1252,"req_accept", false,-1);
    tracep->declBit(c+1366,"is_read", false,-1);
    tracep->declBit(c+1367,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1398,"clk_i", false,-1);
    tracep->declBit(c+1399,"rst_i", false,-1);
    tracep->declBus(c+1368,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1366,"inport_rd_i", false,-1);
    tracep->declBus(c+1464,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1345,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1103,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1264,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1252,"inport_accept_o", false,-1);
    tracep->declBit(c+687,"inport_ack_o", false,-1);
    tracep->declBit(c+1458,"inport_error_o", false,-1);
    tracep->declBus(c+688,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1423,"sdram_clk_o", false,-1);
    tracep->declBit(c+1248,"sdram_cke_o", false,-1);
    tracep->declBit(c+683,"sdram_cs_o", false,-1);
    tracep->declBit(c+684,"sdram_ras_o", false,-1);
    tracep->declBit(c+685,"sdram_cas_o", false,-1);
    tracep->declBit(c+686,"sdram_we_o", false,-1);
    tracep->declBus(c+1250,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1424,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1249,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+720,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+719,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1696,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1697,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1698,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1699,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1699,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1700,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1700,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1701,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1702,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1703,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1704,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1700,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1705,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1706,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1707,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1708,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1709,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1710,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1711,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1463,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1712,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1700,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1463,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1711,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1710,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1706,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1708,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1707,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1709,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1705,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1713,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1714,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1715,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1715,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1501,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1715,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1699,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1699,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1716,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1345,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1368,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1366,"ram_rd_w", false,-1);
    tracep->declBit(c+1252,"ram_accept_w", false,-1);
    tracep->declBus(c+1103,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+688,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+687,"ram_ack_w", false,-1);
    tracep->declBit(c+1369,"ram_req_w", false,-1);
    tracep->declBus(c+721,"command_q", false,-1, 3,0);
    tracep->declBus(c+1253,"addr_q", false,-1, 12,0);
    tracep->declBus(c+720,"data_q", false,-1, 31,0);
    tracep->declBit(c+722,"data_rd_en_q", false,-1);
    tracep->declBus(c+1250,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1248,"cke_q", false,-1);
    tracep->declBus(c+1249,"bank_q", false,-1, 1,0);
    tracep->declBus(c+688,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+723,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1264,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+724,"refresh_q", false,-1);
    tracep->declBus(c+725,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+726+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1254,"state_q", false,-1, 3,0);
    tracep->declBus(c+1392,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1393,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+730,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+731,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1370,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1371,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1372,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1700,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+732,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1394,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1717,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1255,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+733,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+734,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+735,"idx", false,-1, 31,0);
    tracep->declBus(c+736,"rd_q", false,-1, 3,0);
    tracep->declBit(c+687,"ack_q", false,-1);
    tracep->declArray(c+1256,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1237,"auto_in_psel", false,-1);
    tracep->declBit(c+1238,"auto_in_penable", false,-1);
    tracep->declBit(c+1102,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1346,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1457,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+691,"auto_in_pready", false,-1);
    tracep->declBit(c+692,"auto_in_pslverr", false,-1);
    tracep->declBus(c+693,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+682,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1246,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1247,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1420,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1718,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1719,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1720,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1373,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1237,"in_psel", false,-1);
    tracep->declBit(c+1238,"in_penable", false,-1);
    tracep->declBus(c+1457,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1102,"in_pwrite", false,-1);
    tracep->declBus(c+1103,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+691,"in_pready", false,-1);
    tracep->declBus(c+693,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+692,"in_pslverr", false,-1);
    tracep->declBit(c+682,"spi_sck", false,-1);
    tracep->declBus(c+1246,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1247,"spi_mosi", false,-1);
    tracep->declBit(c+1420,"spi_miso", false,-1);
    tracep->declBit(c+737,"spi_irq_out", false,-1);
    tracep->declBus(c+1721,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1722,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1721,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1723,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1724,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1725,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1463,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1711,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1710,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1706,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1708,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1707,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1709,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1705,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1713,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1714,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1726,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+738,"xip_state", false,-1, 3,0);
    tracep->declBus(c+739,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+740,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+741,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+742,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+743,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+744,"wb_we_i", false,-1);
    tracep->declBit(c+745,"wb_stb_i", false,-1);
    tracep->declBit(c+746,"wb_cyc_i", false,-1);
    tracep->declBit(c+747,"wb_ack_o", false,-1);
    tracep->declBit(c+1458,"wb_err_o", false,-1);
    tracep->declBit(c+748,"wb_int_o", false,-1);
    tracep->declBit(c+749,"done", false,-1);
    tracep->declBus(c+750,"paddr", false,-1, 31,0);
    tracep->declQuad(c+751,"data", false,-1, 63,0);
    tracep->declBit(c+753,"is_flash_access", false,-1);
    tracep->declBus(c+754,"tmp", false,-1, 31,0);
    tracep->declQuad(c+755,"tmp64", false,-1, 63,0);
    tracep->declBus(c+757,"counter", false,-1, 7,0);
    tracep->declBit(c+758,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1727,"Tp", false,-1, 31,0);
    tracep->declBit(c+1398,"wb_clk_i", false,-1);
    tracep->declBit(c+1399,"wb_rst_i", false,-1);
    tracep->declBus(c+740,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+741,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+742,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+743,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+744,"wb_we_i", false,-1);
    tracep->declBit(c+745,"wb_stb_i", false,-1);
    tracep->declBit(c+746,"wb_cyc_i", false,-1);
    tracep->declBit(c+747,"wb_ack_o", false,-1);
    tracep->declBit(c+1458,"wb_err_o", false,-1);
    tracep->declBit(c+748,"wb_int_o", false,-1);
    tracep->declBus(c+1246,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+682,"sclk_pad_o", false,-1);
    tracep->declBit(c+1247,"mosi_pad_o", false,-1);
    tracep->declBit(c+1420,"miso_pad_i", false,-1);
    tracep->declBus(c+759,"divider", false,-1, 15,0);
    tracep->declBus(c+760,"ctrl", false,-1, 13,0);
    tracep->declBus(c+761,"ss", false,-1, 7,0);
    tracep->declBus(c+762,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+763,"rx", false,-1, 127,0);
    tracep->declBit(c+767,"rx_negedge", false,-1);
    tracep->declBit(c+768,"tx_negedge", false,-1);
    tracep->declBus(c+769,"char_len", false,-1, 6,0);
    tracep->declBit(c+770,"go", false,-1);
    tracep->declBit(c+771,"lsb", false,-1);
    tracep->declBit(c+772,"ie", false,-1);
    tracep->declBit(c+773,"ass", false,-1);
    tracep->declBit(c+774,"spi_divider_sel", false,-1);
    tracep->declBit(c+775,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+776,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+777,"spi_ss_sel", false,-1);
    tracep->declBit(c+778,"tip", false,-1);
    tracep->declBit(c+779,"pos_edge", false,-1);
    tracep->declBit(c+780,"neg_edge", false,-1);
    tracep->declBit(c+781,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1727,"Tp", false,-1, 31,0);
    tracep->declBit(c+1398,"clk_in", false,-1);
    tracep->declBit(c+1399,"rst", false,-1);
    tracep->declBit(c+778,"enable", false,-1);
    tracep->declBit(c+770,"go", false,-1);
    tracep->declBit(c+781,"last_clk", false,-1);
    tracep->declBus(c+759,"divider", false,-1, 15,0);
    tracep->declBit(c+682,"clk_out", false,-1);
    tracep->declBit(c+779,"pos_edge", false,-1);
    tracep->declBit(c+780,"neg_edge", false,-1);
    tracep->declBus(c+782,"cnt", false,-1, 15,0);
    tracep->declBit(c+783,"cnt_zero", false,-1);
    tracep->declBit(c+784,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1727,"Tp", false,-1, 31,0);
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1399,"rst", false,-1);
    tracep->declBus(c+785,"latch", false,-1, 3,0);
    tracep->declBus(c+743,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+769,"len", false,-1, 6,0);
    tracep->declBit(c+771,"lsb", false,-1);
    tracep->declBit(c+770,"go", false,-1);
    tracep->declBit(c+779,"pos_edge", false,-1);
    tracep->declBit(c+780,"neg_edge", false,-1);
    tracep->declBit(c+767,"rx_negedge", false,-1);
    tracep->declBit(c+768,"tx_negedge", false,-1);
    tracep->declBit(c+778,"tip", false,-1);
    tracep->declBit(c+781,"last", false,-1);
    tracep->declBus(c+741,"p_in", false,-1, 31,0);
    tracep->declArray(c+763,"p_out", false,-1, 127,0);
    tracep->declBit(c+682,"s_clk", false,-1);
    tracep->declBit(c+1420,"s_in", false,-1);
    tracep->declBit(c+1247,"s_out", false,-1);
    tracep->declBus(c+786,"cnt", false,-1, 7,0);
    tracep->declArray(c+763,"data", false,-1, 127,0);
    tracep->declBus(c+787,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+788,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+789,"rx_clk", false,-1);
    tracep->declBit(c+790,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1351,"auto_in_psel", false,-1);
    tracep->declBit(c+1352,"auto_in_penable", false,-1);
    tracep->declBit(c+1102,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1347,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1457,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1353,"auto_in_pready", false,-1);
    tracep->declBit(c+1458,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1426,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1418,"uart_rx", false,-1);
    tracep->declBit(c+1419,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1351,"in_psel", false,-1);
    tracep->declBit(c+1352,"in_penable", false,-1);
    tracep->declBus(c+1457,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1353,"in_pready", false,-1);
    tracep->declBit(c+1458,"in_pslverr", false,-1);
    tracep->declBus(c+1361,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1102,"in_pwrite", false,-1);
    tracep->declBus(c+1426,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1103,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1418,"uart_rx", false,-1);
    tracep->declBit(c+1419,"uart_tx", false,-1);
    tracep->declBit(c+791,"rtsn", false,-1);
    tracep->declBit(c+1458,"ctsn", false,-1);
    tracep->declBit(c+792,"dtr_pad_o", false,-1);
    tracep->declBit(c+1458,"dsr_pad_i", false,-1);
    tracep->declBit(c+1458,"ri_pad_i", false,-1);
    tracep->declBit(c+1458,"dcd_pad_i", false,-1);
    tracep->declBit(c+793,"interrupt", false,-1);
    tracep->declBit(c+1447,"reg_we", false,-1);
    tracep->declBit(c+1448,"reg_re", false,-1);
    tracep->declBus(c+1374,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1375,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+416,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1395,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+794,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1399,"wb_rst_i", false,-1);
    tracep->declBus(c+1374,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1376,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1395,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1447,"wb_we_i", false,-1);
    tracep->declBit(c+1448,"wb_re_i", false,-1);
    tracep->declBit(c+1419,"stx_pad_o", false,-1);
    tracep->declBit(c+1418,"srx_pad_i", false,-1);
    tracep->declBus(c+1713,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+794,"rts_pad_o", false,-1);
    tracep->declBit(c+792,"dtr_pad_o", false,-1);
    tracep->declBit(c+793,"int_o", false,-1);
    tracep->declBit(c+795,"enable", false,-1);
    tracep->declBit(c+796,"srx_pad", false,-1);
    tracep->declBus(c+797,"ier", false,-1, 3,0);
    tracep->declBus(c+798,"iir", false,-1, 3,0);
    tracep->declBus(c+799,"fcr", false,-1, 1,0);
    tracep->declBus(c+800,"mcr", false,-1, 4,0);
    tracep->declBus(c+801,"lcr", false,-1, 7,0);
    tracep->declBus(c+802,"msr", false,-1, 7,0);
    tracep->declBus(c+803,"dl", false,-1, 15,0);
    tracep->declBus(c+804,"scratch", false,-1, 7,0);
    tracep->declBit(c+805,"start_dlc", false,-1);
    tracep->declBit(c+806,"lsr_mask_d", false,-1);
    tracep->declBit(c+807,"msi_reset", false,-1);
    tracep->declBus(c+808,"dlc", false,-1, 15,0);
    tracep->declBus(c+809,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+810,"rx_reset", false,-1);
    tracep->declBit(c+811,"tx_reset", false,-1);
    tracep->declBit(c+812,"dlab", false,-1);
    tracep->declBit(c+1462,"cts_pad_i", false,-1);
    tracep->declBit(c+1458,"dsr_pad_i", false,-1);
    tracep->declBit(c+1458,"ri_pad_i", false,-1);
    tracep->declBit(c+1458,"dcd_pad_i", false,-1);
    tracep->declBit(c+813,"loopback", false,-1);
    tracep->declBit(c+1458,"cts", false,-1);
    tracep->declBit(c+1462,"dsr", false,-1);
    tracep->declBit(c+1462,"ri", false,-1);
    tracep->declBit(c+1462,"dcd", false,-1);
    tracep->declBit(c+814,"cts_c", false,-1);
    tracep->declBit(c+815,"dsr_c", false,-1);
    tracep->declBit(c+816,"ri_c", false,-1);
    tracep->declBit(c+817,"dcd_c", false,-1);
    tracep->declBus(c+818,"lsr", false,-1, 7,0);
    tracep->declBit(c+819,"lsr0", false,-1);
    tracep->declBit(c+820,"lsr1", false,-1);
    tracep->declBit(c+821,"lsr2", false,-1);
    tracep->declBit(c+822,"lsr3", false,-1);
    tracep->declBit(c+823,"lsr4", false,-1);
    tracep->declBit(c+824,"lsr5", false,-1);
    tracep->declBit(c+825,"lsr6", false,-1);
    tracep->declBit(c+826,"lsr7", false,-1);
    tracep->declBit(c+827,"lsr0r", false,-1);
    tracep->declBit(c+828,"lsr1r", false,-1);
    tracep->declBit(c+829,"lsr2r", false,-1);
    tracep->declBit(c+830,"lsr3r", false,-1);
    tracep->declBit(c+831,"lsr4r", false,-1);
    tracep->declBit(c+832,"lsr5r", false,-1);
    tracep->declBit(c+833,"lsr6r", false,-1);
    tracep->declBit(c+834,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+835,"rls_int", false,-1);
    tracep->declBit(c+836,"rda_int", false,-1);
    tracep->declBit(c+837,"ti_int", false,-1);
    tracep->declBit(c+838,"thre_int", false,-1);
    tracep->declBit(c+839,"ms_int", false,-1);
    tracep->declBit(c+840,"tf_push", false,-1);
    tracep->declBit(c+841,"rf_pop", false,-1);
    tracep->declBus(c+1449,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+842,"rf_error_bit", false,-1);
    tracep->declBit(c+820,"rf_overrun", false,-1);
    tracep->declBit(c+843,"rf_push_pulse", false,-1);
    tracep->declBus(c+844,"rf_count", false,-1, 4,0);
    tracep->declBus(c+845,"tf_count", false,-1, 4,0);
    tracep->declBus(c+846,"tstate", false,-1, 2,0);
    tracep->declBus(c+847,"rstate", false,-1, 3,0);
    tracep->declBus(c+848,"counter_t", false,-1, 9,0);
    tracep->declBit(c+849,"thre_set_en", false,-1);
    tracep->declBus(c+850,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+851,"block_value", false,-1, 7,0);
    tracep->declBit(c+852,"serial_out", false,-1);
    tracep->declBit(c+853,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+854,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+855,"lsr0_d", false,-1);
    tracep->declBit(c+856,"lsr1_d", false,-1);
    tracep->declBit(c+857,"lsr2_d", false,-1);
    tracep->declBit(c+858,"lsr3_d", false,-1);
    tracep->declBit(c+859,"lsr4_d", false,-1);
    tracep->declBit(c+860,"lsr5_d", false,-1);
    tracep->declBit(c+861,"lsr6_d", false,-1);
    tracep->declBit(c+862,"lsr7_d", false,-1);
    tracep->declBit(c+863,"rls_int_d", false,-1);
    tracep->declBit(c+864,"thre_int_d", false,-1);
    tracep->declBit(c+865,"ms_int_d", false,-1);
    tracep->declBit(c+866,"ti_int_d", false,-1);
    tracep->declBit(c+867,"rda_int_d", false,-1);
    tracep->declBit(c+868,"rls_int_rise", false,-1);
    tracep->declBit(c+869,"thre_int_rise", false,-1);
    tracep->declBit(c+870,"ms_int_rise", false,-1);
    tracep->declBit(c+871,"ti_int_rise", false,-1);
    tracep->declBit(c+872,"rda_int_rise", false,-1);
    tracep->declBit(c+873,"rls_int_pnd", false,-1);
    tracep->declBit(c+874,"rda_int_pnd", false,-1);
    tracep->declBit(c+875,"thre_int_pnd", false,-1);
    tracep->declBit(c+876,"ms_int_pnd", false,-1);
    tracep->declBit(c+877,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1727,"Tp", false,-1, 31,0);
    tracep->declBus(c+1727,"width", false,-1, 31,0);
    tracep->declBus(c+1692,"init_value", false,-1, 0,0);
    tracep->declBit(c+1399,"rst_i", false,-1);
    tracep->declBit(c+1398,"clk_i", false,-1);
    tracep->declBit(c+1458,"stage1_rst_i", false,-1);
    tracep->declBit(c+1462,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1418,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+796,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+878,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1399,"wb_rst_i", false,-1);
    tracep->declBus(c+801,"lcr", false,-1, 7,0);
    tracep->declBit(c+841,"rf_pop", false,-1);
    tracep->declBit(c+853,"srx_pad_i", false,-1);
    tracep->declBit(c+795,"enable", false,-1);
    tracep->declBit(c+810,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+848,"counter_t", false,-1, 9,0);
    tracep->declBus(c+844,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1449,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+820,"rf_overrun", false,-1);
    tracep->declBit(c+842,"rf_error_bit", false,-1);
    tracep->declBus(c+847,"rstate", false,-1, 3,0);
    tracep->declBit(c+843,"rf_push_pulse", false,-1);
    tracep->declBus(c+879,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+880,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+881,"rshift", false,-1, 7,0);
    tracep->declBit(c+882,"rparity", false,-1);
    tracep->declBit(c+883,"rparity_error", false,-1);
    tracep->declBit(c+884,"rframing_error", false,-1);
    tracep->declBit(c+885,"rbit_in", false,-1);
    tracep->declBit(c+886,"rparity_xor", false,-1);
    tracep->declBus(c+887,"counter_b", false,-1, 7,0);
    tracep->declBit(c+888,"rf_push_q", false,-1);
    tracep->declBus(c+889,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+890,"rf_push", false,-1);
    tracep->declBit(c+891,"break_error", false,-1);
    tracep->declBit(c+892,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+893,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+894,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+895,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1463,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1711,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1710,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1706,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1708,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1707,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1709,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1705,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1713,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1714,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1728,"sr_push", false,-1, 3,0);
    tracep->declBus(c+896,"toc_value", false,-1, 9,0);
    tracep->declBus(c+897,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1729,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1730,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1700,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1689,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1399,"wb_rst_i", false,-1);
    tracep->declBit(c+843,"push", false,-1);
    tracep->declBit(c+841,"pop", false,-1);
    tracep->declBus(c+889,"data_in", false,-1, 10,0);
    tracep->declBit(c+810,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1449,"data_out", false,-1, 10,0);
    tracep->declBit(c+820,"overrun", false,-1);
    tracep->declBus(c+844,"count", false,-1, 4,0);
    tracep->declBit(c+842,"error_bit", false,-1);
    tracep->declBus(c+1450,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+898+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+914,"top", false,-1, 3,0);
    tracep->declBus(c+915,"bottom", false,-1, 3,0);
    tracep->declBus(c+916,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+917,"word0", false,-1, 2,0);
    tracep->declBus(c+918,"word1", false,-1, 2,0);
    tracep->declBus(c+919,"word2", false,-1, 2,0);
    tracep->declBus(c+920,"word3", false,-1, 2,0);
    tracep->declBus(c+921,"word4", false,-1, 2,0);
    tracep->declBus(c+922,"word5", false,-1, 2,0);
    tracep->declBus(c+923,"word6", false,-1, 2,0);
    tracep->declBus(c+924,"word7", false,-1, 2,0);
    tracep->declBus(c+925,"word8", false,-1, 2,0);
    tracep->declBus(c+926,"word9", false,-1, 2,0);
    tracep->declBus(c+927,"word10", false,-1, 2,0);
    tracep->declBus(c+928,"word11", false,-1, 2,0);
    tracep->declBus(c+929,"word12", false,-1, 2,0);
    tracep->declBus(c+930,"word13", false,-1, 2,0);
    tracep->declBus(c+931,"word14", false,-1, 2,0);
    tracep->declBus(c+932,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1700,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1720,"data_width", false,-1, 31,0);
    tracep->declBus(c+1730,"depth", false,-1, 31,0);
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+843,"we", false,-1);
    tracep->declBus(c+914,"a", false,-1, 3,0);
    tracep->declBus(c+915,"dpra", false,-1, 3,0);
    tracep->declBus(c+933,"di", false,-1, 7,0);
    tracep->declBus(c+1450,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+417+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1399,"wb_rst_i", false,-1);
    tracep->declBus(c+801,"lcr", false,-1, 7,0);
    tracep->declBit(c+840,"tf_push", false,-1);
    tracep->declBus(c+1376,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+795,"enable", false,-1);
    tracep->declBit(c+811,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+852,"stx_pad_o", false,-1);
    tracep->declBus(c+846,"tstate", false,-1, 2,0);
    tracep->declBus(c+845,"tf_count", false,-1, 4,0);
    tracep->declBus(c+934,"counter", false,-1, 4,0);
    tracep->declBus(c+935,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+936,"shift_out", false,-1, 6,0);
    tracep->declBit(c+937,"stx_o_tmp", false,-1);
    tracep->declBit(c+938,"parity_xor", false,-1);
    tracep->declBit(c+939,"tf_pop", false,-1);
    tracep->declBit(c+940,"bit_out", false,-1);
    tracep->declBus(c+1376,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1245,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+941,"tf_overrun", false,-1);
    tracep->declBus(c+1468,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1457,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1479,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1543,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1544,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1731,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1720,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1730,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1700,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1689,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+1399,"wb_rst_i", false,-1);
    tracep->declBit(c+840,"push", false,-1);
    tracep->declBit(c+939,"pop", false,-1);
    tracep->declBus(c+1376,"data_in", false,-1, 7,0);
    tracep->declBit(c+811,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1245,"data_out", false,-1, 7,0);
    tracep->declBit(c+941,"overrun", false,-1);
    tracep->declBus(c+845,"count", false,-1, 4,0);
    tracep->declBus(c+942,"top", false,-1, 3,0);
    tracep->declBus(c+943,"bottom", false,-1, 3,0);
    tracep->declBus(c+944,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1700,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1720,"data_width", false,-1, 31,0);
    tracep->declBus(c+1730,"depth", false,-1, 31,0);
    tracep->declBit(c+1398,"clk", false,-1);
    tracep->declBit(c+840,"we", false,-1);
    tracep->declBus(c+942,"a", false,-1, 3,0);
    tracep->declBus(c+943,"dpra", false,-1, 3,0);
    tracep->declBus(c+1376,"di", false,-1, 7,0);
    tracep->declBus(c+1245,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+433+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBit(c+1232,"auto_in_psel", false,-1);
    tracep->declBit(c+1233,"auto_in_penable", false,-1);
    tracep->declBit(c+1102,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1346,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1457,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1103,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_in_pready", false,-1);
    tracep->declBit(c+1460,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1461,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1412,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1413,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1414,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1415,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1416,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1417,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1398,"clock", false,-1);
    tracep->declBit(c+1399,"reset", false,-1);
    tracep->declBus(c+1373,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1232,"in_psel", false,-1);
    tracep->declBit(c+1233,"in_penable", false,-1);
    tracep->declBus(c+1457,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1102,"in_pwrite", false,-1);
    tracep->declBus(c+1103,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1104,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"in_pready", false,-1);
    tracep->declBus(c+1461,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1460,"in_pslverr", false,-1);
    tracep->declBus(c+1412,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1413,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1414,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1415,"vga_hsync", false,-1);
    tracep->declBit(c+1416,"vga_vsync", false,-1);
    tracep->declBit(c+1417,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+682,"sck", false,-1);
    tracep->declBit(c+1259,"ss", false,-1);
    tracep->declBit(c+1247,"mosi", false,-1);
    tracep->declBit(c+1239,"miso", false,-1);
    tracep->declBus(c+1240,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1241,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1451,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+682,"sck", false,-1);
    tracep->declBit(c+1260,"ss", false,-1);
    tracep->declBit(c+1247,"mosi", false,-1);
    tracep->declBit(c+1452,"miso", false,-1);
    tracep->declBit(c+1260,"reset", false,-1);
    tracep->declBus(c+1013,"state", false,-1, 2,0);
    tracep->declBus(c+1014,"counter", false,-1, 7,0);
    tracep->declBus(c+1015,"cmd", false,-1, 7,0);
    tracep->declBus(c+1016,"addr", false,-1, 23,0);
    tracep->declBus(c+1017,"data", false,-1, 31,0);
    tracep->declBit(c+1018,"ren", false,-1);
    tracep->declBus(c+1453,"rdata", false,-1, 31,0);
    tracep->declBus(c+1454,"raddr", false,-1, 31,0);
    tracep->declBus(c+1242,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+682,"clock", false,-1);
    tracep->declBit(c+1018,"valid", false,-1);
    tracep->declBus(c+1015,"cmd", false,-1, 7,0);
    tracep->declBus(c+1454,"addr", false,-1, 31,0);
    tracep->declBus(c+1453,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1421,"sck", false,-1);
    tracep->declBit(c+1377,"ce_n", false,-1);
    tracep->declBus(c+1422,"dio", false,-1, 3,0);
    tracep->declBus(c+672,"dio_out", false,-1, 3,0);
    tracep->declBus(c+673,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1422,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1495,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1727,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1699,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1732,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1700,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1689,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+674,"state", false,-1, 2,0);
    tracep->declBus(c+1455,"next_state", false,-1, 2,0);
    tracep->declBus(c+675,"counter", false,-1, 7,0);
    tracep->declBus(c+676,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+677,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+678,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+679,"is_read_op", false,-1);
    tracep->declBit(c+680,"is_write_op", false,-1);
    tracep->declBus(c+681,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1456,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1423,"clk", false,-1);
    tracep->declBit(c+1248,"cke", false,-1);
    tracep->declBit(c+683,"cs", false,-1);
    tracep->declBit(c+684,"ras", false,-1);
    tracep->declBit(c+685,"cas", false,-1);
    tracep->declBit(c+686,"we", false,-1);
    tracep->declBus(c+1424,"a", false,-1, 13,0);
    tracep->declBus(c+1249,"ba", false,-1, 1,0);
    tracep->declBus(c+1250,"dqm", false,-1, 3,0);
    tracep->declBus(c+1264,"dq", false,-1, 31,0);
    tracep->declBit(c+945,"cs_0", false,-1);
    tracep->declBit(c+946,"ras_0", false,-1);
    tracep->declBit(c+947,"cas_0", false,-1);
    tracep->declBit(c+948,"we_0", false,-1);
    tracep->declBit(c+949,"cs_1", false,-1);
    tracep->declBit(c+950,"ras_1", false,-1);
    tracep->declBit(c+951,"cas_1", false,-1);
    tracep->declBit(c+952,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1423,"clk", false,-1);
    tracep->declBit(c+1248,"cke", false,-1);
    tracep->declBit(c+949,"cs", false,-1);
    tracep->declBit(c+950,"ras", false,-1);
    tracep->declBit(c+951,"cas", false,-1);
    tracep->declBit(c+952,"we", false,-1);
    tracep->declBus(c+1253,"a", false,-1, 12,0);
    tracep->declBus(c+1249,"ba", false,-1, 1,0);
    tracep->declBus(c+1250,"dqm", false,-1, 3,0);
    tracep->declBus(c+1264,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1423,"clk", false,-1);
    tracep->declBit(c+1248,"cke", false,-1);
    tracep->declBit(c+949,"cs", false,-1);
    tracep->declBit(c+950,"ras", false,-1);
    tracep->declBit(c+951,"cas", false,-1);
    tracep->declBit(c+952,"we", false,-1);
    tracep->declBus(c+1253,"a", false,-1, 12,0);
    tracep->declBus(c+1249,"ba", false,-1, 1,0);
    tracep->declBus(c+1261,"dqm", false,-1, 1,0);
    tracep->declBus(c+1265,"dq", false,-1, 15,0);
    tracep->declBus(c+1733,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1706,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1707,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1708,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1463,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+953,"cas_la", false,-1, 2,0);
    tracep->declBus(c+954,"bl", false,-1, 2,0);
    tracep->declBus(c+1396,"command", false,-1, 3,0);
    tracep->declBus(c+955,"mode_register", false,-1, 12,0);
    tracep->declBus(c+956,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1262,"col_addr", false,-1, 9,0);
    tracep->declBus(c+957,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1266,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+958,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+959+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+963,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+964,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1734,"state", false,-1, 2,0);
    tracep->declBit(c+965,"write_brust", false,-1);
    tracep->declBit(c+966,"read_burst", false,-1);
    tracep->declBus(c+967,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1423,"clk", false,-1);
    tracep->declBit(c+1248,"cke", false,-1);
    tracep->declBit(c+949,"cs", false,-1);
    tracep->declBit(c+950,"ras", false,-1);
    tracep->declBit(c+951,"cas", false,-1);
    tracep->declBit(c+952,"we", false,-1);
    tracep->declBus(c+1253,"a", false,-1, 12,0);
    tracep->declBus(c+1249,"ba", false,-1, 1,0);
    tracep->declBus(c+1263,"dqm", false,-1, 1,0);
    tracep->declBus(c+1267,"dq", false,-1, 15,0);
    tracep->declBus(c+1733,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1706,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1707,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1708,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1463,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+968,"cas_la", false,-1, 2,0);
    tracep->declBus(c+969,"bl", false,-1, 2,0);
    tracep->declBus(c+1396,"command", false,-1, 3,0);
    tracep->declBus(c+970,"mode_register", false,-1, 12,0);
    tracep->declBus(c+971,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1262,"col_addr", false,-1, 9,0);
    tracep->declBus(c+972,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1268,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+973,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+974+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+978,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+979,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1735,"state", false,-1, 2,0);
    tracep->declBit(c+980,"write_brust", false,-1);
    tracep->declBit(c+981,"read_burst", false,-1);
    tracep->declBus(c+982,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1423,"clk", false,-1);
    tracep->declBit(c+1248,"cke", false,-1);
    tracep->declBit(c+945,"cs", false,-1);
    tracep->declBit(c+946,"ras", false,-1);
    tracep->declBit(c+947,"cas", false,-1);
    tracep->declBit(c+948,"we", false,-1);
    tracep->declBus(c+1253,"a", false,-1, 12,0);
    tracep->declBus(c+1249,"ba", false,-1, 1,0);
    tracep->declBus(c+1250,"dqm", false,-1, 3,0);
    tracep->declBus(c+1264,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1423,"clk", false,-1);
    tracep->declBit(c+1248,"cke", false,-1);
    tracep->declBit(c+945,"cs", false,-1);
    tracep->declBit(c+946,"ras", false,-1);
    tracep->declBit(c+947,"cas", false,-1);
    tracep->declBit(c+948,"we", false,-1);
    tracep->declBus(c+1253,"a", false,-1, 12,0);
    tracep->declBus(c+1249,"ba", false,-1, 1,0);
    tracep->declBus(c+1261,"dqm", false,-1, 1,0);
    tracep->declBus(c+1265,"dq", false,-1, 15,0);
    tracep->declBus(c+1733,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1706,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1707,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1708,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1463,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+983,"cas_la", false,-1, 2,0);
    tracep->declBus(c+984,"bl", false,-1, 2,0);
    tracep->declBus(c+1397,"command", false,-1, 3,0);
    tracep->declBus(c+985,"mode_register", false,-1, 12,0);
    tracep->declBus(c+986,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1262,"col_addr", false,-1, 9,0);
    tracep->declBus(c+987,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1269,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+988,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+989+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+993,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+994,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1736,"state", false,-1, 2,0);
    tracep->declBit(c+995,"write_brust", false,-1);
    tracep->declBit(c+996,"read_burst", false,-1);
    tracep->declBus(c+997,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1423,"clk", false,-1);
    tracep->declBit(c+1248,"cke", false,-1);
    tracep->declBit(c+945,"cs", false,-1);
    tracep->declBit(c+946,"ras", false,-1);
    tracep->declBit(c+947,"cas", false,-1);
    tracep->declBit(c+948,"we", false,-1);
    tracep->declBus(c+1253,"a", false,-1, 12,0);
    tracep->declBus(c+1249,"ba", false,-1, 1,0);
    tracep->declBus(c+1263,"dqm", false,-1, 1,0);
    tracep->declBus(c+1267,"dq", false,-1, 15,0);
    tracep->declBus(c+1733,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1706,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1707,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1708,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1463,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+998,"cas_la", false,-1, 2,0);
    tracep->declBus(c+999,"bl", false,-1, 2,0);
    tracep->declBus(c+1397,"command", false,-1, 3,0);
    tracep->declBus(c+1000,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1001,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1262,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1002,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1270,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1003,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1004+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1008,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1009,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1737,"state", false,-1, 2,0);
    tracep->declBit(c+1010,"write_brust", false,-1);
    tracep->declBit(c+1011,"read_burst", false,-1);
    tracep->declBus(c+1012,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+9,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                              [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U])))),32);
    bufp->fullBit(oldp+10,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+11,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+12,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+13,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+14,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+15,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+16,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+17,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+18,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+21,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+22,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+23,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+24,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+34,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+37,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+38,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+39,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+40,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+43,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+44,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+45,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+46,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+109,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+110,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+116,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+117,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+118,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+119,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+123,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+125,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+165,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+166,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+179,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+180,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+181,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+256,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+264,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+268,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+308,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+320,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+324,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+340,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__count),8);
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__en));
    bufp->fullSData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+410,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+449,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+450,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+453,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+454,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+455,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+456,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+457,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+458,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+459,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+461,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))));
    bufp->fullBit(oldp+462,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+463,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+464,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+465,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+466,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+467,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+468,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+469,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+470,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+471,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+472,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+473,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+474,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+475,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+476,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+477,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+478,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+479,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+480,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+481,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+482,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+483,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+484,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+485,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+486,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+487,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+488,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+489,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+490,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+491,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+493,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+494,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+495,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+496,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+497,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+498,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+499,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+507,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+531,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+534,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+566,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+567,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+613,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+628,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+629,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+631,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+634,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+658,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+659,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+660,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+661,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+662,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+663,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+664,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+665,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+666,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__b_switch));
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+678,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+683,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+684,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+685,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+686,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+696,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+697,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+698,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+699,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+700,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+701,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+702,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+703,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+706,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+707,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+710,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+711,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+715,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+719,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+754,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+755,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+767,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+768,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+769,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+770,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+771,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+772,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+773,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+774,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+775,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+777,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+781,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+783,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+784,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+787,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+791,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+792,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+794,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+812,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+813,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+814,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+815,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+816,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+817,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+818,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+821,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+822,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+823,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+842,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+849,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+868,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+869,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+870,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+871,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+872,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+891,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+892,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+893,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+894,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+895,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+897,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+916,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+933,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+944,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+945,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+946,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+947,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+948,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+949,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+950,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+951,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+952,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullCData(oldp+953,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+954,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+955,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+957,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+959,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+960,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+961,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+967,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+968,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+969,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+970,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+972,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+975,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+976,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+977,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+982,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+983,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+984,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+985,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+987,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+989,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+990,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+991,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+992,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+997,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+998,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+999,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1018,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1019,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1025,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1028,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1048,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1049,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1050,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1054,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1055,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1059,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1060,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1064,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1101,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+1108,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1226,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1227,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1228,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1229,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1230,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1231,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1233,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1234,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1252,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullSData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1259,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1261,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1262,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),10);
    bufp->fullCData(oldp+1263,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1265,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1267,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1277,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1281,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1289,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1291,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1295,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+1299,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+1300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1301,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1302,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1303,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1304,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1305,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1306,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1307,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1308,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1309,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1310,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1311,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1312,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1313,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1314,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1315,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1316,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1319,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1320,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1331,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1337,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1342,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1343,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1344,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+1346,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1347,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1361,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1364,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1365,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1370,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1371,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1372,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1373,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1374,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1384,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+1398,(vlSelf->clock));
    bufp->fullBit(oldp+1399,(vlSelf->reset));
    bufp->fullSData(oldp+1400,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1401,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1402,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1403,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1404,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1405,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1406,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1407,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1408,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1409,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1410,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1411,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1412,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1413,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1414,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1415,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1416,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1417,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1418,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1419,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1420,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1423,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1424,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullBit(oldp+1425,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1426,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1427,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1428,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullCData(oldp+1429,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1430,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1432,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1433,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1434,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1436,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch)
                                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready)))));
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1439,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1440,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
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
    bufp->fullBit(oldp+1441,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1442,((0xfU & vlSelf->__VdfgTmp_hc20ef241__0)),4);
    bufp->fullBit(oldp+1443,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1444,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1449,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1452,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1454,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullCData(oldp+1457,(1U),3);
    bufp->fullBit(oldp+1458,(0U));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1462,(1U));
    bufp->fullCData(oldp+1463,(0U),4);
    bufp->fullCData(oldp+1464,(0U),8);
    bufp->fullCData(oldp+1465,(0U),2);
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1467,(0U),32);
    bufp->fullCData(oldp+1468,(0U),3);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1479,(2U),3);
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1495,(0U),32);
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1499,(1U),2);
    bufp->fullCData(oldp+1500,(2U),2);
    bufp->fullIData(oldp+1501,(0x20U),32);
    bufp->fullIData(oldp+1502,(4U),32);
    bufp->fullIData(oldp+1503,(0x79737978U),32);
    bufp->fullIData(oldp+1504,(0x17e3c19U),32);
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1543,(3U),3);
    bufp->fullCData(oldp+1544,(4U),3);
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1688,(3U),2);
    bufp->fullIData(oldp+1689,(5U),32);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+1691,(0U));
    bufp->fullBit(oldp+1692,(1U));
    bufp->fullCData(oldp+1693,(0x1bU),8);
    bufp->fullCData(oldp+1694,(0xebU),8);
    bufp->fullCData(oldp+1695,(0x38U),8);
    bufp->fullIData(oldp+1696,(0x64U),32);
    bufp->fullIData(oldp+1697,(0x18U),32);
    bufp->fullIData(oldp+1698,(9U),32);
    bufp->fullIData(oldp+1699,(2U),32);
    bufp->fullIData(oldp+1700,(4U),32);
    bufp->fullIData(oldp+1701,(0xdU),32);
    bufp->fullIData(oldp+1702,(0x2000U),32);
    bufp->fullIData(oldp+1703,(0x2710U),32);
    bufp->fullIData(oldp+1704,(0x30cU),32);
    bufp->fullCData(oldp+1705,(7U),4);
    bufp->fullCData(oldp+1706,(3U),4);
    bufp->fullCData(oldp+1707,(5U),4);
    bufp->fullCData(oldp+1708,(4U),4);
    bufp->fullCData(oldp+1709,(6U),4);
    bufp->fullCData(oldp+1710,(2U),4);
    bufp->fullCData(oldp+1711,(1U),4);
    bufp->fullSData(oldp+1712,(0x20U),13);
    bufp->fullCData(oldp+1713,(8U),4);
    bufp->fullCData(oldp+1714,(9U),4);
    bufp->fullIData(oldp+1715,(0xaU),32);
    bufp->fullIData(oldp+1716,(6U),32);
    bufp->fullIData(oldp+1717,(0x11U),32);
    bufp->fullIData(oldp+1718,(0x30000000U),32);
    bufp->fullIData(oldp+1719,(0x3fffffffU),32);
    bufp->fullIData(oldp+1720,(8U),32);
    bufp->fullCData(oldp+1721,(4U),5);
    bufp->fullCData(oldp+1722,(0U),5);
    bufp->fullCData(oldp+1723,(0x10U),5);
    bufp->fullCData(oldp+1724,(0x14U),5);
    bufp->fullCData(oldp+1725,(0x18U),5);
    bufp->fullIData(oldp+1726,(0x3000000U),32);
    bufp->fullIData(oldp+1727,(1U),32);
    bufp->fullCData(oldp+1728,(0xaU),4);
    bufp->fullIData(oldp+1729,(0xbU),32);
    bufp->fullIData(oldp+1730,(0x10U),32);
    bufp->fullCData(oldp+1731,(5U),3);
    bufp->fullIData(oldp+1732,(3U),32);
    bufp->fullIData(oldp+1733,(0x400000U),32);
    bufp->fullCData(oldp+1734,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1735,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullCData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
}
