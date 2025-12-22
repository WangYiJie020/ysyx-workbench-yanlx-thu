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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1409,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1410,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1411,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1412,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1413,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1414,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1415,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1416,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1417,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1418,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1419,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1420,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1421,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1422,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1423,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1424,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1425,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1426,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1427,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1428,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1409,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1410,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1411,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1412,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1413,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1414,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1415,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1416,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1417,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1418,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1419,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1420,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1421,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1422,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1423,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1424,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1425,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1426,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1427,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1428,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+685,"spi_sck", false,-1);
    tracep->declBus(c+1252,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1253,"spi_mosi", false,-1);
    tracep->declBit(c+1429,"spi_miso", false,-1);
    tracep->declBit(c+1427,"uart_rx", false,-1);
    tracep->declBit(c+1428,"uart_tx", false,-1);
    tracep->declBit(c+1430,"psram_sck", false,-1);
    tracep->declBit(c+1386,"psram_ce_n", false,-1);
    tracep->declBus(c+1431,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1432,"sdram_clk", false,-1);
    tracep->declBit(c+1254,"sdram_cke", false,-1);
    tracep->declBit(c+686,"sdram_cs", false,-1);
    tracep->declBit(c+687,"sdram_ras", false,-1);
    tracep->declBit(c+688,"sdram_cas", false,-1);
    tracep->declBit(c+689,"sdram_we", false,-1);
    tracep->declBus(c+1433,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1256,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1270,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1409,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1410,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1411,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1412,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1413,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1414,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1415,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1416,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1417,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1418,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1419,"ps2_clk", false,-1);
    tracep->declBit(c+1420,"ps2_data", false,-1);
    tracep->declBus(c+1421,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1422,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1423,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1424,"vga_hsync", false,-1);
    tracep->declBit(c+1425,"vga_vsync", false,-1);
    tracep->declBit(c+1426,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1351,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1107,"in_psel", false,-1);
    tracep->declBit(c+1108,"in_penable", false,-1);
    tracep->declBus(c+1466,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"in_pready", false,-1);
    tracep->declBus(c+1388,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1389,"in_pslverr", false,-1);
    tracep->declBus(c+1351,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1107,"out_psel", false,-1);
    tracep->declBit(c+1108,"out_penable", false,-1);
    tracep->declBus(c+1466,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"out_pwrite", false,-1);
    tracep->declBus(c+1110,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"out_pready", false,-1);
    tracep->declBus(c+1388,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1389,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1107,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1108,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1351,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1466,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1389,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1388,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1237,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1238,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1351,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1466,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1467,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+691,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1352,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1353,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1354,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1466,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+692,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1468,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1469,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1239,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1240,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1355,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1466,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+7,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1467,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+8,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1356,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1357,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1355,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1466,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1467,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+694,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1358,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1241,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1351,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1466,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1434,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1467,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+9,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1359,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1360,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1355,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1466,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1361,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1467,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1435,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1242,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1243,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1354,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1466,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+696,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+697,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1362,"sel_0", false,-1);
    tracep->declBit(c+1363,"sel_1", false,-1);
    tracep->declBit(c+1364,"sel_2", false,-1);
    tracep->declBit(c+1365,"sel_3", false,-1);
    tracep->declBit(c+1366,"sel_4", false,-1);
    tracep->declBit(c+1367,"sel_5", false,-1);
    tracep->declBit(c+1368,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1112,"auto_in_awready", false,-1);
    tracep->declBit(c+10,"auto_in_awvalid", false,-1);
    tracep->declBus(c+11,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+12,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+14,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1112,"auto_in_wready", false,-1);
    tracep->declBit(c+15,"auto_in_wvalid", false,-1);
    tracep->declBus(c+16,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+18,"auto_in_bready", false,-1);
    tracep->declBit(c+1390,"auto_in_bvalid", false,-1);
    tracep->declBus(c+19,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1391,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1113,"auto_in_arready", false,-1);
    tracep->declBit(c+20,"auto_in_arvalid", false,-1);
    tracep->declBus(c+21,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+24,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+25,"auto_in_rready", false,-1);
    tracep->declBit(c+1392,"auto_in_rvalid", false,-1);
    tracep->declBus(c+26,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1436,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1391,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1107,"auto_out_psel", false,-1);
    tracep->declBit(c+1108,"auto_out_penable", false,-1);
    tracep->declBit(c+1109,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1351,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1110,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"auto_out_pready", false,-1);
    tracep->declBit(c+1389,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1388,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1108,"nodeOut_penable", false,-1);
    tracep->declBus(c+1114,"state", false,-1, 1,0);
    tracep->declBit(c+1113,"accept_read", false,-1);
    tracep->declBit(c+1112,"accept_write", false,-1);
    tracep->declBit(c+27,"is_write_r", false,-1);
    tracep->declBit(c+1109,"is_write", false,-1);
    tracep->declBus(c+26,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+19,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+28,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+29,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+30,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+31,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1393,"resp", false,-1, 1,0);
    tracep->declBus(c+32,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1391,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1392,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+33,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1390,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+34,"auto_in_awready", false,-1);
    tracep->declBit(c+1026,"auto_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1027,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1028,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+37,"auto_in_wready", false,-1);
    tracep->declBit(c+1029,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1030,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_in_wlast", false,-1);
    tracep->declBit(c+452,"auto_in_bready", false,-1);
    tracep->declBit(c+38,"auto_in_bvalid", false,-1);
    tracep->declBus(c+39,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+41,"auto_in_arready", false,-1);
    tracep->declBit(c+1277,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1279,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1280,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1281,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1437,"auto_in_rready", false,-1);
    tracep->declBit(c+42,"auto_in_rvalid", false,-1);
    tracep->declBus(c+43,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+45,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_rlast", false,-1);
    tracep->declBit(c+1112,"auto_out_awready", false,-1);
    tracep->declBit(c+10,"auto_out_awvalid", false,-1);
    tracep->declBus(c+11,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+12,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+14,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1112,"auto_out_wready", false,-1);
    tracep->declBit(c+15,"auto_out_wvalid", false,-1);
    tracep->declBus(c+16,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+18,"auto_out_bready", false,-1);
    tracep->declBit(c+1390,"auto_out_bvalid", false,-1);
    tracep->declBus(c+19,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1391,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1113,"auto_out_arready", false,-1);
    tracep->declBit(c+20,"auto_out_arvalid", false,-1);
    tracep->declBus(c+21,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+24,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+25,"auto_out_rready", false,-1);
    tracep->declBit(c+1392,"auto_out_rvalid", false,-1);
    tracep->declBus(c+26,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1436,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1391,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+18,"io_enq_ready", false,-1);
    tracep->declBit(c+1390,"io_enq_valid", false,-1);
    tracep->declBus(c+19,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1391,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+452,"io_deq_ready", false,-1);
    tracep->declBit(c+38,"io_deq_valid", false,-1);
    tracep->declBus(c+39,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+40,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+47,"wrap", false,-1);
    tracep->declBit(c+48,"wrap_1", false,-1);
    tracep->declBit(c+49,"maybe_full", false,-1);
    tracep->declBit(c+50,"ptr_match", false,-1);
    tracep->declBit(c+51,"empty", false,-1);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1394,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+48,"R0_addr", false,-1);
    tracep->declBit(c+1470,"R0_en", false,-1);
    tracep->declBit(c+1407,"R0_clk", false,-1);
    tracep->declBus(c+53,"R0_data", false,-1, 5,0);
    tracep->declBit(c+47,"W0_addr", false,-1);
    tracep->declBit(c+1394,"W0_en", false,-1);
    tracep->declBit(c+1407,"W0_clk", false,-1);
    tracep->declBus(c+1438,"W0_data", false,-1, 5,0);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+25,"io_enq_ready", false,-1);
    tracep->declBit(c+1392,"io_enq_valid", false,-1);
    tracep->declBus(c+26,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1436,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1391,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1437,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1395,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+58,"R0_addr", false,-1);
    tracep->declBit(c+1470,"R0_en", false,-1);
    tracep->declBit(c+1407,"R0_clk", false,-1);
    tracep->declQuad(c+63,"R0_data", false,-1, 38,0);
    tracep->declBit(c+57,"W0_addr", false,-1);
    tracep->declBit(c+1395,"W0_en", false,-1);
    tracep->declBit(c+1407,"W0_clk", false,-1);
    tracep->declQuad(c+1439,"W0_data", false,-1, 38,0);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+41,"io_enq_ready", false,-1);
    tracep->declBit(c+1277,"io_enq_valid", false,-1);
    tracep->declBus(c+1278,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1279,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1280,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1281,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1113,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1282,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+71,"R0_addr", false,-1);
    tracep->declBit(c+1470,"R0_en", false,-1);
    tracep->declBit(c+1407,"R0_clk", false,-1);
    tracep->declQuad(c+76,"R0_data", false,-1, 46,0);
    tracep->declBit(c+70,"W0_addr", false,-1);
    tracep->declBit(c+1282,"W0_en", false,-1);
    tracep->declBit(c+1407,"W0_clk", false,-1);
    tracep->declQuad(c+1283,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+34,"io_enq_ready", false,-1);
    tracep->declBit(c+1026,"io_enq_valid", false,-1);
    tracep->declBus(c+35,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1027,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1028,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+36,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1112,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1033,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+84,"R0_addr", false,-1);
    tracep->declBit(c+1470,"R0_en", false,-1);
    tracep->declBit(c+1407,"R0_clk", false,-1);
    tracep->declQuad(c+89,"R0_data", false,-1, 46,0);
    tracep->declBit(c+83,"W0_addr", false,-1);
    tracep->declBit(c+1033,"W0_en", false,-1);
    tracep->declBit(c+1407,"W0_clk", false,-1);
    tracep->declQuad(c+453,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+37,"io_enq_ready", false,-1);
    tracep->declBit(c+1029,"io_enq_valid", false,-1);
    tracep->declBus(c+1030,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1031,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1032,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1112,"io_deq_ready", false,-1);
    tracep->declBit(c+15,"io_deq_valid", false,-1);
    tracep->declBus(c+16,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+17,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+96,"wrap", false,-1);
    tracep->declBit(c+97,"wrap_1", false,-1);
    tracep->declBit(c+98,"maybe_full", false,-1);
    tracep->declBit(c+99,"ptr_match", false,-1);
    tracep->declBit(c+100,"empty", false,-1);
    tracep->declBit(c+101,"full", false,-1);
    tracep->declBit(c+1034,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+97,"R0_addr", false,-1);
    tracep->declBit(c+1470,"R0_en", false,-1);
    tracep->declBit(c+1407,"R0_clk", false,-1);
    tracep->declQuad(c+102,"R0_data", false,-1, 35,0);
    tracep->declBit(c+96,"W0_addr", false,-1);
    tracep->declBit(c+1034,"W0_en", false,-1);
    tracep->declBit(c+1407,"W0_clk", false,-1);
    tracep->declQuad(c+1035,"W0_data", false,-1, 35,0);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+109,"auto_in_awready", false,-1);
    tracep->declBit(c+503,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1471,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+504,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1472,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+505,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1473,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_in_wready", false,-1);
    tracep->declBit(c+506,"auto_in_wvalid", false,-1);
    tracep->declBus(c+507,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+508,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+509,"auto_in_wlast", false,-1);
    tracep->declBit(c+510,"auto_in_bready", false,-1);
    tracep->declBit(c+111,"auto_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1115,"auto_in_arready", false,-1);
    tracep->declBit(c+511,"auto_in_arvalid", false,-1);
    tracep->declBus(c+512,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+513,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+514,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+515,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+516,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+517,"auto_in_rready", false,-1);
    tracep->declBit(c+114,"auto_in_rvalid", false,-1);
    tracep->declBus(c+115,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_in_rlast", false,-1);
    tracep->declBit(c+1037,"auto_out_awready", false,-1);
    tracep->declBit(c+1038,"auto_out_awvalid", false,-1);
    tracep->declBus(c+35,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1027,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1028,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1039,"auto_out_wready", false,-1);
    tracep->declBit(c+1040,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1030,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_out_wlast", false,-1);
    tracep->declBit(c+1041,"auto_out_bready", false,-1);
    tracep->declBit(c+120,"auto_out_bvalid", false,-1);
    tracep->declBus(c+112,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+122,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1285,"auto_out_arready", false,-1);
    tracep->declBit(c+1286,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1279,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1280,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1281,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1287,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+517,"auto_out_rready", false,-1);
    tracep->declBit(c+114,"auto_out_rvalid", false,-1);
    tracep->declBus(c+115,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+124,"auto_out_rlast", false,-1);
    tracep->declBit(c+1040,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+125,"w_idle", false,-1);
    tracep->declBit(c+1042,"in_awready", false,-1);
    tracep->declBit(c+126,"busy", false,-1);
    tracep->declBus(c+127,"r_addr", false,-1, 31,0);
    tracep->declBus(c+128,"r_len", false,-1, 7,0);
    tracep->declBus(c+1288,"len", false,-1, 7,0);
    tracep->declBus(c+1289,"addr", false,-1, 31,0);
    tracep->declBit(c+129,"busy_1", false,-1);
    tracep->declBus(c+130,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+131,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+132,"len_1", false,-1, 7,0);
    tracep->declBus(c+1043,"addr_1", false,-1, 31,0);
    tracep->declBit(c+133,"wbeats_latched", false,-1);
    tracep->declBit(c+1038,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1044,"wbeats_valid", false,-1);
    tracep->declBus(c+134,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1045,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1032,"w_last", false,-1);
    tracep->declBit(c+1041,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1115,"io_enq_ready", false,-1);
    tracep->declBit(c+511,"io_enq_valid", false,-1);
    tracep->declBus(c+512,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+513,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+514,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+515,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+516,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1290,"io_deq_ready", false,-1);
    tracep->declBit(c+1286,"io_deq_valid", false,-1);
    tracep->declBus(c+1278,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1291,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1292,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1280,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1281,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+151,"ram", false,-1, 48,0);
    tracep->declBit(c+1116,"full", false,-1);
    tracep->declBit(c+1286,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1293,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+109,"io_enq_ready", false,-1);
    tracep->declBit(c+503,"io_enq_valid", false,-1);
    tracep->declBus(c+1471,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+504,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1472,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+505,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1473,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1046,"io_deq_ready", false,-1);
    tracep->declBit(c+1047,"io_deq_valid", false,-1);
    tracep->declBus(c+35,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1048,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+153,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1028,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+36,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+154,"ram", false,-1, 48,0);
    tracep->declBit(c+156,"full", false,-1);
    tracep->declBit(c+1047,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1049,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+110,"io_enq_ready", false,-1);
    tracep->declBit(c+506,"io_enq_valid", false,-1);
    tracep->declBus(c+507,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+508,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+509,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1050,"io_deq_ready", false,-1);
    tracep->declBit(c+1051,"io_deq_valid", false,-1);
    tracep->declBus(c+1030,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1031,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1441,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+157,"ram", false,-1, 36,0);
    tracep->declBit(c+159,"full", false,-1);
    tracep->declBit(c+1051,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1052,"do_enq", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1053,"auto_in_awready", false,-1);
    tracep->declBit(c+1054,"auto_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1056,"auto_in_wready", false,-1);
    tracep->declBit(c+1057,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1030,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1058,"auto_in_bready", false,-1);
    tracep->declBit(c+160,"auto_in_bvalid", false,-1);
    tracep->declBus(c+161,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+162,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1059,"auto_in_arready", false,-1);
    tracep->declBit(c+1294,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1295,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1060,"auto_in_rready", false,-1);
    tracep->declBit(c+163,"auto_in_rvalid", false,-1);
    tracep->declBus(c+164,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+165,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+166,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1059,"nodeIn_arready", false,-1);
    tracep->declBit(c+1053,"nodeIn_awready", false,-1);
    tracep->declBit(c+1061,"w_sel0", false,-1);
    tracep->declBit(c+160,"w_full", false,-1);
    tracep->declBus(c+161,"w_id", false,-1, 3,0);
    tracep->declBit(c+167,"r_sel1", false,-1);
    tracep->declBit(c+168,"w_sel1", false,-1);
    tracep->declBit(c+163,"r_full", false,-1);
    tracep->declBus(c+164,"r_id", false,-1, 3,0);
    tracep->declBit(c+1296,"ren", false,-1);
    tracep->declBit(c+169,"rdata_REG", false,-1);
    tracep->declBus(c+170,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+171,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+172,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+173,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1297,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1296,"R0_en", false,-1);
    tracep->declBit(c+1407,"R0_clk", false,-1);
    tracep->declBus(c+174,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1062,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1063,"W0_en", false,-1);
    tracep->declBit(c+1407,"W0_clk", false,-1);
    tracep->declBus(c+1030,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1031,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+109,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+503,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1471,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+504,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1472,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+505,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1473,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+506,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+507,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+508,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+509,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+510,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+111,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1115,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+511,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+512,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+513,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+514,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+515,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+516,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+517,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+114,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+115,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+109,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+503,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1471,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+504,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1472,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+505,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1473,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+506,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+507,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+508,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+509,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+510,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+111,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+112,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1115,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+511,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+512,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+513,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+514,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+515,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+516,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+517,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+114,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+115,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1064,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1065,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1027,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1028,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1039,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1040,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1030,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1041,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+120,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1298,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1299,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1279,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1280,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1281,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+517,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+114,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+115,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1053,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1054,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1056,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1057,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1030,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1058,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+160,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+161,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+162,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1059,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1294,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1295,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1060,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+163,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+164,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+165,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+166,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1066,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1067,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+175,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1301,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1442,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+176,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+34,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1026,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1027,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1028,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+37,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1029,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1030,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+452,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+38,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+41,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1277,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1279,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1280,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1281,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1437,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+42,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+43,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+45,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+120,"in_0_bvalid", false,-1);
    tracep->declBit(c+114,"in_0_rvalid", false,-1);
    tracep->declBit(c+1068,"in_0_wready", false,-1);
    tracep->declBit(c+1069,"in_0_awready", false,-1);
    tracep->declBit(c+1298,"in_0_arready", false,-1);
    tracep->declBit(c+1064,"anonIn_awready", false,-1);
    tracep->declBit(c+1302,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1303,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1304,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1070,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1071,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1072,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1305,"arSel", false,-1, 15,0);
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
    tracep->declBit(c+1073,"in_0_awvalid", false,-1);
    tracep->declBit(c+1074,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1075,"in_0_wvalid", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+242,"io_enq_ready", false,-1);
    tracep->declBit(c+1074,"io_enq_valid", false,-1);
    tracep->declBus(c+1076,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1077,"io_deq_ready", false,-1);
    tracep->declBit(c+1078,"io_deq_valid", false,-1);
    tracep->declBus(c+1079,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+243,"wrap", false,-1);
    tracep->declBit(c+244,"wrap_1", false,-1);
    tracep->declBit(c+245,"maybe_full", false,-1);
    tracep->declBit(c+246,"ptr_match", false,-1);
    tracep->declBit(c+247,"empty", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+1078,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1080,"do_deq", false,-1);
    tracep->declBit(c+1081,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+244,"R0_addr", false,-1);
    tracep->declBit(c+1470,"R0_en", false,-1);
    tracep->declBit(c+1407,"R0_clk", false,-1);
    tracep->declBus(c+249,"R0_data", false,-1, 2,0);
    tracep->declBit(c+243,"W0_addr", false,-1);
    tracep->declBit(c+1081,"W0_en", false,-1);
    tracep->declBit(c+1407,"W0_clk", false,-1);
    tracep->declBus(c+1076,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1037,"auto_in_awready", false,-1);
    tracep->declBit(c+1038,"auto_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1027,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1028,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1039,"auto_in_wready", false,-1);
    tracep->declBit(c+1040,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1030,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_in_wlast", false,-1);
    tracep->declBit(c+1041,"auto_in_bready", false,-1);
    tracep->declBit(c+120,"auto_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+122,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1285,"auto_in_arready", false,-1);
    tracep->declBit(c+1286,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1279,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1280,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1281,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1287,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+517,"auto_in_rready", false,-1);
    tracep->declBit(c+114,"auto_in_rvalid", false,-1);
    tracep->declBus(c+115,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+124,"auto_in_rlast", false,-1);
    tracep->declBit(c+1064,"auto_out_awready", false,-1);
    tracep->declBit(c+1065,"auto_out_awvalid", false,-1);
    tracep->declBus(c+35,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1027,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1028,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+36,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1039,"auto_out_wready", false,-1);
    tracep->declBit(c+1040,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1030,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_out_wlast", false,-1);
    tracep->declBit(c+1041,"auto_out_bready", false,-1);
    tracep->declBit(c+120,"auto_out_bvalid", false,-1);
    tracep->declBus(c+112,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1298,"auto_out_arready", false,-1);
    tracep->declBit(c+1299,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1279,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1280,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1281,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+517,"auto_out_rready", false,-1);
    tracep->declBit(c+114,"auto_out_rvalid", false,-1);
    tracep->declBus(c+115,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+1306,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+455,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+1307,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+456,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+1308,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+457,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+1309,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+458,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+268,"io_enq_ready", false,-1);
    tracep->declBit(c+1310,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+459,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+272,"io_enq_ready", false,-1);
    tracep->declBit(c+1311,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+460,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+1312,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+461,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+280,"io_enq_ready", false,-1);
    tracep->declBit(c+1313,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+462,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+463,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+464,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+288,"io_enq_ready", false,-1);
    tracep->declBit(c+465,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+466,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+467,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+468,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+469,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+470,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+1314,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+471,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+472,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+473,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+474,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+475,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+476,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+477,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+478,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+479,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+480,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+481,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+324,"io_enq_ready", false,-1);
    tracep->declBit(c+482,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+483,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+484,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+485,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+486,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+487,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+488,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+489,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+340,"io_enq_ready", false,-1);
    tracep->declBit(c+490,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+491,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+344,"io_enq_ready", false,-1);
    tracep->declBit(c+1315,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+492,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+493,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+494,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+495,"io_enq_valid", false,-1);
    tracep->declBit(c+119,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+496,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+1316,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+497,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+360,"io_enq_ready", false,-1);
    tracep->declBit(c+1317,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+498,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+1318,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+499,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+1319,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+500,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+1320,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+501,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+1321,"io_enq_valid", false,-1);
    tracep->declBit(c+1287,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+502,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1443,"reset", false,-1);
    tracep->declBit(c+109,"auto_master_out_awready", false,-1);
    tracep->declBit(c+503,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1471,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+504,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1472,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+505,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1473,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_master_out_wready", false,-1);
    tracep->declBit(c+506,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+507,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+508,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+509,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+510,"auto_master_out_bready", false,-1);
    tracep->declBit(c+111,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+112,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1115,"auto_master_out_arready", false,-1);
    tracep->declBit(c+511,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+512,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+513,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+514,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+515,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+516,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+517,"auto_master_out_rready", false,-1);
    tracep->declBit(c+114,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+115,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+116,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1443,"reset", false,-1);
    tracep->declBit(c+1467,"io_interrupt", false,-1);
    tracep->declBit(c+109,"io_master_awready", false,-1);
    tracep->declBit(c+503,"io_master_awvalid", false,-1);
    tracep->declBus(c+504,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1471,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1472,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+505,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1473,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"io_master_wready", false,-1);
    tracep->declBit(c+506,"io_master_wvalid", false,-1);
    tracep->declBus(c+507,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+508,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+509,"io_master_wlast", false,-1);
    tracep->declBit(c+510,"io_master_bready", false,-1);
    tracep->declBit(c+111,"io_master_bvalid", false,-1);
    tracep->declBus(c+113,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+112,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1115,"io_master_arready", false,-1);
    tracep->declBit(c+511,"io_master_arvalid", false,-1);
    tracep->declBus(c+513,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+512,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+514,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+515,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+516,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+517,"io_master_rready", false,-1);
    tracep->declBit(c+114,"io_master_rvalid", false,-1);
    tracep->declBus(c+117,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+116,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+118,"io_master_rlast", false,-1);
    tracep->declBus(c+115,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1474,"io_slave_awready", false,-1);
    tracep->declBit(c+1467,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1475,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1471,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1472,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1476,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1473,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1477,"io_slave_wready", false,-1);
    tracep->declBit(c+1467,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1475,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1471,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1467,"io_slave_wlast", false,-1);
    tracep->declBit(c+1467,"io_slave_bready", false,-1);
    tracep->declBit(c+1478,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1479,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1480,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1481,"io_slave_arready", false,-1);
    tracep->declBit(c+1467,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1475,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1471,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1472,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1476,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1473,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1467,"io_slave_rready", false,-1);
    tracep->declBit(c+1482,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1483,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1484,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1485,"io_slave_rlast", false,-1);
    tracep->declBus(c+1486,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+518,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+519,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+520,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+521,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+522,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+518,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+519,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+523,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+524,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+525,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1471,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1472,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1487,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1473,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+526,"ifu_arvalid", false,-1);
    tracep->declBit(c+527,"ifu_arready", false,-1);
    tracep->declBus(c+1082,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1083,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1084,"ifu_rlast", false,-1);
    tracep->declBus(c+1085,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1086,"ifu_rvalid", false,-1);
    tracep->declBit(c+528,"ifu_rready", false,-1);
    tracep->declBit(c+1488,"useless1", false,-1);
    tracep->declBit(c+1489,"useless2", false,-1);
    tracep->declBit(c+1490,"useless3", false,-1);
    tracep->declBit(c+1491,"useless4", false,-1);
    tracep->declBus(c+529,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1471,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1472,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+530,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1473,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+531,"lsu_arvalid", false,-1);
    tracep->declBit(c+532,"lsu_arready", false,-1);
    tracep->declBus(c+1087,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1088,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1089,"lsu_rlast", false,-1);
    tracep->declBus(c+1090,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1091,"lsu_rvalid", false,-1);
    tracep->declBit(c+533,"lsu_rready", false,-1);
    tracep->declBus(c+529,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1471,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1472,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+534,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1473,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+535,"lsu_awvalid", false,-1);
    tracep->declBit(c+1092,"lsu_awready", false,-1);
    tracep->declBus(c+536,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+537,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+538,"lsu_wlast", false,-1);
    tracep->declBit(c+539,"lsu_wvalid", false,-1);
    tracep->declBit(c+1093,"lsu_wready", false,-1);
    tracep->declBus(c+1094,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1095,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1096,"lsu_bvalid", false,-1);
    tracep->declBit(c+540,"lsu_bready", false,-1);
    tracep->declBus(c+541,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1471,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1472,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+542,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1473,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+543,"axi_arvalid", false,-1);
    tracep->declBit(c+1445,"axi_arready", false,-1);
    tracep->declBus(c+1097,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1098,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1099,"axi_rlast", false,-1);
    tracep->declBus(c+1100,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+1101,"axi_rvalid", false,-1);
    tracep->declBit(c+544,"axi_rready", false,-1);
    tracep->declBus(c+504,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1471,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1472,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+505,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1473,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+503,"axi_awvalid", false,-1);
    tracep->declBit(c+109,"axi_awready", false,-1);
    tracep->declBus(c+507,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+508,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+509,"axi_wlast", false,-1);
    tracep->declBit(c+506,"axi_wvalid", false,-1);
    tracep->declBit(c+110,"axi_wready", false,-1);
    tracep->declBus(c+113,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+112,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+111,"axi_bvalid", false,-1);
    tracep->declBit(c+510,"axi_bready", false,-1);
    tracep->declBus(c+545,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+546,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+547,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+548,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+549,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+550,"clint_arvalid", false,-1);
    tracep->declBit(c+551,"clint_arready", false,-1);
    tracep->declBus(c+552,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+553,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+554,"clint_rlast", false,-1);
    tracep->declBus(c+1471,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+555,"clint_rvalid", false,-1);
    tracep->declBit(c+556,"clint_rready", false,-1);
    tracep->declBus(c+1492,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1493,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1494,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1495,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1496,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1497,"clint_awvalid", false,-1);
    tracep->declBit(c+557,"clint_awready", false,-1);
    tracep->declBus(c+1498,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1499,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1500,"clint_wlast", false,-1);
    tracep->declBit(c+1501,"clint_wvalid", false,-1);
    tracep->declBit(c+558,"clint_wready", false,-1);
    tracep->declBus(c+559,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1471,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+560,"clint_bvalid", false,-1);
    tracep->declBit(c+1502,"clint_bready", false,-1);
    tracep->declBus(c+1325,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1326,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1446,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1447,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1117,"a5", false,-1, 31,0);
    tracep->declBus(c+1327,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1446,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1447,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1328,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1448,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1329,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1330,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1331,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1332,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1333,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1334,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1335,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1336,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1337,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1338,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1339,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1340,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1341,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1342,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1343,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+561,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+562,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1344,"csr_write", false,-1);
    tracep->declBus(c+1345,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1118+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+563,"wdata", false,-1, 31,0);
    tracep->declBus(c+564,"waddr", false,-1, 4,0);
    tracep->declBit(c+565,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1122+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+566,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+567,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+568,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+569,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+570,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+571,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+572,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+573,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+574,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+575,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+576,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+577,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+578,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+579,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+580,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+581,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+529,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+582,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+583,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+584,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+585,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+586,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+587,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+588,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+589,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+590,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+591,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+592,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+593,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+525,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1471,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1472,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1487,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1473,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+526,"arvalid_i_a", false,-1);
    tracep->declBit(c+527,"arready_o_a", false,-1);
    tracep->declBus(c+1082,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+1083,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+1084,"rlast_o_a", false,-1);
    tracep->declBus(c+1085,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+1086,"rvalid_o_a", false,-1);
    tracep->declBit(c+528,"rready_i_a", false,-1);
    tracep->declBus(c+1503,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1471,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1472,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1476,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1473,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1467,"awvalid_i_a", false,-1);
    tracep->declBit(c+1102,"awready_o_a", false,-1);
    tracep->declBus(c+1503,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1471,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1467,"wlast_i_a", false,-1);
    tracep->declBit(c+1467,"wvalid_i_a", false,-1);
    tracep->declBit(c+1103,"wready_o_a", false,-1);
    tracep->declBus(c+1104,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1105,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1106,"bvalid_o_a", false,-1);
    tracep->declBit(c+1467,"bready_i_a", false,-1);
    tracep->declBus(c+529,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1471,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1472,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+530,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1473,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+531,"arvalid_i_b", false,-1);
    tracep->declBit(c+532,"arready_o_b", false,-1);
    tracep->declBus(c+1087,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+1088,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+1089,"rlast_o_b", false,-1);
    tracep->declBus(c+1090,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+1091,"rvalid_o_b", false,-1);
    tracep->declBit(c+533,"rready_i_b", false,-1);
    tracep->declBus(c+529,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1471,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1472,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+534,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1473,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+535,"awvalid_i_b", false,-1);
    tracep->declBit(c+1092,"awready_o_b", false,-1);
    tracep->declBus(c+536,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+537,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+538,"wlast_i_b", false,-1);
    tracep->declBit(c+539,"wvalid_i_b", false,-1);
    tracep->declBit(c+1093,"wready_o_b", false,-1);
    tracep->declBus(c+1094,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1095,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1096,"bvalid_o_b", false,-1);
    tracep->declBit(c+540,"bready_i_b", false,-1);
    tracep->declBus(c+541,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1471,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1472,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+542,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1473,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+543,"arvalid_o", false,-1);
    tracep->declBit(c+1445,"arready_i", false,-1);
    tracep->declBus(c+1097,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1098,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1099,"rlast_i", false,-1);
    tracep->declBus(c+1100,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1101,"rvalid_i", false,-1);
    tracep->declBit(c+544,"rready_o", false,-1);
    tracep->declBus(c+504,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1471,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1472,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+505,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1473,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+503,"awvalid_o", false,-1);
    tracep->declBit(c+109,"awready_i", false,-1);
    tracep->declBus(c+507,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+508,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+509,"wlast_o", false,-1);
    tracep->declBit(c+506,"wvalid_o", false,-1);
    tracep->declBit(c+110,"wready_i", false,-1);
    tracep->declBus(c+113,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+112,"bid_i", false,-1, 3,0);
    tracep->declBit(c+111,"bvalid_i", false,-1);
    tracep->declBit(c+510,"bready_o", false,-1);
    tracep->declBit(c+594,"ar_switch", false,-1);
    tracep->declBit(c+595,"r_switch", false,-1);
    tracep->declBit(c+596,"aw_switch", false,-1);
    tracep->declBit(c+597,"w_switch", false,-1);
    tracep->declBit(c+598,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+545,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+546,"arid_i", false,-1, 3,0);
    tracep->declBus(c+547,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+548,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+549,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+550,"arvalid_i", false,-1);
    tracep->declBit(c+551,"arready_o", false,-1);
    tracep->declBus(c+552,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+553,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+554,"rlast_o", false,-1);
    tracep->declBus(c+1471,"rid_o", false,-1, 3,0);
    tracep->declBit(c+555,"rvalid_o", false,-1);
    tracep->declBit(c+556,"rready_i", false,-1);
    tracep->declBus(c+1492,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1493,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1494,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1495,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1496,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1497,"awvalid_i", false,-1);
    tracep->declBit(c+557,"awready_o", false,-1);
    tracep->declBus(c+1498,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1499,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1500,"wlast_i", false,-1);
    tracep->declBit(c+1501,"wvalid_i", false,-1);
    tracep->declBit(c+558,"wready_o", false,-1);
    tracep->declBus(c+559,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1471,"bid_o", false,-1, 3,0);
    tracep->declBit(c+560,"bvalid_o", false,-1);
    tracep->declBit(c+1502,"bready_i", false,-1);
    tracep->declBit(c+599,"ar_state", false,-1);
    tracep->declBit(c+600,"r_state", false,-1);
    tracep->declBit(c+601,"aw_state", false,-1);
    tracep->declBit(c+602,"w_state", false,-1);
    tracep->declBit(c+1504,"b_state", false,-1);
    tracep->declBus(c+603,"araddr", false,-1, 31,0);
    tracep->declBus(c+604,"awaddr", false,-1, 31,0);
    tracep->declBus(c+605,"wdata", false,-1, 31,0);
    tracep->declBus(c+606,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1505,"wvalid", false,-1);
    tracep->declBit(c+607,"flag_waddr", false,-1);
    tracep->declBit(c+608,"flag_wdata", false,-1);
    tracep->declBit(c+609,"flag_rdata", false,-1);
    tracep->declBit(c+610,"flag_raddr", false,-1);
    tracep->declBit(c+1506,"flag_write", false,-1);
    tracep->declBus(c+611,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+612,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+613,"w_delay", false,-1, 4,0);
    tracep->declBus(c+614,"r_delay", false,-1, 4,0);
    tracep->declBus(c+615,"LFSR", false,-1, 4,0);
    tracep->declBit(c+616,"lfsr_in", false,-1);
    tracep->declBus(c+617,"write_box", false,-1, 1,0);
    tracep->declQuad(c+618,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+1327,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1446,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1447,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1328,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1448,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1329,"a_in_src_i", false,-1);
    tracep->declBus(c+1330,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1331,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1332,"adder_a_src_i", false,-1);
    tracep->declBit(c+1333,"adder_out_src_i", false,-1);
    tracep->declBus(c+1334,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1335,"MemRead_i", false,-1);
    tracep->declBit(c+1336,"MemWrite_i", false,-1);
    tracep->declBus(c+1337,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1338,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1339,"wb_src_i", false,-1);
    tracep->declBit(c+1340,"csr_write_i", false,-1);
    tracep->declBit(c+1341,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1342,"reg_write_i", false,-1);
    tracep->declBus(c+1343,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+561,"exu_valid_i", false,-1);
    tracep->declBit(c+562,"exu_ready_o", false,-1);
    tracep->declBus(c+566,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+567,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+568,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+569,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+570,"npc_o", false,-1, 31,0);
    tracep->declBit(c+571,"MemRead_o", false,-1);
    tracep->declBit(c+572,"MemWrite_o", false,-1);
    tracep->declBus(c+573,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+574,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+575,"wb_src_o", false,-1);
    tracep->declBit(c+576,"csr_write_o", false,-1);
    tracep->declBit(c+577,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+578,"reg_write_o", false,-1);
    tracep->declBus(c+579,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+580,"exu_valid_o", false,-1);
    tracep->declBit(c+581,"exu_ready_i", false,-1);
    tracep->declBus(c+620,"pc", false,-1, 31,0);
    tracep->declBus(c+567,"rs1", false,-1, 31,0);
    tracep->declBus(c+568,"rs2", false,-1, 31,0);
    tracep->declBus(c+621,"imm", false,-1, 31,0);
    tracep->declBus(c+622,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+623,"a_in_src", false,-1);
    tracep->declBus(c+624,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+625,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+626,"adder_a_src", false,-1);
    tracep->declBit(c+627,"adder_out_src", false,-1);
    tracep->declBus(c+628,"alu_op", false,-1, 3,0);
    tracep->declBus(c+629,"a_in", false,-1, 31,0);
    tracep->declBus(c+630,"b_in", false,-1, 31,0);
    tracep->declBus(c+631,"a_out", false,-1, 31,0);
    tracep->declBus(c+632,"add_out", false,-1, 31,0);
    tracep->declBus(c+633,"pc_new", false,-1, 31,0);
    tracep->declBus(c+566,"alu_result", false,-1, 31,0);
    tracep->declBus(c+570,"npc", false,-1, 31,0);
    tracep->declBit(c+634,"zero", false,-1);
    tracep->declBus(c+1473,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1507,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1508,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+635,"current_state", false,-1, 1,0);
    tracep->declBus(c+636,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+629,"a", false,-1, 31,0);
    tracep->declBus(c+630,"b", false,-1, 31,0);
    tracep->declBus(c+628,"op", false,-1, 3,0);
    tracep->declBus(c+566,"alu_result", false,-1, 31,0);
    tracep->declBit(c+634,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1509,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+567,"d0", false,-1, 31,0);
    tracep->declBus(c+620,"d1", false,-1, 31,0);
    tracep->declBit(c+623,"sel", false,-1);
    tracep->declBus(c+629,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1509,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+568,"d0", false,-1, 31,0);
    tracep->declBus(c+621,"d1", false,-1, 31,0);
    tracep->declBus(c+1510,"d2", false,-1, 31,0);
    tracep->declBus(c+622,"d3", false,-1, 31,0);
    tracep->declBus(c+624,"sel", false,-1, 1,0);
    tracep->declBus(c+630,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+631,"a", false,-1, 31,0);
    tracep->declBus(c+621,"b", false,-1, 31,0);
    tracep->declBus(c+632,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1509,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+620,"d0", false,-1, 31,0);
    tracep->declBus(c+567,"d1", false,-1, 31,0);
    tracep->declBit(c+626,"sel", false,-1);
    tracep->declBus(c+631,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1509,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+632,"d0", false,-1, 31,0);
    tracep->declBus(c+622,"d1", false,-1, 31,0);
    tracep->declBit(c+627,"sel", false,-1);
    tracep->declBus(c+633,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+637,"pc4", false,-1, 31,0);
    tracep->declBus(c+633,"pc_new", false,-1, 31,0);
    tracep->declBus(c+625,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+634,"zero", false,-1);
    tracep->declBus(c+566,"alu_result", false,-1, 31,0);
    tracep->declBus(c+570,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+1325,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1326,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1446,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1447,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1117,"a5", false,-1, 31,0);
    tracep->declBus(c+518,"pc_i", false,-1, 31,0);
    tracep->declBus(c+519,"inst_i", false,-1, 31,0);
    tracep->declBit(c+523,"idu_valid_i", false,-1);
    tracep->declBit(c+524,"idu_ready_o", false,-1);
    tracep->declBus(c+1327,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1446,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1447,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1328,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1448,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1329,"a_in_src_o", false,-1);
    tracep->declBus(c+1330,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1331,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1332,"adder_a_src_o", false,-1);
    tracep->declBit(c+1333,"adder_out_src_o", false,-1);
    tracep->declBus(c+1334,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1335,"MemRead_o", false,-1);
    tracep->declBit(c+1336,"MemWrite_o", false,-1);
    tracep->declBus(c+1337,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1338,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1339,"wb_src_o", false,-1);
    tracep->declBit(c+1340,"csr_write_o", false,-1);
    tracep->declBit(c+1341,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1342,"reg_write_o", false,-1);
    tracep->declBus(c+1343,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+561,"idu_valid_o", false,-1);
    tracep->declBit(c+562,"idu_ready_i", false,-1);
    tracep->declBit(c+1344,"csr_write_i", false,-1);
    tracep->declBus(c+1345,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1154+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1327,"pc", false,-1, 31,0);
    tracep->declBus(c+1346,"inst", false,-1, 31,0);
    tracep->declBus(c+1347,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1473,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1507,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1508,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+638,"current_state", false,-1, 1,0);
    tracep->declBus(c+639,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1346,"inst", false,-1, 31,0);
    tracep->declBus(c+1334,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1348,"opcode", false,-1, 6,0);
    tracep->declBus(c+1349,"funct3", false,-1, 2,0);
    tracep->declBus(c+1350,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1344,"wen", false,-1);
    tracep->declBus(c+1346,"inst", false,-1, 31,0);
    tracep->declBus(c+1345,"wdata", false,-1, 31,0);
    tracep->declBus(c+1117,"NO", false,-1, 31,0);
    tracep->declBus(c+1327,"pc", false,-1, 31,0);
    tracep->declBus(c+1448,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1158+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1162,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1163,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1164,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1165,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1511,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1512,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1348,"opcode", false,-1, 6,0);
    tracep->declBus(c+1349,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1346,"inst", false,-1, 31,0);
    tracep->declBit(c+1329,"a_in_src", false,-1);
    tracep->declBus(c+1330,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1342,"reg_write", false,-1);
    tracep->declBus(c+1331,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1332,"adder_a_src", false,-1);
    tracep->declBit(c+1335,"MemRead", false,-1);
    tracep->declBit(c+1336,"MemWrite", false,-1);
    tracep->declBus(c+1347,"wmask", false,-1, 7,0);
    tracep->declBit(c+1339,"wb_src", false,-1);
    tracep->declBus(c+1338,"rmask", false,-1, 2,0);
    tracep->declBit(c+1340,"csr_write", false,-1);
    tracep->declBit(c+1333,"adder_out_src", false,-1);
    tracep->declBit(c+1341,"csr_wdata_src", false,-1);
    tracep->declBus(c+1348,"opcode", false,-1, 6,0);
    tracep->declBus(c+1349,"funct3", false,-1, 2,0);
    tracep->declBus(c+1350,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1509,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1346,"inst", false,-1, 31,0);
    tracep->declBus(c+1328,"data", false,-1, 31,0);
    tracep->declBus(c+1348,"opcode", false,-1, 6,0);
    tracep->declBus(c+1349,"funct3", false,-1, 2,0);
    tracep->declBus(c+1350,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+525,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1471,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1472,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1487,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1473,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+526,"arvalid_o", false,-1);
    tracep->declBit(c+527,"arready_i", false,-1);
    tracep->declBus(c+1082,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1083,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1084,"rlast_i", false,-1);
    tracep->declBus(c+1085,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1086,"rvalid_i", false,-1);
    tracep->declBit(c+528,"rready_o", false,-1);
    tracep->declBus(c+520,"npc_i", false,-1, 31,0);
    tracep->declBit(c+521,"ifu_valid_i", false,-1);
    tracep->declBit(c+522,"ifu_ready_o", false,-1);
    tracep->declBus(c+518,"pc_o", false,-1, 31,0);
    tracep->declBus(c+519,"inst_o", false,-1, 31,0);
    tracep->declBit(c+523,"ifu_valid_o", false,-1);
    tracep->declBit(c+524,"ifu_ready_i", false,-1);
    tracep->declBus(c+640,"pc", false,-1, 31,0);
    tracep->declBus(c+1513,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1514,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1515,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1516,"lfsr_in", false,-1);
    tracep->declBit(c+526,"arvalid", false,-1);
    tracep->declBus(c+525,"araddr", false,-1, 31,0);
    tracep->declBus(c+641,"inst", false,-1, 31,0);
    tracep->declBit(c+528,"rready", false,-1);
    tracep->declBus(c+1517,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1518+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1550,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1476,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1466,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1487,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1551,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1552,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+642,"current_state", false,-1, 2,0);
    tracep->declBus(c+1449,"next_state", false,-1, 2,0);
    tracep->declBus(c+643,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+644,"ready_flag", false,-1);
    tracep->declBit(c+645,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+566,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+567,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+568,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+569,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+570,"npc_i", false,-1, 31,0);
    tracep->declBit(c+571,"MemRead_i", false,-1);
    tracep->declBit(c+572,"MemWrite_i", false,-1);
    tracep->declBus(c+573,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+574,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+575,"wb_src_i", false,-1);
    tracep->declBit(c+576,"csr_write_i", false,-1);
    tracep->declBit(c+577,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+578,"reg_write_i", false,-1);
    tracep->declBus(c+579,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+580,"lsu_valid_i", false,-1);
    tracep->declBit(c+581,"lsu_ready_o", false,-1);
    tracep->declBus(c+529,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+582,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+583,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+584,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+585,"npc_o", false,-1, 31,0);
    tracep->declBus(c+586,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+587,"wb_src_o", false,-1);
    tracep->declBit(c+588,"csr_write_o", false,-1);
    tracep->declBit(c+589,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+590,"reg_write_o", false,-1);
    tracep->declBus(c+591,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+592,"lsu_valid_o", false,-1);
    tracep->declBit(c+593,"lsu_ready_i", false,-1);
    tracep->declBus(c+529,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1471,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1472,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+530,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1473,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+531,"arvalid_o", false,-1);
    tracep->declBit(c+532,"arready_i", false,-1);
    tracep->declBus(c+1087,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1088,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1089,"rlast_i", false,-1);
    tracep->declBus(c+1090,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1091,"rvalid_i", false,-1);
    tracep->declBit(c+533,"rready_o", false,-1);
    tracep->declBus(c+529,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1471,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1472,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+534,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1473,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+535,"awvalid_o", false,-1);
    tracep->declBit(c+1092,"awready_i", false,-1);
    tracep->declBus(c+536,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+537,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+538,"wlast_o", false,-1);
    tracep->declBit(c+539,"wvalid_o", false,-1);
    tracep->declBit(c+1093,"wready_i", false,-1);
    tracep->declBus(c+1094,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1095,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1096,"bvalid_i", false,-1);
    tracep->declBit(c+540,"bready_o", false,-1);
    tracep->declBus(c+529,"alu_result", false,-1, 31,0);
    tracep->declBus(c+582,"rs1", false,-1, 31,0);
    tracep->declBus(c+1553,"rs2", false,-1, 31,0);
    tracep->declBus(c+1554,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+586,"rmask", false,-1, 2,0);
    tracep->declBit(c+646,"flag", false,-1);
    tracep->declBit(c+1555,"wvalid_tmp", false,-1);
    tracep->declBus(c+1556,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1557,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1558,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1559,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1560,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1561,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1562,"lfsr_in", false,-1);
    tracep->declBit(c+531,"arvalid", false,-1);
    tracep->declBus(c+529,"araddr", false,-1, 31,0);
    tracep->declBit(c+533,"rready", false,-1);
    tracep->declBus(c+529,"awaddr", false,-1, 31,0);
    tracep->declBit(c+535,"awvalid", false,-1);
    tracep->declBus(c+536,"wdata", false,-1, 31,0);
    tracep->declBus(c+537,"wstrb", false,-1, 3,0);
    tracep->declBit(c+539,"wvalid", false,-1);
    tracep->declBit(c+540,"bready", false,-1);
    tracep->declBus(c+1563,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1564+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1596,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1597,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1598+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1630,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1631+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1663+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1695,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1473,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1507,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1508,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1696,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+647,"current_state", false,-1, 1,0);
    tracep->declBus(c+648,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1509,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBus(c+563,"wdata", false,-1, 31,0);
    tracep->declBus(c+564,"waddr", false,-1, 4,0);
    tracep->declBit(c+565,"wen", false,-1);
    tracep->declBus(c+1325,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1446,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1326,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1447,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1117,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1166+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1198+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+529,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+582,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+583,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+584,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+585,"npc_i", false,-1, 31,0);
    tracep->declBus(c+586,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+587,"wb_src_i", false,-1);
    tracep->declBit(c+588,"csr_write_i", false,-1);
    tracep->declBit(c+589,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+590,"reg_write_i", false,-1);
    tracep->declBus(c+591,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+592,"wbu_valid_i", false,-1);
    tracep->declBit(c+593,"wbu_ready_o", false,-1);
    tracep->declBus(c+520,"npc_o", false,-1, 31,0);
    tracep->declBit(c+521,"wbu_valid_o", false,-1);
    tracep->declBit(c+522,"wbu_ready_i", false,-1);
    tracep->declBus(c+1345,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+563,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1344,"csr_write_o", false,-1);
    tracep->declBit(c+565,"reg_write_o", false,-1);
    tracep->declBus(c+564,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+649,"mem_data", false,-1, 31,0);
    tracep->declBus(c+650,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+651,"alu_result", false,-1, 31,0);
    tracep->declBus(c+652,"rs1", false,-1, 31,0);
    tracep->declBus(c+653,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+654,"rmask", false,-1, 2,0);
    tracep->declBit(c+655,"wb_src", false,-1);
    tracep->declBit(c+656,"csr_wdata_src", false,-1);
    tracep->declBit(c+657,"difftest_check", false,-1);
    tracep->declBit(c+658,"difftest_check_flag", false,-1);
    tracep->declBus(c+1473,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1507,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1508,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+659,"current_state", false,-1, 1,0);
    tracep->declBus(c+660,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1509,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+652,"d0", false,-1, 31,0);
    tracep->declBus(c+653,"d1", false,-1, 31,0);
    tracep->declBit(c+656,"sel", false,-1);
    tracep->declBus(c+1345,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+650,"read_data", false,-1, 31,0);
    tracep->declBus(c+661,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+654,"rmask", false,-1, 2,0);
    tracep->declBus(c+649,"mem_data", false,-1, 31,0);
    tracep->declBus(c+662,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+663,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+664,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+665,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+666,"byte3", false,-1, 31,0);
    tracep->declBus(c+667,"byte2", false,-1, 31,0);
    tracep->declBus(c+668,"byte1", false,-1, 31,0);
    tracep->declBus(c+669,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1509,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+651,"d0", false,-1, 31,0);
    tracep->declBus(c+649,"d1", false,-1, 31,0);
    tracep->declBit(c+655,"sel", false,-1);
    tracep->declBus(c+563,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1444,"rst_n", false,-1);
    tracep->declBus(c+541,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1471,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1472,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+542,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1473,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+543,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1445,"axi_arready_o", false,-1);
    tracep->declBus(c+1097,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1098,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1099,"axi_rlast_o", false,-1);
    tracep->declBus(c+1100,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1101,"axi_rvalid_o", false,-1);
    tracep->declBit(c+544,"axi_rready_i", false,-1);
    tracep->declBus(c+504,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1471,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1472,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+505,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1473,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+503,"axi_awvalid_i", false,-1);
    tracep->declBit(c+109,"axi_awready_o", false,-1);
    tracep->declBus(c+507,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+508,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+509,"axi_wlast_i", false,-1);
    tracep->declBit(c+506,"axi_wvalid_i", false,-1);
    tracep->declBit(c+110,"axi_wready_o", false,-1);
    tracep->declBus(c+113,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+112,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+111,"axi_bvalid_o", false,-1);
    tracep->declBit(c+510,"axi_bready_i", false,-1);
    tracep->declBus(c+513,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+512,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+514,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+515,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+516,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+511,"sram_arvalid_o", false,-1);
    tracep->declBit(c+1115,"sram_arready_i", false,-1);
    tracep->declBus(c+116,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+117,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+118,"sram_rlast_i", false,-1);
    tracep->declBus(c+115,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+114,"sram_rvalid_i", false,-1);
    tracep->declBit(c+517,"sram_rready_o", false,-1);
    tracep->declBus(c+504,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1471,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1472,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+505,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1473,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+503,"sram_awvalid_o", false,-1);
    tracep->declBit(c+109,"sram_awready_i", false,-1);
    tracep->declBus(c+507,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+508,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+509,"sram_wlast_o", false,-1);
    tracep->declBit(c+506,"sram_wvalid_o", false,-1);
    tracep->declBit(c+110,"sram_wready_i", false,-1);
    tracep->declBus(c+113,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+112,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+111,"sram_bvalid_i", false,-1);
    tracep->declBit(c+510,"sram_bready_o", false,-1);
    tracep->declBus(c+545,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+546,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+547,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+548,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+549,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+550,"clint_arvalid_o", false,-1);
    tracep->declBit(c+551,"clint_arready_i", false,-1);
    tracep->declBus(c+552,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+553,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+554,"clint_rlast_i", false,-1);
    tracep->declBus(c+1471,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+555,"clint_rvalid_i", false,-1);
    tracep->declBit(c+556,"clint_rready_o", false,-1);
    tracep->declBus(c+1492,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1493,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1494,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1495,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1496,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1497,"clint_awvalid_o", false,-1);
    tracep->declBit(c+557,"clint_awready_i", false,-1);
    tracep->declBus(c+1498,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1499,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1500,"clint_wlast_o", false,-1);
    tracep->declBit(c+1501,"clint_wvalid_o", false,-1);
    tracep->declBit(c+558,"clint_wready_i", false,-1);
    tracep->declBus(c+559,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1471,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+560,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1502,"clint_bready_o", false,-1);
    tracep->declBit(c+670,"ar_switch", false,-1);
    tracep->declBit(c+671,"r_switch", false,-1);
    tracep->declBit(c+672,"aw_switch", false,-1);
    tracep->declBit(c+673,"w_switch", false,-1);
    tracep->declBit(c+674,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"io_d", false,-1);
    tracep->declBit(c+380,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"io_d", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1356,"auto_in_psel", false,-1);
    tracep->declBit(c+1357,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1355,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1466,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"auto_in_pready", false,-1);
    tracep->declBit(c+1467,"auto_in_pslverr", false,-1);
    tracep->declBus(c+694,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1409,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1410,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1411,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1412,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1413,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1414,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1415,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1416,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1417,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1418,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1369,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1356,"in_psel", false,-1);
    tracep->declBit(c+1357,"in_penable", false,-1);
    tracep->declBus(c+1466,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"in_pready", false,-1);
    tracep->declBus(c+694,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1467,"in_pslverr", false,-1);
    tracep->declBus(c+1409,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1410,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1411,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1412,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1413,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1414,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1415,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1416,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1417,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1418,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+698,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+694,"rdata", false,-1, 31,0);
    tracep->declBus(c+699,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+693,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+700,"num", false,-1, 3,0);
    tracep->declBus(c+1411,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+701,"num", false,-1, 3,0);
    tracep->declBus(c+1412,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+702,"num", false,-1, 3,0);
    tracep->declBus(c+1413,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+703,"num", false,-1, 3,0);
    tracep->declBus(c+1414,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+704,"num", false,-1, 3,0);
    tracep->declBus(c+1415,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+705,"num", false,-1, 3,0);
    tracep->declBus(c+1416,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+706,"num", false,-1, 3,0);
    tracep->declBus(c+1417,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+707,"num", false,-1, 3,0);
    tracep->declBus(c+1418,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1239,"auto_in_psel", false,-1);
    tracep->declBit(c+1240,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1355,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1466,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+7,"auto_in_pready", false,-1);
    tracep->declBit(c+1467,"auto_in_pslverr", false,-1);
    tracep->declBus(c+8,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1419,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1420,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1369,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1239,"in_psel", false,-1);
    tracep->declBit(c+1240,"in_penable", false,-1);
    tracep->declBus(c+1466,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+7,"in_pready", false,-1);
    tracep->declBus(c+8,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1467,"in_pslverr", false,-1);
    tracep->declBit(c+1419,"ps2_clk", false,-1);
    tracep->declBit(c+1420,"ps2_data", false,-1);
    tracep->declBus(c+390,"data_r", false,-1, 7,0);
    tracep->declBus(c+391,"old_data", false,-1, 7,0);
    tracep->declBus(c+392,"data_asic", false,-1, 7,0);
    tracep->declBus(c+393,"buffer", false,-1, 7,0);
    tracep->declBit(c+394,"ready", false,-1);
    tracep->declBit(c+395,"nextdata_n", false,-1);
    tracep->declBit(c+396,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1450,"clrn", false,-1);
    tracep->declBit(c+1419,"ps2_clk", false,-1);
    tracep->declBit(c+1420,"ps2_data", false,-1);
    tracep->declBit(c+395,"nextdata_n", false,-1);
    tracep->declBus(c+393,"data", false,-1, 7,0);
    tracep->declBit(c+394,"ready", false,-1);
    tracep->declBit(c+396,"overflow", false,-1);
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
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1066,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1067,"auto_in_wvalid", false,-1);
    tracep->declBit(c+175,"auto_in_arready", false,-1);
    tracep->declBit(c+1300,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1278,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1301,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1442,"auto_in_rready", false,-1);
    tracep->declBit(c+176,"auto_in_rvalid", false,-1);
    tracep->declBus(c+177,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+176,"state", false,-1);
    tracep->declBus(c+178,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+177,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1322,"raddr", false,-1, 31,0);
    tracep->declBit(c+1323,"ren", false,-1);
    tracep->declBus(c+1324,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1358,"auto_in_psel", false,-1);
    tracep->declBit(c+1241,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1351,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1466,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1434,"auto_in_pready", false,-1);
    tracep->declBit(c+1467,"auto_in_pslverr", false,-1);
    tracep->declBus(c+9,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1430,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1386,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1431,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1351,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1358,"in_psel", false,-1);
    tracep->declBit(c+1241,"in_penable", false,-1);
    tracep->declBus(c+1466,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1434,"in_pready", false,-1);
    tracep->declBus(c+9,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1467,"in_pslverr", false,-1);
    tracep->declBit(c+1430,"qspi_sck", false,-1);
    tracep->declBit(c+1386,"qspi_ce_n", false,-1);
    tracep->declBus(c+1431,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1431,"din", false,-1, 3,0);
    tracep->declBus(c+1451,"dout", false,-1, 3,0);
    tracep->declBus(c+1396,"douten", false,-1, 3,0);
    tracep->declBit(c+1452,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1407,"clk_i", false,-1);
    tracep->declBit(c+1408,"rst_i", false,-1);
    tracep->declBus(c+1351,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1110,"dat_i", false,-1, 31,0);
    tracep->declBus(c+9,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1111,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1358,"cyc_i", false,-1);
    tracep->declBit(c+1358,"stb_i", false,-1);
    tracep->declBit(c+1452,"ack_o", false,-1);
    tracep->declBit(c+1109,"we_i", false,-1);
    tracep->declBit(c+1430,"sck", false,-1);
    tracep->declBit(c+1386,"ce_n", false,-1);
    tracep->declBus(c+1431,"din", false,-1, 3,0);
    tracep->declBus(c+1451,"dout", false,-1, 3,0);
    tracep->declBus(c+1396,"douten", false,-1, 3,0);
    tracep->declBus(c+1473,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1507,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1508,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+708,"mr_sck", false,-1);
    tracep->declBit(c+709,"mr_ce_n", false,-1);
    tracep->declBus(c+1431,"mr_din", false,-1, 3,0);
    tracep->declBus(c+710,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+711,"mr_doe", false,-1);
    tracep->declBit(c+712,"mw_sck", false,-1);
    tracep->declBit(c+713,"mw_ce_n", false,-1);
    tracep->declBus(c+1431,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1248,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+714,"mw_doe", false,-1);
    tracep->declBit(c+1397,"mr_rd", false,-1);
    tracep->declBit(c+715,"mr_done", false,-1);
    tracep->declBit(c+1398,"mw_wr", false,-1);
    tracep->declBit(c+1249,"mw_done", false,-1);
    tracep->declBit(c+1358,"wb_valid", false,-1);
    tracep->declBit(c+1370,"wb_we", false,-1);
    tracep->declBit(c+1371,"wb_re", false,-1);
    tracep->declBus(c+1257,"state", false,-1, 1,0);
    tracep->declBus(c+1453,"nstate", false,-1, 1,0);
    tracep->declBus(c+1454,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1455,"qpi_sck", false,-1);
    tracep->declBus(c+1230,"size", false,-1, 2,0);
    tracep->declBus(c+1231,"byte0", false,-1, 7,0);
    tracep->declBus(c+1232,"byte1", false,-1, 7,0);
    tracep->declBus(c+1233,"byte2", false,-1, 7,0);
    tracep->declBus(c+1234,"byte3", false,-1, 7,0);
    tracep->declBus(c+1235,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1450,"rst_n", false,-1);
    tracep->declBus(c+1372,"addr", false,-1, 23,0);
    tracep->declBit(c+1397,"rd", false,-1);
    tracep->declBus(c+1552,"size", false,-1, 2,0);
    tracep->declBit(c+715,"done", false,-1);
    tracep->declBus(c+9,"line", false,-1, 31,0);
    tracep->declBit(c+708,"sck", false,-1);
    tracep->declBit(c+709,"ce_n", false,-1);
    tracep->declBus(c+1431,"din", false,-1, 3,0);
    tracep->declBus(c+710,"dout", false,-1, 3,0);
    tracep->declBit(c+711,"douten", false,-1);
    tracep->declBus(c+1698,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1699,"READ", false,-1, 0,0);
    tracep->declBus(c+1700,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+716,"state", false,-1);
    tracep->declBit(c+1399,"nstate", false,-1);
    tracep->declBus(c+717,"counter", false,-1, 7,0);
    tracep->declBus(c+718,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+411+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1701,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+719,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1450,"rst_n", false,-1);
    tracep->declBus(c+1373,"addr", false,-1, 23,0);
    tracep->declBus(c+1235,"line", false,-1, 31,0);
    tracep->declBus(c+1230,"size", false,-1, 2,0);
    tracep->declBit(c+1398,"wr", false,-1);
    tracep->declBit(c+1249,"done", false,-1);
    tracep->declBit(c+712,"sck", false,-1);
    tracep->declBit(c+713,"ce_n", false,-1);
    tracep->declBus(c+1431,"din", false,-1, 3,0);
    tracep->declBus(c+1248,"dout", false,-1, 3,0);
    tracep->declBit(c+714,"douten", false,-1);
    tracep->declBus(c+1698,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1699,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1236,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+720,"state", false,-1);
    tracep->declBit(c+1400,"nstate", false,-1);
    tracep->declBus(c+721,"counter", false,-1, 7,0);
    tracep->declBus(c+722,"saddr", false,-1, 23,0);
    tracep->declBus(c+1702,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1237,"auto_in_psel", false,-1);
    tracep->declBit(c+1238,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1351,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1466,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"auto_in_pready", false,-1);
    tracep->declBit(c+1467,"auto_in_pslverr", false,-1);
    tracep->declBus(c+691,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1432,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1254,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+686,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+687,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+688,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+689,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1433,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1256,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1270,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1351,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1237,"in_psel", false,-1);
    tracep->declBit(c+1238,"in_penable", false,-1);
    tracep->declBus(c+1466,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"in_pready", false,-1);
    tracep->declBus(c+691,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1467,"in_pslverr", false,-1);
    tracep->declBit(c+1432,"sdram_clk", false,-1);
    tracep->declBit(c+1254,"sdram_cke", false,-1);
    tracep->declBit(c+686,"sdram_cs", false,-1);
    tracep->declBit(c+687,"sdram_ras", false,-1);
    tracep->declBit(c+688,"sdram_cas", false,-1);
    tracep->declBit(c+689,"sdram_we", false,-1);
    tracep->declBus(c+1433,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1256,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1270,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+723,"sdram_dout_en", false,-1);
    tracep->declBus(c+724,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+415,"state", false,-1, 1,0);
    tracep->declBit(c+1258,"req_accept", false,-1);
    tracep->declBit(c+1374,"is_read", false,-1);
    tracep->declBit(c+1375,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1407,"clk_i", false,-1);
    tracep->declBit(c+1408,"rst_i", false,-1);
    tracep->declBus(c+1376,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1374,"inport_rd_i", false,-1);
    tracep->declBus(c+1472,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1351,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1110,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1270,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1258,"inport_accept_o", false,-1);
    tracep->declBit(c+690,"inport_ack_o", false,-1);
    tracep->declBit(c+1467,"inport_error_o", false,-1);
    tracep->declBus(c+691,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1432,"sdram_clk_o", false,-1);
    tracep->declBit(c+1254,"sdram_cke_o", false,-1);
    tracep->declBit(c+686,"sdram_cs_o", false,-1);
    tracep->declBit(c+687,"sdram_ras_o", false,-1);
    tracep->declBit(c+688,"sdram_cas_o", false,-1);
    tracep->declBit(c+689,"sdram_we_o", false,-1);
    tracep->declBus(c+1256,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1433,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+724,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+723,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1703,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1704,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1705,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1706,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1706,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1707,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1707,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1708,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1709,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1710,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1711,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1707,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1712,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1713,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1714,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1715,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1716,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1717,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1718,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1471,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1719,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1707,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1471,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1718,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1717,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1713,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1715,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1714,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1716,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1712,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1720,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1721,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1722,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1722,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1509,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1722,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1706,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1706,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1723,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1351,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1376,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1374,"ram_rd_w", false,-1);
    tracep->declBit(c+1258,"ram_accept_w", false,-1);
    tracep->declBus(c+1110,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+691,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+690,"ram_ack_w", false,-1);
    tracep->declBit(c+1377,"ram_req_w", false,-1);
    tracep->declBus(c+725,"command_q", false,-1, 3,0);
    tracep->declBus(c+1259,"addr_q", false,-1, 12,0);
    tracep->declBus(c+724,"data_q", false,-1, 31,0);
    tracep->declBit(c+726,"data_rd_en_q", false,-1);
    tracep->declBus(c+1256,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1254,"cke_q", false,-1);
    tracep->declBus(c+1255,"bank_q", false,-1, 1,0);
    tracep->declBus(c+691,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+727,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1270,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+728,"refresh_q", false,-1);
    tracep->declBus(c+729,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+730+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1260,"state_q", false,-1, 3,0);
    tracep->declBus(c+1401,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1402,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+734,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+735,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1378,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1379,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1380,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1707,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+736,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1403,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1724,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1261,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+737,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+738,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+739,"idx", false,-1, 31,0);
    tracep->declBus(c+740,"rd_q", false,-1, 3,0);
    tracep->declBit(c+690,"ack_q", false,-1);
    tracep->declArray(c+1262,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1242,"auto_in_psel", false,-1);
    tracep->declBit(c+1243,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1354,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1466,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"auto_in_pready", false,-1);
    tracep->declBit(c+696,"auto_in_pslverr", false,-1);
    tracep->declBus(c+697,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+685,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1252,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1253,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1429,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1725,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1726,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1727,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1381,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1242,"in_psel", false,-1);
    tracep->declBit(c+1243,"in_penable", false,-1);
    tracep->declBus(c+1466,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"in_pready", false,-1);
    tracep->declBus(c+697,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+696,"in_pslverr", false,-1);
    tracep->declBit(c+685,"spi_sck", false,-1);
    tracep->declBus(c+1252,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1253,"spi_mosi", false,-1);
    tracep->declBit(c+1429,"spi_miso", false,-1);
    tracep->declBit(c+741,"spi_irq_out", false,-1);
    tracep->declBus(c+1728,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1729,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1728,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1730,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1731,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1732,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1471,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1718,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1717,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1713,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1715,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1714,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1716,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1712,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1720,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1721,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1733,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+742,"xip_state", false,-1, 3,0);
    tracep->declBus(c+743,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+744,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+745,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+746,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+747,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+748,"wb_we_i", false,-1);
    tracep->declBit(c+749,"wb_stb_i", false,-1);
    tracep->declBit(c+750,"wb_cyc_i", false,-1);
    tracep->declBit(c+751,"wb_ack_o", false,-1);
    tracep->declBit(c+1467,"wb_err_o", false,-1);
    tracep->declBit(c+752,"wb_int_o", false,-1);
    tracep->declBit(c+753,"done", false,-1);
    tracep->declBus(c+754,"paddr", false,-1, 31,0);
    tracep->declQuad(c+755,"data", false,-1, 63,0);
    tracep->declBit(c+757,"is_flash_access", false,-1);
    tracep->declBus(c+758,"tmp", false,-1, 31,0);
    tracep->declQuad(c+759,"tmp64", false,-1, 63,0);
    tracep->declBus(c+761,"counter", false,-1, 7,0);
    tracep->declBit(c+762,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1734,"Tp", false,-1, 31,0);
    tracep->declBit(c+1407,"wb_clk_i", false,-1);
    tracep->declBit(c+1408,"wb_rst_i", false,-1);
    tracep->declBus(c+744,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+745,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+746,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+747,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+748,"wb_we_i", false,-1);
    tracep->declBit(c+749,"wb_stb_i", false,-1);
    tracep->declBit(c+750,"wb_cyc_i", false,-1);
    tracep->declBit(c+751,"wb_ack_o", false,-1);
    tracep->declBit(c+1467,"wb_err_o", false,-1);
    tracep->declBit(c+752,"wb_int_o", false,-1);
    tracep->declBus(c+1252,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+685,"sclk_pad_o", false,-1);
    tracep->declBit(c+1253,"mosi_pad_o", false,-1);
    tracep->declBit(c+1429,"miso_pad_i", false,-1);
    tracep->declBus(c+763,"divider", false,-1, 15,0);
    tracep->declBus(c+764,"ctrl", false,-1, 13,0);
    tracep->declBus(c+765,"ss", false,-1, 7,0);
    tracep->declBus(c+766,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+767,"rx", false,-1, 127,0);
    tracep->declBit(c+771,"rx_negedge", false,-1);
    tracep->declBit(c+772,"tx_negedge", false,-1);
    tracep->declBus(c+773,"char_len", false,-1, 6,0);
    tracep->declBit(c+774,"go", false,-1);
    tracep->declBit(c+775,"lsb", false,-1);
    tracep->declBit(c+776,"ie", false,-1);
    tracep->declBit(c+777,"ass", false,-1);
    tracep->declBit(c+778,"spi_divider_sel", false,-1);
    tracep->declBit(c+779,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+780,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+781,"spi_ss_sel", false,-1);
    tracep->declBit(c+782,"tip", false,-1);
    tracep->declBit(c+783,"pos_edge", false,-1);
    tracep->declBit(c+784,"neg_edge", false,-1);
    tracep->declBit(c+785,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1734,"Tp", false,-1, 31,0);
    tracep->declBit(c+1407,"clk_in", false,-1);
    tracep->declBit(c+1408,"rst", false,-1);
    tracep->declBit(c+782,"enable", false,-1);
    tracep->declBit(c+774,"go", false,-1);
    tracep->declBit(c+785,"last_clk", false,-1);
    tracep->declBus(c+763,"divider", false,-1, 15,0);
    tracep->declBit(c+685,"clk_out", false,-1);
    tracep->declBit(c+783,"pos_edge", false,-1);
    tracep->declBit(c+784,"neg_edge", false,-1);
    tracep->declBus(c+786,"cnt", false,-1, 15,0);
    tracep->declBit(c+787,"cnt_zero", false,-1);
    tracep->declBit(c+788,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1734,"Tp", false,-1, 31,0);
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1408,"rst", false,-1);
    tracep->declBus(c+789,"latch", false,-1, 3,0);
    tracep->declBus(c+747,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+773,"len", false,-1, 6,0);
    tracep->declBit(c+775,"lsb", false,-1);
    tracep->declBit(c+774,"go", false,-1);
    tracep->declBit(c+783,"pos_edge", false,-1);
    tracep->declBit(c+784,"neg_edge", false,-1);
    tracep->declBit(c+771,"rx_negedge", false,-1);
    tracep->declBit(c+772,"tx_negedge", false,-1);
    tracep->declBit(c+782,"tip", false,-1);
    tracep->declBit(c+785,"last", false,-1);
    tracep->declBus(c+745,"p_in", false,-1, 31,0);
    tracep->declArray(c+767,"p_out", false,-1, 127,0);
    tracep->declBit(c+685,"s_clk", false,-1);
    tracep->declBit(c+1429,"s_in", false,-1);
    tracep->declBit(c+1253,"s_out", false,-1);
    tracep->declBus(c+790,"cnt", false,-1, 7,0);
    tracep->declArray(c+767,"data", false,-1, 127,0);
    tracep->declBus(c+791,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+792,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+793,"rx_clk", false,-1);
    tracep->declBit(c+794,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1359,"auto_in_psel", false,-1);
    tracep->declBit(c+1360,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1355,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1466,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1361,"auto_in_pready", false,-1);
    tracep->declBit(c+1467,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1435,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1427,"uart_rx", false,-1);
    tracep->declBit(c+1428,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1359,"in_psel", false,-1);
    tracep->declBit(c+1360,"in_penable", false,-1);
    tracep->declBus(c+1466,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1361,"in_pready", false,-1);
    tracep->declBit(c+1467,"in_pslverr", false,-1);
    tracep->declBus(c+1369,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1435,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1427,"uart_rx", false,-1);
    tracep->declBit(c+1428,"uart_tx", false,-1);
    tracep->declBit(c+795,"rtsn", false,-1);
    tracep->declBit(c+1467,"ctsn", false,-1);
    tracep->declBit(c+796,"dtr_pad_o", false,-1);
    tracep->declBit(c+1467,"dsr_pad_i", false,-1);
    tracep->declBit(c+1467,"ri_pad_i", false,-1);
    tracep->declBit(c+1467,"dcd_pad_i", false,-1);
    tracep->declBit(c+797,"interrupt", false,-1);
    tracep->declBit(c+1456,"reg_we", false,-1);
    tracep->declBit(c+1457,"reg_re", false,-1);
    tracep->declBus(c+1382,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1383,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+416,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1404,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+798,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1408,"wb_rst_i", false,-1);
    tracep->declBus(c+1382,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1384,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1404,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1456,"wb_we_i", false,-1);
    tracep->declBit(c+1457,"wb_re_i", false,-1);
    tracep->declBit(c+1428,"stx_pad_o", false,-1);
    tracep->declBit(c+1427,"srx_pad_i", false,-1);
    tracep->declBus(c+1720,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+798,"rts_pad_o", false,-1);
    tracep->declBit(c+796,"dtr_pad_o", false,-1);
    tracep->declBit(c+797,"int_o", false,-1);
    tracep->declBit(c+799,"enable", false,-1);
    tracep->declBit(c+800,"srx_pad", false,-1);
    tracep->declBus(c+801,"ier", false,-1, 3,0);
    tracep->declBus(c+802,"iir", false,-1, 3,0);
    tracep->declBus(c+803,"fcr", false,-1, 1,0);
    tracep->declBus(c+804,"mcr", false,-1, 4,0);
    tracep->declBus(c+805,"lcr", false,-1, 7,0);
    tracep->declBus(c+806,"msr", false,-1, 7,0);
    tracep->declBus(c+807,"dl", false,-1, 15,0);
    tracep->declBus(c+808,"scratch", false,-1, 7,0);
    tracep->declBit(c+809,"start_dlc", false,-1);
    tracep->declBit(c+810,"lsr_mask_d", false,-1);
    tracep->declBit(c+811,"msi_reset", false,-1);
    tracep->declBus(c+812,"dlc", false,-1, 15,0);
    tracep->declBus(c+813,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+814,"rx_reset", false,-1);
    tracep->declBit(c+815,"tx_reset", false,-1);
    tracep->declBit(c+816,"dlab", false,-1);
    tracep->declBit(c+1470,"cts_pad_i", false,-1);
    tracep->declBit(c+1467,"dsr_pad_i", false,-1);
    tracep->declBit(c+1467,"ri_pad_i", false,-1);
    tracep->declBit(c+1467,"dcd_pad_i", false,-1);
    tracep->declBit(c+817,"loopback", false,-1);
    tracep->declBit(c+1467,"cts", false,-1);
    tracep->declBit(c+1470,"dsr", false,-1);
    tracep->declBit(c+1470,"ri", false,-1);
    tracep->declBit(c+1470,"dcd", false,-1);
    tracep->declBit(c+818,"cts_c", false,-1);
    tracep->declBit(c+819,"dsr_c", false,-1);
    tracep->declBit(c+820,"ri_c", false,-1);
    tracep->declBit(c+821,"dcd_c", false,-1);
    tracep->declBus(c+822,"lsr", false,-1, 7,0);
    tracep->declBit(c+823,"lsr0", false,-1);
    tracep->declBit(c+824,"lsr1", false,-1);
    tracep->declBit(c+825,"lsr2", false,-1);
    tracep->declBit(c+826,"lsr3", false,-1);
    tracep->declBit(c+827,"lsr4", false,-1);
    tracep->declBit(c+828,"lsr5", false,-1);
    tracep->declBit(c+829,"lsr6", false,-1);
    tracep->declBit(c+830,"lsr7", false,-1);
    tracep->declBit(c+831,"lsr0r", false,-1);
    tracep->declBit(c+832,"lsr1r", false,-1);
    tracep->declBit(c+833,"lsr2r", false,-1);
    tracep->declBit(c+834,"lsr3r", false,-1);
    tracep->declBit(c+835,"lsr4r", false,-1);
    tracep->declBit(c+836,"lsr5r", false,-1);
    tracep->declBit(c+837,"lsr6r", false,-1);
    tracep->declBit(c+838,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+839,"rls_int", false,-1);
    tracep->declBit(c+840,"rda_int", false,-1);
    tracep->declBit(c+841,"ti_int", false,-1);
    tracep->declBit(c+842,"thre_int", false,-1);
    tracep->declBit(c+843,"ms_int", false,-1);
    tracep->declBit(c+844,"tf_push", false,-1);
    tracep->declBit(c+845,"rf_pop", false,-1);
    tracep->declBus(c+1458,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+846,"rf_error_bit", false,-1);
    tracep->declBit(c+824,"rf_overrun", false,-1);
    tracep->declBit(c+847,"rf_push_pulse", false,-1);
    tracep->declBus(c+848,"rf_count", false,-1, 4,0);
    tracep->declBus(c+849,"tf_count", false,-1, 4,0);
    tracep->declBus(c+850,"tstate", false,-1, 2,0);
    tracep->declBus(c+851,"rstate", false,-1, 3,0);
    tracep->declBus(c+852,"counter_t", false,-1, 9,0);
    tracep->declBit(c+853,"thre_set_en", false,-1);
    tracep->declBus(c+854,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+855,"block_value", false,-1, 7,0);
    tracep->declBit(c+856,"serial_out", false,-1);
    tracep->declBit(c+857,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+858,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+859,"lsr0_d", false,-1);
    tracep->declBit(c+860,"lsr1_d", false,-1);
    tracep->declBit(c+861,"lsr2_d", false,-1);
    tracep->declBit(c+862,"lsr3_d", false,-1);
    tracep->declBit(c+863,"lsr4_d", false,-1);
    tracep->declBit(c+864,"lsr5_d", false,-1);
    tracep->declBit(c+865,"lsr6_d", false,-1);
    tracep->declBit(c+866,"lsr7_d", false,-1);
    tracep->declBit(c+867,"rls_int_d", false,-1);
    tracep->declBit(c+868,"thre_int_d", false,-1);
    tracep->declBit(c+869,"ms_int_d", false,-1);
    tracep->declBit(c+870,"ti_int_d", false,-1);
    tracep->declBit(c+871,"rda_int_d", false,-1);
    tracep->declBit(c+872,"rls_int_rise", false,-1);
    tracep->declBit(c+873,"thre_int_rise", false,-1);
    tracep->declBit(c+874,"ms_int_rise", false,-1);
    tracep->declBit(c+875,"ti_int_rise", false,-1);
    tracep->declBit(c+876,"rda_int_rise", false,-1);
    tracep->declBit(c+877,"rls_int_pnd", false,-1);
    tracep->declBit(c+878,"rda_int_pnd", false,-1);
    tracep->declBit(c+879,"thre_int_pnd", false,-1);
    tracep->declBit(c+880,"ms_int_pnd", false,-1);
    tracep->declBit(c+881,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1734,"Tp", false,-1, 31,0);
    tracep->declBus(c+1734,"width", false,-1, 31,0);
    tracep->declBus(c+1699,"init_value", false,-1, 0,0);
    tracep->declBit(c+1408,"rst_i", false,-1);
    tracep->declBit(c+1407,"clk_i", false,-1);
    tracep->declBit(c+1467,"stage1_rst_i", false,-1);
    tracep->declBit(c+1470,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1427,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+800,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+882,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1408,"wb_rst_i", false,-1);
    tracep->declBus(c+805,"lcr", false,-1, 7,0);
    tracep->declBit(c+845,"rf_pop", false,-1);
    tracep->declBit(c+857,"srx_pad_i", false,-1);
    tracep->declBit(c+799,"enable", false,-1);
    tracep->declBit(c+814,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+852,"counter_t", false,-1, 9,0);
    tracep->declBus(c+848,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1458,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+824,"rf_overrun", false,-1);
    tracep->declBit(c+846,"rf_error_bit", false,-1);
    tracep->declBus(c+851,"rstate", false,-1, 3,0);
    tracep->declBit(c+847,"rf_push_pulse", false,-1);
    tracep->declBus(c+883,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+884,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+885,"rshift", false,-1, 7,0);
    tracep->declBit(c+886,"rparity", false,-1);
    tracep->declBit(c+887,"rparity_error", false,-1);
    tracep->declBit(c+888,"rframing_error", false,-1);
    tracep->declBit(c+889,"rbit_in", false,-1);
    tracep->declBit(c+890,"rparity_xor", false,-1);
    tracep->declBus(c+891,"counter_b", false,-1, 7,0);
    tracep->declBit(c+892,"rf_push_q", false,-1);
    tracep->declBus(c+893,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+894,"rf_push", false,-1);
    tracep->declBit(c+895,"break_error", false,-1);
    tracep->declBit(c+896,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+897,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+898,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+899,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1471,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1718,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1717,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1713,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1715,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1714,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1716,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1712,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1720,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1721,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1735,"sr_push", false,-1, 3,0);
    tracep->declBus(c+900,"toc_value", false,-1, 9,0);
    tracep->declBus(c+901,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1736,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1737,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1707,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1697,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1408,"wb_rst_i", false,-1);
    tracep->declBit(c+847,"push", false,-1);
    tracep->declBit(c+845,"pop", false,-1);
    tracep->declBus(c+893,"data_in", false,-1, 10,0);
    tracep->declBit(c+814,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1458,"data_out", false,-1, 10,0);
    tracep->declBit(c+824,"overrun", false,-1);
    tracep->declBus(c+848,"count", false,-1, 4,0);
    tracep->declBit(c+846,"error_bit", false,-1);
    tracep->declBus(c+1459,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+902+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+918,"top", false,-1, 3,0);
    tracep->declBus(c+919,"bottom", false,-1, 3,0);
    tracep->declBus(c+920,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+921,"word0", false,-1, 2,0);
    tracep->declBus(c+922,"word1", false,-1, 2,0);
    tracep->declBus(c+923,"word2", false,-1, 2,0);
    tracep->declBus(c+924,"word3", false,-1, 2,0);
    tracep->declBus(c+925,"word4", false,-1, 2,0);
    tracep->declBus(c+926,"word5", false,-1, 2,0);
    tracep->declBus(c+927,"word6", false,-1, 2,0);
    tracep->declBus(c+928,"word7", false,-1, 2,0);
    tracep->declBus(c+929,"word8", false,-1, 2,0);
    tracep->declBus(c+930,"word9", false,-1, 2,0);
    tracep->declBus(c+931,"word10", false,-1, 2,0);
    tracep->declBus(c+932,"word11", false,-1, 2,0);
    tracep->declBus(c+933,"word12", false,-1, 2,0);
    tracep->declBus(c+934,"word13", false,-1, 2,0);
    tracep->declBus(c+935,"word14", false,-1, 2,0);
    tracep->declBus(c+936,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1707,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1727,"data_width", false,-1, 31,0);
    tracep->declBus(c+1737,"depth", false,-1, 31,0);
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+847,"we", false,-1);
    tracep->declBus(c+918,"a", false,-1, 3,0);
    tracep->declBus(c+919,"dpra", false,-1, 3,0);
    tracep->declBus(c+937,"di", false,-1, 7,0);
    tracep->declBus(c+1459,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+417+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1408,"wb_rst_i", false,-1);
    tracep->declBus(c+805,"lcr", false,-1, 7,0);
    tracep->declBit(c+844,"tf_push", false,-1);
    tracep->declBus(c+1384,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+799,"enable", false,-1);
    tracep->declBit(c+815,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+856,"stx_pad_o", false,-1);
    tracep->declBus(c+850,"tstate", false,-1, 2,0);
    tracep->declBus(c+849,"tf_count", false,-1, 4,0);
    tracep->declBus(c+938,"counter", false,-1, 4,0);
    tracep->declBus(c+939,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+940,"shift_out", false,-1, 6,0);
    tracep->declBit(c+941,"stx_o_tmp", false,-1);
    tracep->declBit(c+942,"parity_xor", false,-1);
    tracep->declBit(c+943,"tf_pop", false,-1);
    tracep->declBit(c+944,"bit_out", false,-1);
    tracep->declBus(c+1384,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1250,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+945,"tf_overrun", false,-1);
    tracep->declBus(c+1476,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1466,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1487,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1551,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1552,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1738,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1727,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1737,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1707,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1697,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+1408,"wb_rst_i", false,-1);
    tracep->declBit(c+844,"push", false,-1);
    tracep->declBit(c+943,"pop", false,-1);
    tracep->declBus(c+1384,"data_in", false,-1, 7,0);
    tracep->declBit(c+815,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1250,"data_out", false,-1, 7,0);
    tracep->declBit(c+945,"overrun", false,-1);
    tracep->declBus(c+849,"count", false,-1, 4,0);
    tracep->declBus(c+946,"top", false,-1, 3,0);
    tracep->declBus(c+947,"bottom", false,-1, 3,0);
    tracep->declBus(c+948,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1707,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1727,"data_width", false,-1, 31,0);
    tracep->declBus(c+1737,"depth", false,-1, 31,0);
    tracep->declBit(c+1407,"clk", false,-1);
    tracep->declBit(c+844,"we", false,-1);
    tracep->declBus(c+946,"a", false,-1, 3,0);
    tracep->declBus(c+947,"dpra", false,-1, 3,0);
    tracep->declBus(c+1384,"di", false,-1, 7,0);
    tracep->declBus(c+1250,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+433+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBit(c+1352,"auto_in_psel", false,-1);
    tracep->declBit(c+1353,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1354,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1466,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+692,"auto_in_pready", false,-1);
    tracep->declBit(c+1468,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1469,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1421,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1422,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1423,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1424,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1425,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1426,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1407,"clock", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1381,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1352,"in_psel", false,-1);
    tracep->declBit(c+1353,"in_penable", false,-1);
    tracep->declBus(c+1466,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+692,"in_pready", false,-1);
    tracep->declBus(c+1469,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1468,"in_pslverr", false,-1);
    tracep->declBus(c+1421,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1422,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1423,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1424,"vga_hsync", false,-1);
    tracep->declBit(c+1425,"vga_vsync", false,-1);
    tracep->declBit(c+1426,"vga_valid", false,-1);
    tracep->declBus(c+949,"h_addr", false,-1, 9,0);
    tracep->declBus(c+449,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1251,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1385,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+692,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1407,"pclk", false,-1);
    tracep->declBit(c+1408,"reset", false,-1);
    tracep->declBus(c+1251,"vga_data", false,-1, 23,0);
    tracep->declBus(c+949,"h_addr", false,-1, 9,0);
    tracep->declBus(c+449,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1424,"hsync", false,-1);
    tracep->declBit(c+1425,"vsync", false,-1);
    tracep->declBit(c+1426,"valid", false,-1);
    tracep->declBus(c+1421,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1422,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1423,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1739,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1740,"h_active", false,-1, 31,0);
    tracep->declBus(c+1741,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1742,"h_total", false,-1, 31,0);
    tracep->declBus(c+1706,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1743,"v_active", false,-1, 31,0);
    tracep->declBus(c+1744,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1745,"v_total", false,-1, 31,0);
    tracep->declBus(c+950,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+450,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+951,"h_valid", false,-1);
    tracep->declBit(c+451,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+685,"sck", false,-1);
    tracep->declBit(c+1265,"ss", false,-1);
    tracep->declBit(c+1253,"mosi", false,-1);
    tracep->declBit(c+1244,"miso", false,-1);
    tracep->declBus(c+1245,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1246,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1460,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+685,"sck", false,-1);
    tracep->declBit(c+1266,"ss", false,-1);
    tracep->declBit(c+1253,"mosi", false,-1);
    tracep->declBit(c+1461,"miso", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+1020,"state", false,-1, 2,0);
    tracep->declBus(c+1021,"counter", false,-1, 7,0);
    tracep->declBus(c+1022,"cmd", false,-1, 7,0);
    tracep->declBus(c+1023,"addr", false,-1, 23,0);
    tracep->declBus(c+1024,"data", false,-1, 31,0);
    tracep->declBit(c+1025,"ren", false,-1);
    tracep->declBus(c+1462,"rdata", false,-1, 31,0);
    tracep->declBus(c+1463,"raddr", false,-1, 31,0);
    tracep->declBus(c+1247,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+685,"clock", false,-1);
    tracep->declBit(c+1025,"valid", false,-1);
    tracep->declBus(c+1022,"cmd", false,-1, 7,0);
    tracep->declBus(c+1463,"addr", false,-1, 31,0);
    tracep->declBus(c+1462,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1430,"sck", false,-1);
    tracep->declBit(c+1386,"ce_n", false,-1);
    tracep->declBus(c+1431,"dio", false,-1, 3,0);
    tracep->declBus(c+675,"dio_out", false,-1, 3,0);
    tracep->declBus(c+676,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1431,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1503,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1734,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1706,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1746,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1707,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1697,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+677,"state", false,-1, 2,0);
    tracep->declBus(c+1464,"next_state", false,-1, 2,0);
    tracep->declBus(c+678,"counter", false,-1, 7,0);
    tracep->declBus(c+679,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+680,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+681,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+682,"is_read_op", false,-1);
    tracep->declBit(c+683,"is_write_op", false,-1);
    tracep->declBus(c+684,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1465,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1432,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+686,"cs", false,-1);
    tracep->declBit(c+687,"ras", false,-1);
    tracep->declBit(c+688,"cas", false,-1);
    tracep->declBit(c+689,"we", false,-1);
    tracep->declBus(c+1433,"a", false,-1, 13,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1256,"dqm", false,-1, 3,0);
    tracep->declBus(c+1270,"dq", false,-1, 31,0);
    tracep->declBit(c+952,"cs_0", false,-1);
    tracep->declBit(c+953,"ras_0", false,-1);
    tracep->declBit(c+954,"cas_0", false,-1);
    tracep->declBit(c+955,"we_0", false,-1);
    tracep->declBit(c+956,"cs_1", false,-1);
    tracep->declBit(c+957,"ras_1", false,-1);
    tracep->declBit(c+958,"cas_1", false,-1);
    tracep->declBit(c+959,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1432,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+956,"cs", false,-1);
    tracep->declBit(c+957,"ras", false,-1);
    tracep->declBit(c+958,"cas", false,-1);
    tracep->declBit(c+959,"we", false,-1);
    tracep->declBus(c+1259,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1256,"dqm", false,-1, 3,0);
    tracep->declBus(c+1270,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1432,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+956,"cs", false,-1);
    tracep->declBit(c+957,"ras", false,-1);
    tracep->declBit(c+958,"cas", false,-1);
    tracep->declBit(c+959,"we", false,-1);
    tracep->declBus(c+1259,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1267,"dqm", false,-1, 1,0);
    tracep->declBus(c+1271,"dq", false,-1, 15,0);
    tracep->declBus(c+1747,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1713,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1714,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1715,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1471,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+960,"cas_la", false,-1, 2,0);
    tracep->declBus(c+961,"bl", false,-1, 2,0);
    tracep->declBus(c+1405,"command", false,-1, 3,0);
    tracep->declBus(c+962,"mode_register", false,-1, 12,0);
    tracep->declBus(c+963,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1268,"col_addr", false,-1, 9,0);
    tracep->declBus(c+964,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1272,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+965,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+966+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+970,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+971,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1748,"state", false,-1, 2,0);
    tracep->declBit(c+972,"write_brust", false,-1);
    tracep->declBit(c+973,"read_burst", false,-1);
    tracep->declBus(c+974,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1432,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+956,"cs", false,-1);
    tracep->declBit(c+957,"ras", false,-1);
    tracep->declBit(c+958,"cas", false,-1);
    tracep->declBit(c+959,"we", false,-1);
    tracep->declBus(c+1259,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1269,"dqm", false,-1, 1,0);
    tracep->declBus(c+1273,"dq", false,-1, 15,0);
    tracep->declBus(c+1747,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1713,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1714,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1715,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1471,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+975,"cas_la", false,-1, 2,0);
    tracep->declBus(c+976,"bl", false,-1, 2,0);
    tracep->declBus(c+1405,"command", false,-1, 3,0);
    tracep->declBus(c+977,"mode_register", false,-1, 12,0);
    tracep->declBus(c+978,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1268,"col_addr", false,-1, 9,0);
    tracep->declBus(c+979,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1274,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+980,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+981+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+985,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+986,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1749,"state", false,-1, 2,0);
    tracep->declBit(c+987,"write_brust", false,-1);
    tracep->declBit(c+988,"read_burst", false,-1);
    tracep->declBus(c+989,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1432,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+952,"cs", false,-1);
    tracep->declBit(c+953,"ras", false,-1);
    tracep->declBit(c+954,"cas", false,-1);
    tracep->declBit(c+955,"we", false,-1);
    tracep->declBus(c+1259,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1256,"dqm", false,-1, 3,0);
    tracep->declBus(c+1270,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1432,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+952,"cs", false,-1);
    tracep->declBit(c+953,"ras", false,-1);
    tracep->declBit(c+954,"cas", false,-1);
    tracep->declBit(c+955,"we", false,-1);
    tracep->declBus(c+1259,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1267,"dqm", false,-1, 1,0);
    tracep->declBus(c+1271,"dq", false,-1, 15,0);
    tracep->declBus(c+1747,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1713,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1714,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1715,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1471,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+990,"cas_la", false,-1, 2,0);
    tracep->declBus(c+991,"bl", false,-1, 2,0);
    tracep->declBus(c+1406,"command", false,-1, 3,0);
    tracep->declBus(c+992,"mode_register", false,-1, 12,0);
    tracep->declBus(c+993,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1268,"col_addr", false,-1, 9,0);
    tracep->declBus(c+994,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1275,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+995,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+996+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1000,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1001,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1750,"state", false,-1, 2,0);
    tracep->declBit(c+1002,"write_brust", false,-1);
    tracep->declBit(c+1003,"read_burst", false,-1);
    tracep->declBus(c+1004,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1432,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+952,"cs", false,-1);
    tracep->declBit(c+953,"ras", false,-1);
    tracep->declBit(c+954,"cas", false,-1);
    tracep->declBit(c+955,"we", false,-1);
    tracep->declBus(c+1259,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1269,"dqm", false,-1, 1,0);
    tracep->declBus(c+1273,"dq", false,-1, 15,0);
    tracep->declBus(c+1747,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1713,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1714,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1715,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1471,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1005,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1006,"bl", false,-1, 2,0);
    tracep->declBus(c+1406,"command", false,-1, 3,0);
    tracep->declBus(c+1007,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1008,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1268,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1009,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1276,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1010,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1011+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1015,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1016,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1751,"state", false,-1, 2,0);
    tracep->declBit(c+1017,"write_brust", false,-1);
    tracep->declBit(c+1018,"read_burst", false,-1);
    tracep->declBus(c+1019,"dout", false,-1, 15,0);
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
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
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
    bufp->fullSData(oldp+449,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+453,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+455,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+456,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+457,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+458,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+459,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+460,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+461,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+462,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+463,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+464,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))));
    bufp->fullBit(oldp+465,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+466,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+467,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+468,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+469,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+470,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+471,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+472,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+473,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+474,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+475,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+476,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+477,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+478,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+479,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+480,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+481,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+482,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+483,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+484,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+485,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+486,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+487,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+488,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+489,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+490,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+491,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+492,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+493,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+494,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+496,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+497,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+498,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+499,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+500,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+501,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+502,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+510,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+534,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+537,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+569,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+570,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+616,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+631,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+632,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+634,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+637,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+661,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+662,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+663,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+664,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+665,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+666,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+667,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+668,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+669,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__b_switch));
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+680,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+681,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+686,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+687,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+689,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+700,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+701,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+702,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+703,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+704,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+705,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+706,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+707,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+710,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+711,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+714,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+715,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+719,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+723,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+758,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+759,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+771,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+772,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+773,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+774,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+775,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+776,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+777,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+778,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+779,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+781,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+785,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+787,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+788,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+791,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+795,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+796,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+816,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+817,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+818,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+819,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+820,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+821,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+822,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+825,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+826,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+846,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+853,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+872,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+873,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+874,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+875,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+876,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+895,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+896,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+897,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+898,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+899,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+901,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+920,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+937,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+948,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+949,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+952,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+953,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+954,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+955,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+956,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+957,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+958,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+959,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullCData(oldp+960,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+961,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+966,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+967,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+968,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+969,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+975,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+976,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+977,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+979,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+981,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+982,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+983,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+984,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+989,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+990,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+991,((7U & ((IData)(1U) << 
                                     (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+992,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+994,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+996,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+997,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+998,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+999,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1005,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1006,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1025,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1026,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1029,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1032,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1035,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1055,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1056,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1057,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1061,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1062,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1066,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1067,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1071,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1108,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+1115,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1233,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1234,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1235,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1236,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1258,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullSData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1265,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1267,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1268,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),10);
    bufp->fullCData(oldp+1269,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1271,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1273,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1283,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1287,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1295,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1297,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1301,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+1305,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1307,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1308,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1309,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1310,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1311,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1312,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1313,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1314,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1315,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1316,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1317,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1318,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1319,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1320,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1321,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1322,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1325,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1326,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1337,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1343,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1348,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1349,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1350,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1354,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1355,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1369,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1372,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1373,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1378,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1379,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1380,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1381,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1382,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1385,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1393,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+1407,(vlSelf->clock));
    bufp->fullBit(oldp+1408,(vlSelf->reset));
    bufp->fullSData(oldp+1409,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1410,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1411,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1412,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1413,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1414,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1415,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1416,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1417,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1418,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1419,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1420,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1421,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1422,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1423,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1424,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1425,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1426,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1427,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1428,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1429,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1432,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1433,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullBit(oldp+1434,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1435,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1436,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1437,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullCData(oldp+1438,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1439,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1441,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1442,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1443,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1445,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch)
                                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready)))));
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1448,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1449,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
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
    bufp->fullBit(oldp+1450,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1451,((0xfU & vlSelf->__VdfgTmp_hc20ef241__0)),4);
    bufp->fullBit(oldp+1452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1453,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1458,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1461,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1463,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullCData(oldp+1466,(1U),3);
    bufp->fullBit(oldp+1467,(0U));
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1470,(1U));
    bufp->fullCData(oldp+1471,(0U),4);
    bufp->fullCData(oldp+1472,(0U),8);
    bufp->fullCData(oldp+1473,(0U),2);
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1475,(0U),32);
    bufp->fullCData(oldp+1476,(0U),3);
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1487,(2U),3);
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1503,(0U),32);
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1507,(1U),2);
    bufp->fullCData(oldp+1508,(2U),2);
    bufp->fullIData(oldp+1509,(0x20U),32);
    bufp->fullIData(oldp+1510,(4U),32);
    bufp->fullIData(oldp+1511,(0x79737978U),32);
    bufp->fullIData(oldp+1512,(0x17e3c19U),32);
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1551,(3U),3);
    bufp->fullCData(oldp+1552,(4U),3);
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1696,(3U),2);
    bufp->fullIData(oldp+1697,(5U),32);
    bufp->fullBit(oldp+1698,(0U));
    bufp->fullBit(oldp+1699,(1U));
    bufp->fullCData(oldp+1700,(0x1bU),8);
    bufp->fullCData(oldp+1701,(0xebU),8);
    bufp->fullCData(oldp+1702,(0x38U),8);
    bufp->fullIData(oldp+1703,(0x64U),32);
    bufp->fullIData(oldp+1704,(0x18U),32);
    bufp->fullIData(oldp+1705,(9U),32);
    bufp->fullIData(oldp+1706,(2U),32);
    bufp->fullIData(oldp+1707,(4U),32);
    bufp->fullIData(oldp+1708,(0xdU),32);
    bufp->fullIData(oldp+1709,(0x2000U),32);
    bufp->fullIData(oldp+1710,(0x2710U),32);
    bufp->fullIData(oldp+1711,(0x30cU),32);
    bufp->fullCData(oldp+1712,(7U),4);
    bufp->fullCData(oldp+1713,(3U),4);
    bufp->fullCData(oldp+1714,(5U),4);
    bufp->fullCData(oldp+1715,(4U),4);
    bufp->fullCData(oldp+1716,(6U),4);
    bufp->fullCData(oldp+1717,(2U),4);
    bufp->fullCData(oldp+1718,(1U),4);
    bufp->fullSData(oldp+1719,(0x20U),13);
    bufp->fullCData(oldp+1720,(8U),4);
    bufp->fullCData(oldp+1721,(9U),4);
    bufp->fullIData(oldp+1722,(0xaU),32);
    bufp->fullIData(oldp+1723,(6U),32);
    bufp->fullIData(oldp+1724,(0x11U),32);
    bufp->fullIData(oldp+1725,(0x30000000U),32);
    bufp->fullIData(oldp+1726,(0x3fffffffU),32);
    bufp->fullIData(oldp+1727,(8U),32);
    bufp->fullCData(oldp+1728,(4U),5);
    bufp->fullCData(oldp+1729,(0U),5);
    bufp->fullCData(oldp+1730,(0x10U),5);
    bufp->fullCData(oldp+1731,(0x14U),5);
    bufp->fullCData(oldp+1732,(0x18U),5);
    bufp->fullIData(oldp+1733,(0x3000000U),32);
    bufp->fullIData(oldp+1734,(1U),32);
    bufp->fullCData(oldp+1735,(0xaU),4);
    bufp->fullIData(oldp+1736,(0xbU),32);
    bufp->fullIData(oldp+1737,(0x10U),32);
    bufp->fullCData(oldp+1738,(5U),3);
    bufp->fullIData(oldp+1739,(0x60U),32);
    bufp->fullIData(oldp+1740,(0x90U),32);
    bufp->fullIData(oldp+1741,(0x310U),32);
    bufp->fullIData(oldp+1742,(0x320U),32);
    bufp->fullIData(oldp+1743,(0x23U),32);
    bufp->fullIData(oldp+1744,(0x203U),32);
    bufp->fullIData(oldp+1745,(0x20dU),32);
    bufp->fullIData(oldp+1746,(3U),32);
    bufp->fullIData(oldp+1747,(0x400000U),32);
    bufp->fullCData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1749,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullCData(oldp+1750,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
}
