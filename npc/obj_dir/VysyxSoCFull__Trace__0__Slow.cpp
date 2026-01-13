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
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1697,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1698,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1699,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1700,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1701,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1702,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1703,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1704,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1705,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1706,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1707,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1708,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1709,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1710,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1711,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1712,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1713,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1714,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1715,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1716,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1697,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1698,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1699,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1700,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1701,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1702,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1703,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1704,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1705,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1706,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1707,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1708,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1709,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1710,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1711,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1712,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1713,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1714,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1715,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1716,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+714,"spi_sck", false,-1);
    tracep->declBus(c+1564,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1565,"spi_mosi", false,-1);
    tracep->declBit(c+1717,"spi_miso", false,-1);
    tracep->declBit(c+1715,"uart_rx", false,-1);
    tracep->declBit(c+1716,"uart_tx", false,-1);
    tracep->declBit(c+1718,"psram_sck", false,-1);
    tracep->declBit(c+1684,"psram_ce_n", false,-1);
    tracep->declBus(c+1719,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1720,"sdram_clk", false,-1);
    tracep->declBit(c+1566,"sdram_cke", false,-1);
    tracep->declBit(c+715,"sdram_cs", false,-1);
    tracep->declBit(c+716,"sdram_ras", false,-1);
    tracep->declBit(c+717,"sdram_cas", false,-1);
    tracep->declBit(c+718,"sdram_we", false,-1);
    tracep->declBus(c+1721,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1567,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1568,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1627,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1697,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1698,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1699,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1700,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1701,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1702,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1703,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1704,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1705,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1706,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1707,"ps2_clk", false,-1);
    tracep->declBit(c+1708,"ps2_data", false,-1);
    tracep->declBus(c+1709,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1710,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1711,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1712,"vga_hsync", false,-1);
    tracep->declBit(c+1713,"vga_vsync", false,-1);
    tracep->declBit(c+1714,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1764,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1765,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1766,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1384,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1385,"in_psel", false,-1);
    tracep->declBit(c+1386,"in_penable", false,-1);
    tracep->declBus(c+1767,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1387,"in_pwrite", false,-1);
    tracep->declBus(c+1388,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1389,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1390,"in_pready", false,-1);
    tracep->declBus(c+1391,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1392,"in_pslverr", false,-1);
    tracep->declBus(c+1393,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1394,"out_psel", false,-1);
    tracep->declBit(c+1395,"out_penable", false,-1);
    tracep->declBus(c+1396,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1397,"out_pwrite", false,-1);
    tracep->declBus(c+1398,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1685,"out_pready", false,-1);
    tracep->declBus(c+1722,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1723,"out_pslverr", false,-1);
    tracep->declBus(c+1768,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1769,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1770,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1767,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1771,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1772,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1400,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1401,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1402,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1403,"state", false,-1, 2,0);
    tracep->declBus(c+1724,"next_state", false,-1, 2,0);
    tracep->declBit(c+1773,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1394,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1395,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1397,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1393,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1396,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1685,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1723,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1722,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1404,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1405,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1406,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1396,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+719,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1774,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1775,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1407,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1408,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1409,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1396,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+157,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1776,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+158,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1410,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1411,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1409,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1396,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+720,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1776,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+721,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1412,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1413,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1393,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1396,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1776,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+159,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1414,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1415,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1409,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1396,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1416,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1776,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1726,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1417,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1418,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1406,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1396,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+723,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+724,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1419,"sel_0", false,-1);
    tracep->declBit(c+1420,"sel_1", false,-1);
    tracep->declBit(c+1421,"sel_2", false,-1);
    tracep->declBit(c+1422,"sel_3", false,-1);
    tracep->declBit(c+1423,"sel_4", false,-1);
    tracep->declBit(c+1424,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1425,"auto_in_awready", false,-1);
    tracep->declBit(c+160,"auto_in_awvalid", false,-1);
    tracep->declBus(c+161,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+162,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+164,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1425,"auto_in_wready", false,-1);
    tracep->declBit(c+165,"auto_in_wvalid", false,-1);
    tracep->declBus(c+166,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+167,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+168,"auto_in_bready", false,-1);
    tracep->declBit(c+1426,"auto_in_bvalid", false,-1);
    tracep->declBus(c+169,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1427,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1428,"auto_in_arready", false,-1);
    tracep->declBit(c+170,"auto_in_arvalid", false,-1);
    tracep->declBus(c+171,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+172,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+173,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+174,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+175,"auto_in_rready", false,-1);
    tracep->declBit(c+1429,"auto_in_rvalid", false,-1);
    tracep->declBus(c+176,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1727,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1427,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1385,"auto_out_psel", false,-1);
    tracep->declBit(c+1386,"auto_out_penable", false,-1);
    tracep->declBit(c+1387,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1384,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1388,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1389,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1390,"auto_out_pready", false,-1);
    tracep->declBit(c+1392,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1391,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1386,"nodeOut_penable", false,-1);
    tracep->declBus(c+1430,"state", false,-1, 1,0);
    tracep->declBit(c+1428,"accept_read", false,-1);
    tracep->declBit(c+1425,"accept_write", false,-1);
    tracep->declBit(c+177,"is_write_r", false,-1);
    tracep->declBit(c+1387,"is_write", false,-1);
    tracep->declBus(c+176,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+169,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+178,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+179,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+180,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+181,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1431,"resp", false,-1, 1,0);
    tracep->declBus(c+182,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1427,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1429,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+183,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1426,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+184,"auto_in_awready", false,-1);
    tracep->declBit(c+1582,"auto_in_awvalid", false,-1);
    tracep->declBus(c+185,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1583,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1584,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+187,"auto_in_wready", false,-1);
    tracep->declBit(c+1585,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1586,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"auto_in_wlast", false,-1);
    tracep->declBit(c+671,"auto_in_bready", false,-1);
    tracep->declBit(c+188,"auto_in_bvalid", false,-1);
    tracep->declBus(c+189,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+191,"auto_in_arready", false,-1);
    tracep->declBit(c+30,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+192,"auto_in_rvalid", false,-1);
    tracep->declBus(c+193,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+196,"auto_in_rlast", false,-1);
    tracep->declBit(c+1425,"auto_out_awready", false,-1);
    tracep->declBit(c+160,"auto_out_awvalid", false,-1);
    tracep->declBus(c+161,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+162,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+164,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1425,"auto_out_wready", false,-1);
    tracep->declBit(c+165,"auto_out_wvalid", false,-1);
    tracep->declBus(c+166,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+167,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+168,"auto_out_bready", false,-1);
    tracep->declBit(c+1426,"auto_out_bvalid", false,-1);
    tracep->declBus(c+169,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1427,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1428,"auto_out_arready", false,-1);
    tracep->declBit(c+170,"auto_out_arvalid", false,-1);
    tracep->declBus(c+171,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+172,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+173,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+174,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+175,"auto_out_rready", false,-1);
    tracep->declBit(c+1429,"auto_out_rvalid", false,-1);
    tracep->declBus(c+176,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1727,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1427,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+1426,"io_enq_valid", false,-1);
    tracep->declBus(c+169,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1427,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+671,"io_deq_ready", false,-1);
    tracep->declBit(c+188,"io_deq_valid", false,-1);
    tracep->declBus(c+189,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+190,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+197,"wrap", false,-1);
    tracep->declBit(c+198,"wrap_1", false,-1);
    tracep->declBit(c+199,"maybe_full", false,-1);
    tracep->declBit(c+200,"ptr_match", false,-1);
    tracep->declBit(c+201,"empty", false,-1);
    tracep->declBit(c+202,"full", false,-1);
    tracep->declBit(c+1432,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+198,"R0_addr", false,-1);
    tracep->declBit(c+1777,"R0_en", false,-1);
    tracep->declBit(c+1695,"R0_clk", false,-1);
    tracep->declBus(c+203,"R0_data", false,-1, 5,0);
    tracep->declBit(c+197,"W0_addr", false,-1);
    tracep->declBit(c+1432,"W0_en", false,-1);
    tracep->declBit(c+1695,"W0_clk", false,-1);
    tracep->declBus(c+1728,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+204+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+206,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+1429,"io_enq_valid", false,-1);
    tracep->declBus(c+176,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1727,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1427,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+192,"io_deq_valid", false,-1);
    tracep->declBus(c+193,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+194,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+195,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+196,"io_deq_bits_last", false,-1);
    tracep->declBit(c+207,"wrap", false,-1);
    tracep->declBit(c+208,"wrap_1", false,-1);
    tracep->declBit(c+209,"maybe_full", false,-1);
    tracep->declBit(c+210,"ptr_match", false,-1);
    tracep->declBit(c+211,"empty", false,-1);
    tracep->declBit(c+212,"full", false,-1);
    tracep->declBit(c+1433,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+208,"R0_addr", false,-1);
    tracep->declBit(c+1777,"R0_en", false,-1);
    tracep->declBit(c+1695,"R0_clk", false,-1);
    tracep->declQuad(c+213,"R0_data", false,-1, 38,0);
    tracep->declBit(c+207,"W0_addr", false,-1);
    tracep->declBit(c+1433,"W0_en", false,-1);
    tracep->declBit(c+1695,"W0_clk", false,-1);
    tracep->declQuad(c+1729,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+215+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+219,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+191,"io_enq_ready", false,-1);
    tracep->declBit(c+30,"io_enq_valid", false,-1);
    tracep->declBus(c+31,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+32,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+33,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+34,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1428,"io_deq_ready", false,-1);
    tracep->declBit(c+170,"io_deq_valid", false,-1);
    tracep->declBus(c+171,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+172,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+173,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+174,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+220,"wrap", false,-1);
    tracep->declBit(c+221,"wrap_1", false,-1);
    tracep->declBit(c+222,"maybe_full", false,-1);
    tracep->declBit(c+223,"ptr_match", false,-1);
    tracep->declBit(c+224,"empty", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->declBit(c+35,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+221,"R0_addr", false,-1);
    tracep->declBit(c+1777,"R0_en", false,-1);
    tracep->declBit(c+1695,"R0_clk", false,-1);
    tracep->declQuad(c+226,"R0_data", false,-1, 46,0);
    tracep->declBit(c+220,"W0_addr", false,-1);
    tracep->declBit(c+35,"W0_en", false,-1);
    tracep->declBit(c+1695,"W0_clk", false,-1);
    tracep->declQuad(c+36,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+228+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+232,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1582,"io_enq_valid", false,-1);
    tracep->declBus(c+185,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1583,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1584,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+186,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1425,"io_deq_ready", false,-1);
    tracep->declBit(c+160,"io_deq_valid", false,-1);
    tracep->declBus(c+161,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+162,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+163,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+164,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+233,"wrap", false,-1);
    tracep->declBit(c+234,"wrap_1", false,-1);
    tracep->declBit(c+235,"maybe_full", false,-1);
    tracep->declBit(c+236,"ptr_match", false,-1);
    tracep->declBit(c+237,"empty", false,-1);
    tracep->declBit(c+238,"full", false,-1);
    tracep->declBit(c+1589,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+234,"R0_addr", false,-1);
    tracep->declBit(c+1777,"R0_en", false,-1);
    tracep->declBit(c+1695,"R0_clk", false,-1);
    tracep->declQuad(c+239,"R0_data", false,-1, 46,0);
    tracep->declBit(c+233,"W0_addr", false,-1);
    tracep->declBit(c+1589,"W0_en", false,-1);
    tracep->declBit(c+1695,"W0_clk", false,-1);
    tracep->declQuad(c+1731,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+241+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+245,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+1585,"io_enq_valid", false,-1);
    tracep->declBus(c+1586,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1587,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1588,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1425,"io_deq_ready", false,-1);
    tracep->declBit(c+165,"io_deq_valid", false,-1);
    tracep->declBus(c+166,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+167,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+246,"wrap", false,-1);
    tracep->declBit(c+247,"wrap_1", false,-1);
    tracep->declBit(c+248,"maybe_full", false,-1);
    tracep->declBit(c+249,"ptr_match", false,-1);
    tracep->declBit(c+250,"empty", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+1590,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+247,"R0_addr", false,-1);
    tracep->declBit(c+1777,"R0_en", false,-1);
    tracep->declBit(c+1695,"R0_clk", false,-1);
    tracep->declQuad(c+252,"R0_data", false,-1, 35,0);
    tracep->declBit(c+246,"W0_addr", false,-1);
    tracep->declBit(c+1590,"W0_en", false,-1);
    tracep->declBit(c+1695,"W0_clk", false,-1);
    tracep->declQuad(c+1591,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+254+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+97,"in_arready", false,-1);
    tracep->declBit(c+38,"in_arvalid", false,-1);
    tracep->declBus(c+39,"in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1733,"in_rready", false,-1);
    tracep->declBit(c+725,"in_rvalid", false,-1);
    tracep->declBus(c+726,"in_rid", false,-1, 3,0);
    tracep->declBus(c+727,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1778,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+728,"in_rlast", false,-1);
    tracep->declBit(c+98,"in_awready", false,-1);
    tracep->declBit(c+1593,"in_awvalid", false,-1);
    tracep->declBus(c+1779,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1780,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"in_wready", false,-1);
    tracep->declBit(c+1594,"in_wvalid", false,-1);
    tracep->declBus(c+1021,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"in_wlast", false,-1);
    tracep->declBit(c+1734,"in_bready", false,-1);
    tracep->declBit(c+729,"in_bvalid", false,-1);
    tracep->declBus(c+726,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1778,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+97,"out_arready", false,-1);
    tracep->declBit(c+38,"out_arvalid", false,-1);
    tracep->declBus(c+39,"out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1733,"out_rready", false,-1);
    tracep->declBit(c+725,"out_rvalid", false,-1);
    tracep->declBus(c+726,"out_rid", false,-1, 3,0);
    tracep->declBus(c+727,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1778,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+728,"out_rlast", false,-1);
    tracep->declBit(c+98,"out_awready", false,-1);
    tracep->declBit(c+1593,"out_awvalid", false,-1);
    tracep->declBus(c+1779,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1780,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"out_wready", false,-1);
    tracep->declBit(c+1594,"out_wvalid", false,-1);
    tracep->declBus(c+1021,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"out_wlast", false,-1);
    tracep->declBit(c+1734,"out_bready", false,-1);
    tracep->declBit(c+729,"out_bvalid", false,-1);
    tracep->declBus(c+726,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1778,"out_bresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+259,"auto_in_awready", false,-1);
    tracep->declBit(c+1595,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1779,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1780,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+260,"auto_in_wready", false,-1);
    tracep->declBit(c+1596,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1021,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"auto_in_wlast", false,-1);
    tracep->declBit(c+1735,"auto_in_bready", false,-1);
    tracep->declBit(c+261,"auto_in_bvalid", false,-1);
    tracep->declBus(c+262,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+263,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+264,"auto_in_arready", false,-1);
    tracep->declBit(c+44,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_in_rready", false,-1);
    tracep->declBit(c+265,"auto_in_rvalid", false,-1);
    tracep->declBus(c+266,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+267,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+268,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_in_rlast", false,-1);
    tracep->declBit(c+1635,"auto_out_awready", false,-1);
    tracep->declBit(c+1597,"auto_out_awvalid", false,-1);
    tracep->declBus(c+185,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1583,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1584,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+270,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1636,"auto_out_wready", false,-1);
    tracep->declBit(c+1598,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1586,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"auto_out_wlast", false,-1);
    tracep->declBit(c+1637,"auto_out_bready", false,-1);
    tracep->declBit(c+271,"auto_out_bvalid", false,-1);
    tracep->declBus(c+262,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+272,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+273,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_out_arready", false,-1);
    tracep->declBit(c+45,"auto_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+100,"auto_out_rready", false,-1);
    tracep->declBit(c+265,"auto_out_rvalid", false,-1);
    tracep->declBus(c+266,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+267,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+268,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+274,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+275,"auto_out_rlast", false,-1);
    tracep->declBit(c+1598,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+276,"w_idle", false,-1);
    tracep->declBit(c+1638,"in_awready", false,-1);
    tracep->declBit(c+277,"busy", false,-1);
    tracep->declBus(c+278,"r_addr", false,-1, 31,0);
    tracep->declBus(c+279,"r_len", false,-1, 7,0);
    tracep->declBus(c+47,"len", false,-1, 7,0);
    tracep->declBus(c+48,"addr", false,-1, 31,0);
    tracep->declBit(c+280,"busy_1", false,-1);
    tracep->declBus(c+281,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+282,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+283,"len_1", false,-1, 7,0);
    tracep->declBus(c+1599,"addr_1", false,-1, 31,0);
    tracep->declBit(c+284,"wbeats_latched", false,-1);
    tracep->declBit(c+1597,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1600,"wbeats_valid", false,-1);
    tracep->declBus(c+285,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1601,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1588,"w_last", false,-1);
    tracep->declBit(c+1637,"nodeOut_bready", false,-1);
    tracep->declBus(c+286,"error_0", false,-1, 1,0);
    tracep->declBus(c+287,"error_1", false,-1, 1,0);
    tracep->declBus(c+288,"error_2", false,-1, 1,0);
    tracep->declBus(c+289,"error_3", false,-1, 1,0);
    tracep->declBus(c+290,"error_4", false,-1, 1,0);
    tracep->declBus(c+291,"error_5", false,-1, 1,0);
    tracep->declBus(c+292,"error_6", false,-1, 1,0);
    tracep->declBus(c+293,"error_7", false,-1, 1,0);
    tracep->declBus(c+294,"error_8", false,-1, 1,0);
    tracep->declBus(c+295,"error_9", false,-1, 1,0);
    tracep->declBus(c+296,"error_10", false,-1, 1,0);
    tracep->declBus(c+297,"error_11", false,-1, 1,0);
    tracep->declBus(c+298,"error_12", false,-1, 1,0);
    tracep->declBus(c+299,"error_13", false,-1, 1,0);
    tracep->declBus(c+300,"error_14", false,-1, 1,0);
    tracep->declBus(c+301,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+44,"io_enq_valid", false,-1);
    tracep->declBus(c+39,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+40,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+41,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+42,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+43,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+102,"io_deq_ready", false,-1);
    tracep->declBit(c+45,"io_deq_valid", false,-1);
    tracep->declBus(c+31,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+49,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+50,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+33,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+34,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+302,"ram", false,-1, 48,0);
    tracep->declBit(c+304,"full", false,-1);
    tracep->declBit(c+45,"io_deq_valid_0", false,-1);
    tracep->declBit(c+103,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1595,"io_enq_valid", false,-1);
    tracep->declBus(c+1779,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1019,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1780,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1020,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1778,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1639,"io_deq_ready", false,-1);
    tracep->declBit(c+1602,"io_deq_valid", false,-1);
    tracep->declBus(c+185,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1603,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+305,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1584,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+186,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+306,"ram", false,-1, 48,0);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+1602,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1640,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+1596,"io_enq_valid", false,-1);
    tracep->declBus(c+1021,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1022,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1023,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1641,"io_deq_ready", false,-1);
    tracep->declBit(c+1604,"io_deq_valid", false,-1);
    tracep->declBus(c+1586,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1587,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1736,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+309,"ram", false,-1, 36,0);
    tracep->declBit(c+311,"full", false,-1);
    tracep->declBit(c+1604,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1642,"do_enq", false,-1);
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
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1643,"auto_in_awready", false,-1);
    tracep->declBit(c+1605,"auto_in_awvalid", false,-1);
    tracep->declBus(c+185,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1737,"auto_in_wready", false,-1);
    tracep->declBit(c+1607,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1586,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1644,"auto_in_bready", false,-1);
    tracep->declBit(c+312,"auto_in_bvalid", false,-1);
    tracep->declBus(c+313,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+314,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+104,"auto_in_arready", false,-1);
    tracep->declBit(c+51,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+52,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+105,"auto_in_rready", false,-1);
    tracep->declBit(c+315,"auto_in_rvalid", false,-1);
    tracep->declBus(c+316,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+317,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+318,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+104,"nodeIn_arready", false,-1);
    tracep->declBit(c+1643,"nodeIn_awready", false,-1);
    tracep->declBit(c+1608,"w_sel0", false,-1);
    tracep->declBit(c+312,"w_full", false,-1);
    tracep->declBus(c+313,"w_id", false,-1, 3,0);
    tracep->declBit(c+319,"r_sel1", false,-1);
    tracep->declBit(c+320,"w_sel1", false,-1);
    tracep->declBit(c+315,"r_full", false,-1);
    tracep->declBus(c+316,"r_id", false,-1, 3,0);
    tracep->declBit(c+106,"ren", false,-1);
    tracep->declBit(c+321,"rdata_REG", false,-1);
    tracep->declBus(c+322,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+323,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+324,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+325,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+53,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+106,"R0_en", false,-1);
    tracep->declBit(c+1695,"R0_clk", false,-1);
    tracep->declBus(c+326,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1609,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1645,"W0_en", false,-1);
    tracep->declBit(c+1695,"W0_clk", false,-1);
    tracep->declBus(c+1586,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1587,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+107,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1024,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1779,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1780,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1025,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1026,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1358,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1359,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1360,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+109,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1361,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1362,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1738,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1739,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1363,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+98,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1593,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1779,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1780,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1594,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1734,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+729,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+726,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1778,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+97,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+38,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1733,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+725,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+726,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+727,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1778,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+728,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+259,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1595,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1779,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1780,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+260,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1596,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1735,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+261,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+262,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+263,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+264,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+265,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+266,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+267,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+268,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1358,"in_0_bvalid", false,-1);
    tracep->declBit(c+1361,"in_0_rvalid", false,-1);
    tracep->declBit(c+110,"in_0_wready", false,-1);
    tracep->declBit(c+111,"in_0_awready", false,-1);
    tracep->declBit(c+1740,"in_0_arready", false,-1);
    tracep->declBit(c+107,"anonIn_awready", false,-1);
    tracep->declBit(c+109,"anonIn_arready", false,-1);
    tracep->declBit(c+56,"requestARIO_0_0", false,-1);
    tracep->declBit(c+57,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1027,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1028,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+58,"arSel", false,-1, 15,0);
    tracep->declBus(c+1781,"awSel", false,-1, 15,0);
    tracep->declBus(c+1364,"rSel", false,-1, 15,0);
    tracep->declBus(c+1365,"bSel", false,-1, 15,0);
    tracep->declBus(c+327,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+328,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+329,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+330,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+331,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+332,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+333,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1782,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+334,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+335,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+336,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1783,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+337,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+338,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+339,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1784,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+340,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+341,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+342,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1785,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+343,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+344,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+345,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1786,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+346,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+347,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+348,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1787,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+349,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+350,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1788,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+352,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+353,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+354,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1789,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+355,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+356,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+357,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1790,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+358,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+359,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+360,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1791,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+361,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+362,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+363,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1792,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+364,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+365,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+366,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1793,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+367,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+368,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+369,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1794,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+370,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+371,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+372,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1795,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+373,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+374,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+375,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1796,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+59,"in_0_arvalid", false,-1);
    tracep->declBit(c+376,"latched", false,-1);
    tracep->declBit(c+1610,"in_0_awvalid", false,-1);
    tracep->declBit(c+1611,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1612,"in_0_wvalid", false,-1);
    tracep->declBit(c+377,"idle_2", false,-1);
    tracep->declBit(c+1366,"anyValid", false,-1);
    tracep->declBus(c+1367,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+378,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1368,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1369,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1370,"prefixOR_1", false,-1);
    tracep->declBit(c+1371,"winner_2_1", false,-1);
    tracep->declBit(c+379,"state_2_0", false,-1);
    tracep->declBit(c+380,"state_2_1", false,-1);
    tracep->declBit(c+1372,"muxState_2_0", false,-1);
    tracep->declBit(c+1373,"muxState_2_1", false,-1);
    tracep->declBit(c+381,"idle_3", false,-1);
    tracep->declBit(c+1374,"anyValid_1", false,-1);
    tracep->declBus(c+1375,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+382,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1376,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1377,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1378,"winner_3_0", false,-1);
    tracep->declBit(c+1379,"winner_3_1", false,-1);
    tracep->declBit(c+383,"state_3_0", false,-1);
    tracep->declBit(c+384,"state_3_1", false,-1);
    tracep->declBit(c+1380,"muxState_3_0", false,-1);
    tracep->declBit(c+1381,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+385,"io_enq_ready", false,-1);
    tracep->declBit(c+1611,"io_enq_valid", false,-1);
    tracep->declBus(c+1029,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+112,"io_deq_ready", false,-1);
    tracep->declBit(c+1613,"io_deq_valid", false,-1);
    tracep->declBus(c+1614,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+386,"wrap", false,-1);
    tracep->declBit(c+387,"wrap_1", false,-1);
    tracep->declBit(c+388,"maybe_full", false,-1);
    tracep->declBit(c+389,"ptr_match", false,-1);
    tracep->declBit(c+390,"empty", false,-1);
    tracep->declBit(c+391,"full", false,-1);
    tracep->declBit(c+1613,"io_deq_valid_0", false,-1);
    tracep->declBit(c+113,"do_deq", false,-1);
    tracep->declBit(c+114,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+387,"R0_addr", false,-1);
    tracep->declBit(c+1777,"R0_en", false,-1);
    tracep->declBit(c+1695,"R0_clk", false,-1);
    tracep->declBus(c+392,"R0_data", false,-1, 1,0);
    tracep->declBit(c+386,"W0_addr", false,-1);
    tracep->declBit(c+114,"W0_en", false,-1);
    tracep->declBit(c+1695,"W0_clk", false,-1);
    tracep->declBus(c+1029,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+393+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1646,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1615,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1583,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1584,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1636,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1598,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1586,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1637,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+271,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+262,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+272,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+115,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+265,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+266,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+267,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+268,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+275,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1643,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1605,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1737,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1607,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1586,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1644,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+312,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+313,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+314,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+51,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+52,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+105,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+315,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+316,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+317,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+318,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1616,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1617,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+395,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+61,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+396,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+397,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+398,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+184,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1582,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1583,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1584,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+187,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1585,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1586,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+671,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+188,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+191,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+192,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+193,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+196,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+271,"in_0_bvalid", false,-1);
    tracep->declBit(c+265,"in_0_rvalid", false,-1);
    tracep->declBit(c+1647,"in_0_wready", false,-1);
    tracep->declBit(c+1648,"in_0_awready", false,-1);
    tracep->declBit(c+115,"in_0_arready", false,-1);
    tracep->declBit(c+1646,"anonIn_awready", false,-1);
    tracep->declBit(c+63,"requestARIO_0_0", false,-1);
    tracep->declBit(c+64,"requestARIO_0_1", false,-1);
    tracep->declBit(c+65,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1618,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1619,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1620,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+66,"arSel", false,-1, 15,0);
    tracep->declBus(c+399,"awSel", false,-1, 15,0);
    tracep->declBus(c+400,"rSel", false,-1, 15,0);
    tracep->declBus(c+401,"bSel", false,-1, 15,0);
    tracep->declBit(c+402,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+403,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+404,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+405,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+406,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+407,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+408,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+409,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+410,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+411,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+412,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+413,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+414,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+415,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+416,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+417,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+418,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+419,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+420,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+421,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+422,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+423,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+424,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+425,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+426,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+427,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+428,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+429,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+430,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+431,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+432,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+433,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+434,"latched", false,-1);
    tracep->declBit(c+1621,"in_0_awvalid", false,-1);
    tracep->declBit(c+1622,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1623,"in_0_wvalid", false,-1);
    tracep->declBit(c+435,"idle_3", false,-1);
    tracep->declBit(c+436,"anyValid", false,-1);
    tracep->declBus(c+437,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+438,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+439,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+440,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+441,"prefixOR_1", false,-1);
    tracep->declBit(c+442,"winner_3_1", false,-1);
    tracep->declBit(c+443,"winner_3_2", false,-1);
    tracep->declBit(c+444,"state_3_0", false,-1);
    tracep->declBit(c+445,"state_3_1", false,-1);
    tracep->declBit(c+446,"state_3_2", false,-1);
    tracep->declBit(c+447,"muxState_3_0", false,-1);
    tracep->declBit(c+448,"muxState_3_1", false,-1);
    tracep->declBit(c+449,"muxState_3_2", false,-1);
    tracep->declBit(c+450,"idle_4", false,-1);
    tracep->declBit(c+451,"anyValid_1", false,-1);
    tracep->declBus(c+452,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+453,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+454,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+455,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+456,"winner_4_0", false,-1);
    tracep->declBit(c+457,"winner_4_2", false,-1);
    tracep->declBit(c+458,"state_4_0", false,-1);
    tracep->declBit(c+459,"state_4_2", false,-1);
    tracep->declBit(c+460,"muxState_4_0", false,-1);
    tracep->declBit(c+461,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+462,"io_enq_ready", false,-1);
    tracep->declBit(c+1622,"io_enq_valid", false,-1);
    tracep->declBus(c+1624,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1649,"io_deq_ready", false,-1);
    tracep->declBit(c+1625,"io_deq_valid", false,-1);
    tracep->declBus(c+1626,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+463,"wrap", false,-1);
    tracep->declBit(c+464,"wrap_1", false,-1);
    tracep->declBit(c+465,"maybe_full", false,-1);
    tracep->declBit(c+466,"ptr_match", false,-1);
    tracep->declBit(c+467,"empty", false,-1);
    tracep->declBit(c+468,"full", false,-1);
    tracep->declBit(c+1625,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1650,"do_deq", false,-1);
    tracep->declBit(c+1651,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+464,"R0_addr", false,-1);
    tracep->declBit(c+1777,"R0_en", false,-1);
    tracep->declBit(c+1695,"R0_clk", false,-1);
    tracep->declBus(c+469,"R0_data", false,-1, 2,0);
    tracep->declBit(c+463,"W0_addr", false,-1);
    tracep->declBit(c+1651,"W0_en", false,-1);
    tracep->declBit(c+1695,"W0_clk", false,-1);
    tracep->declBus(c+1624,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+470+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1635,"auto_in_awready", false,-1);
    tracep->declBit(c+1597,"auto_in_awvalid", false,-1);
    tracep->declBus(c+185,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1583,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1584,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+270,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1636,"auto_in_wready", false,-1);
    tracep->declBit(c+1598,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1586,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"auto_in_wlast", false,-1);
    tracep->declBit(c+1637,"auto_in_bready", false,-1);
    tracep->declBit(c+271,"auto_in_bvalid", false,-1);
    tracep->declBus(c+262,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+272,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+273,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_in_arready", false,-1);
    tracep->declBit(c+45,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+100,"auto_in_rready", false,-1);
    tracep->declBit(c+265,"auto_in_rvalid", false,-1);
    tracep->declBus(c+266,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+267,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+268,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+274,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+275,"auto_in_rlast", false,-1);
    tracep->declBit(c+1646,"auto_out_awready", false,-1);
    tracep->declBit(c+1615,"auto_out_awvalid", false,-1);
    tracep->declBus(c+185,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1583,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1584,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1636,"auto_out_wready", false,-1);
    tracep->declBit(c+1598,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1586,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"auto_out_wlast", false,-1);
    tracep->declBit(c+1637,"auto_out_bready", false,-1);
    tracep->declBit(c+271,"auto_out_bvalid", false,-1);
    tracep->declBus(c+262,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+272,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+115,"auto_out_arready", false,-1);
    tracep->declBit(c+60,"auto_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_out_rready", false,-1);
    tracep->declBit(c+265,"auto_out_rvalid", false,-1);
    tracep->declBus(c+266,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+267,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+268,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+275,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+472,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+473,"io_deq_valid", false,-1);
    tracep->declBit(c+474,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+473,"full", false,-1);
    tracep->declBit(c+474,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+475,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+476,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+477,"io_deq_valid", false,-1);
    tracep->declBit(c+478,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+477,"full", false,-1);
    tracep->declBit(c+478,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+479,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+480,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+481,"io_deq_valid", false,-1);
    tracep->declBit(c+482,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+481,"full", false,-1);
    tracep->declBit(c+482,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+483,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+485,"io_deq_valid", false,-1);
    tracep->declBit(c+486,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->declBit(c+486,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+487,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+489,"io_deq_valid", false,-1);
    tracep->declBit(c+490,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+489,"full", false,-1);
    tracep->declBit(c+490,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+491,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+497,"io_deq_valid", false,-1);
    tracep->declBit(c+498,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->declBit(c+498,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+499,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBit(c+502,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+501,"full", false,-1);
    tracep->declBit(c+502,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+503,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+672,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+673,"io_deq_ready", false,-1);
    tracep->declBit(c+505,"io_deq_valid", false,-1);
    tracep->declBit(c+506,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+505,"full", false,-1);
    tracep->declBit(c+506,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+507,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+508,"io_enq_ready", false,-1);
    tracep->declBit(c+674,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+675,"io_deq_ready", false,-1);
    tracep->declBit(c+509,"io_deq_valid", false,-1);
    tracep->declBit(c+510,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+509,"full", false,-1);
    tracep->declBit(c+510,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+511,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+512,"io_enq_ready", false,-1);
    tracep->declBit(c+676,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+677,"io_deq_ready", false,-1);
    tracep->declBit(c+513,"io_deq_valid", false,-1);
    tracep->declBit(c+514,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+513,"full", false,-1);
    tracep->declBit(c+514,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+515,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+516,"io_enq_ready", false,-1);
    tracep->declBit(c+678,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+679,"io_deq_ready", false,-1);
    tracep->declBit(c+517,"io_deq_valid", false,-1);
    tracep->declBit(c+518,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+517,"full", false,-1);
    tracep->declBit(c+518,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+519,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+520,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+521,"io_deq_valid", false,-1);
    tracep->declBit(c+522,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+521,"full", false,-1);
    tracep->declBit(c+522,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+523,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+524,"io_enq_ready", false,-1);
    tracep->declBit(c+680,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+681,"io_deq_ready", false,-1);
    tracep->declBit(c+525,"io_deq_valid", false,-1);
    tracep->declBit(c+526,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+526,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+528,"io_enq_ready", false,-1);
    tracep->declBit(c+682,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+683,"io_deq_ready", false,-1);
    tracep->declBit(c+529,"io_deq_valid", false,-1);
    tracep->declBit(c+530,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+529,"full", false,-1);
    tracep->declBit(c+530,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+531,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+684,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+685,"io_deq_ready", false,-1);
    tracep->declBit(c+533,"io_deq_valid", false,-1);
    tracep->declBit(c+534,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+533,"full", false,-1);
    tracep->declBit(c+534,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+535,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+536,"io_enq_ready", false,-1);
    tracep->declBit(c+686,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+687,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBit(c+538,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+537,"full", false,-1);
    tracep->declBit(c+538,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+539,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+540,"io_enq_ready", false,-1);
    tracep->declBit(c+688,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+689,"io_deq_ready", false,-1);
    tracep->declBit(c+541,"io_deq_valid", false,-1);
    tracep->declBit(c+542,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+541,"full", false,-1);
    tracep->declBit(c+542,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+543,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+544,"io_enq_ready", false,-1);
    tracep->declBit(c+690,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+691,"io_deq_ready", false,-1);
    tracep->declBit(c+545,"io_deq_valid", false,-1);
    tracep->declBit(c+546,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+545,"full", false,-1);
    tracep->declBit(c+546,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+547,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+548,"io_enq_ready", false,-1);
    tracep->declBit(c+692,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+693,"io_deq_ready", false,-1);
    tracep->declBit(c+549,"io_deq_valid", false,-1);
    tracep->declBit(c+550,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+549,"full", false,-1);
    tracep->declBit(c+550,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+551,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+552,"io_enq_ready", false,-1);
    tracep->declBit(c+694,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+695,"io_deq_ready", false,-1);
    tracep->declBit(c+553,"io_deq_valid", false,-1);
    tracep->declBit(c+554,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+553,"full", false,-1);
    tracep->declBit(c+554,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+555,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+556,"io_enq_ready", false,-1);
    tracep->declBit(c+696,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+697,"io_deq_ready", false,-1);
    tracep->declBit(c+557,"io_deq_valid", false,-1);
    tracep->declBit(c+558,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+558,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+559,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+560,"io_enq_ready", false,-1);
    tracep->declBit(c+698,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+699,"io_deq_ready", false,-1);
    tracep->declBit(c+561,"io_deq_valid", false,-1);
    tracep->declBit(c+562,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+561,"full", false,-1);
    tracep->declBit(c+562,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+563,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+564,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+565,"io_deq_valid", false,-1);
    tracep->declBit(c+566,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+565,"full", false,-1);
    tracep->declBit(c+566,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+567,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+568,"io_enq_ready", false,-1);
    tracep->declBit(c+700,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+701,"io_deq_ready", false,-1);
    tracep->declBit(c+569,"io_deq_valid", false,-1);
    tracep->declBit(c+570,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+569,"full", false,-1);
    tracep->declBit(c+570,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+571,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+572,"io_enq_ready", false,-1);
    tracep->declBit(c+702,"io_enq_valid", false,-1);
    tracep->declBit(c+270,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+703,"io_deq_ready", false,-1);
    tracep->declBit(c+573,"io_deq_valid", false,-1);
    tracep->declBit(c+574,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+573,"full", false,-1);
    tracep->declBit(c+574,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+575,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+576,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+577,"io_deq_valid", false,-1);
    tracep->declBit(c+578,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+577,"full", false,-1);
    tracep->declBit(c+578,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+579,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+580,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+581,"io_deq_valid", false,-1);
    tracep->declBit(c+582,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+581,"full", false,-1);
    tracep->declBit(c+582,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+583,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+584,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+585,"io_deq_valid", false,-1);
    tracep->declBit(c+586,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+585,"full", false,-1);
    tracep->declBit(c+586,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+587,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+588,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+589,"io_deq_valid", false,-1);
    tracep->declBit(c+590,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+589,"full", false,-1);
    tracep->declBit(c+590,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+591,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+592,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+593,"io_deq_valid", false,-1);
    tracep->declBit(c+594,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+593,"full", false,-1);
    tracep->declBit(c+594,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+595,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+596,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+597,"io_deq_valid", false,-1);
    tracep->declBit(c+598,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+597,"full", false,-1);
    tracep->declBit(c+598,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+599,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1741,"reset", false,-1);
    tracep->declBit(c+107,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1024,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1779,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1780,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1025,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1021,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1026,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1358,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1359,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1360,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+109,"auto_master_out_arready", false,-1);
    tracep->declBit(c+54,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+39,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1361,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1362,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1738,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1739,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1363,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1741,"reset", false,-1);
    tracep->declBit(c+1776,"io_interrupt", false,-1);
    tracep->declBit(c+107,"io_master_awready", false,-1);
    tracep->declBit(c+1024,"io_master_awvalid", false,-1);
    tracep->declBus(c+1019,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1779,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1780,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"io_master_wready", false,-1);
    tracep->declBit(c+1025,"io_master_wvalid", false,-1);
    tracep->declBus(c+1021,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"io_master_wlast", false,-1);
    tracep->declBit(c+1026,"io_master_bready", false,-1);
    tracep->declBit(c+1358,"io_master_bvalid", false,-1);
    tracep->declBus(c+1360,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1359,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+109,"io_master_arready", false,-1);
    tracep->declBit(c+54,"io_master_arvalid", false,-1);
    tracep->declBus(c+40,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+41,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"io_master_rready", false,-1);
    tracep->declBit(c+1361,"io_master_rvalid", false,-1);
    tracep->declBus(c+1739,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1738,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1363,"io_master_rlast", false,-1);
    tracep->declBus(c+1362,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1797,"io_slave_awready", false,-1);
    tracep->declBit(c+1776,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1798,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1779,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1780,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1770,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1799,"io_slave_wready", false,-1);
    tracep->declBit(c+1776,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1798,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1779,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1776,"io_slave_wlast", false,-1);
    tracep->declBit(c+1776,"io_slave_bready", false,-1);
    tracep->declBit(c+1800,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1801,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1802,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1803,"io_slave_arready", false,-1);
    tracep->declBit(c+1776,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1798,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1779,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1780,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1770,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1778,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1776,"io_slave_rready", false,-1);
    tracep->declBit(c+1804,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1805,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1806,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1807,"io_slave_rlast", false,-1);
    tracep->declBus(c+1808,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1030,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1031,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1032,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+1033,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1034,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1030,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1031,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1035,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1036,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1037,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1779,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1780,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1771,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1778,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1038,"ifu_arvalid", false,-1);
    tracep->declBit(c+1039,"ifu_arready", false,-1);
    tracep->declBus(c+1040,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1809,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1810,"ifu_rlast", false,-1);
    tracep->declBus(c+1811,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1041,"ifu_rvalid", false,-1);
    tracep->declBit(c+1042,"ifu_rready", false,-1);
    tracep->declBit(c+1812,"useless1", false,-1);
    tracep->declBit(c+1813,"useless2", false,-1);
    tracep->declBit(c+1814,"useless3", false,-1);
    tracep->declBit(c+1815,"useless4", false,-1);
    tracep->declBus(c+1043,"cache_araddr", false,-1, 31,0);
    tracep->declBus(c+1816,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+1817,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+1771,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+1818,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+1044,"cache_arvalid", false,-1);
    tracep->declBit(c+1045,"cache_arready", false,-1);
    tracep->declBus(c+116,"cache_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"cache_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"cache_rlast", false,-1);
    tracep->declBus(c+119,"cache_rid", false,-1, 3,0);
    tracep->declBit(c+120,"cache_rvalid", false,-1);
    tracep->declBit(c+1046,"cache_rready", false,-1);
    tracep->declBus(c+1047,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1779,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1780,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1778,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1049,"lsu_arvalid", false,-1);
    tracep->declBit(c+1050,"lsu_arready", false,-1);
    tracep->declBus(c+121,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+122,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+123,"lsu_rlast", false,-1);
    tracep->declBus(c+124,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+125,"lsu_rvalid", false,-1);
    tracep->declBit(c+1051,"lsu_rready", false,-1);
    tracep->declBus(c+1047,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1779,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1780,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1052,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1053,"lsu_awvalid", false,-1);
    tracep->declBit(c+126,"lsu_awready", false,-1);
    tracep->declBus(c+1054,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1055,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1056,"lsu_wlast", false,-1);
    tracep->declBit(c+1057,"lsu_wvalid", false,-1);
    tracep->declBit(c+127,"lsu_wready", false,-1);
    tracep->declBus(c+1652,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1653,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1654,"lsu_bvalid", false,-1);
    tracep->declBit(c+1058,"lsu_bready", false,-1);
    tracep->declBus(c+1059,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1061,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1062,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1063,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1064,"axi_arvalid", false,-1);
    tracep->declBit(c+128,"axi_arready", false,-1);
    tracep->declBus(c+129,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+130,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+131,"axi_rlast", false,-1);
    tracep->declBus(c+132,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+133,"axi_rvalid", false,-1);
    tracep->declBit(c+1065,"axi_rready", false,-1);
    tracep->declBus(c+1019,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1779,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1780,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1024,"axi_awvalid", false,-1);
    tracep->declBit(c+107,"axi_awready", false,-1);
    tracep->declBus(c+1021,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"axi_wlast", false,-1);
    tracep->declBit(c+1025,"axi_wvalid", false,-1);
    tracep->declBit(c+108,"axi_wready", false,-1);
    tracep->declBus(c+1360,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1359,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1358,"axi_bvalid", false,-1);
    tracep->declBit(c+1026,"axi_bready", false,-1);
    tracep->declBus(c+67,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+68,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+69,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+70,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+72,"clint_arvalid", false,-1);
    tracep->declBit(c+1066,"clint_arready", false,-1);
    tracep->declBus(c+1067,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1068,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1069,"clint_rlast", false,-1);
    tracep->declBus(c+1779,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1070,"clint_rvalid", false,-1);
    tracep->declBit(c+73,"clint_rready", false,-1);
    tracep->declBus(c+1819,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1820,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1821,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1822,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1823,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1824,"clint_awvalid", false,-1);
    tracep->declBit(c+1071,"clint_awready", false,-1);
    tracep->declBus(c+1825,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1826,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1827,"clint_wlast", false,-1);
    tracep->declBit(c+1828,"clint_wvalid", false,-1);
    tracep->declBit(c+1072,"clint_wready", false,-1);
    tracep->declBus(c+1073,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1779,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1074,"clint_bvalid", false,-1);
    tracep->declBit(c+1829,"clint_bready", false,-1);
    tracep->declBus(c+1658,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1659,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1743,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1744,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1434,"a5", false,-1, 31,0);
    tracep->declBus(c+1660,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1743,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1744,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1661,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1745,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1662,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1663,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1664,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1665,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1666,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1667,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1668,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1669,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1670,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1671,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1672,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1673,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1674,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1675,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1676,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1075,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1076,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1677,"csr_write", false,-1);
    tracep->declBus(c+1678,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1435+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1077,"wdata", false,-1, 31,0);
    tracep->declBus(c+1078,"waddr", false,-1, 4,0);
    tracep->declBit(c+1079,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1439+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1080,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1081,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1082,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1083,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1084,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1085,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1086,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1087,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1088,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1089,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1090,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1091,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1092,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1093,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1094,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1095,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+1047,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1096,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1097,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1098,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1099,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1100,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1101,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1102,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1103,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1104,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1105,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1106,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1107,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1043,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1816,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1817,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1771,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1818,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1044,"arvalid_i_a", false,-1);
    tracep->declBit(c+1045,"arready_o_a", false,-1);
    tracep->declBus(c+116,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+117,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+118,"rlast_o_a", false,-1);
    tracep->declBus(c+119,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+120,"rvalid_o_a", false,-1);
    tracep->declBit(c+1046,"rready_i_a", false,-1);
    tracep->declBus(c+1830,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1779,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1780,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1770,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1778,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1776,"awvalid_i_a", false,-1);
    tracep->declBit(c+134,"awready_o_a", false,-1);
    tracep->declBus(c+1830,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1779,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1776,"wlast_i_a", false,-1);
    tracep->declBit(c+1776,"wvalid_i_a", false,-1);
    tracep->declBit(c+135,"wready_o_a", false,-1);
    tracep->declBus(c+1655,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1656,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1657,"bvalid_o_a", false,-1);
    tracep->declBit(c+1776,"bready_i_a", false,-1);
    tracep->declBus(c+1047,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1779,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1780,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1048,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1778,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1049,"arvalid_i_b", false,-1);
    tracep->declBit(c+1050,"arready_o_b", false,-1);
    tracep->declBus(c+121,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+122,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+123,"rlast_o_b", false,-1);
    tracep->declBus(c+124,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+125,"rvalid_o_b", false,-1);
    tracep->declBit(c+1051,"rready_i_b", false,-1);
    tracep->declBus(c+1047,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1779,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1780,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1052,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1778,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1053,"awvalid_i_b", false,-1);
    tracep->declBit(c+126,"awready_o_b", false,-1);
    tracep->declBus(c+1054,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1055,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1056,"wlast_i_b", false,-1);
    tracep->declBit(c+1057,"wvalid_i_b", false,-1);
    tracep->declBit(c+127,"wready_o_b", false,-1);
    tracep->declBus(c+1652,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1653,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1654,"bvalid_o_b", false,-1);
    tracep->declBit(c+1058,"bready_i_b", false,-1);
    tracep->declBus(c+1059,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1060,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1061,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1062,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1063,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1064,"arvalid_o", false,-1);
    tracep->declBit(c+128,"arready_i", false,-1);
    tracep->declBus(c+129,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+130,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+131,"rlast_i", false,-1);
    tracep->declBus(c+132,"rid_i", false,-1, 3,0);
    tracep->declBit(c+133,"rvalid_i", false,-1);
    tracep->declBit(c+1065,"rready_o", false,-1);
    tracep->declBus(c+1019,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1779,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1780,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1020,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1778,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1024,"awvalid_o", false,-1);
    tracep->declBit(c+107,"awready_i", false,-1);
    tracep->declBus(c+1021,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1022,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1023,"wlast_o", false,-1);
    tracep->declBit(c+1025,"wvalid_o", false,-1);
    tracep->declBit(c+108,"wready_i", false,-1);
    tracep->declBus(c+1360,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1359,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1358,"bvalid_i", false,-1);
    tracep->declBit(c+1026,"bready_o", false,-1);
    tracep->declBit(c+1108,"ar_switch", false,-1);
    tracep->declBit(c+1109,"r_switch", false,-1);
    tracep->declBit(c+1110,"aw_switch", false,-1);
    tracep->declBit(c+1111,"w_switch", false,-1);
    tracep->declBit(c+1112,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+67,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+68,"arid_i", false,-1, 3,0);
    tracep->declBus(c+69,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+70,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+71,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+72,"arvalid_i", false,-1);
    tracep->declBit(c+1066,"arready_o", false,-1);
    tracep->declBus(c+1067,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1068,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1069,"rlast_o", false,-1);
    tracep->declBus(c+1779,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1070,"rvalid_o", false,-1);
    tracep->declBit(c+73,"rready_i", false,-1);
    tracep->declBus(c+1819,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1820,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1821,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1822,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1823,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1824,"awvalid_i", false,-1);
    tracep->declBit(c+1071,"awready_o", false,-1);
    tracep->declBus(c+1825,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1826,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1827,"wlast_i", false,-1);
    tracep->declBit(c+1828,"wvalid_i", false,-1);
    tracep->declBit(c+1072,"wready_o", false,-1);
    tracep->declBus(c+1073,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1779,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1074,"bvalid_o", false,-1);
    tracep->declBit(c+1829,"bready_i", false,-1);
    tracep->declBit(c+1113,"ar_state", false,-1);
    tracep->declBit(c+1114,"r_state", false,-1);
    tracep->declBit(c+1115,"aw_state", false,-1);
    tracep->declBit(c+1116,"w_state", false,-1);
    tracep->declBit(c+1831,"b_state", false,-1);
    tracep->declBus(c+1117,"araddr", false,-1, 31,0);
    tracep->declBus(c+1118,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1119,"wdata", false,-1, 31,0);
    tracep->declBus(c+1120,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1832,"wvalid", false,-1);
    tracep->declBit(c+1121,"flag_waddr", false,-1);
    tracep->declBit(c+1122,"flag_wdata", false,-1);
    tracep->declBit(c+1123,"flag_rdata", false,-1);
    tracep->declBit(c+1124,"flag_raddr", false,-1);
    tracep->declBit(c+1833,"flag_write", false,-1);
    tracep->declBus(c+1125,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1126,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1127,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1128,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1129,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1130,"lfsr_in", false,-1);
    tracep->declBus(c+1131,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1132,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1660,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1743,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1744,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1661,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1745,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1662,"a_in_src_i", false,-1);
    tracep->declBus(c+1663,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1664,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1665,"adder_a_src_i", false,-1);
    tracep->declBit(c+1666,"adder_out_src_i", false,-1);
    tracep->declBus(c+1667,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1668,"MemRead_i", false,-1);
    tracep->declBit(c+1669,"MemWrite_i", false,-1);
    tracep->declBus(c+1670,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1671,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1672,"wb_src_i", false,-1);
    tracep->declBit(c+1673,"csr_write_i", false,-1);
    tracep->declBit(c+1674,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1675,"reg_write_i", false,-1);
    tracep->declBus(c+1676,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1075,"exu_valid_i", false,-1);
    tracep->declBit(c+1076,"exu_ready_o", false,-1);
    tracep->declBus(c+1080,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1081,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1082,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1083,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1084,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1085,"MemRead_o", false,-1);
    tracep->declBit(c+1086,"MemWrite_o", false,-1);
    tracep->declBus(c+1087,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1088,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1089,"wb_src_o", false,-1);
    tracep->declBit(c+1090,"csr_write_o", false,-1);
    tracep->declBit(c+1091,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1092,"reg_write_o", false,-1);
    tracep->declBus(c+1093,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1094,"exu_valid_o", false,-1);
    tracep->declBit(c+1095,"exu_ready_i", false,-1);
    tracep->declBus(c+1134,"pc", false,-1, 31,0);
    tracep->declBus(c+1081,"rs1", false,-1, 31,0);
    tracep->declBus(c+1082,"rs2", false,-1, 31,0);
    tracep->declBus(c+1135,"imm", false,-1, 31,0);
    tracep->declBus(c+1136,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1137,"a_in_src", false,-1);
    tracep->declBus(c+1138,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1139,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1140,"adder_a_src", false,-1);
    tracep->declBit(c+1141,"adder_out_src", false,-1);
    tracep->declBus(c+1142,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1143,"a_in", false,-1, 31,0);
    tracep->declBus(c+1144,"b_in", false,-1, 31,0);
    tracep->declBus(c+1145,"a_out", false,-1, 31,0);
    tracep->declBus(c+1146,"add_out", false,-1, 31,0);
    tracep->declBus(c+1147,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1080,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1084,"npc", false,-1, 31,0);
    tracep->declBit(c+1148,"zero", false,-1);
    tracep->declBus(c+1778,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1834,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1835,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1149,"current_state", false,-1, 1,0);
    tracep->declBus(c+1150,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1143,"a", false,-1, 31,0);
    tracep->declBus(c+1144,"b", false,-1, 31,0);
    tracep->declBus(c+1142,"op", false,-1, 3,0);
    tracep->declBus(c+1080,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1148,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1836,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1081,"d0", false,-1, 31,0);
    tracep->declBus(c+1134,"d1", false,-1, 31,0);
    tracep->declBit(c+1137,"sel", false,-1);
    tracep->declBus(c+1143,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1836,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1082,"d0", false,-1, 31,0);
    tracep->declBus(c+1135,"d1", false,-1, 31,0);
    tracep->declBus(c+1837,"d2", false,-1, 31,0);
    tracep->declBus(c+1136,"d3", false,-1, 31,0);
    tracep->declBus(c+1138,"sel", false,-1, 1,0);
    tracep->declBus(c+1144,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1145,"a", false,-1, 31,0);
    tracep->declBus(c+1135,"b", false,-1, 31,0);
    tracep->declBus(c+1146,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1836,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1134,"d0", false,-1, 31,0);
    tracep->declBus(c+1081,"d1", false,-1, 31,0);
    tracep->declBit(c+1140,"sel", false,-1);
    tracep->declBus(c+1145,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1836,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1146,"d0", false,-1, 31,0);
    tracep->declBus(c+1136,"d1", false,-1, 31,0);
    tracep->declBit(c+1141,"sel", false,-1);
    tracep->declBus(c+1147,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1151,"pc4", false,-1, 31,0);
    tracep->declBus(c+1147,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1139,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1148,"zero", false,-1);
    tracep->declBus(c+1080,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1084,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1836,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1838,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBus(c+1838,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1836,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1037,"cpu_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1779,"cpu_arid_i", false,-1, 3,0);
    tracep->declBus(c+1780,"cpu_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1771,"cpu_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1778,"cpu_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1038,"cpu_arvalid_i", false,-1);
    tracep->declBit(c+1039,"cpu_arready_o", false,-1);
    tracep->declBus(c+1040,"cpu_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1809,"cpu_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1810,"cpu_rlast_o", false,-1);
    tracep->declBus(c+1811,"cpu_rid_o", false,-1, 3,0);
    tracep->declBit(c+1041,"cpu_rvalid_o", false,-1);
    tracep->declBit(c+1042,"cpu_rready_i", false,-1);
    tracep->declBus(c+1043,"mem_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1816,"mem_arid_o", false,-1, 3,0);
    tracep->declBus(c+1817,"mem_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1771,"mem_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1818,"mem_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1044,"mem_arvalid_o", false,-1);
    tracep->declBit(c+1045,"mem_arready_i", false,-1);
    tracep->declBus(c+116,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+117,"mem_rresp_i", false,-1, 1,0);
    tracep->declBit(c+118,"mem_rlast_i", false,-1);
    tracep->declBus(c+119,"mem_rid_i", false,-1, 3,0);
    tracep->declBit(c+120,"mem_rvalid_i", false,-1);
    tracep->declBit(c+1046,"mem_rready_o", false,-1);
    tracep->declBus(c+1839,"BLOCK_WORDS", false,-1, 31,0);
    tracep->declBus(c+1839,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+1839,"INDEX_BITS", false,-1, 31,0);
    tracep->declBus(c+1840,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+1839,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1152,"cpu_addr", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1153+i*4,"data_array", true,(i+0), 127,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1217+i*1,"tag_array", true,(i+0), 23,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+1233+i*1,"valid_array", true,(i+0));
    }
    tracep->declBus(c+1249,"req_tag", false,-1, 23,0);
    tracep->declBus(c+1250,"req_index", false,-1, 3,0);
    tracep->declBus(c+1251,"req_offset", false,-1, 3,0);
    tracep->declBus(c+1252,"counter", false,-1, 31,0);
    tracep->declBus(c+1253,"current_state", false,-1, 2,0);
    tracep->declBus(c+1746,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1254,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1658,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1659,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1743,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1744,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1434,"a5", false,-1, 31,0);
    tracep->declBus(c+1030,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1031,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1035,"idu_valid_i", false,-1);
    tracep->declBit(c+1036,"idu_ready_o", false,-1);
    tracep->declBus(c+1660,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1743,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1744,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1661,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1745,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1662,"a_in_src_o", false,-1);
    tracep->declBus(c+1663,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1664,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1665,"adder_a_src_o", false,-1);
    tracep->declBit(c+1666,"adder_out_src_o", false,-1);
    tracep->declBus(c+1667,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1668,"MemRead_o", false,-1);
    tracep->declBit(c+1669,"MemWrite_o", false,-1);
    tracep->declBus(c+1670,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1671,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1672,"wb_src_o", false,-1);
    tracep->declBit(c+1673,"csr_write_o", false,-1);
    tracep->declBit(c+1674,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1675,"reg_write_o", false,-1);
    tracep->declBus(c+1676,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1075,"idu_valid_o", false,-1);
    tracep->declBit(c+1076,"idu_ready_i", false,-1);
    tracep->declBit(c+1677,"csr_write_i", false,-1);
    tracep->declBus(c+1678,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1471+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1660,"pc", false,-1, 31,0);
    tracep->declBus(c+1679,"inst", false,-1, 31,0);
    tracep->declBus(c+1680,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1778,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1834,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1835,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1255,"current_state", false,-1, 1,0);
    tracep->declBus(c+1256,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1679,"inst", false,-1, 31,0);
    tracep->declBus(c+1667,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1681,"opcode", false,-1, 6,0);
    tracep->declBus(c+1682,"funct3", false,-1, 2,0);
    tracep->declBus(c+1683,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1677,"wen", false,-1);
    tracep->declBus(c+1679,"inst", false,-1, 31,0);
    tracep->declBus(c+1678,"wdata", false,-1, 31,0);
    tracep->declBus(c+1434,"NO", false,-1, 31,0);
    tracep->declBus(c+1660,"pc", false,-1, 31,0);
    tracep->declBus(c+1745,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1475+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1479,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1480,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1481,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1482,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1841,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1842,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1681,"opcode", false,-1, 6,0);
    tracep->declBus(c+1682,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1679,"inst", false,-1, 31,0);
    tracep->declBit(c+1662,"a_in_src", false,-1);
    tracep->declBus(c+1663,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1675,"reg_write", false,-1);
    tracep->declBus(c+1664,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1665,"adder_a_src", false,-1);
    tracep->declBit(c+1668,"MemRead", false,-1);
    tracep->declBit(c+1669,"MemWrite", false,-1);
    tracep->declBus(c+1680,"wmask", false,-1, 7,0);
    tracep->declBit(c+1672,"wb_src", false,-1);
    tracep->declBus(c+1671,"rmask", false,-1, 2,0);
    tracep->declBit(c+1673,"csr_write", false,-1);
    tracep->declBit(c+1666,"adder_out_src", false,-1);
    tracep->declBit(c+1674,"csr_wdata_src", false,-1);
    tracep->declBus(c+1681,"opcode", false,-1, 6,0);
    tracep->declBus(c+1682,"funct3", false,-1, 2,0);
    tracep->declBus(c+1683,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1836,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1679,"inst", false,-1, 31,0);
    tracep->declBus(c+1661,"data", false,-1, 31,0);
    tracep->declBus(c+1681,"opcode", false,-1, 6,0);
    tracep->declBus(c+1682,"funct3", false,-1, 2,0);
    tracep->declBus(c+1683,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1037,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1779,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1780,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1771,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1778,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1038,"arvalid_o", false,-1);
    tracep->declBit(c+1039,"arready_i", false,-1);
    tracep->declBus(c+1040,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1809,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1810,"rlast_i", false,-1);
    tracep->declBus(c+1811,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1041,"rvalid_i", false,-1);
    tracep->declBit(c+1042,"rready_o", false,-1);
    tracep->declBus(c+1032,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1033,"ifu_valid_i", false,-1);
    tracep->declBit(c+1034,"ifu_ready_o", false,-1);
    tracep->declBus(c+1030,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1031,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1035,"ifu_valid_o", false,-1);
    tracep->declBit(c+1036,"ifu_ready_i", false,-1);
    tracep->declBus(c+1257,"pc", false,-1, 31,0);
    tracep->declBus(c+1843,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1844,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1845,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1846,"lfsr_in", false,-1);
    tracep->declBit(c+1038,"arvalid", false,-1);
    tracep->declBus(c+1037,"araddr", false,-1, 31,0);
    tracep->declBus(c+1258,"inst", false,-1, 31,0);
    tracep->declBit(c+1042,"rready", false,-1);
    tracep->declBus(c+1847,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1848+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1880,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1770,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1767,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1771,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1772,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1881,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+1259,"current_state", false,-1, 2,0);
    tracep->declBus(c+1260,"next_state", false,-1, 2,0);
    tracep->declBus(c+1261,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+1262,"ready_flag", false,-1);
    tracep->declBit(c+1263,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1080,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1081,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1082,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1083,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1084,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1085,"MemRead_i", false,-1);
    tracep->declBit(c+1086,"MemWrite_i", false,-1);
    tracep->declBus(c+1087,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1088,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1089,"wb_src_i", false,-1);
    tracep->declBit(c+1090,"csr_write_i", false,-1);
    tracep->declBit(c+1091,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1092,"reg_write_i", false,-1);
    tracep->declBus(c+1093,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1094,"lsu_valid_i", false,-1);
    tracep->declBit(c+1095,"lsu_ready_o", false,-1);
    tracep->declBus(c+1047,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1096,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1097,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1098,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1099,"npc_o", false,-1, 31,0);
    tracep->declBus(c+1100,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1101,"wb_src_o", false,-1);
    tracep->declBit(c+1102,"csr_write_o", false,-1);
    tracep->declBit(c+1103,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1104,"reg_write_o", false,-1);
    tracep->declBus(c+1105,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1106,"lsu_valid_o", false,-1);
    tracep->declBit(c+1107,"lsu_ready_i", false,-1);
    tracep->declBus(c+1047,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1779,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1780,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1048,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1778,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1049,"arvalid_o", false,-1);
    tracep->declBit(c+1050,"arready_i", false,-1);
    tracep->declBus(c+121,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+122,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+123,"rlast_i", false,-1);
    tracep->declBus(c+124,"rid_i", false,-1, 3,0);
    tracep->declBit(c+125,"rvalid_i", false,-1);
    tracep->declBit(c+1051,"rready_o", false,-1);
    tracep->declBus(c+1047,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1779,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1780,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1052,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1778,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1053,"awvalid_o", false,-1);
    tracep->declBit(c+126,"awready_i", false,-1);
    tracep->declBus(c+1054,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1055,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1056,"wlast_o", false,-1);
    tracep->declBit(c+1057,"wvalid_o", false,-1);
    tracep->declBit(c+127,"wready_i", false,-1);
    tracep->declBus(c+1652,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1653,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1654,"bvalid_i", false,-1);
    tracep->declBit(c+1058,"bready_o", false,-1);
    tracep->declBus(c+1047,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1096,"rs1", false,-1, 31,0);
    tracep->declBus(c+1882,"rs2", false,-1, 31,0);
    tracep->declBus(c+1883,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1100,"rmask", false,-1, 2,0);
    tracep->declBit(c+1264,"flag", false,-1);
    tracep->declBit(c+1884,"wvalid_tmp", false,-1);
    tracep->declBus(c+1885,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1886,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1887,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1888,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1889,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1890,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1891,"lfsr_in", false,-1);
    tracep->declBit(c+1049,"arvalid", false,-1);
    tracep->declBus(c+1047,"araddr", false,-1, 31,0);
    tracep->declBit(c+1051,"rready", false,-1);
    tracep->declBus(c+1047,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1053,"awvalid", false,-1);
    tracep->declBus(c+1054,"wdata", false,-1, 31,0);
    tracep->declBus(c+1055,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1057,"wvalid", false,-1);
    tracep->declBit(c+1058,"bready", false,-1);
    tracep->declBus(c+1892,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1893+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1925,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1926,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1927+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1959,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1960+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1992+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+2024,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1778,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1834,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1835,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+2025,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1265,"current_state", false,-1, 1,0);
    tracep->declBus(c+1266,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+2026,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1836,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBus(c+1077,"wdata", false,-1, 31,0);
    tracep->declBus(c+1078,"waddr", false,-1, 4,0);
    tracep->declBit(c+1079,"wen", false,-1);
    tracep->declBus(c+1658,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1743,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1659,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1744,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1434,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1483+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1515+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1047,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1096,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1097,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1098,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1099,"npc_i", false,-1, 31,0);
    tracep->declBus(c+1100,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1101,"wb_src_i", false,-1);
    tracep->declBit(c+1102,"csr_write_i", false,-1);
    tracep->declBit(c+1103,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1104,"reg_write_i", false,-1);
    tracep->declBus(c+1105,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1106,"wbu_valid_i", false,-1);
    tracep->declBit(c+1107,"wbu_ready_o", false,-1);
    tracep->declBus(c+1032,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1033,"wbu_valid_o", false,-1);
    tracep->declBit(c+1034,"wbu_ready_i", false,-1);
    tracep->declBus(c+1678,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1077,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1677,"csr_write_o", false,-1);
    tracep->declBit(c+1079,"reg_write_o", false,-1);
    tracep->declBus(c+1078,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1267,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1268,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1269,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1270,"rs1", false,-1, 31,0);
    tracep->declBus(c+1271,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1272,"rmask", false,-1, 2,0);
    tracep->declBit(c+1273,"wb_src", false,-1);
    tracep->declBit(c+1274,"csr_wdata_src", false,-1);
    tracep->declBit(c+1275,"difftest_check", false,-1);
    tracep->declBit(c+1276,"difftest_check_flag", false,-1);
    tracep->declBus(c+1778,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1834,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1835,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1277,"current_state", false,-1, 1,0);
    tracep->declBus(c+1278,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1836,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1270,"d0", false,-1, 31,0);
    tracep->declBus(c+1271,"d1", false,-1, 31,0);
    tracep->declBit(c+1274,"sel", false,-1);
    tracep->declBus(c+1678,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1268,"read_data", false,-1, 31,0);
    tracep->declBus(c+1279,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1272,"rmask", false,-1, 2,0);
    tracep->declBus(c+1267,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1280,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1281,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1282,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1283,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1284,"byte3", false,-1, 31,0);
    tracep->declBus(c+1285,"byte2", false,-1, 31,0);
    tracep->declBus(c+1286,"byte1", false,-1, 31,0);
    tracep->declBus(c+1287,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1836,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1269,"d0", false,-1, 31,0);
    tracep->declBus(c+1267,"d1", false,-1, 31,0);
    tracep->declBit(c+1273,"sel", false,-1);
    tracep->declBus(c+1077,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1742,"rst_n", false,-1);
    tracep->declBus(c+1059,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1060,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1061,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1062,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1063,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1064,"axi_arvalid_i", false,-1);
    tracep->declBit(c+128,"axi_arready_o", false,-1);
    tracep->declBus(c+129,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+130,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+131,"axi_rlast_o", false,-1);
    tracep->declBus(c+132,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+133,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1065,"axi_rready_i", false,-1);
    tracep->declBus(c+1019,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1779,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1780,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1020,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1778,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1024,"axi_awvalid_i", false,-1);
    tracep->declBit(c+107,"axi_awready_o", false,-1);
    tracep->declBus(c+1021,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1022,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1023,"axi_wlast_i", false,-1);
    tracep->declBit(c+1025,"axi_wvalid_i", false,-1);
    tracep->declBit(c+108,"axi_wready_o", false,-1);
    tracep->declBus(c+1360,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1359,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1358,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1026,"axi_bready_i", false,-1);
    tracep->declBus(c+40,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+39,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+41,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+42,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+43,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+54,"sram_arvalid_o", false,-1);
    tracep->declBit(c+109,"sram_arready_i", false,-1);
    tracep->declBus(c+1738,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1739,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1363,"sram_rlast_i", false,-1);
    tracep->declBus(c+1362,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1361,"sram_rvalid_i", false,-1);
    tracep->declBit(c+55,"sram_rready_o", false,-1);
    tracep->declBus(c+1019,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1779,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1780,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1020,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1778,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1024,"sram_awvalid_o", false,-1);
    tracep->declBit(c+107,"sram_awready_i", false,-1);
    tracep->declBus(c+1021,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1022,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1023,"sram_wlast_o", false,-1);
    tracep->declBit(c+1025,"sram_wvalid_o", false,-1);
    tracep->declBit(c+108,"sram_wready_i", false,-1);
    tracep->declBus(c+1360,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1359,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1358,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1026,"sram_bready_o", false,-1);
    tracep->declBus(c+67,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+68,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+69,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+70,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+71,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+72,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1066,"clint_arready_i", false,-1);
    tracep->declBus(c+1067,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1068,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1069,"clint_rlast_i", false,-1);
    tracep->declBus(c+1779,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1070,"clint_rvalid_i", false,-1);
    tracep->declBit(c+73,"clint_rready_o", false,-1);
    tracep->declBus(c+1819,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1820,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1821,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1822,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1823,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1824,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1071,"clint_awready_i", false,-1);
    tracep->declBus(c+1825,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1826,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1827,"clint_wlast_o", false,-1);
    tracep->declBit(c+1828,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1072,"clint_wready_i", false,-1);
    tracep->declBus(c+1073,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1779,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1074,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1829,"clint_bready_o", false,-1);
    tracep->declBit(c+74,"ar_switch", false,-1);
    tracep->declBit(c+75,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"io_d", false,-1);
    tracep->declBit(c+600,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"io_d", false,-1);
    tracep->declBit(c+600,"io_q", false,-1);
    tracep->declBit(c+600,"sync_0", false,-1);
    tracep->declBit(c+601,"sync_1", false,-1);
    tracep->declBit(c+602,"sync_2", false,-1);
    tracep->declBit(c+603,"sync_3", false,-1);
    tracep->declBit(c+604,"sync_4", false,-1);
    tracep->declBit(c+605,"sync_5", false,-1);
    tracep->declBit(c+606,"sync_6", false,-1);
    tracep->declBit(c+607,"sync_7", false,-1);
    tracep->declBit(c+608,"sync_8", false,-1);
    tracep->declBit(c+609,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1410,"auto_in_psel", false,-1);
    tracep->declBit(c+1411,"auto_in_penable", false,-1);
    tracep->declBit(c+1397,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1409,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1396,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+720,"auto_in_pready", false,-1);
    tracep->declBit(c+1776,"auto_in_pslverr", false,-1);
    tracep->declBus(c+721,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1697,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1698,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1699,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1700,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1701,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1702,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1703,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1704,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1705,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1706,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1547,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1410,"in_psel", false,-1);
    tracep->declBit(c+1411,"in_penable", false,-1);
    tracep->declBus(c+1396,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1397,"in_pwrite", false,-1);
    tracep->declBus(c+1398,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+720,"in_pready", false,-1);
    tracep->declBus(c+721,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1776,"in_pslverr", false,-1);
    tracep->declBus(c+1697,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1698,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1699,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1700,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1701,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1702,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1703,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1704,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1705,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1706,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+730,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+721,"rdata", false,-1, 31,0);
    tracep->declBus(c+731,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+720,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+732,"num", false,-1, 3,0);
    tracep->declBus(c+1699,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+733,"num", false,-1, 3,0);
    tracep->declBus(c+1700,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+734,"num", false,-1, 3,0);
    tracep->declBus(c+1701,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+735,"num", false,-1, 3,0);
    tracep->declBus(c+1702,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+736,"num", false,-1, 3,0);
    tracep->declBus(c+1703,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+737,"num", false,-1, 3,0);
    tracep->declBus(c+1704,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+738,"num", false,-1, 3,0);
    tracep->declBus(c+1705,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+739,"num", false,-1, 3,0);
    tracep->declBus(c+1706,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1407,"auto_in_psel", false,-1);
    tracep->declBit(c+1408,"auto_in_penable", false,-1);
    tracep->declBit(c+1397,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1409,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1396,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+157,"auto_in_pready", false,-1);
    tracep->declBit(c+1776,"auto_in_pslverr", false,-1);
    tracep->declBus(c+158,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1707,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1708,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1547,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1407,"in_psel", false,-1);
    tracep->declBit(c+1408,"in_penable", false,-1);
    tracep->declBus(c+1396,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1397,"in_pwrite", false,-1);
    tracep->declBus(c+1398,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+157,"in_pready", false,-1);
    tracep->declBus(c+158,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1776,"in_pslverr", false,-1);
    tracep->declBit(c+1707,"ps2_clk", false,-1);
    tracep->declBit(c+1708,"ps2_data", false,-1);
    tracep->declBus(c+610,"data_r", false,-1, 7,0);
    tracep->declBus(c+611,"old_data", false,-1, 7,0);
    tracep->declBus(c+612,"data_asic", false,-1, 7,0);
    tracep->declBus(c+613,"buffer", false,-1, 7,0);
    tracep->declBit(c+614,"ready", false,-1);
    tracep->declBit(c+615,"nextdata_n", false,-1);
    tracep->declBit(c+616,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1747,"clrn", false,-1);
    tracep->declBit(c+1707,"ps2_clk", false,-1);
    tracep->declBit(c+1708,"ps2_data", false,-1);
    tracep->declBit(c+615,"nextdata_n", false,-1);
    tracep->declBus(c+613,"data", false,-1, 7,0);
    tracep->declBit(c+614,"ready", false,-1);
    tracep->declBit(c+616,"overflow", false,-1);
    tracep->declBus(c+617,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+618+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+626,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+627,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+628,"count", false,-1, 3,0);
    tracep->declBus(c+629,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+630,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1616,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1617,"auto_in_wvalid", false,-1);
    tracep->declBit(c+395,"auto_in_arready", false,-1);
    tracep->declBit(c+61,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+396,"auto_in_rvalid", false,-1);
    tracep->declBus(c+397,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+398,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+396,"state", false,-1);
    tracep->declBus(c+398,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+397,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+76,"raddr", false,-1, 31,0);
    tracep->declBit(c+77,"ren", false,-1);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1412,"auto_in_psel", false,-1);
    tracep->declBit(c+1413,"auto_in_penable", false,-1);
    tracep->declBit(c+1397,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1393,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1396,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"auto_in_pready", false,-1);
    tracep->declBit(c+1776,"auto_in_pslverr", false,-1);
    tracep->declBus(c+159,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1718,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1684,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1719,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1393,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1412,"in_psel", false,-1);
    tracep->declBit(c+1413,"in_penable", false,-1);
    tracep->declBus(c+1396,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1397,"in_pwrite", false,-1);
    tracep->declBus(c+1398,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"in_pready", false,-1);
    tracep->declBus(c+159,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1776,"in_pslverr", false,-1);
    tracep->declBit(c+1718,"qspi_sck", false,-1);
    tracep->declBit(c+1684,"qspi_ce_n", false,-1);
    tracep->declBus(c+1719,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1719,"din", false,-1, 3,0);
    tracep->declBus(c+1748,"dout", false,-1, 3,0);
    tracep->declBus(c+1686,"douten", false,-1, 3,0);
    tracep->declBit(c+1749,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1695,"clk_i", false,-1);
    tracep->declBit(c+1696,"rst_i", false,-1);
    tracep->declBus(c+1393,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1398,"dat_i", false,-1, 31,0);
    tracep->declBus(c+159,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1399,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1412,"cyc_i", false,-1);
    tracep->declBit(c+1412,"stb_i", false,-1);
    tracep->declBit(c+1749,"ack_o", false,-1);
    tracep->declBit(c+1397,"we_i", false,-1);
    tracep->declBit(c+1718,"sck", false,-1);
    tracep->declBit(c+1684,"ce_n", false,-1);
    tracep->declBus(c+1719,"din", false,-1, 3,0);
    tracep->declBus(c+1748,"dout", false,-1, 3,0);
    tracep->declBus(c+1686,"douten", false,-1, 3,0);
    tracep->declBus(c+1778,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1834,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1835,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+740,"mr_sck", false,-1);
    tracep->declBit(c+741,"mr_ce_n", false,-1);
    tracep->declBus(c+1719,"mr_din", false,-1, 3,0);
    tracep->declBus(c+742,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+743,"mr_doe", false,-1);
    tracep->declBit(c+744,"mw_sck", false,-1);
    tracep->declBit(c+745,"mw_ce_n", false,-1);
    tracep->declBus(c+1719,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1687,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+746,"mw_doe", false,-1);
    tracep->declBit(c+1688,"mr_rd", false,-1);
    tracep->declBit(c+747,"mr_done", false,-1);
    tracep->declBit(c+1689,"mw_wr", false,-1);
    tracep->declBit(c+1690,"mw_done", false,-1);
    tracep->declBit(c+1412,"wb_valid", false,-1);
    tracep->declBit(c+1548,"wb_we", false,-1);
    tracep->declBit(c+1549,"wb_re", false,-1);
    tracep->declBus(c+1569,"state", false,-1, 1,0);
    tracep->declBus(c+1750,"nstate", false,-1, 1,0);
    tracep->declBus(c+1751,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1752,"qpi_sck", false,-1);
    tracep->declBus(c+1550,"size", false,-1, 2,0);
    tracep->declBus(c+1551,"byte0", false,-1, 7,0);
    tracep->declBus(c+1552,"byte1", false,-1, 7,0);
    tracep->declBus(c+1553,"byte2", false,-1, 7,0);
    tracep->declBus(c+1554,"byte3", false,-1, 7,0);
    tracep->declBus(c+1555,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1747,"rst_n", false,-1);
    tracep->declBus(c+1556,"addr", false,-1, 23,0);
    tracep->declBit(c+1688,"rd", false,-1);
    tracep->declBus(c+1881,"size", false,-1, 2,0);
    tracep->declBit(c+747,"done", false,-1);
    tracep->declBus(c+159,"line", false,-1, 31,0);
    tracep->declBit(c+740,"sck", false,-1);
    tracep->declBit(c+741,"ce_n", false,-1);
    tracep->declBus(c+1719,"din", false,-1, 3,0);
    tracep->declBus(c+742,"dout", false,-1, 3,0);
    tracep->declBit(c+743,"douten", false,-1);
    tracep->declBus(c+2027,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2028,"READ", false,-1, 0,0);
    tracep->declBus(c+2029,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+748,"state", false,-1);
    tracep->declBit(c+1691,"nstate", false,-1);
    tracep->declBus(c+749,"counter", false,-1, 7,0);
    tracep->declBus(c+750,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+631+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+2030,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+751,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1747,"rst_n", false,-1);
    tracep->declBus(c+1557,"addr", false,-1, 23,0);
    tracep->declBus(c+1555,"line", false,-1, 31,0);
    tracep->declBus(c+1550,"size", false,-1, 2,0);
    tracep->declBit(c+1689,"wr", false,-1);
    tracep->declBit(c+1690,"done", false,-1);
    tracep->declBit(c+744,"sck", false,-1);
    tracep->declBit(c+745,"ce_n", false,-1);
    tracep->declBus(c+1719,"din", false,-1, 3,0);
    tracep->declBus(c+1687,"dout", false,-1, 3,0);
    tracep->declBit(c+746,"douten", false,-1);
    tracep->declBus(c+2027,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2028,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1558,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+752,"state", false,-1);
    tracep->declBit(c+1692,"nstate", false,-1);
    tracep->declBus(c+753,"counter", false,-1, 7,0);
    tracep->declBus(c+754,"saddr", false,-1, 23,0);
    tracep->declBus(c+2031,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+98,"auto_in_awready", false,-1);
    tracep->declBit(c+1593,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1779,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1780,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"auto_in_wready", false,-1);
    tracep->declBit(c+1594,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1021,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"auto_in_wlast", false,-1);
    tracep->declBit(c+1734,"auto_in_bready", false,-1);
    tracep->declBit(c+729,"auto_in_bvalid", false,-1);
    tracep->declBus(c+726,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1778,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+97,"auto_in_arready", false,-1);
    tracep->declBit(c+38,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1733,"auto_in_rready", false,-1);
    tracep->declBit(c+725,"auto_in_rvalid", false,-1);
    tracep->declBus(c+726,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+727,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1778,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+728,"auto_in_rlast", false,-1);
    tracep->declBit(c+1720,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1566,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+715,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+716,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+717,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+718,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1721,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1567,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1568,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1627,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+98,"in_awready", false,-1);
    tracep->declBit(c+1593,"in_awvalid", false,-1);
    tracep->declBus(c+1019,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1779,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1780,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1020,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1778,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"in_wready", false,-1);
    tracep->declBit(c+1594,"in_wvalid", false,-1);
    tracep->declBus(c+1021,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1023,"in_wlast", false,-1);
    tracep->declBit(c+1734,"in_bready", false,-1);
    tracep->declBit(c+729,"in_bvalid", false,-1);
    tracep->declBus(c+1778,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+726,"in_bid", false,-1, 3,0);
    tracep->declBit(c+97,"in_arready", false,-1);
    tracep->declBit(c+38,"in_arvalid", false,-1);
    tracep->declBus(c+40,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"in_arid", false,-1, 3,0);
    tracep->declBus(c+41,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1733,"in_rready", false,-1);
    tracep->declBit(c+725,"in_rvalid", false,-1);
    tracep->declBus(c+1778,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+727,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+728,"in_rlast", false,-1);
    tracep->declBus(c+726,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1720,"sdram_clk", false,-1);
    tracep->declBit(c+1566,"sdram_cke", false,-1);
    tracep->declBit(c+715,"sdram_cs", false,-1);
    tracep->declBit(c+716,"sdram_ras", false,-1);
    tracep->declBit(c+717,"sdram_cas", false,-1);
    tracep->declBit(c+718,"sdram_we", false,-1);
    tracep->declBus(c+1721,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1567,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1568,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1627,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+755,"sdram_dout_en", false,-1);
    tracep->declBus(c+756,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1695,"clk_i", false,-1);
    tracep->declBit(c+1696,"rst_i", false,-1);
    tracep->declBit(c+1593,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1019,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1779,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1780,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1778,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1594,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1021,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1022,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1023,"inport_wlast_i", false,-1);
    tracep->declBit(c+1734,"inport_bready_i", false,-1);
    tracep->declBit(c+38,"inport_arvalid_i", false,-1);
    tracep->declBus(c+40,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+39,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+41,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+43,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1733,"inport_rready_i", false,-1);
    tracep->declBus(c+1628,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+98,"inport_awready_o", false,-1);
    tracep->declBit(c+99,"inport_wready_o", false,-1);
    tracep->declBit(c+729,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1778,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+726,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+97,"inport_arready_o", false,-1);
    tracep->declBit(c+725,"inport_rvalid_o", false,-1);
    tracep->declBus(c+727,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1778,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+726,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+728,"inport_rlast_o", false,-1);
    tracep->declBit(c+1720,"sdram_clk_o", false,-1);
    tracep->declBit(c+1566,"sdram_cke_o", false,-1);
    tracep->declBit(c+715,"sdram_cs_o", false,-1);
    tracep->declBit(c+716,"sdram_ras_o", false,-1);
    tracep->declBit(c+717,"sdram_cas_o", false,-1);
    tracep->declBit(c+718,"sdram_we_o", false,-1);
    tracep->declBus(c+1568,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1721,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1567,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+756,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+755,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1765,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2032,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+136,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+137,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+138,"ram_rd_w", false,-1);
    tracep->declBit(c+1570,"ram_accept_w", false,-1);
    tracep->declBus(c+1021,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+757,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+79,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+758,"ram_ack_w", false,-1);
    tracep->declBit(c+1776,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1695,"clk_i", false,-1);
    tracep->declBit(c+1696,"rst_i", false,-1);
    tracep->declBit(c+1593,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1019,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1779,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1780,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1778,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1594,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1021,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1022,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1023,"axi_wlast_i", false,-1);
    tracep->declBit(c+1734,"axi_bready_i", false,-1);
    tracep->declBit(c+38,"axi_arvalid_i", false,-1);
    tracep->declBus(c+40,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+39,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+41,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+43,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1733,"axi_rready_i", false,-1);
    tracep->declBit(c+1570,"ram_accept_i", false,-1);
    tracep->declBit(c+758,"ram_ack_i", false,-1);
    tracep->declBit(c+1776,"ram_error_i", false,-1);
    tracep->declBus(c+757,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+98,"axi_awready_o", false,-1);
    tracep->declBit(c+99,"axi_wready_o", false,-1);
    tracep->declBit(c+729,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1778,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+726,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+97,"axi_arready_o", false,-1);
    tracep->declBit(c+725,"axi_rvalid_o", false,-1);
    tracep->declBus(c+727,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1778,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+726,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+728,"axi_rlast_o", false,-1);
    tracep->declBus(c+137,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+138,"ram_rd_o", false,-1);
    tracep->declBus(c+79,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+136,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1021,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+759,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+760,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+761,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+762,"req_rd_q", false,-1);
    tracep->declBit(c+763,"req_wr_q", false,-1);
    tracep->declBus(c+764,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+765,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+766,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+767,"req_prio_q", false,-1);
    tracep->declBit(c+768,"req_hold_rd_q", false,-1);
    tracep->declBit(c+769,"req_hold_wr_q", false,-1);
    tracep->declBit(c+770,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+139,"req_push_w", false,-1);
    tracep->declBus(c+1753,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+771,"req_out_valid_w", false,-1);
    tracep->declBus(c+772,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+140,"resp_accept_w", false,-1);
    tracep->declBit(c+773,"resp_is_write_w", false,-1);
    tracep->declBit(c+774,"resp_is_read_w", false,-1);
    tracep->declBit(c+728,"resp_is_last_w", false,-1);
    tracep->declBus(c+726,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+775,"resp_valid_w", false,-1);
    tracep->declBit(c+776,"write_prio_w", false,-1);
    tracep->declBit(c+777,"read_prio_w", false,-1);
    tracep->declBit(c+141,"write_active_w", false,-1);
    tracep->declBit(c+138,"read_active_w", false,-1);
    tracep->declBus(c+136,"addr_w", false,-1, 31,0);
    tracep->declBit(c+96,"wr_w", false,-1);
    tracep->declBit(c+138,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+2033,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1839,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2032,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1695,"clk_i", false,-1);
    tracep->declBit(c+1696,"rst_i", false,-1);
    tracep->declBus(c+1753,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+139,"push_i", false,-1);
    tracep->declBit(c+140,"pop_i", false,-1);
    tracep->declBus(c+772,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+770,"accept_o", false,-1);
    tracep->declBit(c+771,"valid_o", false,-1);
    tracep->declBus(c+2034,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+778+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+782,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+783,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+784,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1836,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1839,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2032,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1695,"clk_i", false,-1);
    tracep->declBit(c+1696,"rst_i", false,-1);
    tracep->declBus(c+757,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+758,"push_i", false,-1);
    tracep->declBit(c+140,"pop_i", false,-1);
    tracep->declBus(c+727,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+785,"accept_o", false,-1);
    tracep->declBit(c+775,"valid_o", false,-1);
    tracep->declBus(c+2034,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+786+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+790,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+791,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+792,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1695,"clk_i", false,-1);
    tracep->declBit(c+1696,"rst_i", false,-1);
    tracep->declBus(c+137,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+138,"inport_rd_i", false,-1);
    tracep->declBus(c+79,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+136,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1021,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1629,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1570,"inport_accept_o", false,-1);
    tracep->declBit(c+758,"inport_ack_o", false,-1);
    tracep->declBit(c+1776,"inport_error_o", false,-1);
    tracep->declBus(c+757,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1720,"sdram_clk_o", false,-1);
    tracep->declBit(c+1566,"sdram_cke_o", false,-1);
    tracep->declBit(c+715,"sdram_cs_o", false,-1);
    tracep->declBit(c+716,"sdram_ras_o", false,-1);
    tracep->declBit(c+717,"sdram_cas_o", false,-1);
    tracep->declBit(c+718,"sdram_we_o", false,-1);
    tracep->declBus(c+1568,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1721,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1567,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+756,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+755,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1765,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2032,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+2032,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1839,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1839,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+2035,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+2036,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+2037,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+2038,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1839,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+2039,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2040,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2041,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2042,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+2043,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+2044,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2045,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1779,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+2046,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1839,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1779,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+2045,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+2044,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2040,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+2042,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+2041,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+2043,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+2039,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+2047,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2048,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2049,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+2049,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1836,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+2049,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+2032,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2032,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2033,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+136,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+137,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+138,"ram_rd_w", false,-1);
    tracep->declBit(c+1570,"ram_accept_w", false,-1);
    tracep->declBus(c+1021,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+757,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+758,"ram_ack_w", false,-1);
    tracep->declBit(c+142,"ram_req_w", false,-1);
    tracep->declBus(c+793,"command_q", false,-1, 3,0);
    tracep->declBus(c+1571,"addr_q", false,-1, 12,0);
    tracep->declBus(c+756,"data_q", false,-1, 31,0);
    tracep->declBit(c+794,"data_rd_en_q", false,-1);
    tracep->declBus(c+1568,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1566,"cke_q", false,-1);
    tracep->declBus(c+1567,"bank_q", false,-1, 1,0);
    tracep->declBus(c+757,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+795,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1629,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+796,"refresh_q", false,-1);
    tracep->declBus(c+797,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+798+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1572,"state_q", false,-1, 3,0);
    tracep->declBus(c+143,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+144,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+802,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+803,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+145,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+146,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+147,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1839,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+804,"delay_q", false,-1, 3,0);
    tracep->declBus(c+148,"delay_r", false,-1, 3,0);
    tracep->declBus(c+2050,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1573,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+805,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+806,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+807,"idx", false,-1, 31,0);
    tracep->declBus(c+808,"rd_q", false,-1, 3,0);
    tracep->declBit(c+758,"ack_q", false,-1);
    tracep->declArray(c+1574,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1417,"auto_in_psel", false,-1);
    tracep->declBit(c+1418,"auto_in_penable", false,-1);
    tracep->declBit(c+1397,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1406,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1396,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"auto_in_pready", false,-1);
    tracep->declBit(c+723,"auto_in_pslverr", false,-1);
    tracep->declBus(c+724,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+714,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1564,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1565,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1717,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+2051,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2052,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+2053,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1559,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1417,"in_psel", false,-1);
    tracep->declBit(c+1418,"in_penable", false,-1);
    tracep->declBus(c+1396,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1397,"in_pwrite", false,-1);
    tracep->declBus(c+1398,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"in_pready", false,-1);
    tracep->declBus(c+724,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+723,"in_pslverr", false,-1);
    tracep->declBit(c+714,"spi_sck", false,-1);
    tracep->declBus(c+1564,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1565,"spi_mosi", false,-1);
    tracep->declBit(c+1717,"spi_miso", false,-1);
    tracep->declBit(c+809,"spi_irq_out", false,-1);
    tracep->declBus(c+2054,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+2055,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+2054,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+2056,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+2057,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+2058,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1779,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2045,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+2044,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+2040,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+2042,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+2041,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+2043,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+2039,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+2047,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+2048,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+2059,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+810,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1693,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+811,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+812,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+813,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+814,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+815,"wb_we_i", false,-1);
    tracep->declBit(c+816,"wb_stb_i", false,-1);
    tracep->declBit(c+817,"wb_cyc_i", false,-1);
    tracep->declBit(c+818,"wb_ack_o", false,-1);
    tracep->declBit(c+1776,"wb_err_o", false,-1);
    tracep->declBit(c+819,"wb_int_o", false,-1);
    tracep->declBit(c+820,"done", false,-1);
    tracep->declBus(c+821,"paddr", false,-1, 31,0);
    tracep->declQuad(c+822,"data", false,-1, 63,0);
    tracep->declBit(c+824,"is_flash_access", false,-1);
    tracep->declBus(c+825,"tmp", false,-1, 31,0);
    tracep->declQuad(c+826,"tmp64", false,-1, 63,0);
    tracep->declBus(c+828,"counter", false,-1, 7,0);
    tracep->declBit(c+829,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+2060,"Tp", false,-1, 31,0);
    tracep->declBit(c+1695,"wb_clk_i", false,-1);
    tracep->declBit(c+1696,"wb_rst_i", false,-1);
    tracep->declBus(c+811,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+812,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+813,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+814,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+815,"wb_we_i", false,-1);
    tracep->declBit(c+816,"wb_stb_i", false,-1);
    tracep->declBit(c+817,"wb_cyc_i", false,-1);
    tracep->declBit(c+818,"wb_ack_o", false,-1);
    tracep->declBit(c+1776,"wb_err_o", false,-1);
    tracep->declBit(c+819,"wb_int_o", false,-1);
    tracep->declBus(c+1564,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+714,"sclk_pad_o", false,-1);
    tracep->declBit(c+1565,"mosi_pad_o", false,-1);
    tracep->declBit(c+1717,"miso_pad_i", false,-1);
    tracep->declBus(c+830,"divider", false,-1, 15,0);
    tracep->declBus(c+831,"ctrl", false,-1, 13,0);
    tracep->declBus(c+832,"ss", false,-1, 7,0);
    tracep->declBus(c+833,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+834,"rx", false,-1, 127,0);
    tracep->declBit(c+838,"rx_negedge", false,-1);
    tracep->declBit(c+839,"tx_negedge", false,-1);
    tracep->declBus(c+840,"char_len", false,-1, 6,0);
    tracep->declBit(c+841,"go", false,-1);
    tracep->declBit(c+842,"lsb", false,-1);
    tracep->declBit(c+843,"ie", false,-1);
    tracep->declBit(c+844,"ass", false,-1);
    tracep->declBit(c+845,"spi_divider_sel", false,-1);
    tracep->declBit(c+846,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+847,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+848,"spi_ss_sel", false,-1);
    tracep->declBit(c+849,"tip", false,-1);
    tracep->declBit(c+850,"pos_edge", false,-1);
    tracep->declBit(c+851,"neg_edge", false,-1);
    tracep->declBit(c+852,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+2060,"Tp", false,-1, 31,0);
    tracep->declBit(c+1695,"clk_in", false,-1);
    tracep->declBit(c+1696,"rst", false,-1);
    tracep->declBit(c+849,"enable", false,-1);
    tracep->declBit(c+841,"go", false,-1);
    tracep->declBit(c+852,"last_clk", false,-1);
    tracep->declBus(c+830,"divider", false,-1, 15,0);
    tracep->declBit(c+714,"clk_out", false,-1);
    tracep->declBit(c+850,"pos_edge", false,-1);
    tracep->declBit(c+851,"neg_edge", false,-1);
    tracep->declBus(c+853,"cnt", false,-1, 15,0);
    tracep->declBit(c+854,"cnt_zero", false,-1);
    tracep->declBit(c+855,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+2060,"Tp", false,-1, 31,0);
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1696,"rst", false,-1);
    tracep->declBus(c+856,"latch", false,-1, 3,0);
    tracep->declBus(c+814,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+840,"len", false,-1, 6,0);
    tracep->declBit(c+842,"lsb", false,-1);
    tracep->declBit(c+841,"go", false,-1);
    tracep->declBit(c+850,"pos_edge", false,-1);
    tracep->declBit(c+851,"neg_edge", false,-1);
    tracep->declBit(c+838,"rx_negedge", false,-1);
    tracep->declBit(c+839,"tx_negedge", false,-1);
    tracep->declBit(c+849,"tip", false,-1);
    tracep->declBit(c+852,"last", false,-1);
    tracep->declBus(c+812,"p_in", false,-1, 31,0);
    tracep->declArray(c+834,"p_out", false,-1, 127,0);
    tracep->declBit(c+714,"s_clk", false,-1);
    tracep->declBit(c+1717,"s_in", false,-1);
    tracep->declBit(c+1565,"s_out", false,-1);
    tracep->declBus(c+857,"cnt", false,-1, 7,0);
    tracep->declArray(c+834,"data", false,-1, 127,0);
    tracep->declBus(c+858,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+859,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+860,"rx_clk", false,-1);
    tracep->declBit(c+861,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1414,"auto_in_psel", false,-1);
    tracep->declBit(c+1415,"auto_in_penable", false,-1);
    tracep->declBit(c+1397,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1409,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1396,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1416,"auto_in_pready", false,-1);
    tracep->declBit(c+1776,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1726,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1715,"uart_rx", false,-1);
    tracep->declBit(c+1716,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1414,"in_psel", false,-1);
    tracep->declBit(c+1415,"in_penable", false,-1);
    tracep->declBus(c+1396,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1416,"in_pready", false,-1);
    tracep->declBit(c+1776,"in_pslverr", false,-1);
    tracep->declBus(c+1547,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1397,"in_pwrite", false,-1);
    tracep->declBus(c+1726,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1398,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1715,"uart_rx", false,-1);
    tracep->declBit(c+1716,"uart_tx", false,-1);
    tracep->declBit(c+862,"rtsn", false,-1);
    tracep->declBit(c+1776,"ctsn", false,-1);
    tracep->declBit(c+863,"dtr_pad_o", false,-1);
    tracep->declBit(c+1776,"dsr_pad_i", false,-1);
    tracep->declBit(c+1776,"ri_pad_i", false,-1);
    tracep->declBit(c+1776,"dcd_pad_i", false,-1);
    tracep->declBit(c+864,"interrupt", false,-1);
    tracep->declBit(c+1754,"reg_we", false,-1);
    tracep->declBit(c+1755,"reg_re", false,-1);
    tracep->declBus(c+1560,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1561,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+635,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1694,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+865,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1696,"wb_rst_i", false,-1);
    tracep->declBus(c+1560,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1562,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1694,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1754,"wb_we_i", false,-1);
    tracep->declBit(c+1755,"wb_re_i", false,-1);
    tracep->declBit(c+1716,"stx_pad_o", false,-1);
    tracep->declBit(c+1715,"srx_pad_i", false,-1);
    tracep->declBus(c+2047,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+865,"rts_pad_o", false,-1);
    tracep->declBit(c+863,"dtr_pad_o", false,-1);
    tracep->declBit(c+864,"int_o", false,-1);
    tracep->declBit(c+866,"enable", false,-1);
    tracep->declBit(c+867,"srx_pad", false,-1);
    tracep->declBus(c+868,"ier", false,-1, 3,0);
    tracep->declBus(c+869,"iir", false,-1, 3,0);
    tracep->declBus(c+870,"fcr", false,-1, 1,0);
    tracep->declBus(c+871,"mcr", false,-1, 4,0);
    tracep->declBus(c+872,"lcr", false,-1, 7,0);
    tracep->declBus(c+873,"msr", false,-1, 7,0);
    tracep->declBus(c+874,"dl", false,-1, 15,0);
    tracep->declBus(c+875,"scratch", false,-1, 7,0);
    tracep->declBit(c+876,"start_dlc", false,-1);
    tracep->declBit(c+877,"lsr_mask_d", false,-1);
    tracep->declBit(c+878,"msi_reset", false,-1);
    tracep->declBus(c+879,"dlc", false,-1, 15,0);
    tracep->declBus(c+880,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+881,"rx_reset", false,-1);
    tracep->declBit(c+882,"tx_reset", false,-1);
    tracep->declBit(c+883,"dlab", false,-1);
    tracep->declBit(c+1777,"cts_pad_i", false,-1);
    tracep->declBit(c+1776,"dsr_pad_i", false,-1);
    tracep->declBit(c+1776,"ri_pad_i", false,-1);
    tracep->declBit(c+1776,"dcd_pad_i", false,-1);
    tracep->declBit(c+884,"loopback", false,-1);
    tracep->declBit(c+1776,"cts", false,-1);
    tracep->declBit(c+1777,"dsr", false,-1);
    tracep->declBit(c+1777,"ri", false,-1);
    tracep->declBit(c+1777,"dcd", false,-1);
    tracep->declBit(c+885,"cts_c", false,-1);
    tracep->declBit(c+886,"dsr_c", false,-1);
    tracep->declBit(c+887,"ri_c", false,-1);
    tracep->declBit(c+888,"dcd_c", false,-1);
    tracep->declBus(c+889,"lsr", false,-1, 7,0);
    tracep->declBit(c+890,"lsr0", false,-1);
    tracep->declBit(c+891,"lsr1", false,-1);
    tracep->declBit(c+892,"lsr2", false,-1);
    tracep->declBit(c+893,"lsr3", false,-1);
    tracep->declBit(c+894,"lsr4", false,-1);
    tracep->declBit(c+895,"lsr5", false,-1);
    tracep->declBit(c+896,"lsr6", false,-1);
    tracep->declBit(c+897,"lsr7", false,-1);
    tracep->declBit(c+898,"lsr0r", false,-1);
    tracep->declBit(c+899,"lsr1r", false,-1);
    tracep->declBit(c+900,"lsr2r", false,-1);
    tracep->declBit(c+901,"lsr3r", false,-1);
    tracep->declBit(c+902,"lsr4r", false,-1);
    tracep->declBit(c+903,"lsr5r", false,-1);
    tracep->declBit(c+904,"lsr6r", false,-1);
    tracep->declBit(c+905,"lsr7r", false,-1);
    tracep->declBit(c+151,"lsr_mask", false,-1);
    tracep->declBit(c+906,"rls_int", false,-1);
    tracep->declBit(c+907,"rda_int", false,-1);
    tracep->declBit(c+908,"ti_int", false,-1);
    tracep->declBit(c+909,"thre_int", false,-1);
    tracep->declBit(c+910,"ms_int", false,-1);
    tracep->declBit(c+911,"tf_push", false,-1);
    tracep->declBit(c+912,"rf_pop", false,-1);
    tracep->declBus(c+1756,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+913,"rf_error_bit", false,-1);
    tracep->declBit(c+891,"rf_overrun", false,-1);
    tracep->declBit(c+914,"rf_push_pulse", false,-1);
    tracep->declBus(c+915,"rf_count", false,-1, 4,0);
    tracep->declBus(c+916,"tf_count", false,-1, 4,0);
    tracep->declBus(c+917,"tstate", false,-1, 2,0);
    tracep->declBus(c+918,"rstate", false,-1, 3,0);
    tracep->declBus(c+919,"counter_t", false,-1, 9,0);
    tracep->declBit(c+920,"thre_set_en", false,-1);
    tracep->declBus(c+921,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+922,"block_value", false,-1, 7,0);
    tracep->declBit(c+923,"serial_out", false,-1);
    tracep->declBit(c+924,"serial_in", false,-1);
    tracep->declBit(c+152,"lsr_mask_condition", false,-1);
    tracep->declBit(c+153,"iir_read", false,-1);
    tracep->declBit(c+154,"msr_read", false,-1);
    tracep->declBit(c+155,"fifo_read", false,-1);
    tracep->declBit(c+156,"fifo_write", false,-1);
    tracep->declBus(c+925,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+926,"lsr0_d", false,-1);
    tracep->declBit(c+927,"lsr1_d", false,-1);
    tracep->declBit(c+928,"lsr2_d", false,-1);
    tracep->declBit(c+929,"lsr3_d", false,-1);
    tracep->declBit(c+930,"lsr4_d", false,-1);
    tracep->declBit(c+931,"lsr5_d", false,-1);
    tracep->declBit(c+932,"lsr6_d", false,-1);
    tracep->declBit(c+933,"lsr7_d", false,-1);
    tracep->declBit(c+934,"rls_int_d", false,-1);
    tracep->declBit(c+935,"thre_int_d", false,-1);
    tracep->declBit(c+936,"ms_int_d", false,-1);
    tracep->declBit(c+937,"ti_int_d", false,-1);
    tracep->declBit(c+938,"rda_int_d", false,-1);
    tracep->declBit(c+939,"rls_int_rise", false,-1);
    tracep->declBit(c+940,"thre_int_rise", false,-1);
    tracep->declBit(c+941,"ms_int_rise", false,-1);
    tracep->declBit(c+942,"ti_int_rise", false,-1);
    tracep->declBit(c+943,"rda_int_rise", false,-1);
    tracep->declBit(c+944,"rls_int_pnd", false,-1);
    tracep->declBit(c+945,"rda_int_pnd", false,-1);
    tracep->declBit(c+946,"thre_int_pnd", false,-1);
    tracep->declBit(c+947,"ms_int_pnd", false,-1);
    tracep->declBit(c+948,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+2060,"Tp", false,-1, 31,0);
    tracep->declBus(c+2060,"width", false,-1, 31,0);
    tracep->declBus(c+2028,"init_value", false,-1, 0,0);
    tracep->declBit(c+1696,"rst_i", false,-1);
    tracep->declBit(c+1695,"clk_i", false,-1);
    tracep->declBit(c+1776,"stage1_rst_i", false,-1);
    tracep->declBit(c+1777,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1715,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+867,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+949,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1696,"wb_rst_i", false,-1);
    tracep->declBus(c+872,"lcr", false,-1, 7,0);
    tracep->declBit(c+912,"rf_pop", false,-1);
    tracep->declBit(c+924,"srx_pad_i", false,-1);
    tracep->declBit(c+866,"enable", false,-1);
    tracep->declBit(c+881,"rx_reset", false,-1);
    tracep->declBit(c+151,"lsr_mask", false,-1);
    tracep->declBus(c+919,"counter_t", false,-1, 9,0);
    tracep->declBus(c+915,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1756,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+891,"rf_overrun", false,-1);
    tracep->declBit(c+913,"rf_error_bit", false,-1);
    tracep->declBus(c+918,"rstate", false,-1, 3,0);
    tracep->declBit(c+914,"rf_push_pulse", false,-1);
    tracep->declBus(c+950,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+951,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+952,"rshift", false,-1, 7,0);
    tracep->declBit(c+953,"rparity", false,-1);
    tracep->declBit(c+954,"rparity_error", false,-1);
    tracep->declBit(c+955,"rframing_error", false,-1);
    tracep->declBit(c+956,"rbit_in", false,-1);
    tracep->declBit(c+957,"rparity_xor", false,-1);
    tracep->declBus(c+958,"counter_b", false,-1, 7,0);
    tracep->declBit(c+959,"rf_push_q", false,-1);
    tracep->declBus(c+960,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+961,"rf_push", false,-1);
    tracep->declBit(c+962,"break_error", false,-1);
    tracep->declBit(c+963,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+964,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+965,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+966,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1779,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+2045,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+2044,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+2040,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+2042,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+2041,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+2043,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+2039,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+2047,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2048,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2061,"sr_push", false,-1, 3,0);
    tracep->declBus(c+967,"toc_value", false,-1, 9,0);
    tracep->declBus(c+968,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+2062,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1838,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1839,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2026,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1696,"wb_rst_i", false,-1);
    tracep->declBit(c+914,"push", false,-1);
    tracep->declBit(c+912,"pop", false,-1);
    tracep->declBus(c+960,"data_in", false,-1, 10,0);
    tracep->declBit(c+881,"fifo_reset", false,-1);
    tracep->declBit(c+151,"reset_status", false,-1);
    tracep->declBus(c+1756,"data_out", false,-1, 10,0);
    tracep->declBit(c+891,"overrun", false,-1);
    tracep->declBus(c+915,"count", false,-1, 4,0);
    tracep->declBit(c+913,"error_bit", false,-1);
    tracep->declBus(c+1757,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+969+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+985,"top", false,-1, 3,0);
    tracep->declBus(c+986,"bottom", false,-1, 3,0);
    tracep->declBus(c+987,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+988,"word0", false,-1, 2,0);
    tracep->declBus(c+989,"word1", false,-1, 2,0);
    tracep->declBus(c+990,"word2", false,-1, 2,0);
    tracep->declBus(c+991,"word3", false,-1, 2,0);
    tracep->declBus(c+992,"word4", false,-1, 2,0);
    tracep->declBus(c+993,"word5", false,-1, 2,0);
    tracep->declBus(c+994,"word6", false,-1, 2,0);
    tracep->declBus(c+995,"word7", false,-1, 2,0);
    tracep->declBus(c+996,"word8", false,-1, 2,0);
    tracep->declBus(c+997,"word9", false,-1, 2,0);
    tracep->declBus(c+998,"word10", false,-1, 2,0);
    tracep->declBus(c+999,"word11", false,-1, 2,0);
    tracep->declBus(c+1000,"word12", false,-1, 2,0);
    tracep->declBus(c+1001,"word13", false,-1, 2,0);
    tracep->declBus(c+1002,"word14", false,-1, 2,0);
    tracep->declBus(c+1003,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1839,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2053,"data_width", false,-1, 31,0);
    tracep->declBus(c+1838,"depth", false,-1, 31,0);
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+914,"we", false,-1);
    tracep->declBus(c+985,"a", false,-1, 3,0);
    tracep->declBus(c+986,"dpra", false,-1, 3,0);
    tracep->declBus(c+1004,"di", false,-1, 7,0);
    tracep->declBus(c+1757,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+636+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1696,"wb_rst_i", false,-1);
    tracep->declBus(c+872,"lcr", false,-1, 7,0);
    tracep->declBit(c+911,"tf_push", false,-1);
    tracep->declBus(c+1562,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+866,"enable", false,-1);
    tracep->declBit(c+882,"tx_reset", false,-1);
    tracep->declBit(c+151,"lsr_mask", false,-1);
    tracep->declBit(c+923,"stx_pad_o", false,-1);
    tracep->declBus(c+917,"tstate", false,-1, 2,0);
    tracep->declBus(c+916,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1005,"counter", false,-1, 4,0);
    tracep->declBus(c+1006,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1007,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1008,"stx_o_tmp", false,-1);
    tracep->declBit(c+1009,"parity_xor", false,-1);
    tracep->declBit(c+1010,"tf_pop", false,-1);
    tracep->declBit(c+1011,"bit_out", false,-1);
    tracep->declBus(c+1562,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1382,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1012,"tf_overrun", false,-1);
    tracep->declBus(c+1770,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1767,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1771,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1772,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1881,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+2063,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+2053,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1838,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1839,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2026,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+1696,"wb_rst_i", false,-1);
    tracep->declBit(c+911,"push", false,-1);
    tracep->declBit(c+1010,"pop", false,-1);
    tracep->declBus(c+1562,"data_in", false,-1, 7,0);
    tracep->declBit(c+882,"fifo_reset", false,-1);
    tracep->declBit(c+151,"reset_status", false,-1);
    tracep->declBus(c+1382,"data_out", false,-1, 7,0);
    tracep->declBit(c+1012,"overrun", false,-1);
    tracep->declBus(c+916,"count", false,-1, 4,0);
    tracep->declBus(c+1013,"top", false,-1, 3,0);
    tracep->declBus(c+1014,"bottom", false,-1, 3,0);
    tracep->declBus(c+1015,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1839,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2053,"data_width", false,-1, 31,0);
    tracep->declBus(c+1838,"depth", false,-1, 31,0);
    tracep->declBit(c+1695,"clk", false,-1);
    tracep->declBit(c+911,"we", false,-1);
    tracep->declBus(c+1013,"a", false,-1, 3,0);
    tracep->declBus(c+1014,"dpra", false,-1, 3,0);
    tracep->declBus(c+1562,"di", false,-1, 7,0);
    tracep->declBus(c+1382,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+652+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBit(c+1404,"auto_in_psel", false,-1);
    tracep->declBit(c+1405,"auto_in_penable", false,-1);
    tracep->declBit(c+1397,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1406,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1396,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1398,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+719,"auto_in_pready", false,-1);
    tracep->declBit(c+1774,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1775,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1709,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1710,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1711,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1712,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1713,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1714,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1695,"clock", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1559,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1404,"in_psel", false,-1);
    tracep->declBit(c+1405,"in_penable", false,-1);
    tracep->declBus(c+1396,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1397,"in_pwrite", false,-1);
    tracep->declBus(c+1398,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1399,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+719,"in_pready", false,-1);
    tracep->declBus(c+1775,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1774,"in_pslverr", false,-1);
    tracep->declBus(c+1709,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1710,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1711,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1712,"vga_hsync", false,-1);
    tracep->declBit(c+1713,"vga_vsync", false,-1);
    tracep->declBit(c+1714,"vga_valid", false,-1);
    tracep->declBus(c+1016,"h_addr", false,-1, 9,0);
    tracep->declBus(c+668,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1383,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1563,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+719,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1695,"pclk", false,-1);
    tracep->declBit(c+1696,"reset", false,-1);
    tracep->declBus(c+1383,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1016,"h_addr", false,-1, 9,0);
    tracep->declBus(c+668,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1712,"hsync", false,-1);
    tracep->declBit(c+1713,"vsync", false,-1);
    tracep->declBit(c+1714,"valid", false,-1);
    tracep->declBus(c+1709,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1710,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1711,"vga_b", false,-1, 7,0);
    tracep->declBus(c+2064,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+2065,"h_active", false,-1, 31,0);
    tracep->declBus(c+2066,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+2067,"h_total", false,-1, 31,0);
    tracep->declBus(c+2032,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+2068,"v_active", false,-1, 31,0);
    tracep->declBus(c+2069,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+2070,"v_total", false,-1, 31,0);
    tracep->declBus(c+1017,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+669,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1018,"h_valid", false,-1);
    tracep->declBit(c+670,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+714,"sck", false,-1);
    tracep->declBit(c+1577,"ss", false,-1);
    tracep->declBit(c+1565,"mosi", false,-1);
    tracep->declBit(c+1354,"miso", false,-1);
    tracep->declBus(c+1355,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1356,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1758,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+714,"sck", false,-1);
    tracep->declBit(c+1578,"ss", false,-1);
    tracep->declBit(c+1565,"mosi", false,-1);
    tracep->declBit(c+1759,"miso", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1348,"state", false,-1, 2,0);
    tracep->declBus(c+1349,"counter", false,-1, 7,0);
    tracep->declBus(c+1350,"cmd", false,-1, 7,0);
    tracep->declBus(c+1351,"addr", false,-1, 23,0);
    tracep->declBus(c+1352,"data", false,-1, 31,0);
    tracep->declBit(c+1353,"ren", false,-1);
    tracep->declBus(c+1760,"rdata", false,-1, 31,0);
    tracep->declBus(c+1761,"raddr", false,-1, 31,0);
    tracep->declBus(c+1357,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+714,"clock", false,-1);
    tracep->declBit(c+1353,"valid", false,-1);
    tracep->declBus(c+1350,"cmd", false,-1, 7,0);
    tracep->declBus(c+1761,"addr", false,-1, 31,0);
    tracep->declBus(c+1760,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1718,"sck", false,-1);
    tracep->declBit(c+1684,"ce_n", false,-1);
    tracep->declBus(c+1719,"dio", false,-1, 3,0);
    tracep->declBus(c+704,"dio_out", false,-1, 3,0);
    tracep->declBus(c+705,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1719,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1830,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+2060,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+2032,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+2034,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1839,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+2026,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+706,"state", false,-1, 2,0);
    tracep->declBus(c+1762,"next_state", false,-1, 2,0);
    tracep->declBus(c+707,"counter", false,-1, 7,0);
    tracep->declBus(c+708,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+709,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+710,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+711,"is_read_op", false,-1);
    tracep->declBit(c+712,"is_write_op", false,-1);
    tracep->declBus(c+713,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1763,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1720,"clk", false,-1);
    tracep->declBit(c+1566,"cke", false,-1);
    tracep->declBit(c+715,"cs", false,-1);
    tracep->declBit(c+716,"ras", false,-1);
    tracep->declBit(c+717,"cas", false,-1);
    tracep->declBit(c+718,"we", false,-1);
    tracep->declBus(c+1721,"a", false,-1, 13,0);
    tracep->declBus(c+1567,"ba", false,-1, 1,0);
    tracep->declBus(c+1568,"dqm", false,-1, 3,0);
    tracep->declBus(c+1627,"dq", false,-1, 31,0);
    tracep->declBit(c+22,"cs_0", false,-1);
    tracep->declBit(c+23,"ras_0", false,-1);
    tracep->declBit(c+24,"cas_0", false,-1);
    tracep->declBit(c+25,"we_0", false,-1);
    tracep->declBit(c+26,"cs_1", false,-1);
    tracep->declBit(c+27,"ras_1", false,-1);
    tracep->declBit(c+28,"cas_1", false,-1);
    tracep->declBit(c+29,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1720,"clk", false,-1);
    tracep->declBit(c+1566,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1567,"ba", false,-1, 1,0);
    tracep->declBus(c+1568,"dqm", false,-1, 3,0);
    tracep->declBus(c+1627,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1720,"clk", false,-1);
    tracep->declBit(c+1566,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1567,"ba", false,-1, 1,0);
    tracep->declBus(c+1579,"dqm", false,-1, 1,0);
    tracep->declBus(c+1630,"dq", false,-1, 15,0);
    tracep->declBus(c+2071,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2040,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2041,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2042,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1779,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1288,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1289,"bl", false,-1, 2,0);
    tracep->declBus(c+149,"command", false,-1, 3,0);
    tracep->declBus(c+1290,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1291,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1580,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1292,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1631,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1293,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1294+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1298,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1299,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2072,"state", false,-1, 2,0);
    tracep->declBit(c+1300,"write_brust", false,-1);
    tracep->declBit(c+1301,"read_burst", false,-1);
    tracep->declBus(c+1302,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1720,"clk", false,-1);
    tracep->declBit(c+1566,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1567,"ba", false,-1, 1,0);
    tracep->declBus(c+1581,"dqm", false,-1, 1,0);
    tracep->declBus(c+1628,"dq", false,-1, 15,0);
    tracep->declBus(c+2071,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2040,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2041,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2042,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1779,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1303,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1304,"bl", false,-1, 2,0);
    tracep->declBus(c+149,"command", false,-1, 3,0);
    tracep->declBus(c+1305,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1306,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1580,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1307,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1632,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1308,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1309+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1313,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1314,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2073,"state", false,-1, 2,0);
    tracep->declBit(c+1315,"write_brust", false,-1);
    tracep->declBit(c+1316,"read_burst", false,-1);
    tracep->declBus(c+1317,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1720,"clk", false,-1);
    tracep->declBit(c+1566,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1567,"ba", false,-1, 1,0);
    tracep->declBus(c+1568,"dqm", false,-1, 3,0);
    tracep->declBus(c+1627,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1720,"clk", false,-1);
    tracep->declBit(c+1566,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1567,"ba", false,-1, 1,0);
    tracep->declBus(c+1579,"dqm", false,-1, 1,0);
    tracep->declBus(c+1630,"dq", false,-1, 15,0);
    tracep->declBus(c+2071,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2040,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2041,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2042,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1779,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1318,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1319,"bl", false,-1, 2,0);
    tracep->declBus(c+150,"command", false,-1, 3,0);
    tracep->declBus(c+1320,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1321,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1580,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1322,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1633,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1323,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1324+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1328,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1329,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2074,"state", false,-1, 2,0);
    tracep->declBit(c+1330,"write_brust", false,-1);
    tracep->declBit(c+1331,"read_burst", false,-1);
    tracep->declBus(c+1332,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1720,"clk", false,-1);
    tracep->declBit(c+1566,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1567,"ba", false,-1, 1,0);
    tracep->declBus(c+1581,"dqm", false,-1, 1,0);
    tracep->declBus(c+1628,"dq", false,-1, 15,0);
    tracep->declBus(c+2071,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2040,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2041,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2042,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1779,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1333,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1334,"bl", false,-1, 2,0);
    tracep->declBus(c+150,"command", false,-1, 3,0);
    tracep->declBus(c+1335,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1336,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1580,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1337,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1634,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1338,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1339+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1343,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1344,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2075,"state", false,-1, 2,0);
    tracep->declBit(c+1345,"write_brust", false,-1);
    tracep->declBit(c+1346,"read_burst", false,-1);
    tracep->declBus(c+1347,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__b_switch));
    bufp->fullBit(oldp+4,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+6,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+7,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+8,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+9,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+10,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+11,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+12,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+13,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+14,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+15,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+16,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+17,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+18,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+19,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+20,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+21,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+22,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 3U)))));
    bufp->fullBit(oldp+23,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 2U)))));
    bufp->fullBit(oldp+24,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 1U)))));
    bufp->fullBit(oldp+25,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+26,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U)))));
    bufp->fullBit(oldp+27,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U)))));
    bufp->fullBit(oldp+28,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U)))));
    bufp->fullBit(oldp+29,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+36,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+46,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+51,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+52,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullSData(oldp+53,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+58,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+62,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+66,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullIData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+76,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+79,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                               ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                        : 0U))),8);
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+81,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+82,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+83,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+84,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+85,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+86,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+88,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+89,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+90,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+91,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+92,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+93,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+94,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+95,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+96,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awready));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wready));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullIData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rdata),32);
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rresp),2);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rlast));
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rid),4);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rvalid));
    bufp->fullIData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullIData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+145,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 2U))),13);
    bufp->fullSData(oldp+146,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+147,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+159,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+161,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+162,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+163,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+164,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+166,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+167,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+171,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+172,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+173,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+174,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+189,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+190,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+193,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+194,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+195,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+196,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+263,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+264,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+267,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+268,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+269,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+270,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+274,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+276,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+317,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+318,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+399,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+400,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+401,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+472,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+476,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+496,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+508,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+512,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+556,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+564,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+588,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+592,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+596,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+630,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+668,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+671,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+672,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+674,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+675,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+676,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+677,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+678,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+679,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+680,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+681,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+682,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+683,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+684,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+685,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+686,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+687,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+688,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+689,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+690,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+691,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+692,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+693,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+694,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+695,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+696,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+697,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+698,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+699,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+700,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+701,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+715,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+716,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+717,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+718,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+726,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+728,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullSData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+732,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+733,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+734,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+735,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+736,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+737,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+738,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+739,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+742,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+743,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+746,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+747,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+751,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+755,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+770,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+771,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+773,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+774,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+775,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+776,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+777,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+785,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+825,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+826,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+838,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+839,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+840,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+841,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+842,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+843,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+844,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+845,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+846,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+848,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+852,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+854,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+855,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+858,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+862,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+863,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+865,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+883,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+884,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+885,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+886,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+887,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+888,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+889,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+892,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+893,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+894,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+913,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+920,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+939,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+940,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+941,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+942,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+943,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+962,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+963,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+964,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+965,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+966,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+968,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+987,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1004,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1015,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1016,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_araddr),32);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arvalid));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arready));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rready));
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+1052,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                 ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1055,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arid),4);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1077,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1083,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+1084,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1130,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1145,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1146,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1148,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1151,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr),32);
    bufp->fullWData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[0]),128);
    bufp->fullWData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[1]),128);
    bufp->fullWData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[2]),128);
    bufp->fullWData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[3]),128);
    bufp->fullWData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[4]),128);
    bufp->fullWData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[5]),128);
    bufp->fullWData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[6]),128);
    bufp->fullWData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[7]),128);
    bufp->fullWData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[8]),128);
    bufp->fullWData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[9]),128);
    bufp->fullWData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[10]),128);
    bufp->fullWData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[11]),128);
    bufp->fullWData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[12]),128);
    bufp->fullWData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[13]),128);
    bufp->fullWData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[14]),128);
    bufp->fullWData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[15]),128);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[0]),24);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[1]),24);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[2]),24);
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[3]),24);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[4]),24);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[5]),24);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[6]),24);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[7]),24);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[8]),24);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[9]),24);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[10]),24);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[11]),24);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[12]),24);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[13]),24);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[14]),24);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[15]),24);
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[0]));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[1]));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[2]));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[3]));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[4]));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[5]));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[6]));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[7]));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[8]));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[9]));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[10]));
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[11]));
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[12]));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[13]));
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[14]));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[15]));
    bufp->fullIData(oldp+1249,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                >> 8U)),24);
    bufp->fullCData(oldp+1250,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1251,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr)),4);
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__counter),32);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state),3);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+1260,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
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
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1279,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1280,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1281,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1282,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1283,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1284,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1285,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1286,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1287,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1288,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1289,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1303,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1304,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1318,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1319,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1333,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1334,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1353,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1364,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1365,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1386,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1406,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1407,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1408,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1409,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1413,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1421,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1424,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1431,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1547,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1553,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1554,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1555,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1556,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullIData(oldp+1557,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1558,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1559,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1560,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1563,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullSData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1577,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1579,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1580,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),10);
    bufp->fullCData(oldp+1581,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1582,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1585,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1588,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1591,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1606,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1607,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1608,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1609,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1616,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1619,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+1628,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),16);
    bufp->fullIData(oldp+1629,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),32);
    bufp->fullSData(oldp+1630,((vlSelf->ysyxSoCFull__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullCData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1658,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1659,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1670,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1676,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1681,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1682,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1683,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1695,(vlSelf->clock));
    bufp->fullBit(oldp+1696,(vlSelf->reset));
    bufp->fullSData(oldp+1697,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1698,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1699,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1700,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1701,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1702,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1703,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1704,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1705,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1706,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1707,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1708,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1709,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1710,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1711,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1712,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1713,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1714,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1715,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1716,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1717,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1718,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1720,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1721,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1722,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                  : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                 : 0U)
                                             : 0U) 
                                           | (((0U 
                                                == 
                                                (3U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                                    >> 0x1cU)))
                                                ? (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [3U] 
                                                    << 0x18U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [2U] 
                                                       << 0x10U) 
                                                      | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                          [1U] 
                                                          << 8U) 
                                                         | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                         [0U])))
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                      : 0U) 
                                                    | ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                                            >> 0x1cU)))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                        : 0U))))))),32);
    bufp->fullBit(oldp+1723,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | (IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+1724,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready)
                                                  ? 0U
                                                  : 3U)
                                              : ((0U 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter)
                                                  ? 3U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready)
                                                  ? 2U
                                                  : 1U)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)
                                                  ? 1U
                                                  : 0U))))),3);
    bufp->fullBit(oldp+1725,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1727,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1728,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1729,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+1731,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1736,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullIData(oldp+1738,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                  ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 3U))
                                       : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                  : 0U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                    : 0U)))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                                            : 0U))),32);
    bufp->fullCData(oldp+1739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                 ? (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                            ? (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                       >> 1U))
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U)))
                                 : 0U)),2);
    bufp->fullBit(oldp+1740,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1741,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1745,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1746,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                     ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                              ? 0U : 
                                             (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid))
                                               ? 0U
                                               : 4U)))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rvalid) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rready))
                                             ? ((4U 
                                                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__counter)
                                                 ? 4U
                                                 : 2U)
                                             : 3U) : 
                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arvalid) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arready))
                                          ? 3U : 2U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                         ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array
                                              [(0xfU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                                   >> 4U))]) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array
                                                [(0xfU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                                     >> 4U))] 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                                 >> 8U)))
                                             ? 0U : 2U)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid))
                                             ? 1U : 0U))))),3);
    bufp->fullBit(oldp+1747,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1748,((0xfU & vlSelf->__VdfgTmp_h81912a5e__0)),4);
    bufp->fullBit(oldp+1749,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1750,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1753,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                     ? 0x10U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w) 
                                                 << 5U) 
                                                | (((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1756,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1759,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1761,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1762,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1763,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1764,(0x226U),32);
    bufp->fullIData(oldp+1765,(0x64U),32);
    bufp->fullIData(oldp+1766,(0x200U),32);
    bufp->fullCData(oldp+1767,(1U),3);
    bufp->fullIData(oldp+1768,(0xb00U),32);
    bufp->fullIData(oldp+1769,(9U),32);
    bufp->fullCData(oldp+1770,(0U),3);
    bufp->fullCData(oldp+1771,(2U),3);
    bufp->fullCData(oldp+1772,(3U),3);
    bufp->fullBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1776,(0U));
    bufp->fullBit(oldp+1777,(1U));
    bufp->fullCData(oldp+1778,(0U),2);
    bufp->fullCData(oldp+1779,(0U),4);
    bufp->fullCData(oldp+1780,(0U),8);
    bufp->fullSData(oldp+1781,(1U),16);
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1798,(0U),32);
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullCData(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arid),4);
    bufp->fullCData(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arlen),8);
    bufp->fullCData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arburst),2);
    bufp->fullIData(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1830,(0U),32);
    bufp->fullBit(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1834,(1U),2);
    bufp->fullCData(oldp+1835,(2U),2);
    bufp->fullIData(oldp+1836,(0x20U),32);
    bufp->fullIData(oldp+1837,(4U),32);
    bufp->fullIData(oldp+1838,(0x10U),32);
    bufp->fullIData(oldp+1839,(4U),32);
    bufp->fullIData(oldp+1840,(0x18U),32);
    bufp->fullIData(oldp+1841,(0x79737978U),32);
    bufp->fullIData(oldp+1842,(0x17e3c19U),32);
    bufp->fullCData(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1881,(4U),3);
    bufp->fullIData(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+2000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+2001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+2002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+2003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+2004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+2005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+2006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+2007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+2008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+2009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+2010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+2011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+2012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+2013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+2014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+2015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+2016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+2017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+2018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+2019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+2020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+2021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+2022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+2023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+2024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+2025,(3U),2);
    bufp->fullIData(oldp+2026,(5U),32);
    bufp->fullBit(oldp+2027,(0U));
    bufp->fullBit(oldp+2028,(1U));
    bufp->fullCData(oldp+2029,(0x1bU),8);
    bufp->fullCData(oldp+2030,(0xebU),8);
    bufp->fullCData(oldp+2031,(0x38U),8);
    bufp->fullIData(oldp+2032,(2U),32);
    bufp->fullIData(oldp+2033,(6U),32);
    bufp->fullIData(oldp+2034,(3U),32);
    bufp->fullIData(oldp+2035,(0xdU),32);
    bufp->fullIData(oldp+2036,(0x2000U),32);
    bufp->fullIData(oldp+2037,(0x2710U),32);
    bufp->fullIData(oldp+2038,(0x30cU),32);
    bufp->fullCData(oldp+2039,(7U),4);
    bufp->fullCData(oldp+2040,(3U),4);
    bufp->fullCData(oldp+2041,(5U),4);
    bufp->fullCData(oldp+2042,(4U),4);
    bufp->fullCData(oldp+2043,(6U),4);
    bufp->fullCData(oldp+2044,(2U),4);
    bufp->fullCData(oldp+2045,(1U),4);
    bufp->fullSData(oldp+2046,(0x20U),13);
    bufp->fullCData(oldp+2047,(8U),4);
    bufp->fullCData(oldp+2048,(9U),4);
    bufp->fullIData(oldp+2049,(0xaU),32);
    bufp->fullIData(oldp+2050,(0x11U),32);
    bufp->fullIData(oldp+2051,(0x30000000U),32);
    bufp->fullIData(oldp+2052,(0x3fffffffU),32);
    bufp->fullIData(oldp+2053,(8U),32);
    bufp->fullCData(oldp+2054,(4U),5);
    bufp->fullCData(oldp+2055,(0U),5);
    bufp->fullCData(oldp+2056,(0x10U),5);
    bufp->fullCData(oldp+2057,(0x14U),5);
    bufp->fullCData(oldp+2058,(0x18U),5);
    bufp->fullIData(oldp+2059,(0x3000000U),32);
    bufp->fullIData(oldp+2060,(1U),32);
    bufp->fullCData(oldp+2061,(0xaU),4);
    bufp->fullIData(oldp+2062,(0xbU),32);
    bufp->fullCData(oldp+2063,(5U),3);
    bufp->fullIData(oldp+2064,(0x60U),32);
    bufp->fullIData(oldp+2065,(0x90U),32);
    bufp->fullIData(oldp+2066,(0x310U),32);
    bufp->fullIData(oldp+2067,(0x320U),32);
    bufp->fullIData(oldp+2068,(0x23U),32);
    bufp->fullIData(oldp+2069,(0x203U),32);
    bufp->fullIData(oldp+2070,(0x20dU),32);
    bufp->fullIData(oldp+2071,(0x400000U),32);
    bufp->fullCData(oldp+2072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+2073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullCData(oldp+2074,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+2075,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
}
