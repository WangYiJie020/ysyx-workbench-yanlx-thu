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
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1819,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1820,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1821,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1822,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1823,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1824,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1825,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1826,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1827,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1828,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1829,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1830,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1831,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1832,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1833,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1834,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1835,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1836,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1837,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1838,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1819,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1820,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1821,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1822,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1823,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1824,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1825,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1826,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1827,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1828,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1829,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1830,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1831,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1832,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1833,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1834,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1835,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1836,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1837,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1838,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+717,"spi_sck", false,-1);
    tracep->declBus(c+1686,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1687,"spi_mosi", false,-1);
    tracep->declBit(c+1839,"spi_miso", false,-1);
    tracep->declBit(c+1837,"uart_rx", false,-1);
    tracep->declBit(c+1838,"uart_tx", false,-1);
    tracep->declBit(c+1840,"psram_sck", false,-1);
    tracep->declBit(c+1798,"psram_ce_n", false,-1);
    tracep->declBus(c+1841,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1842,"sdram_clk", false,-1);
    tracep->declBit(c+1688,"sdram_cke", false,-1);
    tracep->declBit(c+718,"sdram_cs", false,-1);
    tracep->declBit(c+719,"sdram_ras", false,-1);
    tracep->declBit(c+720,"sdram_cas", false,-1);
    tracep->declBit(c+721,"sdram_we", false,-1);
    tracep->declBus(c+1843,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1689,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1690,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1844,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1819,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1820,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1821,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1822,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1823,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1824,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1825,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1826,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1827,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1828,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1829,"ps2_clk", false,-1);
    tracep->declBit(c+1830,"ps2_data", false,-1);
    tracep->declBus(c+1831,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1832,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1833,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1834,"vga_hsync", false,-1);
    tracep->declBit(c+1835,"vga_vsync", false,-1);
    tracep->declBit(c+1836,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1890,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1891,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1892,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1506,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1507,"in_psel", false,-1);
    tracep->declBit(c+1508,"in_penable", false,-1);
    tracep->declBus(c+1893,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1509,"in_pwrite", false,-1);
    tracep->declBus(c+1510,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1511,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1512,"in_pready", false,-1);
    tracep->declBus(c+1513,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1514,"in_pslverr", false,-1);
    tracep->declBus(c+1515,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1516,"out_psel", false,-1);
    tracep->declBit(c+1517,"out_penable", false,-1);
    tracep->declBus(c+1518,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1519,"out_pwrite", false,-1);
    tracep->declBus(c+1520,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1799,"out_pready", false,-1);
    tracep->declBus(c+1845,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1846,"out_pslverr", false,-1);
    tracep->declBus(c+1894,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1895,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1896,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1893,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1897,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1898,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1522,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1523,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1524,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1525,"state", false,-1, 2,0);
    tracep->declBus(c+1847,"next_state", false,-1, 2,0);
    tracep->declBit(c+1899,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1516,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1517,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1519,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1515,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1518,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1799,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1846,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1845,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1526,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1527,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1519,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1528,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1518,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1900,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1901,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1529,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1530,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1519,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1531,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1518,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+160,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1902,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+161,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1532,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1533,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1519,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1531,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1518,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+723,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1902,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+724,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1534,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1535,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1519,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1515,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1518,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1848,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1902,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+162,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1536,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1537,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1519,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1531,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1518,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1902,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1849,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1539,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1540,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1519,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1528,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1518,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+725,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+726,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+727,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1541,"sel_0", false,-1);
    tracep->declBit(c+1542,"sel_1", false,-1);
    tracep->declBit(c+1543,"sel_2", false,-1);
    tracep->declBit(c+1544,"sel_3", false,-1);
    tracep->declBit(c+1545,"sel_4", false,-1);
    tracep->declBit(c+1546,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1547,"auto_in_awready", false,-1);
    tracep->declBit(c+163,"auto_in_awvalid", false,-1);
    tracep->declBus(c+164,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+165,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+166,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+167,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1547,"auto_in_wready", false,-1);
    tracep->declBit(c+168,"auto_in_wvalid", false,-1);
    tracep->declBus(c+169,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+170,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+171,"auto_in_bready", false,-1);
    tracep->declBit(c+1548,"auto_in_bvalid", false,-1);
    tracep->declBus(c+172,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1549,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1550,"auto_in_arready", false,-1);
    tracep->declBit(c+173,"auto_in_arvalid", false,-1);
    tracep->declBus(c+174,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+176,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+177,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+178,"auto_in_rready", false,-1);
    tracep->declBit(c+1551,"auto_in_rvalid", false,-1);
    tracep->declBus(c+179,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1850,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1507,"auto_out_psel", false,-1);
    tracep->declBit(c+1508,"auto_out_penable", false,-1);
    tracep->declBit(c+1509,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1506,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1510,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1511,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1512,"auto_out_pready", false,-1);
    tracep->declBit(c+1514,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1513,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1508,"nodeOut_penable", false,-1);
    tracep->declBus(c+1552,"state", false,-1, 1,0);
    tracep->declBit(c+1550,"accept_read", false,-1);
    tracep->declBit(c+1547,"accept_write", false,-1);
    tracep->declBit(c+180,"is_write_r", false,-1);
    tracep->declBit(c+1509,"is_write", false,-1);
    tracep->declBus(c+179,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+172,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+181,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+182,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+183,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+184,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1553,"resp", false,-1, 1,0);
    tracep->declBus(c+185,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1549,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1551,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+186,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1548,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+187,"auto_in_awready", false,-1);
    tracep->declBit(c+1704,"auto_in_awvalid", false,-1);
    tracep->declBus(c+188,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1705,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1706,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+189,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+190,"auto_in_wready", false,-1);
    tracep->declBit(c+1707,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1708,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1709,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1710,"auto_in_wlast", false,-1);
    tracep->declBit(c+674,"auto_in_bready", false,-1);
    tracep->declBit(c+191,"auto_in_bvalid", false,-1);
    tracep->declBus(c+192,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+193,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+194,"auto_in_arready", false,-1);
    tracep->declBit(c+30,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+195,"auto_in_rvalid", false,-1);
    tracep->declBus(c+196,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+198,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+199,"auto_in_rlast", false,-1);
    tracep->declBit(c+1547,"auto_out_awready", false,-1);
    tracep->declBit(c+163,"auto_out_awvalid", false,-1);
    tracep->declBus(c+164,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+165,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+166,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+167,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1547,"auto_out_wready", false,-1);
    tracep->declBit(c+168,"auto_out_wvalid", false,-1);
    tracep->declBus(c+169,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+170,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+171,"auto_out_bready", false,-1);
    tracep->declBit(c+1548,"auto_out_bvalid", false,-1);
    tracep->declBus(c+172,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1549,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1550,"auto_out_arready", false,-1);
    tracep->declBit(c+173,"auto_out_arvalid", false,-1);
    tracep->declBus(c+174,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+175,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+176,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+177,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+178,"auto_out_rready", false,-1);
    tracep->declBit(c+1551,"auto_out_rvalid", false,-1);
    tracep->declBus(c+179,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1850,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+1548,"io_enq_valid", false,-1);
    tracep->declBus(c+172,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1549,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+674,"io_deq_ready", false,-1);
    tracep->declBit(c+191,"io_deq_valid", false,-1);
    tracep->declBus(c+192,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+193,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+200,"wrap", false,-1);
    tracep->declBit(c+201,"wrap_1", false,-1);
    tracep->declBit(c+202,"maybe_full", false,-1);
    tracep->declBit(c+203,"ptr_match", false,-1);
    tracep->declBit(c+204,"empty", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBit(c+1554,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+201,"R0_addr", false,-1);
    tracep->declBit(c+1903,"R0_en", false,-1);
    tracep->declBit(c+1817,"R0_clk", false,-1);
    tracep->declBus(c+206,"R0_data", false,-1, 5,0);
    tracep->declBit(c+200,"W0_addr", false,-1);
    tracep->declBit(c+1554,"W0_en", false,-1);
    tracep->declBit(c+1817,"W0_clk", false,-1);
    tracep->declBus(c+1851,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+207+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+209,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+178,"io_enq_ready", false,-1);
    tracep->declBit(c+1551,"io_enq_valid", false,-1);
    tracep->declBus(c+179,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1850,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1549,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+195,"io_deq_valid", false,-1);
    tracep->declBus(c+196,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+197,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+198,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+199,"io_deq_bits_last", false,-1);
    tracep->declBit(c+210,"wrap", false,-1);
    tracep->declBit(c+211,"wrap_1", false,-1);
    tracep->declBit(c+212,"maybe_full", false,-1);
    tracep->declBit(c+213,"ptr_match", false,-1);
    tracep->declBit(c+214,"empty", false,-1);
    tracep->declBit(c+215,"full", false,-1);
    tracep->declBit(c+1555,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+211,"R0_addr", false,-1);
    tracep->declBit(c+1903,"R0_en", false,-1);
    tracep->declBit(c+1817,"R0_clk", false,-1);
    tracep->declQuad(c+216,"R0_data", false,-1, 38,0);
    tracep->declBit(c+210,"W0_addr", false,-1);
    tracep->declBit(c+1555,"W0_en", false,-1);
    tracep->declBit(c+1817,"W0_clk", false,-1);
    tracep->declQuad(c+1852,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+218+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+222,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+194,"io_enq_ready", false,-1);
    tracep->declBit(c+30,"io_enq_valid", false,-1);
    tracep->declBus(c+31,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+32,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+33,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+34,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1550,"io_deq_ready", false,-1);
    tracep->declBit(c+173,"io_deq_valid", false,-1);
    tracep->declBus(c+174,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+175,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+176,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+177,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+223,"wrap", false,-1);
    tracep->declBit(c+224,"wrap_1", false,-1);
    tracep->declBit(c+225,"maybe_full", false,-1);
    tracep->declBit(c+226,"ptr_match", false,-1);
    tracep->declBit(c+227,"empty", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->declBit(c+35,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+224,"R0_addr", false,-1);
    tracep->declBit(c+1903,"R0_en", false,-1);
    tracep->declBit(c+1817,"R0_clk", false,-1);
    tracep->declQuad(c+229,"R0_data", false,-1, 46,0);
    tracep->declBit(c+223,"W0_addr", false,-1);
    tracep->declBit(c+35,"W0_en", false,-1);
    tracep->declBit(c+1817,"W0_clk", false,-1);
    tracep->declQuad(c+36,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+231+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+235,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+1704,"io_enq_valid", false,-1);
    tracep->declBus(c+188,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1705,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1706,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+189,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1547,"io_deq_ready", false,-1);
    tracep->declBit(c+163,"io_deq_valid", false,-1);
    tracep->declBus(c+164,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+165,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+166,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+167,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+236,"wrap", false,-1);
    tracep->declBit(c+237,"wrap_1", false,-1);
    tracep->declBit(c+238,"maybe_full", false,-1);
    tracep->declBit(c+239,"ptr_match", false,-1);
    tracep->declBit(c+240,"empty", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->declBit(c+1711,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+237,"R0_addr", false,-1);
    tracep->declBit(c+1903,"R0_en", false,-1);
    tracep->declBit(c+1817,"R0_clk", false,-1);
    tracep->declQuad(c+242,"R0_data", false,-1, 46,0);
    tracep->declBit(c+236,"W0_addr", false,-1);
    tracep->declBit(c+1711,"W0_en", false,-1);
    tracep->declBit(c+1817,"W0_clk", false,-1);
    tracep->declQuad(c+1854,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+244+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+248,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+190,"io_enq_ready", false,-1);
    tracep->declBit(c+1707,"io_enq_valid", false,-1);
    tracep->declBus(c+1708,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1709,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1710,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1547,"io_deq_ready", false,-1);
    tracep->declBit(c+168,"io_deq_valid", false,-1);
    tracep->declBus(c+169,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+170,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+249,"wrap", false,-1);
    tracep->declBit(c+250,"wrap_1", false,-1);
    tracep->declBit(c+251,"maybe_full", false,-1);
    tracep->declBit(c+252,"ptr_match", false,-1);
    tracep->declBit(c+253,"empty", false,-1);
    tracep->declBit(c+254,"full", false,-1);
    tracep->declBit(c+1712,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+250,"R0_addr", false,-1);
    tracep->declBit(c+1903,"R0_en", false,-1);
    tracep->declBit(c+1817,"R0_clk", false,-1);
    tracep->declQuad(c+255,"R0_data", false,-1, 35,0);
    tracep->declBit(c+249,"W0_addr", false,-1);
    tracep->declBit(c+1712,"W0_en", false,-1);
    tracep->declBit(c+1817,"W0_clk", false,-1);
    tracep->declQuad(c+1713,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+257+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+261,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+97,"in_arready", false,-1);
    tracep->declBit(c+38,"in_arvalid", false,-1);
    tracep->declBus(c+39,"in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1856,"in_rready", false,-1);
    tracep->declBit(c+728,"in_rvalid", false,-1);
    tracep->declBus(c+729,"in_rid", false,-1, 3,0);
    tracep->declBus(c+730,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1904,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+731,"in_rlast", false,-1);
    tracep->declBit(c+98,"in_awready", false,-1);
    tracep->declBit(c+1715,"in_awvalid", false,-1);
    tracep->declBus(c+1905,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1022,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1906,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"in_wready", false,-1);
    tracep->declBit(c+1716,"in_wvalid", false,-1);
    tracep->declBus(c+1024,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"in_wlast", false,-1);
    tracep->declBit(c+1857,"in_bready", false,-1);
    tracep->declBit(c+732,"in_bvalid", false,-1);
    tracep->declBus(c+729,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1904,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+97,"out_arready", false,-1);
    tracep->declBit(c+38,"out_arvalid", false,-1);
    tracep->declBus(c+39,"out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1856,"out_rready", false,-1);
    tracep->declBit(c+728,"out_rvalid", false,-1);
    tracep->declBus(c+729,"out_rid", false,-1, 3,0);
    tracep->declBus(c+730,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1904,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+731,"out_rlast", false,-1);
    tracep->declBit(c+98,"out_awready", false,-1);
    tracep->declBit(c+1715,"out_awvalid", false,-1);
    tracep->declBus(c+1905,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1022,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1906,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"out_wready", false,-1);
    tracep->declBit(c+1716,"out_wvalid", false,-1);
    tracep->declBus(c+1024,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"out_wlast", false,-1);
    tracep->declBit(c+1857,"out_bready", false,-1);
    tracep->declBit(c+732,"out_bvalid", false,-1);
    tracep->declBus(c+729,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1904,"out_bresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+262,"auto_in_awready", false,-1);
    tracep->declBit(c+1717,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1905,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1022,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1906,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+263,"auto_in_wready", false,-1);
    tracep->declBit(c+1718,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1024,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_in_wlast", false,-1);
    tracep->declBit(c+1858,"auto_in_bready", false,-1);
    tracep->declBit(c+264,"auto_in_bvalid", false,-1);
    tracep->declBus(c+265,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+266,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_in_arready", false,-1);
    tracep->declBit(c+44,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_in_rready", false,-1);
    tracep->declBit(c+268,"auto_in_rvalid", false,-1);
    tracep->declBus(c+269,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+271,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+272,"auto_in_rlast", false,-1);
    tracep->declBit(c+1749,"auto_out_awready", false,-1);
    tracep->declBit(c+1719,"auto_out_awvalid", false,-1);
    tracep->declBus(c+188,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1705,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1706,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+189,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+273,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1750,"auto_out_wready", false,-1);
    tracep->declBit(c+1720,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1708,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1709,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1710,"auto_out_wlast", false,-1);
    tracep->declBit(c+1751,"auto_out_bready", false,-1);
    tracep->declBit(c+274,"auto_out_bvalid", false,-1);
    tracep->declBus(c+265,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+275,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+276,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_out_arready", false,-1);
    tracep->declBit(c+45,"auto_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+100,"auto_out_rready", false,-1);
    tracep->declBit(c+268,"auto_out_rvalid", false,-1);
    tracep->declBus(c+269,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+271,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+277,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+278,"auto_out_rlast", false,-1);
    tracep->declBit(c+1720,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+279,"w_idle", false,-1);
    tracep->declBit(c+1752,"in_awready", false,-1);
    tracep->declBit(c+280,"busy", false,-1);
    tracep->declBus(c+281,"r_addr", false,-1, 31,0);
    tracep->declBus(c+282,"r_len", false,-1, 7,0);
    tracep->declBus(c+47,"len", false,-1, 7,0);
    tracep->declBus(c+48,"addr", false,-1, 31,0);
    tracep->declBit(c+283,"busy_1", false,-1);
    tracep->declBus(c+284,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+285,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+286,"len_1", false,-1, 7,0);
    tracep->declBus(c+1721,"addr_1", false,-1, 31,0);
    tracep->declBit(c+287,"wbeats_latched", false,-1);
    tracep->declBit(c+1719,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1722,"wbeats_valid", false,-1);
    tracep->declBus(c+288,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1723,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1710,"w_last", false,-1);
    tracep->declBit(c+1751,"nodeOut_bready", false,-1);
    tracep->declBus(c+289,"error_0", false,-1, 1,0);
    tracep->declBus(c+290,"error_1", false,-1, 1,0);
    tracep->declBus(c+291,"error_2", false,-1, 1,0);
    tracep->declBus(c+292,"error_3", false,-1, 1,0);
    tracep->declBus(c+293,"error_4", false,-1, 1,0);
    tracep->declBus(c+294,"error_5", false,-1, 1,0);
    tracep->declBus(c+295,"error_6", false,-1, 1,0);
    tracep->declBus(c+296,"error_7", false,-1, 1,0);
    tracep->declBus(c+297,"error_8", false,-1, 1,0);
    tracep->declBus(c+298,"error_9", false,-1, 1,0);
    tracep->declBus(c+299,"error_10", false,-1, 1,0);
    tracep->declBus(c+300,"error_11", false,-1, 1,0);
    tracep->declBus(c+301,"error_12", false,-1, 1,0);
    tracep->declBus(c+302,"error_13", false,-1, 1,0);
    tracep->declBus(c+303,"error_14", false,-1, 1,0);
    tracep->declBus(c+304,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
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
    tracep->declQuad(c+305,"ram", false,-1, 48,0);
    tracep->declBit(c+307,"full", false,-1);
    tracep->declBit(c+45,"io_deq_valid_0", false,-1);
    tracep->declBit(c+103,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+262,"io_enq_ready", false,-1);
    tracep->declBit(c+1717,"io_enq_valid", false,-1);
    tracep->declBus(c+1905,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1022,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1906,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1023,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1904,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1753,"io_deq_ready", false,-1);
    tracep->declBit(c+1724,"io_deq_valid", false,-1);
    tracep->declBus(c+188,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1725,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+308,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1706,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+189,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+309,"ram", false,-1, 48,0);
    tracep->declBit(c+311,"full", false,-1);
    tracep->declBit(c+1724,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1754,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+1718,"io_enq_valid", false,-1);
    tracep->declBus(c+1024,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1025,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1026,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1755,"io_deq_ready", false,-1);
    tracep->declBit(c+1726,"io_deq_valid", false,-1);
    tracep->declBus(c+1708,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1709,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1859,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+312,"ram", false,-1, 36,0);
    tracep->declBit(c+314,"full", false,-1);
    tracep->declBit(c+1726,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1756,"do_enq", false,-1);
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
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1757,"auto_in_awready", false,-1);
    tracep->declBit(c+1727,"auto_in_awvalid", false,-1);
    tracep->declBus(c+188,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1728,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1860,"auto_in_wready", false,-1);
    tracep->declBit(c+1729,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1708,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1709,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1758,"auto_in_bready", false,-1);
    tracep->declBit(c+315,"auto_in_bvalid", false,-1);
    tracep->declBus(c+316,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+317,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+104,"auto_in_arready", false,-1);
    tracep->declBit(c+51,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+52,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+105,"auto_in_rready", false,-1);
    tracep->declBit(c+318,"auto_in_rvalid", false,-1);
    tracep->declBus(c+319,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+320,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+321,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+104,"nodeIn_arready", false,-1);
    tracep->declBit(c+1757,"nodeIn_awready", false,-1);
    tracep->declBit(c+1730,"w_sel0", false,-1);
    tracep->declBit(c+315,"w_full", false,-1);
    tracep->declBus(c+316,"w_id", false,-1, 3,0);
    tracep->declBit(c+322,"r_sel1", false,-1);
    tracep->declBit(c+323,"w_sel1", false,-1);
    tracep->declBit(c+318,"r_full", false,-1);
    tracep->declBus(c+319,"r_id", false,-1, 3,0);
    tracep->declBit(c+106,"ren", false,-1);
    tracep->declBit(c+324,"rdata_REG", false,-1);
    tracep->declBus(c+325,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+326,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+327,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+328,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+53,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+106,"R0_en", false,-1);
    tracep->declBit(c+1817,"R0_clk", false,-1);
    tracep->declBus(c+329,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1731,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1759,"W0_en", false,-1);
    tracep->declBit(c+1817,"W0_clk", false,-1);
    tracep->declBus(c+1708,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1709,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+107,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1027,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1905,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1022,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1906,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1028,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1024,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1029,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1480,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1481,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1482,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+109,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1483,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1484,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1861,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1862,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1485,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+98,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1715,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1905,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1022,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1906,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1716,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1024,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1857,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+732,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+729,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1904,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+97,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+38,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1856,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+728,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+729,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+730,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1904,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+731,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+262,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1717,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1905,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1022,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1906,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+263,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1718,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1024,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1858,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+264,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+265,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+266,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+268,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+269,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+271,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+272,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1480,"in_0_bvalid", false,-1);
    tracep->declBit(c+1483,"in_0_rvalid", false,-1);
    tracep->declBit(c+110,"in_0_wready", false,-1);
    tracep->declBit(c+111,"in_0_awready", false,-1);
    tracep->declBit(c+1863,"in_0_arready", false,-1);
    tracep->declBit(c+107,"anonIn_awready", false,-1);
    tracep->declBit(c+109,"anonIn_arready", false,-1);
    tracep->declBit(c+56,"requestARIO_0_0", false,-1);
    tracep->declBit(c+57,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1030,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1031,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+58,"arSel", false,-1, 15,0);
    tracep->declBus(c+1907,"awSel", false,-1, 15,0);
    tracep->declBus(c+1486,"rSel", false,-1, 15,0);
    tracep->declBus(c+1487,"bSel", false,-1, 15,0);
    tracep->declBus(c+330,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+331,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+332,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+333,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+334,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+335,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+336,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1908,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+337,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+338,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+339,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1909,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+340,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+341,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+342,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1910,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+343,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+344,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+345,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1911,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+346,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+347,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+348,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1912,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+349,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+350,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1913,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+352,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+353,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+354,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1914,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+355,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+356,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+357,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1915,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+358,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+359,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+360,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1916,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+361,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+362,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+363,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1917,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+364,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+365,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+366,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1918,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+367,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+368,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+369,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1919,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+370,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+371,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+372,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1920,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+373,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+374,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+375,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1921,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+376,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+377,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+378,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1922,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+59,"in_0_arvalid", false,-1);
    tracep->declBit(c+379,"latched", false,-1);
    tracep->declBit(c+1732,"in_0_awvalid", false,-1);
    tracep->declBit(c+1733,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1734,"in_0_wvalid", false,-1);
    tracep->declBit(c+380,"idle_2", false,-1);
    tracep->declBit(c+1488,"anyValid", false,-1);
    tracep->declBus(c+1489,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+381,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1490,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1491,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1492,"prefixOR_1", false,-1);
    tracep->declBit(c+1493,"winner_2_1", false,-1);
    tracep->declBit(c+382,"state_2_0", false,-1);
    tracep->declBit(c+383,"state_2_1", false,-1);
    tracep->declBit(c+1494,"muxState_2_0", false,-1);
    tracep->declBit(c+1495,"muxState_2_1", false,-1);
    tracep->declBit(c+384,"idle_3", false,-1);
    tracep->declBit(c+1496,"anyValid_1", false,-1);
    tracep->declBus(c+1497,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+385,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1498,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1499,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1500,"winner_3_0", false,-1);
    tracep->declBit(c+1501,"winner_3_1", false,-1);
    tracep->declBit(c+386,"state_3_0", false,-1);
    tracep->declBit(c+387,"state_3_1", false,-1);
    tracep->declBit(c+1502,"muxState_3_0", false,-1);
    tracep->declBit(c+1503,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+1733,"io_enq_valid", false,-1);
    tracep->declBus(c+1032,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+112,"io_deq_ready", false,-1);
    tracep->declBit(c+1735,"io_deq_valid", false,-1);
    tracep->declBus(c+1736,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+389,"wrap", false,-1);
    tracep->declBit(c+390,"wrap_1", false,-1);
    tracep->declBit(c+391,"maybe_full", false,-1);
    tracep->declBit(c+392,"ptr_match", false,-1);
    tracep->declBit(c+393,"empty", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->declBit(c+1735,"io_deq_valid_0", false,-1);
    tracep->declBit(c+113,"do_deq", false,-1);
    tracep->declBit(c+114,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+390,"R0_addr", false,-1);
    tracep->declBit(c+1903,"R0_en", false,-1);
    tracep->declBit(c+1817,"R0_clk", false,-1);
    tracep->declBus(c+395,"R0_data", false,-1, 1,0);
    tracep->declBit(c+389,"W0_addr", false,-1);
    tracep->declBit(c+114,"W0_en", false,-1);
    tracep->declBit(c+1817,"W0_clk", false,-1);
    tracep->declBus(c+1032,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+396+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1760,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1737,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+188,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1705,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1706,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+189,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1750,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1720,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1708,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1709,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1710,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1751,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+274,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+265,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+275,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+115,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+268,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+269,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+271,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+278,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1757,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1727,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+188,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1728,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1860,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1729,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1708,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1709,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1758,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+315,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+316,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+317,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+51,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+52,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+105,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+318,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+319,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+320,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+321,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1738,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1739,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+398,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+61,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+399,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+400,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+401,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+187,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1704,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+188,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1705,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1706,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+189,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+190,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1707,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1708,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1709,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1710,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+674,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+191,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+192,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+193,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+194,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+195,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+196,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+198,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+199,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+274,"in_0_bvalid", false,-1);
    tracep->declBit(c+268,"in_0_rvalid", false,-1);
    tracep->declBit(c+1761,"in_0_wready", false,-1);
    tracep->declBit(c+1762,"in_0_awready", false,-1);
    tracep->declBit(c+115,"in_0_arready", false,-1);
    tracep->declBit(c+1760,"anonIn_awready", false,-1);
    tracep->declBit(c+63,"requestARIO_0_0", false,-1);
    tracep->declBit(c+64,"requestARIO_0_1", false,-1);
    tracep->declBit(c+65,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1740,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1741,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1742,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+66,"arSel", false,-1, 15,0);
    tracep->declBus(c+402,"awSel", false,-1, 15,0);
    tracep->declBus(c+403,"rSel", false,-1, 15,0);
    tracep->declBus(c+404,"bSel", false,-1, 15,0);
    tracep->declBit(c+405,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+406,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+407,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+408,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+409,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+410,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+411,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+412,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+413,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+414,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+415,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+416,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+417,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+418,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+419,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+420,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+421,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+422,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+423,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+424,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+425,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+426,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+427,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+428,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+429,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+430,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+431,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+432,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+433,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+434,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+435,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+436,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+437,"latched", false,-1);
    tracep->declBit(c+1743,"in_0_awvalid", false,-1);
    tracep->declBit(c+1744,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1745,"in_0_wvalid", false,-1);
    tracep->declBit(c+438,"idle_3", false,-1);
    tracep->declBit(c+439,"anyValid", false,-1);
    tracep->declBus(c+440,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+441,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+442,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+443,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+444,"prefixOR_1", false,-1);
    tracep->declBit(c+445,"winner_3_1", false,-1);
    tracep->declBit(c+446,"winner_3_2", false,-1);
    tracep->declBit(c+447,"state_3_0", false,-1);
    tracep->declBit(c+448,"state_3_1", false,-1);
    tracep->declBit(c+449,"state_3_2", false,-1);
    tracep->declBit(c+450,"muxState_3_0", false,-1);
    tracep->declBit(c+451,"muxState_3_1", false,-1);
    tracep->declBit(c+452,"muxState_3_2", false,-1);
    tracep->declBit(c+453,"idle_4", false,-1);
    tracep->declBit(c+454,"anyValid_1", false,-1);
    tracep->declBus(c+455,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+456,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+457,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+458,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+459,"winner_4_0", false,-1);
    tracep->declBit(c+460,"winner_4_2", false,-1);
    tracep->declBit(c+461,"state_4_0", false,-1);
    tracep->declBit(c+462,"state_4_2", false,-1);
    tracep->declBit(c+463,"muxState_4_0", false,-1);
    tracep->declBit(c+464,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+465,"io_enq_ready", false,-1);
    tracep->declBit(c+1744,"io_enq_valid", false,-1);
    tracep->declBus(c+1746,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1763,"io_deq_ready", false,-1);
    tracep->declBit(c+1747,"io_deq_valid", false,-1);
    tracep->declBus(c+1748,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+466,"wrap", false,-1);
    tracep->declBit(c+467,"wrap_1", false,-1);
    tracep->declBit(c+468,"maybe_full", false,-1);
    tracep->declBit(c+469,"ptr_match", false,-1);
    tracep->declBit(c+470,"empty", false,-1);
    tracep->declBit(c+471,"full", false,-1);
    tracep->declBit(c+1747,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1764,"do_deq", false,-1);
    tracep->declBit(c+1765,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+467,"R0_addr", false,-1);
    tracep->declBit(c+1903,"R0_en", false,-1);
    tracep->declBit(c+1817,"R0_clk", false,-1);
    tracep->declBus(c+472,"R0_data", false,-1, 2,0);
    tracep->declBit(c+466,"W0_addr", false,-1);
    tracep->declBit(c+1765,"W0_en", false,-1);
    tracep->declBit(c+1817,"W0_clk", false,-1);
    tracep->declBus(c+1746,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+473+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1749,"auto_in_awready", false,-1);
    tracep->declBit(c+1719,"auto_in_awvalid", false,-1);
    tracep->declBus(c+188,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1705,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1706,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+189,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+273,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1750,"auto_in_wready", false,-1);
    tracep->declBit(c+1720,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1708,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1709,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1710,"auto_in_wlast", false,-1);
    tracep->declBit(c+1751,"auto_in_bready", false,-1);
    tracep->declBit(c+274,"auto_in_bvalid", false,-1);
    tracep->declBus(c+265,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+275,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+276,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_in_arready", false,-1);
    tracep->declBit(c+45,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+100,"auto_in_rready", false,-1);
    tracep->declBit(c+268,"auto_in_rvalid", false,-1);
    tracep->declBus(c+269,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+271,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+277,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+278,"auto_in_rlast", false,-1);
    tracep->declBit(c+1760,"auto_out_awready", false,-1);
    tracep->declBit(c+1737,"auto_out_awvalid", false,-1);
    tracep->declBus(c+188,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1705,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1706,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+189,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1750,"auto_out_wready", false,-1);
    tracep->declBit(c+1720,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1708,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1709,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1710,"auto_out_wlast", false,-1);
    tracep->declBit(c+1751,"auto_out_bready", false,-1);
    tracep->declBit(c+274,"auto_out_bvalid", false,-1);
    tracep->declBus(c+265,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+275,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+115,"auto_out_arready", false,-1);
    tracep->declBit(c+60,"auto_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_out_rready", false,-1);
    tracep->declBit(c+268,"auto_out_rvalid", false,-1);
    tracep->declBus(c+269,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+271,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+278,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+475,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+476,"io_deq_valid", false,-1);
    tracep->declBit(c+477,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+476,"full", false,-1);
    tracep->declBit(c+477,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+478,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+479,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+480,"io_deq_valid", false,-1);
    tracep->declBit(c+481,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+480,"full", false,-1);
    tracep->declBit(c+481,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+482,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+483,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+484,"io_deq_valid", false,-1);
    tracep->declBit(c+485,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+484,"full", false,-1);
    tracep->declBit(c+485,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+486,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+487,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+488,"io_deq_valid", false,-1);
    tracep->declBit(c+489,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+488,"full", false,-1);
    tracep->declBit(c+489,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+490,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+491,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+492,"io_deq_valid", false,-1);
    tracep->declBit(c+493,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+492,"full", false,-1);
    tracep->declBit(c+493,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+494,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+495,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+496,"io_deq_valid", false,-1);
    tracep->declBit(c+497,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+496,"full", false,-1);
    tracep->declBit(c+497,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+498,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+499,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+500,"io_deq_valid", false,-1);
    tracep->declBit(c+501,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+500,"full", false,-1);
    tracep->declBit(c+501,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+502,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+503,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+504,"io_deq_valid", false,-1);
    tracep->declBit(c+505,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+504,"full", false,-1);
    tracep->declBit(c+505,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+506,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+507,"io_enq_ready", false,-1);
    tracep->declBit(c+675,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+676,"io_deq_ready", false,-1);
    tracep->declBit(c+508,"io_deq_valid", false,-1);
    tracep->declBit(c+509,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+508,"full", false,-1);
    tracep->declBit(c+509,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+510,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+511,"io_enq_ready", false,-1);
    tracep->declBit(c+677,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+678,"io_deq_ready", false,-1);
    tracep->declBit(c+512,"io_deq_valid", false,-1);
    tracep->declBit(c+513,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+512,"full", false,-1);
    tracep->declBit(c+513,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+514,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+515,"io_enq_ready", false,-1);
    tracep->declBit(c+679,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+680,"io_deq_ready", false,-1);
    tracep->declBit(c+516,"io_deq_valid", false,-1);
    tracep->declBit(c+517,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+516,"full", false,-1);
    tracep->declBit(c+517,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+518,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+519,"io_enq_ready", false,-1);
    tracep->declBit(c+681,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+682,"io_deq_ready", false,-1);
    tracep->declBit(c+520,"io_deq_valid", false,-1);
    tracep->declBit(c+521,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+520,"full", false,-1);
    tracep->declBit(c+521,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+522,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+523,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+524,"io_deq_valid", false,-1);
    tracep->declBit(c+525,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+524,"full", false,-1);
    tracep->declBit(c+525,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+526,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+527,"io_enq_ready", false,-1);
    tracep->declBit(c+683,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+684,"io_deq_ready", false,-1);
    tracep->declBit(c+528,"io_deq_valid", false,-1);
    tracep->declBit(c+529,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+528,"full", false,-1);
    tracep->declBit(c+529,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+530,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+531,"io_enq_ready", false,-1);
    tracep->declBit(c+685,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+686,"io_deq_ready", false,-1);
    tracep->declBit(c+532,"io_deq_valid", false,-1);
    tracep->declBit(c+533,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+532,"full", false,-1);
    tracep->declBit(c+533,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+534,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+535,"io_enq_ready", false,-1);
    tracep->declBit(c+687,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+688,"io_deq_ready", false,-1);
    tracep->declBit(c+536,"io_deq_valid", false,-1);
    tracep->declBit(c+537,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+536,"full", false,-1);
    tracep->declBit(c+537,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+538,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+539,"io_enq_ready", false,-1);
    tracep->declBit(c+689,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+690,"io_deq_ready", false,-1);
    tracep->declBit(c+540,"io_deq_valid", false,-1);
    tracep->declBit(c+541,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+540,"full", false,-1);
    tracep->declBit(c+541,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+542,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+543,"io_enq_ready", false,-1);
    tracep->declBit(c+691,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+692,"io_deq_ready", false,-1);
    tracep->declBit(c+544,"io_deq_valid", false,-1);
    tracep->declBit(c+545,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+544,"full", false,-1);
    tracep->declBit(c+545,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+546,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+547,"io_enq_ready", false,-1);
    tracep->declBit(c+693,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+694,"io_deq_ready", false,-1);
    tracep->declBit(c+548,"io_deq_valid", false,-1);
    tracep->declBit(c+549,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+548,"full", false,-1);
    tracep->declBit(c+549,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+550,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+551,"io_enq_ready", false,-1);
    tracep->declBit(c+695,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+696,"io_deq_ready", false,-1);
    tracep->declBit(c+552,"io_deq_valid", false,-1);
    tracep->declBit(c+553,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+552,"full", false,-1);
    tracep->declBit(c+553,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+554,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+555,"io_enq_ready", false,-1);
    tracep->declBit(c+697,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+698,"io_deq_ready", false,-1);
    tracep->declBit(c+556,"io_deq_valid", false,-1);
    tracep->declBit(c+557,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+556,"full", false,-1);
    tracep->declBit(c+557,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+558,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+559,"io_enq_ready", false,-1);
    tracep->declBit(c+699,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+700,"io_deq_ready", false,-1);
    tracep->declBit(c+560,"io_deq_valid", false,-1);
    tracep->declBit(c+561,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+560,"full", false,-1);
    tracep->declBit(c+561,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+562,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+563,"io_enq_ready", false,-1);
    tracep->declBit(c+701,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+702,"io_deq_ready", false,-1);
    tracep->declBit(c+564,"io_deq_valid", false,-1);
    tracep->declBit(c+565,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+564,"full", false,-1);
    tracep->declBit(c+565,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+566,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+567,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+568,"io_deq_valid", false,-1);
    tracep->declBit(c+569,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+568,"full", false,-1);
    tracep->declBit(c+569,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+570,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+571,"io_enq_ready", false,-1);
    tracep->declBit(c+703,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+704,"io_deq_ready", false,-1);
    tracep->declBit(c+572,"io_deq_valid", false,-1);
    tracep->declBit(c+573,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+572,"full", false,-1);
    tracep->declBit(c+573,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+574,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+575,"io_enq_ready", false,-1);
    tracep->declBit(c+705,"io_enq_valid", false,-1);
    tracep->declBit(c+273,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+706,"io_deq_ready", false,-1);
    tracep->declBit(c+576,"io_deq_valid", false,-1);
    tracep->declBit(c+577,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+576,"full", false,-1);
    tracep->declBit(c+577,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+578,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+579,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+580,"io_deq_valid", false,-1);
    tracep->declBit(c+581,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+580,"full", false,-1);
    tracep->declBit(c+581,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+582,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+583,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+584,"io_deq_valid", false,-1);
    tracep->declBit(c+585,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+584,"full", false,-1);
    tracep->declBit(c+585,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+586,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+587,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+588,"io_deq_valid", false,-1);
    tracep->declBit(c+589,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+588,"full", false,-1);
    tracep->declBit(c+589,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+590,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+591,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+592,"io_deq_valid", false,-1);
    tracep->declBit(c+593,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+592,"full", false,-1);
    tracep->declBit(c+593,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+594,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+595,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+596,"io_deq_valid", false,-1);
    tracep->declBit(c+597,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+596,"full", false,-1);
    tracep->declBit(c+597,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+598,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+599,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+600,"io_deq_valid", false,-1);
    tracep->declBit(c+601,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+600,"full", false,-1);
    tracep->declBit(c+601,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+602,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1864,"reset", false,-1);
    tracep->declBit(c+107,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1027,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1905,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1022,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1906,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1028,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1024,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1029,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1480,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1481,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1482,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+109,"auto_master_out_arready", false,-1);
    tracep->declBit(c+54,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+39,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1483,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1484,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1861,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1862,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1485,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1864,"reset", false,-1);
    tracep->declBit(c+1902,"io_interrupt", false,-1);
    tracep->declBit(c+107,"io_master_awready", false,-1);
    tracep->declBit(c+1027,"io_master_awvalid", false,-1);
    tracep->declBus(c+1022,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1905,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1906,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"io_master_wready", false,-1);
    tracep->declBit(c+1028,"io_master_wvalid", false,-1);
    tracep->declBus(c+1024,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"io_master_wlast", false,-1);
    tracep->declBit(c+1029,"io_master_bready", false,-1);
    tracep->declBit(c+1480,"io_master_bvalid", false,-1);
    tracep->declBus(c+1482,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1481,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+109,"io_master_arready", false,-1);
    tracep->declBit(c+54,"io_master_arvalid", false,-1);
    tracep->declBus(c+40,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+41,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"io_master_rready", false,-1);
    tracep->declBit(c+1483,"io_master_rvalid", false,-1);
    tracep->declBus(c+1862,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1861,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1485,"io_master_rlast", false,-1);
    tracep->declBus(c+1484,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1923,"io_slave_awready", false,-1);
    tracep->declBit(c+1902,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1924,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1905,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1906,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1896,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1925,"io_slave_wready", false,-1);
    tracep->declBit(c+1902,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1924,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1905,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1902,"io_slave_wlast", false,-1);
    tracep->declBit(c+1902,"io_slave_bready", false,-1);
    tracep->declBit(c+1926,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1927,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1928,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1929,"io_slave_arready", false,-1);
    tracep->declBit(c+1902,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1924,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1905,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1906,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1896,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1904,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1902,"io_slave_rready", false,-1);
    tracep->declBit(c+1930,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1931,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1932,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1933,"io_slave_rlast", false,-1);
    tracep->declBus(c+1934,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1033,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1034,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1035,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+1036,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1037,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1033,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1034,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1038,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1039,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1040,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1905,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1906,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1897,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1904,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1041,"ifu_arvalid", false,-1);
    tracep->declBit(c+1042,"ifu_arready", false,-1);
    tracep->declBus(c+1043,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1935,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1936,"ifu_rlast", false,-1);
    tracep->declBus(c+1937,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1044,"ifu_rvalid", false,-1);
    tracep->declBit(c+1045,"ifu_rready", false,-1);
    tracep->declBit(c+1938,"useless1", false,-1);
    tracep->declBit(c+1939,"useless2", false,-1);
    tracep->declBit(c+1940,"useless3", false,-1);
    tracep->declBit(c+1941,"useless4", false,-1);
    tracep->declBus(c+1046,"cache_araddr", false,-1, 31,0);
    tracep->declBus(c+1942,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+1047,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+1050,"cache_arvalid", false,-1);
    tracep->declBit(c+1866,"cache_arready", false,-1);
    tracep->declBus(c+116,"cache_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"cache_rresp", false,-1, 1,0);
    tracep->declBit(c+118,"cache_rlast", false,-1);
    tracep->declBus(c+119,"cache_rid", false,-1, 3,0);
    tracep->declBit(c+120,"cache_rvalid", false,-1);
    tracep->declBit(c+1051,"cache_rready", false,-1);
    tracep->declBus(c+1052,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1905,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1906,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1053,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1904,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1054,"lsu_arvalid", false,-1);
    tracep->declBit(c+121,"lsu_arready", false,-1);
    tracep->declBus(c+122,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+123,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"lsu_rlast", false,-1);
    tracep->declBus(c+125,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+126,"lsu_rvalid", false,-1);
    tracep->declBit(c+1055,"lsu_rready", false,-1);
    tracep->declBus(c+1056,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1905,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1906,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1057,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1058,"lsu_awvalid", false,-1);
    tracep->declBit(c+127,"lsu_awready", false,-1);
    tracep->declBus(c+1059,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1060,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1061,"lsu_wlast", false,-1);
    tracep->declBit(c+1062,"lsu_wvalid", false,-1);
    tracep->declBit(c+128,"lsu_wready", false,-1);
    tracep->declBus(c+1766,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1767,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1768,"lsu_bvalid", false,-1);
    tracep->declBit(c+1063,"lsu_bready", false,-1);
    tracep->declBus(c+1064,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1065,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1066,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1067,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1068,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1069,"axi_arvalid", false,-1);
    tracep->declBit(c+129,"axi_arready", false,-1);
    tracep->declBus(c+130,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+132,"axi_rlast", false,-1);
    tracep->declBus(c+133,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+134,"axi_rvalid", false,-1);
    tracep->declBit(c+1070,"axi_rready", false,-1);
    tracep->declBus(c+1022,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1905,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1906,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1027,"axi_awvalid", false,-1);
    tracep->declBit(c+107,"axi_awready", false,-1);
    tracep->declBus(c+1024,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"axi_wlast", false,-1);
    tracep->declBit(c+1028,"axi_wvalid", false,-1);
    tracep->declBit(c+108,"axi_wready", false,-1);
    tracep->declBus(c+1482,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1481,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1480,"axi_bvalid", false,-1);
    tracep->declBit(c+1029,"axi_bready", false,-1);
    tracep->declBus(c+67,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+68,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+69,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+70,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+72,"clint_arvalid", false,-1);
    tracep->declBit(c+1071,"clint_arready", false,-1);
    tracep->declBus(c+1072,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1073,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1074,"clint_rlast", false,-1);
    tracep->declBus(c+1905,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1075,"clint_rvalid", false,-1);
    tracep->declBit(c+73,"clint_rready", false,-1);
    tracep->declBus(c+1943,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1944,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1945,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1946,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1947,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1948,"clint_awvalid", false,-1);
    tracep->declBit(c+1076,"clint_awready", false,-1);
    tracep->declBus(c+1949,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1950,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1951,"clint_wlast", false,-1);
    tracep->declBit(c+1952,"clint_wvalid", false,-1);
    tracep->declBit(c+1077,"clint_wready", false,-1);
    tracep->declBus(c+1078,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1905,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1079,"clint_bvalid", false,-1);
    tracep->declBit(c+1953,"clint_bready", false,-1);
    tracep->declBus(c+1772,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1773,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1867,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1868,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1556,"a5", false,-1, 31,0);
    tracep->declBus(c+1774,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1867,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1868,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1775,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1869,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1776,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1777,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1778,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1779,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1780,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1781,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1782,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1783,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1784,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1785,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1786,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1787,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1788,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1789,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1790,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1080,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1081,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1791,"csr_write", false,-1);
    tracep->declBus(c+1792,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1557+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1082,"wdata", false,-1, 31,0);
    tracep->declBus(c+1083,"waddr", false,-1, 4,0);
    tracep->declBit(c+1084,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1561+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1085,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1086,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1087,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1088,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1089,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1090,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1091,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1092,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1093,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1094,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1095,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1096,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1097,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1098,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1099,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1100,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+1101,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1102,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1103,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1104,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1105,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1106,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1107,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1108,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1109,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1110,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1111,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1112,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1113,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1046,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1942,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1047,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1048,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1049,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1050,"arvalid_i_a", false,-1);
    tracep->declBit(c+1866,"arready_o_a", false,-1);
    tracep->declBus(c+116,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+117,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+118,"rlast_o_a", false,-1);
    tracep->declBus(c+119,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+120,"rvalid_o_a", false,-1);
    tracep->declBit(c+1051,"rready_i_a", false,-1);
    tracep->declBus(c+1954,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1905,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1906,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1896,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1904,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1902,"awvalid_i_a", false,-1);
    tracep->declBit(c+135,"awready_o_a", false,-1);
    tracep->declBus(c+1954,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1905,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1902,"wlast_i_a", false,-1);
    tracep->declBit(c+1902,"wvalid_i_a", false,-1);
    tracep->declBit(c+136,"wready_o_a", false,-1);
    tracep->declBus(c+1769,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1770,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1771,"bvalid_o_a", false,-1);
    tracep->declBit(c+1902,"bready_i_a", false,-1);
    tracep->declBus(c+1052,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1905,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1906,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1053,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1904,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1054,"arvalid_i_b", false,-1);
    tracep->declBit(c+121,"arready_o_b", false,-1);
    tracep->declBus(c+122,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+123,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+124,"rlast_o_b", false,-1);
    tracep->declBus(c+125,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+126,"rvalid_o_b", false,-1);
    tracep->declBit(c+1055,"rready_i_b", false,-1);
    tracep->declBus(c+1056,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1905,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1906,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1057,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1904,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1058,"awvalid_i_b", false,-1);
    tracep->declBit(c+127,"awready_o_b", false,-1);
    tracep->declBus(c+1059,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1060,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1061,"wlast_i_b", false,-1);
    tracep->declBit(c+1062,"wvalid_i_b", false,-1);
    tracep->declBit(c+128,"wready_o_b", false,-1);
    tracep->declBus(c+1766,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1767,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1768,"bvalid_o_b", false,-1);
    tracep->declBit(c+1063,"bready_i_b", false,-1);
    tracep->declBus(c+1064,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1065,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1066,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1067,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1068,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1069,"arvalid_o", false,-1);
    tracep->declBit(c+129,"arready_i", false,-1);
    tracep->declBus(c+130,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+131,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+132,"rlast_i", false,-1);
    tracep->declBus(c+133,"rid_i", false,-1, 3,0);
    tracep->declBit(c+134,"rvalid_i", false,-1);
    tracep->declBit(c+1070,"rready_o", false,-1);
    tracep->declBus(c+1022,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1905,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1906,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1023,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1904,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1027,"awvalid_o", false,-1);
    tracep->declBit(c+107,"awready_i", false,-1);
    tracep->declBus(c+1024,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1025,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1026,"wlast_o", false,-1);
    tracep->declBit(c+1028,"wvalid_o", false,-1);
    tracep->declBit(c+108,"wready_i", false,-1);
    tracep->declBus(c+1482,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1481,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1480,"bvalid_i", false,-1);
    tracep->declBit(c+1029,"bready_o", false,-1);
    tracep->declBit(c+1114,"ar_switch", false,-1);
    tracep->declBit(c+1115,"r_switch", false,-1);
    tracep->declBit(c+1116,"aw_switch", false,-1);
    tracep->declBit(c+1117,"w_switch", false,-1);
    tracep->declBit(c+1118,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+67,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+68,"arid_i", false,-1, 3,0);
    tracep->declBus(c+69,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+70,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+71,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+72,"arvalid_i", false,-1);
    tracep->declBit(c+1071,"arready_o", false,-1);
    tracep->declBus(c+1072,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1073,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1074,"rlast_o", false,-1);
    tracep->declBus(c+1905,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1075,"rvalid_o", false,-1);
    tracep->declBit(c+73,"rready_i", false,-1);
    tracep->declBus(c+1943,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1944,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1945,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1946,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1947,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1948,"awvalid_i", false,-1);
    tracep->declBit(c+1076,"awready_o", false,-1);
    tracep->declBus(c+1949,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1950,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1951,"wlast_i", false,-1);
    tracep->declBit(c+1952,"wvalid_i", false,-1);
    tracep->declBit(c+1077,"wready_o", false,-1);
    tracep->declBus(c+1078,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1905,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1079,"bvalid_o", false,-1);
    tracep->declBit(c+1953,"bready_i", false,-1);
    tracep->declBit(c+1119,"ar_state", false,-1);
    tracep->declBit(c+1120,"r_state", false,-1);
    tracep->declBit(c+1121,"aw_state", false,-1);
    tracep->declBit(c+1122,"w_state", false,-1);
    tracep->declBit(c+1955,"b_state", false,-1);
    tracep->declBus(c+1123,"araddr", false,-1, 31,0);
    tracep->declBus(c+1124,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1125,"wdata", false,-1, 31,0);
    tracep->declBus(c+1126,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1956,"wvalid", false,-1);
    tracep->declBit(c+1127,"flag_waddr", false,-1);
    tracep->declBit(c+1128,"flag_wdata", false,-1);
    tracep->declBit(c+1129,"flag_rdata", false,-1);
    tracep->declBit(c+1130,"flag_raddr", false,-1);
    tracep->declBit(c+1957,"flag_write", false,-1);
    tracep->declBus(c+1131,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1132,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1133,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1134,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1135,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1136,"lfsr_in", false,-1);
    tracep->declBus(c+1137,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1138,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1774,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1867,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1868,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1775,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1869,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1776,"a_in_src_i", false,-1);
    tracep->declBus(c+1777,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1778,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1779,"adder_a_src_i", false,-1);
    tracep->declBit(c+1780,"adder_out_src_i", false,-1);
    tracep->declBus(c+1781,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1782,"MemRead_i", false,-1);
    tracep->declBit(c+1783,"MemWrite_i", false,-1);
    tracep->declBus(c+1784,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1785,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1786,"wb_src_i", false,-1);
    tracep->declBit(c+1787,"csr_write_i", false,-1);
    tracep->declBit(c+1788,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1789,"reg_write_i", false,-1);
    tracep->declBus(c+1790,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1080,"exu_valid_i", false,-1);
    tracep->declBit(c+1081,"exu_ready_o", false,-1);
    tracep->declBus(c+1085,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1086,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1087,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1088,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1089,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1090,"MemRead_o", false,-1);
    tracep->declBit(c+1091,"MemWrite_o", false,-1);
    tracep->declBus(c+1092,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1093,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1094,"wb_src_o", false,-1);
    tracep->declBit(c+1095,"csr_write_o", false,-1);
    tracep->declBit(c+1096,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1097,"reg_write_o", false,-1);
    tracep->declBus(c+1098,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1099,"exu_valid_o", false,-1);
    tracep->declBit(c+1100,"exu_ready_i", false,-1);
    tracep->declBus(c+1140,"pc", false,-1, 31,0);
    tracep->declBus(c+1086,"rs1", false,-1, 31,0);
    tracep->declBus(c+1087,"rs2", false,-1, 31,0);
    tracep->declBus(c+1141,"imm", false,-1, 31,0);
    tracep->declBus(c+1142,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1143,"a_in_src", false,-1);
    tracep->declBus(c+1144,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1145,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1146,"adder_a_src", false,-1);
    tracep->declBit(c+1147,"adder_out_src", false,-1);
    tracep->declBus(c+1148,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1149,"a_in", false,-1, 31,0);
    tracep->declBus(c+1150,"b_in", false,-1, 31,0);
    tracep->declBus(c+1151,"a_out", false,-1, 31,0);
    tracep->declBus(c+1152,"add_out", false,-1, 31,0);
    tracep->declBus(c+1153,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1085,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1089,"npc", false,-1, 31,0);
    tracep->declBit(c+1154,"zero", false,-1);
    tracep->declBus(c+1904,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1958,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1959,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1155,"current_state", false,-1, 1,0);
    tracep->declBus(c+1156,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1149,"a", false,-1, 31,0);
    tracep->declBus(c+1150,"b", false,-1, 31,0);
    tracep->declBus(c+1148,"op", false,-1, 3,0);
    tracep->declBus(c+1085,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1154,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1960,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1086,"d0", false,-1, 31,0);
    tracep->declBus(c+1140,"d1", false,-1, 31,0);
    tracep->declBit(c+1143,"sel", false,-1);
    tracep->declBus(c+1149,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1960,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1087,"d0", false,-1, 31,0);
    tracep->declBus(c+1141,"d1", false,-1, 31,0);
    tracep->declBus(c+1961,"d2", false,-1, 31,0);
    tracep->declBus(c+1142,"d3", false,-1, 31,0);
    tracep->declBus(c+1144,"sel", false,-1, 1,0);
    tracep->declBus(c+1150,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1151,"a", false,-1, 31,0);
    tracep->declBus(c+1141,"b", false,-1, 31,0);
    tracep->declBus(c+1152,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1960,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1140,"d0", false,-1, 31,0);
    tracep->declBus(c+1086,"d1", false,-1, 31,0);
    tracep->declBit(c+1146,"sel", false,-1);
    tracep->declBus(c+1151,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1960,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1152,"d0", false,-1, 31,0);
    tracep->declBus(c+1142,"d1", false,-1, 31,0);
    tracep->declBit(c+1147,"sel", false,-1);
    tracep->declBus(c+1153,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1157,"pc4", false,-1, 31,0);
    tracep->declBus(c+1153,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1145,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1154,"zero", false,-1);
    tracep->declBus(c+1085,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1089,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1960,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1962,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBus(c+1962,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1960,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1040,"cpu_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1905,"cpu_arid_i", false,-1, 3,0);
    tracep->declBus(c+1906,"cpu_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1897,"cpu_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1904,"cpu_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1041,"cpu_arvalid_i", false,-1);
    tracep->declBit(c+1042,"cpu_arready_o", false,-1);
    tracep->declBus(c+1043,"cpu_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1935,"cpu_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1936,"cpu_rlast_o", false,-1);
    tracep->declBus(c+1937,"cpu_rid_o", false,-1, 3,0);
    tracep->declBit(c+1044,"cpu_rvalid_o", false,-1);
    tracep->declBit(c+1045,"cpu_rready_i", false,-1);
    tracep->declBus(c+1046,"mem_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1942,"mem_arid_o", false,-1, 3,0);
    tracep->declBus(c+1047,"mem_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1048,"mem_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1049,"mem_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1050,"mem_arvalid_o", false,-1);
    tracep->declBit(c+1866,"mem_arready_i", false,-1);
    tracep->declBus(c+116,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+117,"mem_rresp_i", false,-1, 1,0);
    tracep->declBit(c+118,"mem_rlast_i", false,-1);
    tracep->declBus(c+119,"mem_rid_i", false,-1, 3,0);
    tracep->declBit(c+120,"mem_rvalid_i", false,-1);
    tracep->declBit(c+1051,"mem_rready_o", false,-1);
    tracep->declBus(c+1963,"BLOCK_WORDS", false,-1, 31,0);
    tracep->declBus(c+1963,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+1963,"INDEX_BITS", false,-1, 31,0);
    tracep->declBus(c+1964,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+1963,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1158,"cpu_addr", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1159+i*4,"data_array", true,(i+0), 127,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1223+i*1,"tag_array", true,(i+0), 23,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+1239+i*1,"valid_array", true,(i+0));
    }
    tracep->declBus(c+1255,"req_tag", false,-1, 23,0);
    tracep->declBus(c+1256,"req_index", false,-1, 3,0);
    tracep->declBus(c+1257,"req_offset", false,-1, 3,0);
    tracep->declBus(c+1258,"counter", false,-1, 31,0);
    tracep->declBus(c+1259,"current_state", false,-1, 2,0);
    tracep->declBus(c+1870,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1260,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1772,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1773,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1867,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1868,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1556,"a5", false,-1, 31,0);
    tracep->declBus(c+1033,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1034,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1038,"idu_valid_i", false,-1);
    tracep->declBit(c+1039,"idu_ready_o", false,-1);
    tracep->declBus(c+1774,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1867,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1868,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1775,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1869,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1776,"a_in_src_o", false,-1);
    tracep->declBus(c+1777,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1778,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1779,"adder_a_src_o", false,-1);
    tracep->declBit(c+1780,"adder_out_src_o", false,-1);
    tracep->declBus(c+1781,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1782,"MemRead_o", false,-1);
    tracep->declBit(c+1783,"MemWrite_o", false,-1);
    tracep->declBus(c+1784,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1785,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1786,"wb_src_o", false,-1);
    tracep->declBit(c+1787,"csr_write_o", false,-1);
    tracep->declBit(c+1788,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1789,"reg_write_o", false,-1);
    tracep->declBus(c+1790,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1080,"idu_valid_o", false,-1);
    tracep->declBit(c+1081,"idu_ready_i", false,-1);
    tracep->declBit(c+1791,"csr_write_i", false,-1);
    tracep->declBus(c+1792,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1593+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1774,"pc", false,-1, 31,0);
    tracep->declBus(c+1793,"inst", false,-1, 31,0);
    tracep->declBus(c+1794,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1904,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1958,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1959,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1261,"current_state", false,-1, 1,0);
    tracep->declBus(c+1262,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1793,"inst", false,-1, 31,0);
    tracep->declBus(c+1781,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1795,"opcode", false,-1, 6,0);
    tracep->declBus(c+1796,"funct3", false,-1, 2,0);
    tracep->declBus(c+1797,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1791,"wen", false,-1);
    tracep->declBus(c+1793,"inst", false,-1, 31,0);
    tracep->declBus(c+1792,"wdata", false,-1, 31,0);
    tracep->declBus(c+1556,"NO", false,-1, 31,0);
    tracep->declBus(c+1774,"pc", false,-1, 31,0);
    tracep->declBus(c+1869,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1597+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1601,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1602,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1603,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1604,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1965,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1966,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1795,"opcode", false,-1, 6,0);
    tracep->declBus(c+1796,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1793,"inst", false,-1, 31,0);
    tracep->declBit(c+1776,"a_in_src", false,-1);
    tracep->declBus(c+1777,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1789,"reg_write", false,-1);
    tracep->declBus(c+1778,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1779,"adder_a_src", false,-1);
    tracep->declBit(c+1782,"MemRead", false,-1);
    tracep->declBit(c+1783,"MemWrite", false,-1);
    tracep->declBus(c+1794,"wmask", false,-1, 7,0);
    tracep->declBit(c+1786,"wb_src", false,-1);
    tracep->declBus(c+1785,"rmask", false,-1, 2,0);
    tracep->declBit(c+1787,"csr_write", false,-1);
    tracep->declBit(c+1780,"adder_out_src", false,-1);
    tracep->declBit(c+1788,"csr_wdata_src", false,-1);
    tracep->declBus(c+1795,"opcode", false,-1, 6,0);
    tracep->declBus(c+1796,"funct3", false,-1, 2,0);
    tracep->declBus(c+1797,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1960,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1793,"inst", false,-1, 31,0);
    tracep->declBus(c+1775,"data", false,-1, 31,0);
    tracep->declBus(c+1795,"opcode", false,-1, 6,0);
    tracep->declBus(c+1796,"funct3", false,-1, 2,0);
    tracep->declBus(c+1797,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1040,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1905,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1906,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1897,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1904,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1041,"arvalid_o", false,-1);
    tracep->declBit(c+1042,"arready_i", false,-1);
    tracep->declBus(c+1043,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1935,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1936,"rlast_i", false,-1);
    tracep->declBus(c+1937,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1044,"rvalid_i", false,-1);
    tracep->declBit(c+1045,"rready_o", false,-1);
    tracep->declBus(c+1035,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1036,"ifu_valid_i", false,-1);
    tracep->declBit(c+1037,"ifu_ready_o", false,-1);
    tracep->declBus(c+1033,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1034,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1038,"ifu_valid_o", false,-1);
    tracep->declBit(c+1039,"ifu_ready_i", false,-1);
    tracep->declBus(c+1263,"pc", false,-1, 31,0);
    tracep->declBus(c+1967,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1968,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1969,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1970,"lfsr_in", false,-1);
    tracep->declBit(c+1041,"arvalid", false,-1);
    tracep->declBus(c+1040,"araddr", false,-1, 31,0);
    tracep->declBus(c+1264,"inst", false,-1, 31,0);
    tracep->declBit(c+1045,"rready", false,-1);
    tracep->declBus(c+1971,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1972+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+2004,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1896,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1893,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1897,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1898,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+2005,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+1265,"current_state", false,-1, 2,0);
    tracep->declBus(c+1266,"next_state", false,-1, 2,0);
    tracep->declBus(c+1267,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+1268,"ready_flag", false,-1);
    tracep->declBit(c+1269,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1085,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1086,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1087,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1088,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1089,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1090,"MemRead_i", false,-1);
    tracep->declBit(c+1091,"MemWrite_i", false,-1);
    tracep->declBus(c+1092,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1093,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1094,"wb_src_i", false,-1);
    tracep->declBit(c+1095,"csr_write_i", false,-1);
    tracep->declBit(c+1096,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1097,"reg_write_i", false,-1);
    tracep->declBus(c+1098,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1099,"lsu_valid_i", false,-1);
    tracep->declBit(c+1100,"lsu_ready_o", false,-1);
    tracep->declBus(c+1101,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1102,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1103,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1104,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1105,"npc_o", false,-1, 31,0);
    tracep->declBus(c+1106,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1107,"wb_src_o", false,-1);
    tracep->declBit(c+1108,"csr_write_o", false,-1);
    tracep->declBit(c+1109,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1110,"reg_write_o", false,-1);
    tracep->declBus(c+1111,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1112,"lsu_valid_o", false,-1);
    tracep->declBit(c+1113,"lsu_ready_i", false,-1);
    tracep->declBus(c+1052,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1905,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1906,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1053,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1904,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1054,"arvalid_o", false,-1);
    tracep->declBit(c+121,"arready_i", false,-1);
    tracep->declBus(c+122,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+123,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+124,"rlast_i", false,-1);
    tracep->declBus(c+125,"rid_i", false,-1, 3,0);
    tracep->declBit(c+126,"rvalid_i", false,-1);
    tracep->declBit(c+1055,"rready_o", false,-1);
    tracep->declBus(c+1056,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1905,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1906,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1057,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1904,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1058,"awvalid_o", false,-1);
    tracep->declBit(c+127,"awready_i", false,-1);
    tracep->declBus(c+1059,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1060,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1061,"wlast_o", false,-1);
    tracep->declBit(c+1062,"wvalid_o", false,-1);
    tracep->declBit(c+128,"wready_i", false,-1);
    tracep->declBus(c+1766,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1767,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1768,"bvalid_i", false,-1);
    tracep->declBit(c+1063,"bready_o", false,-1);
    tracep->declBus(c+1101,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1102,"rs1", false,-1, 31,0);
    tracep->declBus(c+2006,"rs2", false,-1, 31,0);
    tracep->declBus(c+2007,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1106,"rmask", false,-1, 2,0);
    tracep->declBit(c+1270,"flag", false,-1);
    tracep->declBit(c+2008,"wvalid_tmp", false,-1);
    tracep->declBus(c+2009,"LFSR", false,-1, 4,0);
    tracep->declBus(c+2010,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+2011,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+2012,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+2013,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+2014,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+2015,"lfsr_in", false,-1);
    tracep->declBit(c+1054,"arvalid", false,-1);
    tracep->declBus(c+1052,"araddr", false,-1, 31,0);
    tracep->declBit(c+1055,"rready", false,-1);
    tracep->declBus(c+1056,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1058,"awvalid", false,-1);
    tracep->declBus(c+1059,"wdata", false,-1, 31,0);
    tracep->declBus(c+1060,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1062,"wvalid", false,-1);
    tracep->declBit(c+1063,"bready", false,-1);
    tracep->declBus(c+2016,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2017+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+2049,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+2050,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2051+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+2083,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2084+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2116+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+2148,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1904,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1958,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1959,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+2149,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1271,"current_state", false,-1, 1,0);
    tracep->declBus(c+1272,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+2150,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1960,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBus(c+1082,"wdata", false,-1, 31,0);
    tracep->declBus(c+1083,"waddr", false,-1, 4,0);
    tracep->declBit(c+1084,"wen", false,-1);
    tracep->declBus(c+1772,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1867,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1773,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1868,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1556,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1605+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1637+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1101,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1102,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1103,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1104,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1105,"npc_i", false,-1, 31,0);
    tracep->declBus(c+1106,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1107,"wb_src_i", false,-1);
    tracep->declBit(c+1108,"csr_write_i", false,-1);
    tracep->declBit(c+1109,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1110,"reg_write_i", false,-1);
    tracep->declBus(c+1111,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1112,"wbu_valid_i", false,-1);
    tracep->declBit(c+1113,"wbu_ready_o", false,-1);
    tracep->declBus(c+1035,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1036,"wbu_valid_o", false,-1);
    tracep->declBit(c+1037,"wbu_ready_i", false,-1);
    tracep->declBus(c+1792,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1082,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1791,"csr_write_o", false,-1);
    tracep->declBit(c+1084,"reg_write_o", false,-1);
    tracep->declBus(c+1083,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1273,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1274,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1275,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1276,"rs1", false,-1, 31,0);
    tracep->declBus(c+1277,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1278,"rmask", false,-1, 2,0);
    tracep->declBit(c+1279,"wb_src", false,-1);
    tracep->declBit(c+1280,"csr_wdata_src", false,-1);
    tracep->declBit(c+1281,"difftest_check", false,-1);
    tracep->declBit(c+1282,"difftest_check_flag", false,-1);
    tracep->declBus(c+1904,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1958,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1959,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1283,"current_state", false,-1, 1,0);
    tracep->declBus(c+1284,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1960,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1276,"d0", false,-1, 31,0);
    tracep->declBus(c+1277,"d1", false,-1, 31,0);
    tracep->declBit(c+1280,"sel", false,-1);
    tracep->declBus(c+1792,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1274,"read_data", false,-1, 31,0);
    tracep->declBus(c+1285,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1278,"rmask", false,-1, 2,0);
    tracep->declBus(c+1273,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1286,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1287,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1288,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1289,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1290,"byte3", false,-1, 31,0);
    tracep->declBus(c+1291,"byte2", false,-1, 31,0);
    tracep->declBus(c+1292,"byte1", false,-1, 31,0);
    tracep->declBus(c+1293,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1960,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1275,"d0", false,-1, 31,0);
    tracep->declBus(c+1273,"d1", false,-1, 31,0);
    tracep->declBit(c+1279,"sel", false,-1);
    tracep->declBus(c+1082,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1865,"rst_n", false,-1);
    tracep->declBus(c+1064,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1065,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1066,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1067,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1068,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1069,"axi_arvalid_i", false,-1);
    tracep->declBit(c+129,"axi_arready_o", false,-1);
    tracep->declBus(c+130,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+131,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+132,"axi_rlast_o", false,-1);
    tracep->declBus(c+133,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+134,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1070,"axi_rready_i", false,-1);
    tracep->declBus(c+1022,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1905,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1906,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1023,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1904,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1027,"axi_awvalid_i", false,-1);
    tracep->declBit(c+107,"axi_awready_o", false,-1);
    tracep->declBus(c+1024,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1025,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1026,"axi_wlast_i", false,-1);
    tracep->declBit(c+1028,"axi_wvalid_i", false,-1);
    tracep->declBit(c+108,"axi_wready_o", false,-1);
    tracep->declBus(c+1482,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1481,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1480,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1029,"axi_bready_i", false,-1);
    tracep->declBus(c+40,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+39,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+41,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+42,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+43,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+54,"sram_arvalid_o", false,-1);
    tracep->declBit(c+109,"sram_arready_i", false,-1);
    tracep->declBus(c+1861,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1862,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1485,"sram_rlast_i", false,-1);
    tracep->declBus(c+1484,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1483,"sram_rvalid_i", false,-1);
    tracep->declBit(c+55,"sram_rready_o", false,-1);
    tracep->declBus(c+1022,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1905,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1906,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1023,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1904,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1027,"sram_awvalid_o", false,-1);
    tracep->declBit(c+107,"sram_awready_i", false,-1);
    tracep->declBus(c+1024,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1025,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1026,"sram_wlast_o", false,-1);
    tracep->declBit(c+1028,"sram_wvalid_o", false,-1);
    tracep->declBit(c+108,"sram_wready_i", false,-1);
    tracep->declBus(c+1482,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1481,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1480,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1029,"sram_bready_o", false,-1);
    tracep->declBus(c+67,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+68,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+69,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+70,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+71,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+72,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1071,"clint_arready_i", false,-1);
    tracep->declBus(c+1072,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1073,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1074,"clint_rlast_i", false,-1);
    tracep->declBus(c+1905,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1075,"clint_rvalid_i", false,-1);
    tracep->declBit(c+73,"clint_rready_o", false,-1);
    tracep->declBus(c+1943,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1944,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1945,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1946,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1947,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1948,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1076,"clint_awready_i", false,-1);
    tracep->declBus(c+1949,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1950,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1951,"clint_wlast_o", false,-1);
    tracep->declBit(c+1952,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1077,"clint_wready_i", false,-1);
    tracep->declBus(c+1078,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1905,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1079,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1953,"clint_bready_o", false,-1);
    tracep->declBit(c+74,"ar_switch", false,-1);
    tracep->declBit(c+75,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"io_d", false,-1);
    tracep->declBit(c+603,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"io_d", false,-1);
    tracep->declBit(c+603,"io_q", false,-1);
    tracep->declBit(c+603,"sync_0", false,-1);
    tracep->declBit(c+604,"sync_1", false,-1);
    tracep->declBit(c+605,"sync_2", false,-1);
    tracep->declBit(c+606,"sync_3", false,-1);
    tracep->declBit(c+607,"sync_4", false,-1);
    tracep->declBit(c+608,"sync_5", false,-1);
    tracep->declBit(c+609,"sync_6", false,-1);
    tracep->declBit(c+610,"sync_7", false,-1);
    tracep->declBit(c+611,"sync_8", false,-1);
    tracep->declBit(c+612,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1532,"auto_in_psel", false,-1);
    tracep->declBit(c+1533,"auto_in_penable", false,-1);
    tracep->declBit(c+1519,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1531,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1518,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+723,"auto_in_pready", false,-1);
    tracep->declBit(c+1902,"auto_in_pslverr", false,-1);
    tracep->declBus(c+724,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1819,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1820,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1821,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1822,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1823,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1824,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1825,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1826,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1827,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1828,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1669,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1532,"in_psel", false,-1);
    tracep->declBit(c+1533,"in_penable", false,-1);
    tracep->declBus(c+1518,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1519,"in_pwrite", false,-1);
    tracep->declBus(c+1520,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+723,"in_pready", false,-1);
    tracep->declBus(c+724,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1902,"in_pslverr", false,-1);
    tracep->declBus(c+1819,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1820,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1821,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1822,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1823,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1824,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1825,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1826,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1827,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1828,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+733,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+724,"rdata", false,-1, 31,0);
    tracep->declBus(c+734,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+723,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+735,"num", false,-1, 3,0);
    tracep->declBus(c+1821,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+736,"num", false,-1, 3,0);
    tracep->declBus(c+1822,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+737,"num", false,-1, 3,0);
    tracep->declBus(c+1823,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+738,"num", false,-1, 3,0);
    tracep->declBus(c+1824,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+739,"num", false,-1, 3,0);
    tracep->declBus(c+1825,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+740,"num", false,-1, 3,0);
    tracep->declBus(c+1826,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+741,"num", false,-1, 3,0);
    tracep->declBus(c+1827,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+742,"num", false,-1, 3,0);
    tracep->declBus(c+1828,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1529,"auto_in_psel", false,-1);
    tracep->declBit(c+1530,"auto_in_penable", false,-1);
    tracep->declBit(c+1519,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1531,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1518,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+160,"auto_in_pready", false,-1);
    tracep->declBit(c+1902,"auto_in_pslverr", false,-1);
    tracep->declBus(c+161,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1829,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1830,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1669,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1529,"in_psel", false,-1);
    tracep->declBit(c+1530,"in_penable", false,-1);
    tracep->declBus(c+1518,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1519,"in_pwrite", false,-1);
    tracep->declBus(c+1520,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+160,"in_pready", false,-1);
    tracep->declBus(c+161,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1902,"in_pslverr", false,-1);
    tracep->declBit(c+1829,"ps2_clk", false,-1);
    tracep->declBit(c+1830,"ps2_data", false,-1);
    tracep->declBus(c+613,"data_r", false,-1, 7,0);
    tracep->declBus(c+614,"old_data", false,-1, 7,0);
    tracep->declBus(c+615,"data_asic", false,-1, 7,0);
    tracep->declBus(c+616,"buffer", false,-1, 7,0);
    tracep->declBit(c+617,"ready", false,-1);
    tracep->declBit(c+618,"nextdata_n", false,-1);
    tracep->declBit(c+619,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1871,"clrn", false,-1);
    tracep->declBit(c+1829,"ps2_clk", false,-1);
    tracep->declBit(c+1830,"ps2_data", false,-1);
    tracep->declBit(c+618,"nextdata_n", false,-1);
    tracep->declBus(c+616,"data", false,-1, 7,0);
    tracep->declBit(c+617,"ready", false,-1);
    tracep->declBit(c+619,"overflow", false,-1);
    tracep->declBus(c+620,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+621+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+629,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+630,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+631,"count", false,-1, 3,0);
    tracep->declBus(c+632,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+633,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1738,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1739,"auto_in_wvalid", false,-1);
    tracep->declBit(c+398,"auto_in_arready", false,-1);
    tracep->declBit(c+61,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+399,"auto_in_rvalid", false,-1);
    tracep->declBus(c+400,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+401,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+399,"state", false,-1);
    tracep->declBus(c+401,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+400,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+76,"raddr", false,-1, 31,0);
    tracep->declBit(c+77,"ren", false,-1);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1534,"auto_in_psel", false,-1);
    tracep->declBit(c+1535,"auto_in_penable", false,-1);
    tracep->declBit(c+1519,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1515,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1518,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1848,"auto_in_pready", false,-1);
    tracep->declBit(c+1902,"auto_in_pslverr", false,-1);
    tracep->declBus(c+162,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1840,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1798,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1841,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1515,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1534,"in_psel", false,-1);
    tracep->declBit(c+1535,"in_penable", false,-1);
    tracep->declBus(c+1518,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1519,"in_pwrite", false,-1);
    tracep->declBus(c+1520,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1848,"in_pready", false,-1);
    tracep->declBus(c+162,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1902,"in_pslverr", false,-1);
    tracep->declBit(c+1840,"qspi_sck", false,-1);
    tracep->declBit(c+1798,"qspi_ce_n", false,-1);
    tracep->declBus(c+1841,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1841,"din", false,-1, 3,0);
    tracep->declBus(c+1872,"dout", false,-1, 3,0);
    tracep->declBus(c+1800,"douten", false,-1, 3,0);
    tracep->declBit(c+1873,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1817,"clk_i", false,-1);
    tracep->declBit(c+1818,"rst_i", false,-1);
    tracep->declBus(c+1515,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1520,"dat_i", false,-1, 31,0);
    tracep->declBus(c+162,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1521,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1534,"cyc_i", false,-1);
    tracep->declBit(c+1534,"stb_i", false,-1);
    tracep->declBit(c+1873,"ack_o", false,-1);
    tracep->declBit(c+1519,"we_i", false,-1);
    tracep->declBit(c+1840,"sck", false,-1);
    tracep->declBit(c+1798,"ce_n", false,-1);
    tracep->declBus(c+1841,"din", false,-1, 3,0);
    tracep->declBus(c+1872,"dout", false,-1, 3,0);
    tracep->declBus(c+1800,"douten", false,-1, 3,0);
    tracep->declBus(c+1904,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1958,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1959,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+743,"mr_sck", false,-1);
    tracep->declBit(c+744,"mr_ce_n", false,-1);
    tracep->declBus(c+1841,"mr_din", false,-1, 3,0);
    tracep->declBus(c+745,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+746,"mr_doe", false,-1);
    tracep->declBit(c+747,"mw_sck", false,-1);
    tracep->declBit(c+748,"mw_ce_n", false,-1);
    tracep->declBus(c+1841,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1801,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+749,"mw_doe", false,-1);
    tracep->declBit(c+1802,"mr_rd", false,-1);
    tracep->declBit(c+750,"mr_done", false,-1);
    tracep->declBit(c+1803,"mw_wr", false,-1);
    tracep->declBit(c+1804,"mw_done", false,-1);
    tracep->declBit(c+1534,"wb_valid", false,-1);
    tracep->declBit(c+1670,"wb_we", false,-1);
    tracep->declBit(c+1671,"wb_re", false,-1);
    tracep->declBus(c+1691,"state", false,-1, 1,0);
    tracep->declBus(c+1874,"nstate", false,-1, 1,0);
    tracep->declBus(c+1875,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1876,"qpi_sck", false,-1);
    tracep->declBus(c+1672,"size", false,-1, 2,0);
    tracep->declBus(c+1673,"byte0", false,-1, 7,0);
    tracep->declBus(c+1674,"byte1", false,-1, 7,0);
    tracep->declBus(c+1675,"byte2", false,-1, 7,0);
    tracep->declBus(c+1676,"byte3", false,-1, 7,0);
    tracep->declBus(c+1677,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1871,"rst_n", false,-1);
    tracep->declBus(c+1678,"addr", false,-1, 23,0);
    tracep->declBit(c+1802,"rd", false,-1);
    tracep->declBus(c+2005,"size", false,-1, 2,0);
    tracep->declBit(c+750,"done", false,-1);
    tracep->declBus(c+162,"line", false,-1, 31,0);
    tracep->declBit(c+743,"sck", false,-1);
    tracep->declBit(c+744,"ce_n", false,-1);
    tracep->declBus(c+1841,"din", false,-1, 3,0);
    tracep->declBus(c+745,"dout", false,-1, 3,0);
    tracep->declBit(c+746,"douten", false,-1);
    tracep->declBus(c+2151,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2152,"READ", false,-1, 0,0);
    tracep->declBus(c+2153,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+751,"state", false,-1);
    tracep->declBit(c+1805,"nstate", false,-1);
    tracep->declBus(c+752,"counter", false,-1, 7,0);
    tracep->declBus(c+753,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+634+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+2154,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+754,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1871,"rst_n", false,-1);
    tracep->declBus(c+1679,"addr", false,-1, 23,0);
    tracep->declBus(c+1677,"line", false,-1, 31,0);
    tracep->declBus(c+1672,"size", false,-1, 2,0);
    tracep->declBit(c+1803,"wr", false,-1);
    tracep->declBit(c+1804,"done", false,-1);
    tracep->declBit(c+747,"sck", false,-1);
    tracep->declBit(c+748,"ce_n", false,-1);
    tracep->declBus(c+1841,"din", false,-1, 3,0);
    tracep->declBus(c+1801,"dout", false,-1, 3,0);
    tracep->declBit(c+749,"douten", false,-1);
    tracep->declBus(c+2151,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2152,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1680,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+755,"state", false,-1);
    tracep->declBit(c+1806,"nstate", false,-1);
    tracep->declBus(c+756,"counter", false,-1, 7,0);
    tracep->declBus(c+757,"saddr", false,-1, 23,0);
    tracep->declBus(c+2155,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+98,"auto_in_awready", false,-1);
    tracep->declBit(c+1715,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1905,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1022,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1906,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"auto_in_wready", false,-1);
    tracep->declBit(c+1716,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1024,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_in_wlast", false,-1);
    tracep->declBit(c+1857,"auto_in_bready", false,-1);
    tracep->declBit(c+732,"auto_in_bvalid", false,-1);
    tracep->declBus(c+729,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1904,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+97,"auto_in_arready", false,-1);
    tracep->declBit(c+38,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1856,"auto_in_rready", false,-1);
    tracep->declBit(c+728,"auto_in_rvalid", false,-1);
    tracep->declBus(c+729,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+730,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1904,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+731,"auto_in_rlast", false,-1);
    tracep->declBit(c+1842,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1688,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+718,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+719,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+720,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+721,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1843,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1689,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1690,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1844,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+98,"in_awready", false,-1);
    tracep->declBit(c+1715,"in_awvalid", false,-1);
    tracep->declBus(c+1022,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1905,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1906,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1904,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+99,"in_wready", false,-1);
    tracep->declBit(c+1716,"in_wvalid", false,-1);
    tracep->declBus(c+1024,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"in_wlast", false,-1);
    tracep->declBit(c+1857,"in_bready", false,-1);
    tracep->declBit(c+732,"in_bvalid", false,-1);
    tracep->declBus(c+1904,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+729,"in_bid", false,-1, 3,0);
    tracep->declBit(c+97,"in_arready", false,-1);
    tracep->declBit(c+38,"in_arvalid", false,-1);
    tracep->declBus(c+40,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"in_arid", false,-1, 3,0);
    tracep->declBus(c+41,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1856,"in_rready", false,-1);
    tracep->declBit(c+728,"in_rvalid", false,-1);
    tracep->declBus(c+1904,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+730,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+731,"in_rlast", false,-1);
    tracep->declBus(c+729,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1842,"sdram_clk", false,-1);
    tracep->declBit(c+1688,"sdram_cke", false,-1);
    tracep->declBit(c+718,"sdram_cs", false,-1);
    tracep->declBit(c+719,"sdram_ras", false,-1);
    tracep->declBit(c+720,"sdram_cas", false,-1);
    tracep->declBit(c+721,"sdram_we", false,-1);
    tracep->declBus(c+1843,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1689,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1690,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1844,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+758,"sdram_dout_en", false,-1);
    tracep->declBus(c+759,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1817,"clk_i", false,-1);
    tracep->declBit(c+1818,"rst_i", false,-1);
    tracep->declBit(c+1715,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1022,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1905,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1906,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1904,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1716,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1024,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1025,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1026,"inport_wlast_i", false,-1);
    tracep->declBit(c+1857,"inport_bready_i", false,-1);
    tracep->declBit(c+38,"inport_arvalid_i", false,-1);
    tracep->declBus(c+40,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+39,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+41,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+43,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1856,"inport_rready_i", false,-1);
    tracep->declBus(c+1844,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+98,"inport_awready_o", false,-1);
    tracep->declBit(c+99,"inport_wready_o", false,-1);
    tracep->declBit(c+732,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1904,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+729,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+97,"inport_arready_o", false,-1);
    tracep->declBit(c+728,"inport_rvalid_o", false,-1);
    tracep->declBus(c+730,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1904,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+729,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+731,"inport_rlast_o", false,-1);
    tracep->declBit(c+1842,"sdram_clk_o", false,-1);
    tracep->declBit(c+1688,"sdram_cke_o", false,-1);
    tracep->declBit(c+718,"sdram_cs_o", false,-1);
    tracep->declBit(c+719,"sdram_ras_o", false,-1);
    tracep->declBit(c+720,"sdram_cas_o", false,-1);
    tracep->declBit(c+721,"sdram_we_o", false,-1);
    tracep->declBus(c+1690,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1843,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1689,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+759,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+758,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1891,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1964,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1895,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2156,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+137,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+138,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_w", false,-1);
    tracep->declBit(c+1692,"ram_accept_w", false,-1);
    tracep->declBus(c+1024,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+760,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+79,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+761,"ram_ack_w", false,-1);
    tracep->declBit(c+1902,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1817,"clk_i", false,-1);
    tracep->declBit(c+1818,"rst_i", false,-1);
    tracep->declBit(c+1715,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1022,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1905,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1906,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1904,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1716,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1024,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1025,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1026,"axi_wlast_i", false,-1);
    tracep->declBit(c+1857,"axi_bready_i", false,-1);
    tracep->declBit(c+38,"axi_arvalid_i", false,-1);
    tracep->declBus(c+40,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+39,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+41,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+43,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1856,"axi_rready_i", false,-1);
    tracep->declBit(c+1692,"ram_accept_i", false,-1);
    tracep->declBit(c+761,"ram_ack_i", false,-1);
    tracep->declBit(c+1902,"ram_error_i", false,-1);
    tracep->declBus(c+760,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+98,"axi_awready_o", false,-1);
    tracep->declBit(c+99,"axi_wready_o", false,-1);
    tracep->declBit(c+732,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1904,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+729,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+97,"axi_arready_o", false,-1);
    tracep->declBit(c+728,"axi_rvalid_o", false,-1);
    tracep->declBus(c+730,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1904,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+729,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+731,"axi_rlast_o", false,-1);
    tracep->declBus(c+138,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_o", false,-1);
    tracep->declBus(c+79,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+137,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1024,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+762,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+763,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+764,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+765,"req_rd_q", false,-1);
    tracep->declBit(c+766,"req_wr_q", false,-1);
    tracep->declBus(c+767,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+768,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+769,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+770,"req_prio_q", false,-1);
    tracep->declBit(c+771,"req_hold_rd_q", false,-1);
    tracep->declBit(c+772,"req_hold_wr_q", false,-1);
    tracep->declBit(c+773,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+140,"req_push_w", false,-1);
    tracep->declBus(c+1877,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+774,"req_out_valid_w", false,-1);
    tracep->declBus(c+775,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+141,"resp_accept_w", false,-1);
    tracep->declBit(c+776,"resp_is_write_w", false,-1);
    tracep->declBit(c+777,"resp_is_read_w", false,-1);
    tracep->declBit(c+731,"resp_is_last_w", false,-1);
    tracep->declBus(c+729,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+778,"resp_valid_w", false,-1);
    tracep->declBit(c+779,"write_prio_w", false,-1);
    tracep->declBit(c+780,"read_prio_w", false,-1);
    tracep->declBit(c+142,"write_active_w", false,-1);
    tracep->declBit(c+139,"read_active_w", false,-1);
    tracep->declBus(c+137,"addr_w", false,-1, 31,0);
    tracep->declBit(c+96,"wr_w", false,-1);
    tracep->declBit(c+139,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+2157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1963,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2156,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1817,"clk_i", false,-1);
    tracep->declBit(c+1818,"rst_i", false,-1);
    tracep->declBus(c+1877,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+140,"push_i", false,-1);
    tracep->declBit(c+141,"pop_i", false,-1);
    tracep->declBus(c+775,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+773,"accept_o", false,-1);
    tracep->declBit(c+774,"valid_o", false,-1);
    tracep->declBus(c+2158,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+781+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+785,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+786,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+787,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1960,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1963,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2156,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1817,"clk_i", false,-1);
    tracep->declBit(c+1818,"rst_i", false,-1);
    tracep->declBus(c+760,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+761,"push_i", false,-1);
    tracep->declBit(c+141,"pop_i", false,-1);
    tracep->declBus(c+730,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+788,"accept_o", false,-1);
    tracep->declBit(c+778,"valid_o", false,-1);
    tracep->declBus(c+2158,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+789+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+793,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+794,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+795,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1817,"clk_i", false,-1);
    tracep->declBit(c+1818,"rst_i", false,-1);
    tracep->declBus(c+138,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+139,"inport_rd_i", false,-1);
    tracep->declBus(c+79,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+137,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1024,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1844,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1692,"inport_accept_o", false,-1);
    tracep->declBit(c+761,"inport_ack_o", false,-1);
    tracep->declBit(c+1902,"inport_error_o", false,-1);
    tracep->declBus(c+760,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1842,"sdram_clk_o", false,-1);
    tracep->declBit(c+1688,"sdram_cke_o", false,-1);
    tracep->declBit(c+718,"sdram_cs_o", false,-1);
    tracep->declBit(c+719,"sdram_ras_o", false,-1);
    tracep->declBit(c+720,"sdram_cas_o", false,-1);
    tracep->declBit(c+721,"sdram_we_o", false,-1);
    tracep->declBus(c+1690,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1843,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1689,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+759,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+758,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1891,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1964,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1895,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2156,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+2156,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1963,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1963,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+2159,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+2160,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+2161,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+2162,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1963,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+2163,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2164,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2165,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2166,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+2167,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+2168,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2169,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1905,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+2170,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1963,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1905,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+2169,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+2168,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2164,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+2166,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+2165,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+2167,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+2163,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+2171,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2172,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2173,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+2173,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1960,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+2173,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+2156,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2156,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2157,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+137,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+138,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_w", false,-1);
    tracep->declBit(c+1692,"ram_accept_w", false,-1);
    tracep->declBus(c+1024,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+760,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+761,"ram_ack_w", false,-1);
    tracep->declBit(c+143,"ram_req_w", false,-1);
    tracep->declBus(c+796,"command_q", false,-1, 3,0);
    tracep->declBus(c+1693,"addr_q", false,-1, 12,0);
    tracep->declBus(c+759,"data_q", false,-1, 31,0);
    tracep->declBit(c+797,"data_rd_en_q", false,-1);
    tracep->declBus(c+1690,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1688,"cke_q", false,-1);
    tracep->declBus(c+1689,"bank_q", false,-1, 1,0);
    tracep->declBus(c+760,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+798,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1844,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+799,"refresh_q", false,-1);
    tracep->declBus(c+800,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+801+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1694,"state_q", false,-1, 3,0);
    tracep->declBus(c+144,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+145,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+805,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+806,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+146,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+147,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+148,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1963,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+807,"delay_q", false,-1, 3,0);
    tracep->declBus(c+149,"delay_r", false,-1, 3,0);
    tracep->declBus(c+2174,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1695,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+808,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+809,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+810,"idx", false,-1, 31,0);
    tracep->declBus(c+811,"rd_q", false,-1, 3,0);
    tracep->declBit(c+761,"ack_q", false,-1);
    tracep->declArray(c+1696,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1539,"auto_in_psel", false,-1);
    tracep->declBit(c+1540,"auto_in_penable", false,-1);
    tracep->declBit(c+1519,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1528,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1518,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+725,"auto_in_pready", false,-1);
    tracep->declBit(c+726,"auto_in_pslverr", false,-1);
    tracep->declBus(c+727,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+717,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1686,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1687,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1839,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+2175,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2176,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+2177,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1681,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1539,"in_psel", false,-1);
    tracep->declBit(c+1540,"in_penable", false,-1);
    tracep->declBus(c+1518,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1519,"in_pwrite", false,-1);
    tracep->declBus(c+1520,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+725,"in_pready", false,-1);
    tracep->declBus(c+727,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+726,"in_pslverr", false,-1);
    tracep->declBit(c+717,"spi_sck", false,-1);
    tracep->declBus(c+1686,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1687,"spi_mosi", false,-1);
    tracep->declBit(c+1839,"spi_miso", false,-1);
    tracep->declBit(c+812,"spi_irq_out", false,-1);
    tracep->declBus(c+2178,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+2179,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+2178,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+2180,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+2181,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+2182,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1905,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2169,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+2168,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+2164,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+2166,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+2165,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+2167,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+2163,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+2171,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+2172,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+2183,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+813,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1807,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+814,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+815,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+816,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+817,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+818,"wb_we_i", false,-1);
    tracep->declBit(c+819,"wb_stb_i", false,-1);
    tracep->declBit(c+820,"wb_cyc_i", false,-1);
    tracep->declBit(c+821,"wb_ack_o", false,-1);
    tracep->declBit(c+1902,"wb_err_o", false,-1);
    tracep->declBit(c+822,"wb_int_o", false,-1);
    tracep->declBit(c+823,"done", false,-1);
    tracep->declBus(c+824,"paddr", false,-1, 31,0);
    tracep->declQuad(c+825,"data", false,-1, 63,0);
    tracep->declBit(c+827,"is_flash_access", false,-1);
    tracep->declBus(c+828,"tmp", false,-1, 31,0);
    tracep->declQuad(c+829,"tmp64", false,-1, 63,0);
    tracep->declBus(c+831,"counter", false,-1, 7,0);
    tracep->declBit(c+832,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+2184,"Tp", false,-1, 31,0);
    tracep->declBit(c+1817,"wb_clk_i", false,-1);
    tracep->declBit(c+1818,"wb_rst_i", false,-1);
    tracep->declBus(c+814,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+815,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+816,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+817,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+818,"wb_we_i", false,-1);
    tracep->declBit(c+819,"wb_stb_i", false,-1);
    tracep->declBit(c+820,"wb_cyc_i", false,-1);
    tracep->declBit(c+821,"wb_ack_o", false,-1);
    tracep->declBit(c+1902,"wb_err_o", false,-1);
    tracep->declBit(c+822,"wb_int_o", false,-1);
    tracep->declBus(c+1686,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+717,"sclk_pad_o", false,-1);
    tracep->declBit(c+1687,"mosi_pad_o", false,-1);
    tracep->declBit(c+1839,"miso_pad_i", false,-1);
    tracep->declBus(c+833,"divider", false,-1, 15,0);
    tracep->declBus(c+834,"ctrl", false,-1, 13,0);
    tracep->declBus(c+835,"ss", false,-1, 7,0);
    tracep->declBus(c+836,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+837,"rx", false,-1, 127,0);
    tracep->declBit(c+841,"rx_negedge", false,-1);
    tracep->declBit(c+842,"tx_negedge", false,-1);
    tracep->declBus(c+843,"char_len", false,-1, 6,0);
    tracep->declBit(c+844,"go", false,-1);
    tracep->declBit(c+845,"lsb", false,-1);
    tracep->declBit(c+846,"ie", false,-1);
    tracep->declBit(c+847,"ass", false,-1);
    tracep->declBit(c+848,"spi_divider_sel", false,-1);
    tracep->declBit(c+849,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+850,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+851,"spi_ss_sel", false,-1);
    tracep->declBit(c+852,"tip", false,-1);
    tracep->declBit(c+853,"pos_edge", false,-1);
    tracep->declBit(c+854,"neg_edge", false,-1);
    tracep->declBit(c+855,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+2184,"Tp", false,-1, 31,0);
    tracep->declBit(c+1817,"clk_in", false,-1);
    tracep->declBit(c+1818,"rst", false,-1);
    tracep->declBit(c+852,"enable", false,-1);
    tracep->declBit(c+844,"go", false,-1);
    tracep->declBit(c+855,"last_clk", false,-1);
    tracep->declBus(c+833,"divider", false,-1, 15,0);
    tracep->declBit(c+717,"clk_out", false,-1);
    tracep->declBit(c+853,"pos_edge", false,-1);
    tracep->declBit(c+854,"neg_edge", false,-1);
    tracep->declBus(c+856,"cnt", false,-1, 15,0);
    tracep->declBit(c+857,"cnt_zero", false,-1);
    tracep->declBit(c+858,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+2184,"Tp", false,-1, 31,0);
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1818,"rst", false,-1);
    tracep->declBus(c+859,"latch", false,-1, 3,0);
    tracep->declBus(c+817,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+843,"len", false,-1, 6,0);
    tracep->declBit(c+845,"lsb", false,-1);
    tracep->declBit(c+844,"go", false,-1);
    tracep->declBit(c+853,"pos_edge", false,-1);
    tracep->declBit(c+854,"neg_edge", false,-1);
    tracep->declBit(c+841,"rx_negedge", false,-1);
    tracep->declBit(c+842,"tx_negedge", false,-1);
    tracep->declBit(c+852,"tip", false,-1);
    tracep->declBit(c+855,"last", false,-1);
    tracep->declBus(c+815,"p_in", false,-1, 31,0);
    tracep->declArray(c+837,"p_out", false,-1, 127,0);
    tracep->declBit(c+717,"s_clk", false,-1);
    tracep->declBit(c+1839,"s_in", false,-1);
    tracep->declBit(c+1687,"s_out", false,-1);
    tracep->declBus(c+860,"cnt", false,-1, 7,0);
    tracep->declArray(c+837,"data", false,-1, 127,0);
    tracep->declBus(c+861,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+862,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+863,"rx_clk", false,-1);
    tracep->declBit(c+864,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1536,"auto_in_psel", false,-1);
    tracep->declBit(c+1537,"auto_in_penable", false,-1);
    tracep->declBit(c+1519,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1531,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1518,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_in_pready", false,-1);
    tracep->declBit(c+1902,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1849,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1837,"uart_rx", false,-1);
    tracep->declBit(c+1838,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1536,"in_psel", false,-1);
    tracep->declBit(c+1537,"in_penable", false,-1);
    tracep->declBus(c+1518,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1538,"in_pready", false,-1);
    tracep->declBit(c+1902,"in_pslverr", false,-1);
    tracep->declBus(c+1669,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1519,"in_pwrite", false,-1);
    tracep->declBus(c+1849,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1520,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1837,"uart_rx", false,-1);
    tracep->declBit(c+1838,"uart_tx", false,-1);
    tracep->declBit(c+865,"rtsn", false,-1);
    tracep->declBit(c+1902,"ctsn", false,-1);
    tracep->declBit(c+866,"dtr_pad_o", false,-1);
    tracep->declBit(c+1902,"dsr_pad_i", false,-1);
    tracep->declBit(c+1902,"ri_pad_i", false,-1);
    tracep->declBit(c+1902,"dcd_pad_i", false,-1);
    tracep->declBit(c+867,"interrupt", false,-1);
    tracep->declBit(c+1878,"reg_we", false,-1);
    tracep->declBit(c+1879,"reg_re", false,-1);
    tracep->declBus(c+1682,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1683,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+638,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1808,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+868,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1818,"wb_rst_i", false,-1);
    tracep->declBus(c+1682,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1684,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1808,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1878,"wb_we_i", false,-1);
    tracep->declBit(c+1879,"wb_re_i", false,-1);
    tracep->declBit(c+1838,"stx_pad_o", false,-1);
    tracep->declBit(c+1837,"srx_pad_i", false,-1);
    tracep->declBus(c+2171,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+868,"rts_pad_o", false,-1);
    tracep->declBit(c+866,"dtr_pad_o", false,-1);
    tracep->declBit(c+867,"int_o", false,-1);
    tracep->declBit(c+869,"enable", false,-1);
    tracep->declBit(c+870,"srx_pad", false,-1);
    tracep->declBus(c+871,"ier", false,-1, 3,0);
    tracep->declBus(c+872,"iir", false,-1, 3,0);
    tracep->declBus(c+873,"fcr", false,-1, 1,0);
    tracep->declBus(c+874,"mcr", false,-1, 4,0);
    tracep->declBus(c+875,"lcr", false,-1, 7,0);
    tracep->declBus(c+876,"msr", false,-1, 7,0);
    tracep->declBus(c+877,"dl", false,-1, 15,0);
    tracep->declBus(c+878,"scratch", false,-1, 7,0);
    tracep->declBit(c+879,"start_dlc", false,-1);
    tracep->declBit(c+880,"lsr_mask_d", false,-1);
    tracep->declBit(c+881,"msi_reset", false,-1);
    tracep->declBus(c+882,"dlc", false,-1, 15,0);
    tracep->declBus(c+883,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+884,"rx_reset", false,-1);
    tracep->declBit(c+885,"tx_reset", false,-1);
    tracep->declBit(c+886,"dlab", false,-1);
    tracep->declBit(c+1903,"cts_pad_i", false,-1);
    tracep->declBit(c+1902,"dsr_pad_i", false,-1);
    tracep->declBit(c+1902,"ri_pad_i", false,-1);
    tracep->declBit(c+1902,"dcd_pad_i", false,-1);
    tracep->declBit(c+887,"loopback", false,-1);
    tracep->declBit(c+1902,"cts", false,-1);
    tracep->declBit(c+1903,"dsr", false,-1);
    tracep->declBit(c+1903,"ri", false,-1);
    tracep->declBit(c+1903,"dcd", false,-1);
    tracep->declBit(c+888,"cts_c", false,-1);
    tracep->declBit(c+889,"dsr_c", false,-1);
    tracep->declBit(c+890,"ri_c", false,-1);
    tracep->declBit(c+891,"dcd_c", false,-1);
    tracep->declBus(c+892,"lsr", false,-1, 7,0);
    tracep->declBit(c+893,"lsr0", false,-1);
    tracep->declBit(c+894,"lsr1", false,-1);
    tracep->declBit(c+895,"lsr2", false,-1);
    tracep->declBit(c+896,"lsr3", false,-1);
    tracep->declBit(c+897,"lsr4", false,-1);
    tracep->declBit(c+898,"lsr5", false,-1);
    tracep->declBit(c+899,"lsr6", false,-1);
    tracep->declBit(c+900,"lsr7", false,-1);
    tracep->declBit(c+901,"lsr0r", false,-1);
    tracep->declBit(c+902,"lsr1r", false,-1);
    tracep->declBit(c+903,"lsr2r", false,-1);
    tracep->declBit(c+904,"lsr3r", false,-1);
    tracep->declBit(c+905,"lsr4r", false,-1);
    tracep->declBit(c+906,"lsr5r", false,-1);
    tracep->declBit(c+907,"lsr6r", false,-1);
    tracep->declBit(c+908,"lsr7r", false,-1);
    tracep->declBit(c+154,"lsr_mask", false,-1);
    tracep->declBit(c+909,"rls_int", false,-1);
    tracep->declBit(c+910,"rda_int", false,-1);
    tracep->declBit(c+911,"ti_int", false,-1);
    tracep->declBit(c+912,"thre_int", false,-1);
    tracep->declBit(c+913,"ms_int", false,-1);
    tracep->declBit(c+914,"tf_push", false,-1);
    tracep->declBit(c+915,"rf_pop", false,-1);
    tracep->declBus(c+1880,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+916,"rf_error_bit", false,-1);
    tracep->declBit(c+894,"rf_overrun", false,-1);
    tracep->declBit(c+917,"rf_push_pulse", false,-1);
    tracep->declBus(c+918,"rf_count", false,-1, 4,0);
    tracep->declBus(c+919,"tf_count", false,-1, 4,0);
    tracep->declBus(c+920,"tstate", false,-1, 2,0);
    tracep->declBus(c+921,"rstate", false,-1, 3,0);
    tracep->declBus(c+922,"counter_t", false,-1, 9,0);
    tracep->declBit(c+923,"thre_set_en", false,-1);
    tracep->declBus(c+924,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+925,"block_value", false,-1, 7,0);
    tracep->declBit(c+926,"serial_out", false,-1);
    tracep->declBit(c+927,"serial_in", false,-1);
    tracep->declBit(c+155,"lsr_mask_condition", false,-1);
    tracep->declBit(c+156,"iir_read", false,-1);
    tracep->declBit(c+157,"msr_read", false,-1);
    tracep->declBit(c+158,"fifo_read", false,-1);
    tracep->declBit(c+159,"fifo_write", false,-1);
    tracep->declBus(c+928,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+929,"lsr0_d", false,-1);
    tracep->declBit(c+930,"lsr1_d", false,-1);
    tracep->declBit(c+931,"lsr2_d", false,-1);
    tracep->declBit(c+932,"lsr3_d", false,-1);
    tracep->declBit(c+933,"lsr4_d", false,-1);
    tracep->declBit(c+934,"lsr5_d", false,-1);
    tracep->declBit(c+935,"lsr6_d", false,-1);
    tracep->declBit(c+936,"lsr7_d", false,-1);
    tracep->declBit(c+937,"rls_int_d", false,-1);
    tracep->declBit(c+938,"thre_int_d", false,-1);
    tracep->declBit(c+939,"ms_int_d", false,-1);
    tracep->declBit(c+940,"ti_int_d", false,-1);
    tracep->declBit(c+941,"rda_int_d", false,-1);
    tracep->declBit(c+942,"rls_int_rise", false,-1);
    tracep->declBit(c+943,"thre_int_rise", false,-1);
    tracep->declBit(c+944,"ms_int_rise", false,-1);
    tracep->declBit(c+945,"ti_int_rise", false,-1);
    tracep->declBit(c+946,"rda_int_rise", false,-1);
    tracep->declBit(c+947,"rls_int_pnd", false,-1);
    tracep->declBit(c+948,"rda_int_pnd", false,-1);
    tracep->declBit(c+949,"thre_int_pnd", false,-1);
    tracep->declBit(c+950,"ms_int_pnd", false,-1);
    tracep->declBit(c+951,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+2184,"Tp", false,-1, 31,0);
    tracep->declBus(c+2184,"width", false,-1, 31,0);
    tracep->declBus(c+2152,"init_value", false,-1, 0,0);
    tracep->declBit(c+1818,"rst_i", false,-1);
    tracep->declBit(c+1817,"clk_i", false,-1);
    tracep->declBit(c+1902,"stage1_rst_i", false,-1);
    tracep->declBit(c+1903,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1837,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+870,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+952,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1818,"wb_rst_i", false,-1);
    tracep->declBus(c+875,"lcr", false,-1, 7,0);
    tracep->declBit(c+915,"rf_pop", false,-1);
    tracep->declBit(c+927,"srx_pad_i", false,-1);
    tracep->declBit(c+869,"enable", false,-1);
    tracep->declBit(c+884,"rx_reset", false,-1);
    tracep->declBit(c+154,"lsr_mask", false,-1);
    tracep->declBus(c+922,"counter_t", false,-1, 9,0);
    tracep->declBus(c+918,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1880,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+894,"rf_overrun", false,-1);
    tracep->declBit(c+916,"rf_error_bit", false,-1);
    tracep->declBus(c+921,"rstate", false,-1, 3,0);
    tracep->declBit(c+917,"rf_push_pulse", false,-1);
    tracep->declBus(c+953,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+954,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+955,"rshift", false,-1, 7,0);
    tracep->declBit(c+956,"rparity", false,-1);
    tracep->declBit(c+957,"rparity_error", false,-1);
    tracep->declBit(c+958,"rframing_error", false,-1);
    tracep->declBit(c+959,"rbit_in", false,-1);
    tracep->declBit(c+960,"rparity_xor", false,-1);
    tracep->declBus(c+961,"counter_b", false,-1, 7,0);
    tracep->declBit(c+962,"rf_push_q", false,-1);
    tracep->declBus(c+963,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+964,"rf_push", false,-1);
    tracep->declBit(c+965,"break_error", false,-1);
    tracep->declBit(c+966,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+967,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+968,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+969,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1905,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+2169,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+2168,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+2164,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+2166,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+2165,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+2167,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+2163,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+2171,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2172,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2185,"sr_push", false,-1, 3,0);
    tracep->declBus(c+970,"toc_value", false,-1, 9,0);
    tracep->declBus(c+971,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+2186,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1962,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1963,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2150,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1818,"wb_rst_i", false,-1);
    tracep->declBit(c+917,"push", false,-1);
    tracep->declBit(c+915,"pop", false,-1);
    tracep->declBus(c+963,"data_in", false,-1, 10,0);
    tracep->declBit(c+884,"fifo_reset", false,-1);
    tracep->declBit(c+154,"reset_status", false,-1);
    tracep->declBus(c+1880,"data_out", false,-1, 10,0);
    tracep->declBit(c+894,"overrun", false,-1);
    tracep->declBus(c+918,"count", false,-1, 4,0);
    tracep->declBit(c+916,"error_bit", false,-1);
    tracep->declBus(c+1881,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+972+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+988,"top", false,-1, 3,0);
    tracep->declBus(c+989,"bottom", false,-1, 3,0);
    tracep->declBus(c+990,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+991,"word0", false,-1, 2,0);
    tracep->declBus(c+992,"word1", false,-1, 2,0);
    tracep->declBus(c+993,"word2", false,-1, 2,0);
    tracep->declBus(c+994,"word3", false,-1, 2,0);
    tracep->declBus(c+995,"word4", false,-1, 2,0);
    tracep->declBus(c+996,"word5", false,-1, 2,0);
    tracep->declBus(c+997,"word6", false,-1, 2,0);
    tracep->declBus(c+998,"word7", false,-1, 2,0);
    tracep->declBus(c+999,"word8", false,-1, 2,0);
    tracep->declBus(c+1000,"word9", false,-1, 2,0);
    tracep->declBus(c+1001,"word10", false,-1, 2,0);
    tracep->declBus(c+1002,"word11", false,-1, 2,0);
    tracep->declBus(c+1003,"word12", false,-1, 2,0);
    tracep->declBus(c+1004,"word13", false,-1, 2,0);
    tracep->declBus(c+1005,"word14", false,-1, 2,0);
    tracep->declBus(c+1006,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1963,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2177,"data_width", false,-1, 31,0);
    tracep->declBus(c+1962,"depth", false,-1, 31,0);
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+917,"we", false,-1);
    tracep->declBus(c+988,"a", false,-1, 3,0);
    tracep->declBus(c+989,"dpra", false,-1, 3,0);
    tracep->declBus(c+1007,"di", false,-1, 7,0);
    tracep->declBus(c+1881,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+639+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1818,"wb_rst_i", false,-1);
    tracep->declBus(c+875,"lcr", false,-1, 7,0);
    tracep->declBit(c+914,"tf_push", false,-1);
    tracep->declBus(c+1684,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+869,"enable", false,-1);
    tracep->declBit(c+885,"tx_reset", false,-1);
    tracep->declBit(c+154,"lsr_mask", false,-1);
    tracep->declBit(c+926,"stx_pad_o", false,-1);
    tracep->declBus(c+920,"tstate", false,-1, 2,0);
    tracep->declBus(c+919,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1008,"counter", false,-1, 4,0);
    tracep->declBus(c+1009,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1010,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1011,"stx_o_tmp", false,-1);
    tracep->declBit(c+1012,"parity_xor", false,-1);
    tracep->declBit(c+1013,"tf_pop", false,-1);
    tracep->declBit(c+1014,"bit_out", false,-1);
    tracep->declBus(c+1684,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1504,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1015,"tf_overrun", false,-1);
    tracep->declBus(c+1896,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1893,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1897,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1898,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+2005,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+2187,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+2177,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1962,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1963,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2150,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+1818,"wb_rst_i", false,-1);
    tracep->declBit(c+914,"push", false,-1);
    tracep->declBit(c+1013,"pop", false,-1);
    tracep->declBus(c+1684,"data_in", false,-1, 7,0);
    tracep->declBit(c+885,"fifo_reset", false,-1);
    tracep->declBit(c+154,"reset_status", false,-1);
    tracep->declBus(c+1504,"data_out", false,-1, 7,0);
    tracep->declBit(c+1015,"overrun", false,-1);
    tracep->declBus(c+919,"count", false,-1, 4,0);
    tracep->declBus(c+1016,"top", false,-1, 3,0);
    tracep->declBus(c+1017,"bottom", false,-1, 3,0);
    tracep->declBus(c+1018,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1963,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2177,"data_width", false,-1, 31,0);
    tracep->declBus(c+1962,"depth", false,-1, 31,0);
    tracep->declBit(c+1817,"clk", false,-1);
    tracep->declBit(c+914,"we", false,-1);
    tracep->declBus(c+1016,"a", false,-1, 3,0);
    tracep->declBus(c+1017,"dpra", false,-1, 3,0);
    tracep->declBus(c+1684,"di", false,-1, 7,0);
    tracep->declBus(c+1504,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+655+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBit(c+1526,"auto_in_psel", false,-1);
    tracep->declBit(c+1527,"auto_in_penable", false,-1);
    tracep->declBit(c+1519,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1528,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1518,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"auto_in_pready", false,-1);
    tracep->declBit(c+1900,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1901,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1831,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1832,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1833,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1834,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1835,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1836,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1817,"clock", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1681,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1526,"in_psel", false,-1);
    tracep->declBit(c+1527,"in_penable", false,-1);
    tracep->declBus(c+1518,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1519,"in_pwrite", false,-1);
    tracep->declBus(c+1520,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1521,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+722,"in_pready", false,-1);
    tracep->declBus(c+1901,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1900,"in_pslverr", false,-1);
    tracep->declBus(c+1831,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1832,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1833,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1834,"vga_hsync", false,-1);
    tracep->declBit(c+1835,"vga_vsync", false,-1);
    tracep->declBit(c+1836,"vga_valid", false,-1);
    tracep->declBus(c+1019,"h_addr", false,-1, 9,0);
    tracep->declBus(c+671,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1505,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1685,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+722,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1817,"pclk", false,-1);
    tracep->declBit(c+1818,"reset", false,-1);
    tracep->declBus(c+1505,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1019,"h_addr", false,-1, 9,0);
    tracep->declBus(c+671,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1834,"hsync", false,-1);
    tracep->declBit(c+1835,"vsync", false,-1);
    tracep->declBit(c+1836,"valid", false,-1);
    tracep->declBus(c+1831,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1832,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1833,"vga_b", false,-1, 7,0);
    tracep->declBus(c+2188,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+2189,"h_active", false,-1, 31,0);
    tracep->declBus(c+2190,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+2191,"h_total", false,-1, 31,0);
    tracep->declBus(c+2156,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+2192,"v_active", false,-1, 31,0);
    tracep->declBus(c+2193,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+2194,"v_total", false,-1, 31,0);
    tracep->declBus(c+1020,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+672,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1021,"h_valid", false,-1);
    tracep->declBit(c+673,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+717,"sck", false,-1);
    tracep->declBit(c+1699,"ss", false,-1);
    tracep->declBit(c+1687,"mosi", false,-1);
    tracep->declBit(c+1476,"miso", false,-1);
    tracep->declBus(c+1477,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1478,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1882,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+717,"sck", false,-1);
    tracep->declBit(c+1700,"ss", false,-1);
    tracep->declBit(c+1687,"mosi", false,-1);
    tracep->declBit(c+1883,"miso", false,-1);
    tracep->declBit(c+1700,"reset", false,-1);
    tracep->declBus(c+1470,"state", false,-1, 2,0);
    tracep->declBus(c+1471,"counter", false,-1, 7,0);
    tracep->declBus(c+1472,"cmd", false,-1, 7,0);
    tracep->declBus(c+1473,"addr", false,-1, 23,0);
    tracep->declBus(c+1474,"data", false,-1, 31,0);
    tracep->declBit(c+1475,"ren", false,-1);
    tracep->declBus(c+1884,"rdata", false,-1, 31,0);
    tracep->declBus(c+1885,"raddr", false,-1, 31,0);
    tracep->declBus(c+1479,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+717,"clock", false,-1);
    tracep->declBit(c+1475,"valid", false,-1);
    tracep->declBus(c+1472,"cmd", false,-1, 7,0);
    tracep->declBus(c+1885,"addr", false,-1, 31,0);
    tracep->declBus(c+1884,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1840,"sck", false,-1);
    tracep->declBit(c+1798,"ce_n", false,-1);
    tracep->declBus(c+1841,"dio", false,-1, 3,0);
    tracep->declBus(c+707,"dio_out", false,-1, 3,0);
    tracep->declBus(c+708,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1841,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1954,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+2184,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+2156,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+2158,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1963,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+2150,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+709,"state", false,-1, 2,0);
    tracep->declBus(c+1886,"next_state", false,-1, 2,0);
    tracep->declBus(c+710,"counter", false,-1, 7,0);
    tracep->declBus(c+711,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+712,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+713,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+714,"is_read_op", false,-1);
    tracep->declBit(c+715,"is_write_op", false,-1);
    tracep->declBus(c+716,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1887,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1842,"clk", false,-1);
    tracep->declBit(c+1688,"cke", false,-1);
    tracep->declBit(c+718,"cs", false,-1);
    tracep->declBit(c+719,"ras", false,-1);
    tracep->declBit(c+720,"cas", false,-1);
    tracep->declBit(c+721,"we", false,-1);
    tracep->declBus(c+1843,"a", false,-1, 13,0);
    tracep->declBus(c+1689,"ba", false,-1, 1,0);
    tracep->declBus(c+1690,"dqm", false,-1, 3,0);
    tracep->declBus(c+1844,"dq", false,-1, 31,0);
    tracep->declBit(c+22,"cs_0", false,-1);
    tracep->declBit(c+23,"ras_0", false,-1);
    tracep->declBit(c+24,"cas_0", false,-1);
    tracep->declBit(c+25,"we_0", false,-1);
    tracep->declBit(c+26,"cs_1", false,-1);
    tracep->declBit(c+27,"ras_1", false,-1);
    tracep->declBit(c+28,"cas_1", false,-1);
    tracep->declBit(c+29,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1842,"clk", false,-1);
    tracep->declBit(c+1688,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1693,"a", false,-1, 12,0);
    tracep->declBus(c+1689,"ba", false,-1, 1,0);
    tracep->declBus(c+1690,"dqm", false,-1, 3,0);
    tracep->declBus(c+1844,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1842,"clk", false,-1);
    tracep->declBit(c+1688,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1693,"a", false,-1, 12,0);
    tracep->declBus(c+1689,"ba", false,-1, 1,0);
    tracep->declBus(c+1701,"dqm", false,-1, 1,0);
    tracep->declBus(c+1888,"dq", false,-1, 15,0);
    tracep->declBus(c+2195,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2164,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2165,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2166,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1905,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1294,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1295,"bl", false,-1, 2,0);
    tracep->declBus(c+150,"command", false,-1, 3,0);
    tracep->declBus(c+1296,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1297,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1702,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1702,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1809,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1810,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1298+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1302,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1303,"bl_cnt", false,-1, 2,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1304+i*1,"banktmp", true,(i+0), 15,0);
    }
    tracep->declBus(c+2196,"state", false,-1, 2,0);
    tracep->declBit(c+1336,"write_brust", false,-1);
    tracep->declBit(c+151,"read_burst", false,-1);
    tracep->declBus(c+1337,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1842,"clk", false,-1);
    tracep->declBit(c+1688,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1693,"a", false,-1, 12,0);
    tracep->declBus(c+1689,"ba", false,-1, 1,0);
    tracep->declBus(c+1703,"dqm", false,-1, 1,0);
    tracep->declBus(c+1889,"dq", false,-1, 15,0);
    tracep->declBus(c+2195,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2164,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2165,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2166,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1905,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1338,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1339,"bl", false,-1, 2,0);
    tracep->declBus(c+150,"command", false,-1, 3,0);
    tracep->declBus(c+1340,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1341,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1702,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1702,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1811,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1812,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1342+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1346,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1347,"bl_cnt", false,-1, 2,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1348+i*1,"banktmp", true,(i+0), 15,0);
    }
    tracep->declBus(c+2197,"state", false,-1, 2,0);
    tracep->declBit(c+1380,"write_brust", false,-1);
    tracep->declBit(c+151,"read_burst", false,-1);
    tracep->declBus(c+1381,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1842,"clk", false,-1);
    tracep->declBit(c+1688,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1693,"a", false,-1, 12,0);
    tracep->declBus(c+1689,"ba", false,-1, 1,0);
    tracep->declBus(c+1690,"dqm", false,-1, 3,0);
    tracep->declBus(c+1844,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1842,"clk", false,-1);
    tracep->declBit(c+1688,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1693,"a", false,-1, 12,0);
    tracep->declBus(c+1689,"ba", false,-1, 1,0);
    tracep->declBus(c+1701,"dqm", false,-1, 1,0);
    tracep->declBus(c+1888,"dq", false,-1, 15,0);
    tracep->declBus(c+2195,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2164,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2165,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2166,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1905,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1382,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1383,"bl", false,-1, 2,0);
    tracep->declBus(c+152,"command", false,-1, 3,0);
    tracep->declBus(c+1384,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1385,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1702,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1702,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1813,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1814,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1386+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1390,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1391,"bl_cnt", false,-1, 2,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1392+i*1,"banktmp", true,(i+0), 15,0);
    }
    tracep->declBus(c+2198,"state", false,-1, 2,0);
    tracep->declBit(c+1424,"write_brust", false,-1);
    tracep->declBit(c+153,"read_burst", false,-1);
    tracep->declBus(c+1425,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1842,"clk", false,-1);
    tracep->declBit(c+1688,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1693,"a", false,-1, 12,0);
    tracep->declBus(c+1689,"ba", false,-1, 1,0);
    tracep->declBus(c+1703,"dqm", false,-1, 1,0);
    tracep->declBus(c+1889,"dq", false,-1, 15,0);
    tracep->declBus(c+2195,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2164,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2165,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2166,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1905,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1426,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1427,"bl", false,-1, 2,0);
    tracep->declBus(c+152,"command", false,-1, 3,0);
    tracep->declBus(c+1428,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1429,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1702,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1702,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1815,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1816,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1430+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1434,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1435,"bl_cnt", false,-1, 2,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1436+i*1,"banktmp", true,(i+0), 15,0);
    }
    tracep->declBus(c+2199,"state", false,-1, 2,0);
    tracep->declBit(c+1468,"write_brust", false,-1);
    tracep->declBit(c+153,"read_burst", false,-1);
    tracep->declBus(c+1469,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullIData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+146,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 2U))),13);
    bufp->fullSData(oldp+147,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+148,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+162,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+164,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+165,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+166,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+167,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+169,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+170,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+173,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+174,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+175,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+176,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+177,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+192,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+193,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+196,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+197,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+198,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+199,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+262,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+266,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+270,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+271,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+272,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+273,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+277,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+279,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+317,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+320,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+321,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+402,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+403,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+404,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+465,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+479,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+483,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+487,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+491,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+495,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+499,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+503,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+507,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+511,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+515,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+519,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+523,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+527,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+535,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+539,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+543,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+547,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+555,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+559,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+563,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+567,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+579,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+583,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+587,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+591,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+595,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+599,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+633,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+671,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+674,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+675,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+676,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+677,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+678,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+679,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+680,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+681,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+682,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+683,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+684,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+685,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+686,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+687,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+688,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+689,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+690,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+691,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+692,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+693,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+694,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+695,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+696,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+697,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+698,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+699,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+700,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+701,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+702,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+703,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+704,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+718,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+719,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+720,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+721,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+729,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+731,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+735,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+736,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+737,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+738,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+739,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+740,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+741,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+742,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+745,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+746,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+749,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+750,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+754,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+758,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+773,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+774,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+776,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+777,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+778,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+779,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+780,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+788,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+828,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+829,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+841,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+842,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+843,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+844,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+845,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+846,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+847,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+848,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+849,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+851,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+855,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+857,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+858,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+861,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+865,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+866,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+868,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+886,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+887,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+888,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+889,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+890,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+891,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+892,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+895,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+896,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+897,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+916,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+923,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+942,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+943,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+944,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+945,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+946,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+965,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+966,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+967,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+968,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+969,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+971,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+990,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1007,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1018,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1019,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullIData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_araddr),32);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arlen),8);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arsize),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arburst),2);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arvalid));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rready));
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1057,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                 ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1060,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arid),4);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1082,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1088,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+1089,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1136,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1152,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1154,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1157,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr),32);
    bufp->fullWData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[0]),128);
    bufp->fullWData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[1]),128);
    bufp->fullWData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[2]),128);
    bufp->fullWData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[3]),128);
    bufp->fullWData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[4]),128);
    bufp->fullWData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[5]),128);
    bufp->fullWData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[6]),128);
    bufp->fullWData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[7]),128);
    bufp->fullWData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[8]),128);
    bufp->fullWData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[9]),128);
    bufp->fullWData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[10]),128);
    bufp->fullWData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[11]),128);
    bufp->fullWData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[12]),128);
    bufp->fullWData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[13]),128);
    bufp->fullWData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[14]),128);
    bufp->fullWData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[15]),128);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[0]),24);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[1]),24);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[2]),24);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[3]),24);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[4]),24);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[5]),24);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[6]),24);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[7]),24);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[8]),24);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[9]),24);
    bufp->fullIData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[10]),24);
    bufp->fullIData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[11]),24);
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[12]),24);
    bufp->fullIData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[13]),24);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[14]),24);
    bufp->fullIData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[15]),24);
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[0]));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[1]));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[2]));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[3]));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[4]));
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[5]));
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[6]));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[7]));
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[8]));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[9]));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[10]));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[11]));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[12]));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[13]));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[14]));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[15]));
    bufp->fullIData(oldp+1255,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                >> 8U)),24);
    bufp->fullCData(oldp+1256,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1257,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr)),4);
    bufp->fullIData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__counter),32);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state),3);
    bufp->fullIData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),3);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1285,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1286,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1287,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1288,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1289,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1290,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1291,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1292,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1293,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1294,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1295,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullSData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[0]),16);
    bufp->fullSData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[1]),16);
    bufp->fullSData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[2]),16);
    bufp->fullSData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[3]),16);
    bufp->fullSData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[4]),16);
    bufp->fullSData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[5]),16);
    bufp->fullSData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[6]),16);
    bufp->fullSData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[7]),16);
    bufp->fullSData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[8]),16);
    bufp->fullSData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[9]),16);
    bufp->fullSData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[10]),16);
    bufp->fullSData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[11]),16);
    bufp->fullSData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[12]),16);
    bufp->fullSData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[13]),16);
    bufp->fullSData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[14]),16);
    bufp->fullSData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[15]),16);
    bufp->fullSData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[16]),16);
    bufp->fullSData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[17]),16);
    bufp->fullSData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[18]),16);
    bufp->fullSData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[19]),16);
    bufp->fullSData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[20]),16);
    bufp->fullSData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[21]),16);
    bufp->fullSData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[22]),16);
    bufp->fullSData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[23]),16);
    bufp->fullSData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[24]),16);
    bufp->fullSData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[25]),16);
    bufp->fullSData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[26]),16);
    bufp->fullSData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[27]),16);
    bufp->fullSData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[28]),16);
    bufp->fullSData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[29]),16);
    bufp->fullSData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[30]),16);
    bufp->fullSData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__banktmp[31]),16);
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullSData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1338,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1339,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullSData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[0]),16);
    bufp->fullSData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[1]),16);
    bufp->fullSData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[2]),16);
    bufp->fullSData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[3]),16);
    bufp->fullSData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[4]),16);
    bufp->fullSData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[5]),16);
    bufp->fullSData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[6]),16);
    bufp->fullSData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[7]),16);
    bufp->fullSData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[8]),16);
    bufp->fullSData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[9]),16);
    bufp->fullSData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[10]),16);
    bufp->fullSData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[11]),16);
    bufp->fullSData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[12]),16);
    bufp->fullSData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[13]),16);
    bufp->fullSData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[14]),16);
    bufp->fullSData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[15]),16);
    bufp->fullSData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[16]),16);
    bufp->fullSData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[17]),16);
    bufp->fullSData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[18]),16);
    bufp->fullSData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[19]),16);
    bufp->fullSData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[20]),16);
    bufp->fullSData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[21]),16);
    bufp->fullSData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[22]),16);
    bufp->fullSData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[23]),16);
    bufp->fullSData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[24]),16);
    bufp->fullSData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[25]),16);
    bufp->fullSData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[26]),16);
    bufp->fullSData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[27]),16);
    bufp->fullSData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[28]),16);
    bufp->fullSData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[29]),16);
    bufp->fullSData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[30]),16);
    bufp->fullSData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__banktmp[31]),16);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullSData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1382,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1383,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullSData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[0]),16);
    bufp->fullSData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[1]),16);
    bufp->fullSData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[2]),16);
    bufp->fullSData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[3]),16);
    bufp->fullSData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[4]),16);
    bufp->fullSData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[5]),16);
    bufp->fullSData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[6]),16);
    bufp->fullSData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[7]),16);
    bufp->fullSData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[8]),16);
    bufp->fullSData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[9]),16);
    bufp->fullSData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[10]),16);
    bufp->fullSData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[11]),16);
    bufp->fullSData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[12]),16);
    bufp->fullSData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[13]),16);
    bufp->fullSData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[14]),16);
    bufp->fullSData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[15]),16);
    bufp->fullSData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[16]),16);
    bufp->fullSData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[17]),16);
    bufp->fullSData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[18]),16);
    bufp->fullSData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[19]),16);
    bufp->fullSData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[20]),16);
    bufp->fullSData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[21]),16);
    bufp->fullSData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[22]),16);
    bufp->fullSData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[23]),16);
    bufp->fullSData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[24]),16);
    bufp->fullSData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[25]),16);
    bufp->fullSData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[26]),16);
    bufp->fullSData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[27]),16);
    bufp->fullSData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[28]),16);
    bufp->fullSData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[29]),16);
    bufp->fullSData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[30]),16);
    bufp->fullSData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__banktmp[31]),16);
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullSData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1426,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1427,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullSData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[0]),16);
    bufp->fullSData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[1]),16);
    bufp->fullSData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[2]),16);
    bufp->fullSData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[3]),16);
    bufp->fullSData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[4]),16);
    bufp->fullSData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[5]),16);
    bufp->fullSData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[6]),16);
    bufp->fullSData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[7]),16);
    bufp->fullSData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[8]),16);
    bufp->fullSData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[9]),16);
    bufp->fullSData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[10]),16);
    bufp->fullSData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[11]),16);
    bufp->fullSData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[12]),16);
    bufp->fullSData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[13]),16);
    bufp->fullSData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[14]),16);
    bufp->fullSData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[15]),16);
    bufp->fullSData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[16]),16);
    bufp->fullSData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[17]),16);
    bufp->fullSData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[18]),16);
    bufp->fullSData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[19]),16);
    bufp->fullSData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[20]),16);
    bufp->fullSData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[21]),16);
    bufp->fullSData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[22]),16);
    bufp->fullSData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[23]),16);
    bufp->fullSData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[24]),16);
    bufp->fullSData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[25]),16);
    bufp->fullSData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[26]),16);
    bufp->fullSData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[27]),16);
    bufp->fullSData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[28]),16);
    bufp->fullSData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[29]),16);
    bufp->fullSData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[30]),16);
    bufp->fullSData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__banktmp[31]),16);
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullSData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1475,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1486,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1487,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1508,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1528,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1531,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1535,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1538,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1543,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1546,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1553,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1669,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1675,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1676,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1677,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1678,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullIData(oldp+1679,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1680,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1681,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1682,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1685,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullSData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1699,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1701,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1702,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),10);
    bufp->fullCData(oldp+1703,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1710,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1713,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullIData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1728,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1730,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1731,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1741,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullCData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1772,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1773,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1784,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1790,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1795,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1796,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1797,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullIData(oldp+1809,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1810,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullIData(oldp+1811,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1812,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullIData(oldp+1813,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1814,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullIData(oldp+1815,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1816,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullBit(oldp+1817,(vlSelf->clock));
    bufp->fullBit(oldp+1818,(vlSelf->reset));
    bufp->fullSData(oldp+1819,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1820,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1821,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1822,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1823,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1824,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1825,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1826,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1827,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1828,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1829,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1830,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1831,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1832,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1833,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1834,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1835,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1836,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1837,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1838,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1839,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1840,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1842,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1843,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullIData(oldp+1845,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1846,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | (IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+1847,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
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
    bufp->fullBit(oldp+1848,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1849,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1850,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1851,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1852,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+1854,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1856,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1857,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1858,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1859,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1860,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullIData(oldp+1861,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1862,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1863,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1864,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1866,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullIData(oldp+1867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1869,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1870,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
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
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rlast)
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arvalid) 
                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready)))
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
    bufp->fullBit(oldp+1871,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1872,((0xfU & vlSelf->__VdfgTmp_h81912a5e__0)),4);
    bufp->fullBit(oldp+1873,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1874,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1877,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1880,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1882,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1883,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1884,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1885,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1886,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1887,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullSData(oldp+1888,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1889,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1890,(0x226U),32);
    bufp->fullIData(oldp+1891,(0x64U),32);
    bufp->fullIData(oldp+1892,(0x200U),32);
    bufp->fullCData(oldp+1893,(1U),3);
    bufp->fullIData(oldp+1894,(0xb00U),32);
    bufp->fullIData(oldp+1895,(9U),32);
    bufp->fullCData(oldp+1896,(0U),3);
    bufp->fullCData(oldp+1897,(2U),3);
    bufp->fullCData(oldp+1898,(3U),3);
    bufp->fullBit(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1900,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1901,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1902,(0U));
    bufp->fullBit(oldp+1903,(1U));
    bufp->fullCData(oldp+1904,(0U),2);
    bufp->fullCData(oldp+1905,(0U),4);
    bufp->fullCData(oldp+1906,(0U),8);
    bufp->fullSData(oldp+1907,(1U),16);
    bufp->fullBit(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1924,(0U),32);
    bufp->fullBit(oldp+1925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullCData(oldp+1942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arid),4);
    bufp->fullIData(oldp+1943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1954,(0U),32);
    bufp->fullBit(oldp+1955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1958,(1U),2);
    bufp->fullCData(oldp+1959,(2U),2);
    bufp->fullIData(oldp+1960,(0x20U),32);
    bufp->fullIData(oldp+1961,(4U),32);
    bufp->fullIData(oldp+1962,(0x10U),32);
    bufp->fullIData(oldp+1963,(4U),32);
    bufp->fullIData(oldp+1964,(0x18U),32);
    bufp->fullIData(oldp+1965,(0x79737978U),32);
    bufp->fullIData(oldp+1966,(0x17e3c19U),32);
    bufp->fullCData(oldp+1967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+2000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+2001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+2002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+2003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+2004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+2005,(4U),3);
    bufp->fullIData(oldp+2006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+2007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+2008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+2009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+2010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+2011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+2012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+2013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+2014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+2015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+2016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+2017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+2018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+2019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+2020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+2021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+2022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+2023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+2024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+2025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+2026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+2027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+2028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+2029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+2030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+2031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+2032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+2033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+2034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+2035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+2036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+2037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+2038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+2039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+2040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+2041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+2042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+2043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+2044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+2045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+2046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+2047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+2048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+2049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+2050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+2051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+2052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+2053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+2054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+2055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+2056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+2057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+2058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+2059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+2060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+2061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+2062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+2063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+2064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+2065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+2066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+2067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+2068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+2069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+2070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+2071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+2072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+2073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+2074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+2075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+2076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+2077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+2078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+2079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+2080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+2081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+2082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+2083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+2084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+2085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+2086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+2087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+2088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+2089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+2090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+2091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+2092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+2093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+2094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+2095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+2096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+2097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+2098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+2099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+2100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+2101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+2102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+2103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+2104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+2105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+2106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+2107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+2108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+2109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+2110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+2111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+2112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+2113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+2114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+2115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+2116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+2117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+2118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+2119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+2120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+2121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+2122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+2123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+2124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+2125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+2126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+2127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+2128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+2129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+2130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+2131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+2132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+2133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+2134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+2135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+2136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+2137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+2138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+2139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+2140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+2141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+2142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+2143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+2144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+2145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+2146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+2147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+2148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+2149,(3U),2);
    bufp->fullIData(oldp+2150,(5U),32);
    bufp->fullBit(oldp+2151,(0U));
    bufp->fullBit(oldp+2152,(1U));
    bufp->fullCData(oldp+2153,(0x1bU),8);
    bufp->fullCData(oldp+2154,(0xebU),8);
    bufp->fullCData(oldp+2155,(0x38U),8);
    bufp->fullIData(oldp+2156,(2U),32);
    bufp->fullIData(oldp+2157,(6U),32);
    bufp->fullIData(oldp+2158,(3U),32);
    bufp->fullIData(oldp+2159,(0xdU),32);
    bufp->fullIData(oldp+2160,(0x2000U),32);
    bufp->fullIData(oldp+2161,(0x2710U),32);
    bufp->fullIData(oldp+2162,(0x30cU),32);
    bufp->fullCData(oldp+2163,(7U),4);
    bufp->fullCData(oldp+2164,(3U),4);
    bufp->fullCData(oldp+2165,(5U),4);
    bufp->fullCData(oldp+2166,(4U),4);
    bufp->fullCData(oldp+2167,(6U),4);
    bufp->fullCData(oldp+2168,(2U),4);
    bufp->fullCData(oldp+2169,(1U),4);
    bufp->fullSData(oldp+2170,(0x20U),13);
    bufp->fullCData(oldp+2171,(8U),4);
    bufp->fullCData(oldp+2172,(9U),4);
    bufp->fullIData(oldp+2173,(0xaU),32);
    bufp->fullIData(oldp+2174,(0x11U),32);
    bufp->fullIData(oldp+2175,(0x30000000U),32);
    bufp->fullIData(oldp+2176,(0x3fffffffU),32);
    bufp->fullIData(oldp+2177,(8U),32);
    bufp->fullCData(oldp+2178,(4U),5);
    bufp->fullCData(oldp+2179,(0U),5);
    bufp->fullCData(oldp+2180,(0x10U),5);
    bufp->fullCData(oldp+2181,(0x14U),5);
    bufp->fullCData(oldp+2182,(0x18U),5);
    bufp->fullIData(oldp+2183,(0x3000000U),32);
    bufp->fullIData(oldp+2184,(1U),32);
    bufp->fullCData(oldp+2185,(0xaU),4);
    bufp->fullIData(oldp+2186,(0xbU),32);
    bufp->fullCData(oldp+2187,(5U),3);
    bufp->fullIData(oldp+2188,(0x60U),32);
    bufp->fullIData(oldp+2189,(0x90U),32);
    bufp->fullIData(oldp+2190,(0x310U),32);
    bufp->fullIData(oldp+2191,(0x320U),32);
    bufp->fullIData(oldp+2192,(0x23U),32);
    bufp->fullIData(oldp+2193,(0x203U),32);
    bufp->fullIData(oldp+2194,(0x20dU),32);
    bufp->fullIData(oldp+2195,(0x400000U),32);
    bufp->fullCData(oldp+2196,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+2197,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullCData(oldp+2198,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+2199,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
}
