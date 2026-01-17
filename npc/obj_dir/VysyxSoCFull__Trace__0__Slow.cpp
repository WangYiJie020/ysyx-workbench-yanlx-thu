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
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1721,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1722,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1723,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1724,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1725,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1726,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1727,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1728,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1729,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1730,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1731,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1732,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1733,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1734,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1735,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1736,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1737,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1738,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1739,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1740,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1721,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1722,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1723,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1724,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1725,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1726,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1727,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1728,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1729,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1730,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1731,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1732,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1733,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1734,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1735,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1736,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1737,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1738,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1739,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1740,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+704,"spi_sck", false,-1);
    tracep->declBus(c+1557,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1558,"spi_mosi", false,-1);
    tracep->declBit(c+1741,"spi_miso", false,-1);
    tracep->declBit(c+1739,"uart_rx", false,-1);
    tracep->declBit(c+1740,"uart_tx", false,-1);
    tracep->declBit(c+1742,"psram_sck", false,-1);
    tracep->declBit(c+1633,"psram_ce_n", false,-1);
    tracep->declBus(c+1743,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1744,"sdram_clk", false,-1);
    tracep->declBit(c+1559,"sdram_cke", false,-1);
    tracep->declBit(c+705,"sdram_cs", false,-1);
    tracep->declBit(c+706,"sdram_ras", false,-1);
    tracep->declBit(c+707,"sdram_cas", false,-1);
    tracep->declBit(c+708,"sdram_we", false,-1);
    tracep->declBus(c+1745,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1560,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1561,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1592,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1721,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1722,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1723,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1724,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1725,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1726,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1727,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1728,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1729,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1730,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1731,"ps2_clk", false,-1);
    tracep->declBit(c+1732,"ps2_data", false,-1);
    tracep->declBus(c+1733,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1734,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1735,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1736,"vga_hsync", false,-1);
    tracep->declBit(c+1737,"vga_vsync", false,-1);
    tracep->declBit(c+1738,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1791,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1792,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1793,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1336,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1337,"in_psel", false,-1);
    tracep->declBit(c+1338,"in_penable", false,-1);
    tracep->declBus(c+1794,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1339,"in_pwrite", false,-1);
    tracep->declBus(c+1340,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1341,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1342,"in_pready", false,-1);
    tracep->declBus(c+1343,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1344,"in_pslverr", false,-1);
    tracep->declBus(c+1345,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1346,"out_psel", false,-1);
    tracep->declBit(c+1347,"out_penable", false,-1);
    tracep->declBus(c+1348,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1349,"out_pwrite", false,-1);
    tracep->declBus(c+1350,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1550,"out_pready", false,-1);
    tracep->declBus(c+1746,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1747,"out_pslverr", false,-1);
    tracep->declBus(c+1795,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1796,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1797,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1794,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1798,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1799,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1352,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1353,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1354,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1355,"state", false,-1, 2,0);
    tracep->declBus(c+1748,"next_state", false,-1, 2,0);
    tracep->declBit(c+1800,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1346,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1347,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1349,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1550,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1747,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1746,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1356,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1357,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1358,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1348,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+709,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1801,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1802,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1359,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1360,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1361,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1348,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+145,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1803,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+146,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1362,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1363,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1361,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1348,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+710,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1803,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+711,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1364,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1365,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1749,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1803,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+147,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1366,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1367,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1361,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1348,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1368,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1803,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1750,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1369,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1370,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1358,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1348,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+712,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+713,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+714,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1371,"sel_0", false,-1);
    tracep->declBit(c+1372,"sel_1", false,-1);
    tracep->declBit(c+1373,"sel_2", false,-1);
    tracep->declBit(c+1374,"sel_3", false,-1);
    tracep->declBit(c+1375,"sel_4", false,-1);
    tracep->declBit(c+1376,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1377,"auto_in_awready", false,-1);
    tracep->declBit(c+148,"auto_in_awvalid", false,-1);
    tracep->declBus(c+149,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+150,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+151,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+152,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1377,"auto_in_wready", false,-1);
    tracep->declBit(c+153,"auto_in_wvalid", false,-1);
    tracep->declBus(c+154,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+155,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+156,"auto_in_bready", false,-1);
    tracep->declBit(c+1378,"auto_in_bvalid", false,-1);
    tracep->declBus(c+157,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1379,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1380,"auto_in_arready", false,-1);
    tracep->declBit(c+158,"auto_in_arvalid", false,-1);
    tracep->declBus(c+159,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+161,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+162,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+163,"auto_in_rready", false,-1);
    tracep->declBit(c+1381,"auto_in_rvalid", false,-1);
    tracep->declBus(c+164,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1751,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1337,"auto_out_psel", false,-1);
    tracep->declBit(c+1338,"auto_out_penable", false,-1);
    tracep->declBit(c+1339,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1336,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1340,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1342,"auto_out_pready", false,-1);
    tracep->declBit(c+1344,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1343,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1338,"nodeOut_penable", false,-1);
    tracep->declBus(c+1382,"state", false,-1, 1,0);
    tracep->declBit(c+1380,"accept_read", false,-1);
    tracep->declBit(c+1377,"accept_write", false,-1);
    tracep->declBit(c+165,"is_write_r", false,-1);
    tracep->declBit(c+1339,"is_write", false,-1);
    tracep->declBus(c+164,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+157,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+166,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+167,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+168,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+169,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1383,"resp", false,-1, 1,0);
    tracep->declBus(c+170,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1379,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1381,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+171,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1378,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+172,"auto_in_awready", false,-1);
    tracep->declBit(c+1651,"auto_in_awvalid", false,-1);
    tracep->declBus(c+173,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1652,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+175,"auto_in_wready", false,-1);
    tracep->declBit(c+1654,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1655,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1656,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1657,"auto_in_wlast", false,-1);
    tracep->declBit(c+659,"auto_in_bready", false,-1);
    tracep->declBit(c+176,"auto_in_bvalid", false,-1);
    tracep->declBus(c+177,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+179,"auto_in_arready", false,-1);
    tracep->declBit(c+36,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+180,"auto_in_rvalid", false,-1);
    tracep->declBus(c+181,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+182,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+183,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+184,"auto_in_rlast", false,-1);
    tracep->declBit(c+1377,"auto_out_awready", false,-1);
    tracep->declBit(c+148,"auto_out_awvalid", false,-1);
    tracep->declBus(c+149,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+150,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+151,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+152,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1377,"auto_out_wready", false,-1);
    tracep->declBit(c+153,"auto_out_wvalid", false,-1);
    tracep->declBus(c+154,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+155,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+156,"auto_out_bready", false,-1);
    tracep->declBit(c+1378,"auto_out_bvalid", false,-1);
    tracep->declBus(c+157,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1379,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1380,"auto_out_arready", false,-1);
    tracep->declBit(c+158,"auto_out_arvalid", false,-1);
    tracep->declBus(c+159,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+161,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+162,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+163,"auto_out_rready", false,-1);
    tracep->declBit(c+1381,"auto_out_rvalid", false,-1);
    tracep->declBus(c+164,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1751,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+1378,"io_enq_valid", false,-1);
    tracep->declBus(c+157,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1379,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+659,"io_deq_ready", false,-1);
    tracep->declBit(c+176,"io_deq_valid", false,-1);
    tracep->declBus(c+177,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+178,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+185,"wrap", false,-1);
    tracep->declBit(c+186,"wrap_1", false,-1);
    tracep->declBit(c+187,"maybe_full", false,-1);
    tracep->declBit(c+188,"ptr_match", false,-1);
    tracep->declBit(c+189,"empty", false,-1);
    tracep->declBit(c+190,"full", false,-1);
    tracep->declBit(c+1384,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+186,"R0_addr", false,-1);
    tracep->declBit(c+1804,"R0_en", false,-1);
    tracep->declBit(c+1719,"R0_clk", false,-1);
    tracep->declBus(c+191,"R0_data", false,-1, 5,0);
    tracep->declBit(c+185,"W0_addr", false,-1);
    tracep->declBit(c+1384,"W0_en", false,-1);
    tracep->declBit(c+1719,"W0_clk", false,-1);
    tracep->declBus(c+1752,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+192+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+194,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+1381,"io_enq_valid", false,-1);
    tracep->declBus(c+164,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1751,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1379,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+180,"io_deq_valid", false,-1);
    tracep->declBus(c+181,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+182,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+183,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+184,"io_deq_bits_last", false,-1);
    tracep->declBit(c+195,"wrap", false,-1);
    tracep->declBit(c+196,"wrap_1", false,-1);
    tracep->declBit(c+197,"maybe_full", false,-1);
    tracep->declBit(c+198,"ptr_match", false,-1);
    tracep->declBit(c+199,"empty", false,-1);
    tracep->declBit(c+200,"full", false,-1);
    tracep->declBit(c+1385,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+196,"R0_addr", false,-1);
    tracep->declBit(c+1804,"R0_en", false,-1);
    tracep->declBit(c+1719,"R0_clk", false,-1);
    tracep->declQuad(c+201,"R0_data", false,-1, 38,0);
    tracep->declBit(c+195,"W0_addr", false,-1);
    tracep->declBit(c+1385,"W0_en", false,-1);
    tracep->declBit(c+1719,"W0_clk", false,-1);
    tracep->declQuad(c+1753,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+203+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+207,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+179,"io_enq_ready", false,-1);
    tracep->declBit(c+36,"io_enq_valid", false,-1);
    tracep->declBus(c+37,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+39,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+40,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1380,"io_deq_ready", false,-1);
    tracep->declBit(c+158,"io_deq_valid", false,-1);
    tracep->declBus(c+159,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+160,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+161,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+162,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+208,"wrap", false,-1);
    tracep->declBit(c+209,"wrap_1", false,-1);
    tracep->declBit(c+210,"maybe_full", false,-1);
    tracep->declBit(c+211,"ptr_match", false,-1);
    tracep->declBit(c+212,"empty", false,-1);
    tracep->declBit(c+213,"full", false,-1);
    tracep->declBit(c+41,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+209,"R0_addr", false,-1);
    tracep->declBit(c+1804,"R0_en", false,-1);
    tracep->declBit(c+1719,"R0_clk", false,-1);
    tracep->declQuad(c+214,"R0_data", false,-1, 46,0);
    tracep->declBit(c+208,"W0_addr", false,-1);
    tracep->declBit(c+41,"W0_en", false,-1);
    tracep->declBit(c+1719,"W0_clk", false,-1);
    tracep->declQuad(c+42,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+216+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+220,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+1651,"io_enq_valid", false,-1);
    tracep->declBus(c+173,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1652,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1653,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+174,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1377,"io_deq_ready", false,-1);
    tracep->declBit(c+148,"io_deq_valid", false,-1);
    tracep->declBus(c+149,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+150,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+151,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+152,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+221,"wrap", false,-1);
    tracep->declBit(c+222,"wrap_1", false,-1);
    tracep->declBit(c+223,"maybe_full", false,-1);
    tracep->declBit(c+224,"ptr_match", false,-1);
    tracep->declBit(c+225,"empty", false,-1);
    tracep->declBit(c+226,"full", false,-1);
    tracep->declBit(c+1658,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+222,"R0_addr", false,-1);
    tracep->declBit(c+1804,"R0_en", false,-1);
    tracep->declBit(c+1719,"R0_clk", false,-1);
    tracep->declQuad(c+227,"R0_data", false,-1, 46,0);
    tracep->declBit(c+221,"W0_addr", false,-1);
    tracep->declBit(c+1658,"W0_en", false,-1);
    tracep->declBit(c+1719,"W0_clk", false,-1);
    tracep->declQuad(c+676,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+229+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+233,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+1654,"io_enq_valid", false,-1);
    tracep->declBus(c+1655,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1656,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1657,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1377,"io_deq_ready", false,-1);
    tracep->declBit(c+153,"io_deq_valid", false,-1);
    tracep->declBus(c+154,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+155,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+234,"wrap", false,-1);
    tracep->declBit(c+235,"wrap_1", false,-1);
    tracep->declBit(c+236,"maybe_full", false,-1);
    tracep->declBit(c+237,"ptr_match", false,-1);
    tracep->declBit(c+238,"empty", false,-1);
    tracep->declBit(c+239,"full", false,-1);
    tracep->declBit(c+1659,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+235,"R0_addr", false,-1);
    tracep->declBit(c+1804,"R0_en", false,-1);
    tracep->declBit(c+1719,"R0_clk", false,-1);
    tracep->declQuad(c+240,"R0_data", false,-1, 35,0);
    tracep->declBit(c+234,"W0_addr", false,-1);
    tracep->declBit(c+1659,"W0_en", false,-1);
    tracep->declBit(c+1719,"W0_clk", false,-1);
    tracep->declQuad(c+1660,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+242+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1791,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1792,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1793,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+101,"in_arready", false,-1);
    tracep->declBit(c+44,"in_arvalid", false,-1);
    tracep->declBus(c+45,"in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1755,"in_rready", false,-1);
    tracep->declBit(c+1562,"in_rvalid", false,-1);
    tracep->declBus(c+1563,"in_rid", false,-1, 3,0);
    tracep->declBus(c+715,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1805,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1564,"in_rlast", false,-1);
    tracep->declBit(c+1386,"in_awready", false,-1);
    tracep->declBit(c+1662,"in_awvalid", false,-1);
    tracep->declBus(c+1806,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1599,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1807,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1600,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1387,"in_wready", false,-1);
    tracep->declBit(c+1663,"in_wvalid", false,-1);
    tracep->declBus(c+1601,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"in_wlast", false,-1);
    tracep->declBit(c+1580,"in_bready", false,-1);
    tracep->declBit(c+1388,"in_bvalid", false,-1);
    tracep->declBus(c+1389,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1390,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"out_arready", false,-1);
    tracep->declBit(c+44,"out_arvalid", false,-1);
    tracep->declBus(c+45,"out_arid", false,-1, 3,0);
    tracep->declBus(c+46,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1755,"out_rready", false,-1);
    tracep->declBit(c+1562,"out_rvalid", false,-1);
    tracep->declBus(c+1563,"out_rid", false,-1, 3,0);
    tracep->declBus(c+715,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1805,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1564,"out_rlast", false,-1);
    tracep->declBit(c+102,"out_awready", false,-1);
    tracep->declBit(c+1391,"out_awvalid", false,-1);
    tracep->declBus(c+1392,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1393,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1394,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1395,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"out_wready", false,-1);
    tracep->declBit(c+1397,"out_wvalid", false,-1);
    tracep->declBus(c+1398,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1399,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1400,"out_wlast", false,-1);
    tracep->declBit(c+1401,"out_bready", false,-1);
    tracep->declBit(c+1565,"out_bvalid", false,-1);
    tracep->declBus(c+1563,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1805,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1795,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1796,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1797,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1794,"RD_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1798,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1799,"RD_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1808,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1809,"WT_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1810,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1811,"WT_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1402,"request_counter_wt", false,-1, 9,0);
    tracep->declBus(c+1403,"wait_counter_wt", false,-1, 31,0);
    tracep->declBit(c+1404,"bvalid", false,-1);
    tracep->declBus(c+1405,"bid", false,-1, 3,0);
    tracep->declBus(c+1406,"bresp", false,-1, 1,0);
    tracep->declBus(c+1407,"state_wt", false,-1, 2,0);
    tracep->declBus(c+1756,"next_state_wt", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+247,"auto_in_awready", false,-1);
    tracep->declBit(c+1664,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1806,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1599,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1807,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1600,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+248,"auto_in_wready", false,-1);
    tracep->declBit(c+1665,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1601,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"auto_in_wlast", false,-1);
    tracep->declBit(c+1757,"auto_in_bready", false,-1);
    tracep->declBit(c+249,"auto_in_bvalid", false,-1);
    tracep->declBus(c+250,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+251,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+252,"auto_in_arready", false,-1);
    tracep->declBit(c+50,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_in_rready", false,-1);
    tracep->declBit(c+253,"auto_in_rvalid", false,-1);
    tracep->declBus(c+254,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+256,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+257,"auto_in_rlast", false,-1);
    tracep->declBit(c+1666,"auto_out_awready", false,-1);
    tracep->declBit(c+1667,"auto_out_awvalid", false,-1);
    tracep->declBus(c+173,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1652,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+258,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1668,"auto_out_wready", false,-1);
    tracep->declBit(c+1669,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1655,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1656,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1657,"auto_out_wlast", false,-1);
    tracep->declBit(c+1581,"auto_out_bready", false,-1);
    tracep->declBit(c+259,"auto_out_bvalid", false,-1);
    tracep->declBus(c+250,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+105,"auto_out_arready", false,-1);
    tracep->declBit(c+51,"auto_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+104,"auto_out_rready", false,-1);
    tracep->declBit(c+253,"auto_out_rvalid", false,-1);
    tracep->declBus(c+254,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+256,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+262,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+263,"auto_out_rlast", false,-1);
    tracep->declBit(c+1669,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+264,"w_idle", false,-1);
    tracep->declBit(c+1670,"in_awready", false,-1);
    tracep->declBit(c+265,"busy", false,-1);
    tracep->declBus(c+266,"r_addr", false,-1, 31,0);
    tracep->declBus(c+267,"r_len", false,-1, 7,0);
    tracep->declBus(c+53,"len", false,-1, 7,0);
    tracep->declBus(c+54,"addr", false,-1, 31,0);
    tracep->declBit(c+268,"busy_1", false,-1);
    tracep->declBus(c+269,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+270,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+271,"len_1", false,-1, 7,0);
    tracep->declBus(c+1671,"addr_1", false,-1, 31,0);
    tracep->declBit(c+272,"wbeats_latched", false,-1);
    tracep->declBit(c+1667,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1672,"wbeats_valid", false,-1);
    tracep->declBus(c+273,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1673,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1657,"w_last", false,-1);
    tracep->declBit(c+1581,"nodeOut_bready", false,-1);
    tracep->declBus(c+274,"error_0", false,-1, 1,0);
    tracep->declBus(c+275,"error_1", false,-1, 1,0);
    tracep->declBus(c+276,"error_2", false,-1, 1,0);
    tracep->declBus(c+277,"error_3", false,-1, 1,0);
    tracep->declBus(c+278,"error_4", false,-1, 1,0);
    tracep->declBus(c+279,"error_5", false,-1, 1,0);
    tracep->declBus(c+280,"error_6", false,-1, 1,0);
    tracep->declBus(c+281,"error_7", false,-1, 1,0);
    tracep->declBus(c+282,"error_8", false,-1, 1,0);
    tracep->declBus(c+283,"error_9", false,-1, 1,0);
    tracep->declBus(c+284,"error_10", false,-1, 1,0);
    tracep->declBus(c+285,"error_11", false,-1, 1,0);
    tracep->declBus(c+286,"error_12", false,-1, 1,0);
    tracep->declBus(c+287,"error_13", false,-1, 1,0);
    tracep->declBus(c+288,"error_14", false,-1, 1,0);
    tracep->declBus(c+289,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBus(c+45,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+46,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+47,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+48,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+49,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+106,"io_deq_ready", false,-1);
    tracep->declBit(c+51,"io_deq_valid", false,-1);
    tracep->declBus(c+37,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+55,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+56,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+39,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+40,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+290,"ram", false,-1, 48,0);
    tracep->declBit(c+292,"full", false,-1);
    tracep->declBit(c+51,"io_deq_valid_0", false,-1);
    tracep->declBit(c+107,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+1664,"io_enq_valid", false,-1);
    tracep->declBus(c+1806,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1599,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1807,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1600,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1805,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1674,"io_deq_ready", false,-1);
    tracep->declBit(c+1675,"io_deq_valid", false,-1);
    tracep->declBus(c+173,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1676,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+293,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1653,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+174,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+294,"ram", false,-1, 48,0);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+1675,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1677,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+1665,"io_enq_valid", false,-1);
    tracep->declBus(c+1601,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1602,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1603,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1678,"io_deq_ready", false,-1);
    tracep->declBit(c+1679,"io_deq_valid", false,-1);
    tracep->declBus(c+1655,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1656,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1758,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+297,"ram", false,-1, 36,0);
    tracep->declBit(c+299,"full", false,-1);
    tracep->declBit(c+1679,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1680,"do_enq", false,-1);
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
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1681,"auto_in_awready", false,-1);
    tracep->declBit(c+1682,"auto_in_awvalid", false,-1);
    tracep->declBus(c+173,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1683,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1759,"auto_in_wready", false,-1);
    tracep->declBit(c+1684,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1655,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1656,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1582,"auto_in_bready", false,-1);
    tracep->declBit(c+300,"auto_in_bvalid", false,-1);
    tracep->declBus(c+301,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+302,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_in_arready", false,-1);
    tracep->declBit(c+57,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+109,"auto_in_rready", false,-1);
    tracep->declBit(c+303,"auto_in_rvalid", false,-1);
    tracep->declBus(c+304,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+305,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+306,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+108,"nodeIn_arready", false,-1);
    tracep->declBit(c+1681,"nodeIn_awready", false,-1);
    tracep->declBit(c+1685,"w_sel0", false,-1);
    tracep->declBit(c+300,"w_full", false,-1);
    tracep->declBus(c+301,"w_id", false,-1, 3,0);
    tracep->declBit(c+307,"r_sel1", false,-1);
    tracep->declBit(c+308,"w_sel1", false,-1);
    tracep->declBit(c+303,"r_full", false,-1);
    tracep->declBus(c+304,"r_id", false,-1, 3,0);
    tracep->declBit(c+110,"ren", false,-1);
    tracep->declBit(c+309,"rdata_REG", false,-1);
    tracep->declBus(c+310,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+311,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+312,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+313,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+59,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+110,"R0_en", false,-1);
    tracep->declBit(c+1719,"R0_clk", false,-1);
    tracep->declBus(c+314,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1686,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1687,"W0_en", false,-1);
    tracep->declBit(c+1719,"W0_clk", false,-1);
    tracep->declBus(c+1655,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1656,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1688,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1002,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1806,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1599,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1807,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1600,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1689,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1003,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1601,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1004,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1408,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1409,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1410,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+111,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1634,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1635,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1760,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1636,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1386,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1662,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1806,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1599,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1807,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1600,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1387,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1663,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1601,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1580,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1389,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1390,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1755,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1562,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1563,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+715,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1805,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1564,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+247,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1664,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1806,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1599,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1807,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1600,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+248,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1665,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1601,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1757,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+249,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+250,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+251,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+252,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+50,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+253,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+254,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+256,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+257,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1408,"in_0_bvalid", false,-1);
    tracep->declBit(c+1634,"in_0_rvalid", false,-1);
    tracep->declBit(c+1690,"in_0_wready", false,-1);
    tracep->declBit(c+1691,"in_0_awready", false,-1);
    tracep->declBit(c+1762,"in_0_arready", false,-1);
    tracep->declBit(c+1688,"anonIn_awready", false,-1);
    tracep->declBit(c+111,"anonIn_arready", false,-1);
    tracep->declBit(c+62,"requestARIO_0_0", false,-1);
    tracep->declBit(c+63,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1604,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1605,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+64,"arSel", false,-1, 15,0);
    tracep->declBus(c+1812,"awSel", false,-1, 15,0);
    tracep->declBus(c+1637,"rSel", false,-1, 15,0);
    tracep->declBus(c+1411,"bSel", false,-1, 15,0);
    tracep->declBus(c+315,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+316,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+317,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+318,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+319,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+320,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+321,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1813,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+322,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+323,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+324,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1814,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+325,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+326,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+327,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1815,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+328,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+329,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+330,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1816,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+331,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+332,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+333,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1817,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+334,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+335,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+336,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1818,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+337,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+338,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+339,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1819,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+340,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+341,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+342,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1820,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+343,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+344,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+345,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1821,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+346,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+347,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+348,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1822,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+349,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+350,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1823,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+352,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+353,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+354,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1824,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+355,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+356,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+357,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1825,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+358,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+359,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+360,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1826,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+361,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+362,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+363,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1827,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+65,"in_0_arvalid", false,-1);
    tracep->declBit(c+364,"latched", false,-1);
    tracep->declBit(c+1692,"in_0_awvalid", false,-1);
    tracep->declBit(c+1583,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1584,"in_0_wvalid", false,-1);
    tracep->declBit(c+365,"idle_2", false,-1);
    tracep->declBit(c+1638,"anyValid", false,-1);
    tracep->declBus(c+1639,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+366,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1640,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1641,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1642,"prefixOR_1", false,-1);
    tracep->declBit(c+1643,"winner_2_1", false,-1);
    tracep->declBit(c+367,"state_2_0", false,-1);
    tracep->declBit(c+368,"state_2_1", false,-1);
    tracep->declBit(c+1644,"muxState_2_0", false,-1);
    tracep->declBit(c+1645,"muxState_2_1", false,-1);
    tracep->declBit(c+369,"idle_3", false,-1);
    tracep->declBit(c+1412,"anyValid_1", false,-1);
    tracep->declBus(c+1413,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+370,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1414,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1415,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1416,"winner_3_0", false,-1);
    tracep->declBit(c+1417,"winner_3_1", false,-1);
    tracep->declBit(c+371,"state_3_0", false,-1);
    tracep->declBit(c+372,"state_3_1", false,-1);
    tracep->declBit(c+1418,"muxState_3_0", false,-1);
    tracep->declBit(c+1419,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+373,"io_enq_ready", false,-1);
    tracep->declBit(c+1583,"io_enq_valid", false,-1);
    tracep->declBus(c+1606,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1693,"io_deq_ready", false,-1);
    tracep->declBit(c+1585,"io_deq_valid", false,-1);
    tracep->declBus(c+1694,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+374,"wrap", false,-1);
    tracep->declBit(c+375,"wrap_1", false,-1);
    tracep->declBit(c+376,"maybe_full", false,-1);
    tracep->declBit(c+377,"ptr_match", false,-1);
    tracep->declBit(c+378,"empty", false,-1);
    tracep->declBit(c+379,"full", false,-1);
    tracep->declBit(c+1585,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1695,"do_deq", false,-1);
    tracep->declBit(c+1696,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+375,"R0_addr", false,-1);
    tracep->declBit(c+1804,"R0_en", false,-1);
    tracep->declBit(c+1719,"R0_clk", false,-1);
    tracep->declBus(c+380,"R0_data", false,-1, 1,0);
    tracep->declBit(c+374,"W0_addr", false,-1);
    tracep->declBit(c+1696,"W0_en", false,-1);
    tracep->declBit(c+1719,"W0_clk", false,-1);
    tracep->declBus(c+1606,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+381+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1697,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1698,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+173,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1652,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+174,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1668,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1669,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1655,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1656,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1657,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1581,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+259,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+250,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+66,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+253,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+254,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+256,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+263,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1681,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1682,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+173,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1683,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1759,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1684,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1655,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1656,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1582,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+300,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+301,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+302,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+57,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+109,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+303,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+304,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+305,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+306,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1699,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1700,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+383,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+67,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+384,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+385,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+386,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+172,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+173,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1652,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+174,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+175,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1654,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1655,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1656,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1657,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+659,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+176,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+177,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+179,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+180,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+181,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+182,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+183,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+184,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+259,"in_0_bvalid", false,-1);
    tracep->declBit(c+253,"in_0_rvalid", false,-1);
    tracep->declBit(c+1701,"in_0_wready", false,-1);
    tracep->declBit(c+1702,"in_0_awready", false,-1);
    tracep->declBit(c+112,"in_0_arready", false,-1);
    tracep->declBit(c+1697,"anonIn_awready", false,-1);
    tracep->declBit(c+69,"requestARIO_0_0", false,-1);
    tracep->declBit(c+70,"requestARIO_0_1", false,-1);
    tracep->declBit(c+71,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1703,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1704,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1705,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+72,"arSel", false,-1, 15,0);
    tracep->declBus(c+387,"awSel", false,-1, 15,0);
    tracep->declBus(c+388,"rSel", false,-1, 15,0);
    tracep->declBus(c+389,"bSel", false,-1, 15,0);
    tracep->declBit(c+390,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+391,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+392,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+393,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+394,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+395,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+396,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+397,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+398,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+399,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+400,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+401,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+402,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+403,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+404,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+405,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+406,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+407,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+408,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+409,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+410,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+411,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+412,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+413,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+414,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+415,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+416,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+417,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+418,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+419,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+420,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+421,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+422,"latched", false,-1);
    tracep->declBit(c+1706,"in_0_awvalid", false,-1);
    tracep->declBit(c+1707,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1708,"in_0_wvalid", false,-1);
    tracep->declBit(c+423,"idle_3", false,-1);
    tracep->declBit(c+424,"anyValid", false,-1);
    tracep->declBus(c+425,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+426,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+427,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+428,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+429,"prefixOR_1", false,-1);
    tracep->declBit(c+430,"winner_3_1", false,-1);
    tracep->declBit(c+431,"winner_3_2", false,-1);
    tracep->declBit(c+432,"state_3_0", false,-1);
    tracep->declBit(c+433,"state_3_1", false,-1);
    tracep->declBit(c+434,"state_3_2", false,-1);
    tracep->declBit(c+435,"muxState_3_0", false,-1);
    tracep->declBit(c+436,"muxState_3_1", false,-1);
    tracep->declBit(c+437,"muxState_3_2", false,-1);
    tracep->declBit(c+438,"idle_4", false,-1);
    tracep->declBit(c+439,"anyValid_1", false,-1);
    tracep->declBus(c+440,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+441,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+442,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+443,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+444,"winner_4_0", false,-1);
    tracep->declBit(c+445,"winner_4_2", false,-1);
    tracep->declBit(c+446,"state_4_0", false,-1);
    tracep->declBit(c+447,"state_4_2", false,-1);
    tracep->declBit(c+448,"muxState_4_0", false,-1);
    tracep->declBit(c+449,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+1707,"io_enq_valid", false,-1);
    tracep->declBus(c+1709,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1710,"io_deq_ready", false,-1);
    tracep->declBit(c+1711,"io_deq_valid", false,-1);
    tracep->declBus(c+1712,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+451,"wrap", false,-1);
    tracep->declBit(c+452,"wrap_1", false,-1);
    tracep->declBit(c+453,"maybe_full", false,-1);
    tracep->declBit(c+454,"ptr_match", false,-1);
    tracep->declBit(c+455,"empty", false,-1);
    tracep->declBit(c+456,"full", false,-1);
    tracep->declBit(c+1711,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1713,"do_deq", false,-1);
    tracep->declBit(c+1714,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+452,"R0_addr", false,-1);
    tracep->declBit(c+1804,"R0_en", false,-1);
    tracep->declBit(c+1719,"R0_clk", false,-1);
    tracep->declBus(c+457,"R0_data", false,-1, 2,0);
    tracep->declBit(c+451,"W0_addr", false,-1);
    tracep->declBit(c+1714,"W0_en", false,-1);
    tracep->declBit(c+1719,"W0_clk", false,-1);
    tracep->declBus(c+1709,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+458+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1666,"auto_in_awready", false,-1);
    tracep->declBit(c+1667,"auto_in_awvalid", false,-1);
    tracep->declBus(c+173,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1652,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+258,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1668,"auto_in_wready", false,-1);
    tracep->declBit(c+1669,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1655,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1656,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1657,"auto_in_wlast", false,-1);
    tracep->declBit(c+1581,"auto_in_bready", false,-1);
    tracep->declBit(c+259,"auto_in_bvalid", false,-1);
    tracep->declBus(c+250,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+105,"auto_in_arready", false,-1);
    tracep->declBit(c+51,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+104,"auto_in_rready", false,-1);
    tracep->declBit(c+253,"auto_in_rvalid", false,-1);
    tracep->declBus(c+254,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+256,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+262,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+263,"auto_in_rlast", false,-1);
    tracep->declBit(c+1697,"auto_out_awready", false,-1);
    tracep->declBit(c+1698,"auto_out_awvalid", false,-1);
    tracep->declBus(c+173,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1652,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1668,"auto_out_wready", false,-1);
    tracep->declBit(c+1669,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1655,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1656,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1657,"auto_out_wlast", false,-1);
    tracep->declBit(c+1581,"auto_out_bready", false,-1);
    tracep->declBit(c+259,"auto_out_bvalid", false,-1);
    tracep->declBus(c+250,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"auto_out_arready", false,-1);
    tracep->declBit(c+66,"auto_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_out_rready", false,-1);
    tracep->declBit(c+253,"auto_out_rvalid", false,-1);
    tracep->declBus(c+254,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+256,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+263,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+460,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+461,"io_deq_valid", false,-1);
    tracep->declBit(c+462,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+461,"full", false,-1);
    tracep->declBit(c+462,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+463,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+464,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+465,"io_deq_valid", false,-1);
    tracep->declBit(c+466,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+465,"full", false,-1);
    tracep->declBit(c+466,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+467,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+468,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+469,"io_deq_valid", false,-1);
    tracep->declBit(c+470,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+469,"full", false,-1);
    tracep->declBit(c+470,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+471,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+472,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+473,"io_deq_valid", false,-1);
    tracep->declBit(c+474,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+473,"full", false,-1);
    tracep->declBit(c+474,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+475,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+476,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+477,"io_deq_valid", false,-1);
    tracep->declBit(c+478,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+477,"full", false,-1);
    tracep->declBit(c+478,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+479,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+480,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+481,"io_deq_valid", false,-1);
    tracep->declBit(c+482,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+481,"full", false,-1);
    tracep->declBit(c+482,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+483,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+485,"io_deq_valid", false,-1);
    tracep->declBit(c+486,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->declBit(c+486,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+487,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+489,"io_deq_valid", false,-1);
    tracep->declBit(c+490,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+489,"full", false,-1);
    tracep->declBit(c+490,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+491,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+678,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+660,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+679,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+661,"io_deq_ready", false,-1);
    tracep->declBit(c+497,"io_deq_valid", false,-1);
    tracep->declBit(c+498,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->declBit(c+498,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+499,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+680,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+662,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBit(c+502,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+501,"full", false,-1);
    tracep->declBit(c+502,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+503,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+681,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+663,"io_deq_ready", false,-1);
    tracep->declBit(c+505,"io_deq_valid", false,-1);
    tracep->declBit(c+506,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+505,"full", false,-1);
    tracep->declBit(c+506,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+507,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+508,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+509,"io_deq_valid", false,-1);
    tracep->declBit(c+510,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+509,"full", false,-1);
    tracep->declBit(c+510,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+511,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+512,"io_enq_ready", false,-1);
    tracep->declBit(c+682,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+664,"io_deq_ready", false,-1);
    tracep->declBit(c+513,"io_deq_valid", false,-1);
    tracep->declBit(c+514,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+513,"full", false,-1);
    tracep->declBit(c+514,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+515,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+516,"io_enq_ready", false,-1);
    tracep->declBit(c+683,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+665,"io_deq_ready", false,-1);
    tracep->declBit(c+517,"io_deq_valid", false,-1);
    tracep->declBit(c+518,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+517,"full", false,-1);
    tracep->declBit(c+518,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+519,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+520,"io_enq_ready", false,-1);
    tracep->declBit(c+684,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+666,"io_deq_ready", false,-1);
    tracep->declBit(c+521,"io_deq_valid", false,-1);
    tracep->declBit(c+522,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+521,"full", false,-1);
    tracep->declBit(c+522,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+523,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+524,"io_enq_ready", false,-1);
    tracep->declBit(c+685,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+667,"io_deq_ready", false,-1);
    tracep->declBit(c+525,"io_deq_valid", false,-1);
    tracep->declBit(c+526,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+526,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+528,"io_enq_ready", false,-1);
    tracep->declBit(c+686,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+668,"io_deq_ready", false,-1);
    tracep->declBit(c+529,"io_deq_valid", false,-1);
    tracep->declBit(c+530,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+529,"full", false,-1);
    tracep->declBit(c+530,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+531,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+687,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+669,"io_deq_ready", false,-1);
    tracep->declBit(c+533,"io_deq_valid", false,-1);
    tracep->declBit(c+534,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+533,"full", false,-1);
    tracep->declBit(c+534,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+535,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+536,"io_enq_ready", false,-1);
    tracep->declBit(c+688,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+670,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBit(c+538,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+537,"full", false,-1);
    tracep->declBit(c+538,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+539,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+540,"io_enq_ready", false,-1);
    tracep->declBit(c+689,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+671,"io_deq_ready", false,-1);
    tracep->declBit(c+541,"io_deq_valid", false,-1);
    tracep->declBit(c+542,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+541,"full", false,-1);
    tracep->declBit(c+542,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+543,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+544,"io_enq_ready", false,-1);
    tracep->declBit(c+690,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+672,"io_deq_ready", false,-1);
    tracep->declBit(c+545,"io_deq_valid", false,-1);
    tracep->declBit(c+546,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+545,"full", false,-1);
    tracep->declBit(c+546,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+547,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+548,"io_enq_ready", false,-1);
    tracep->declBit(c+691,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+673,"io_deq_ready", false,-1);
    tracep->declBit(c+549,"io_deq_valid", false,-1);
    tracep->declBit(c+550,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+549,"full", false,-1);
    tracep->declBit(c+550,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+551,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+552,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+553,"io_deq_valid", false,-1);
    tracep->declBit(c+554,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+553,"full", false,-1);
    tracep->declBit(c+554,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+555,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+556,"io_enq_ready", false,-1);
    tracep->declBit(c+692,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+674,"io_deq_ready", false,-1);
    tracep->declBit(c+557,"io_deq_valid", false,-1);
    tracep->declBit(c+558,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+558,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+559,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+560,"io_enq_ready", false,-1);
    tracep->declBit(c+693,"io_enq_valid", false,-1);
    tracep->declBit(c+258,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+675,"io_deq_ready", false,-1);
    tracep->declBit(c+561,"io_deq_valid", false,-1);
    tracep->declBit(c+562,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+561,"full", false,-1);
    tracep->declBit(c+562,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+563,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+564,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+565,"io_deq_valid", false,-1);
    tracep->declBit(c+566,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+565,"full", false,-1);
    tracep->declBit(c+566,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+567,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+568,"io_enq_ready", false,-1);
    tracep->declBit(c+96,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+569,"io_deq_valid", false,-1);
    tracep->declBit(c+570,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+569,"full", false,-1);
    tracep->declBit(c+570,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+571,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+572,"io_enq_ready", false,-1);
    tracep->declBit(c+97,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+573,"io_deq_valid", false,-1);
    tracep->declBit(c+574,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+573,"full", false,-1);
    tracep->declBit(c+574,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+575,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+576,"io_enq_ready", false,-1);
    tracep->declBit(c+98,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+577,"io_deq_valid", false,-1);
    tracep->declBit(c+578,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+577,"full", false,-1);
    tracep->declBit(c+578,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+579,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+580,"io_enq_ready", false,-1);
    tracep->declBit(c+99,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+581,"io_deq_valid", false,-1);
    tracep->declBit(c+582,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+581,"full", false,-1);
    tracep->declBit(c+582,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+583,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+584,"io_enq_ready", false,-1);
    tracep->declBit(c+100,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+585,"io_deq_valid", false,-1);
    tracep->declBit(c+586,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+585,"full", false,-1);
    tracep->declBit(c+586,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+587,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1763,"reset", false,-1);
    tracep->declBit(c+1688,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1002,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1806,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1599,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1807,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1600,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1689,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1003,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1601,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1004,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1408,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1409,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1410,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+111,"auto_master_out_arready", false,-1);
    tracep->declBit(c+60,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+45,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1634,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1635,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1760,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1636,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1763,"reset", false,-1);
    tracep->declBit(c+1803,"io_interrupt", false,-1);
    tracep->declBit(c+1688,"io_master_awready", false,-1);
    tracep->declBit(c+1002,"io_master_awvalid", false,-1);
    tracep->declBus(c+1599,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1806,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1807,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1600,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1689,"io_master_wready", false,-1);
    tracep->declBit(c+1003,"io_master_wvalid", false,-1);
    tracep->declBus(c+1601,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"io_master_wlast", false,-1);
    tracep->declBit(c+1004,"io_master_bready", false,-1);
    tracep->declBit(c+1408,"io_master_bvalid", false,-1);
    tracep->declBus(c+1410,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1409,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+111,"io_master_arready", false,-1);
    tracep->declBit(c+60,"io_master_arvalid", false,-1);
    tracep->declBus(c+46,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+45,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+47,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"io_master_rready", false,-1);
    tracep->declBit(c+1634,"io_master_rvalid", false,-1);
    tracep->declBus(c+1761,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1760,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1636,"io_master_rlast", false,-1);
    tracep->declBus(c+1635,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1828,"io_slave_awready", false,-1);
    tracep->declBit(c+1803,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1829,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1806,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1807,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1797,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1830,"io_slave_wready", false,-1);
    tracep->declBit(c+1803,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1829,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1806,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1803,"io_slave_wlast", false,-1);
    tracep->declBit(c+1803,"io_slave_bready", false,-1);
    tracep->declBit(c+1831,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1832,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1833,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1834,"io_slave_arready", false,-1);
    tracep->declBit(c+1803,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1829,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1806,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1807,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1797,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1805,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1803,"io_slave_rready", false,-1);
    tracep->declBit(c+1835,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1836,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1837,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1838,"io_slave_rlast", false,-1);
    tracep->declBus(c+1839,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1005,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1006,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1007,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+1008,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1009,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1005,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1006,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1010,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1011,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1012,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1806,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1807,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1798,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1805,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1013,"ifu_arvalid", false,-1);
    tracep->declBit(c+1014,"ifu_arready", false,-1);
    tracep->declBus(c+1015,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1840,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1841,"ifu_rlast", false,-1);
    tracep->declBus(c+1842,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1016,"ifu_rvalid", false,-1);
    tracep->declBit(c+1017,"ifu_rready", false,-1);
    tracep->declBit(c+1843,"useless1", false,-1);
    tracep->declBit(c+1844,"useless2", false,-1);
    tracep->declBit(c+1845,"useless3", false,-1);
    tracep->declBit(c+1846,"useless4", false,-1);
    tracep->declBus(c+1018,"cache_araddr", false,-1, 31,0);
    tracep->declBus(c+1847,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+1019,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+1022,"cache_arvalid", false,-1);
    tracep->declBit(c+1765,"cache_arready", false,-1);
    tracep->declBus(c+113,"cache_rdata", false,-1, 31,0);
    tracep->declBus(c+114,"cache_rresp", false,-1, 1,0);
    tracep->declBit(c+115,"cache_rlast", false,-1);
    tracep->declBus(c+116,"cache_rid", false,-1, 3,0);
    tracep->declBit(c+117,"cache_rvalid", false,-1);
    tracep->declBit(c+1023,"cache_rready", false,-1);
    tracep->declBus(c+1024,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1806,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1807,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1025,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1805,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1026,"lsu_arvalid", false,-1);
    tracep->declBit(c+118,"lsu_arready", false,-1);
    tracep->declBus(c+119,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+120,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+121,"lsu_rlast", false,-1);
    tracep->declBus(c+122,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+123,"lsu_rvalid", false,-1);
    tracep->declBit(c+1027,"lsu_rready", false,-1);
    tracep->declBus(c+1028,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1806,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1807,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1029,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1030,"lsu_awvalid", false,-1);
    tracep->declBit(c+1715,"lsu_awready", false,-1);
    tracep->declBus(c+1031,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1033,"lsu_wlast", false,-1);
    tracep->declBit(c+1034,"lsu_wvalid", false,-1);
    tracep->declBit(c+1716,"lsu_wready", false,-1);
    tracep->declBus(c+1586,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1587,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1588,"lsu_bvalid", false,-1);
    tracep->declBit(c+1035,"lsu_bready", false,-1);
    tracep->declBus(c+1036,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1037,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1038,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1039,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1040,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1041,"axi_arvalid", false,-1);
    tracep->declBit(c+124,"axi_arready", false,-1);
    tracep->declBus(c+125,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+126,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+127,"axi_rlast", false,-1);
    tracep->declBus(c+128,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+129,"axi_rvalid", false,-1);
    tracep->declBit(c+1042,"axi_rready", false,-1);
    tracep->declBus(c+1599,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1806,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1807,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1600,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1002,"axi_awvalid", false,-1);
    tracep->declBit(c+1688,"axi_awready", false,-1);
    tracep->declBus(c+1601,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"axi_wlast", false,-1);
    tracep->declBit(c+1003,"axi_wvalid", false,-1);
    tracep->declBit(c+1689,"axi_wready", false,-1);
    tracep->declBus(c+1410,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1409,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1408,"axi_bvalid", false,-1);
    tracep->declBit(c+1004,"axi_bready", false,-1);
    tracep->declBus(c+73,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+74,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+75,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+76,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+77,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+78,"clint_arvalid", false,-1);
    tracep->declBit(c+1043,"clint_arready", false,-1);
    tracep->declBus(c+1044,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1045,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1046,"clint_rlast", false,-1);
    tracep->declBus(c+1806,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1047,"clint_rvalid", false,-1);
    tracep->declBit(c+79,"clint_rready", false,-1);
    tracep->declBus(c+1848,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1849,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1850,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1851,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1852,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1853,"clint_awvalid", false,-1);
    tracep->declBit(c+1048,"clint_awready", false,-1);
    tracep->declBus(c+1854,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1855,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1856,"clint_wlast", false,-1);
    tracep->declBit(c+1857,"clint_wvalid", false,-1);
    tracep->declBit(c+1049,"clint_wready", false,-1);
    tracep->declBus(c+1050,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1806,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1051,"clint_bvalid", false,-1);
    tracep->declBit(c+1858,"clint_bready", false,-1);
    tracep->declBus(c+1607,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1608,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1766,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1767,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1420,"a5", false,-1, 31,0);
    tracep->declBus(c+1609,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1766,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1767,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1610,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1768,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1611,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1612,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1613,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1614,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1615,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1616,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1617,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1618,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1619,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1620,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1621,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1622,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1623,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1624,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1625,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1052,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1053,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1626,"csr_write", false,-1);
    tracep->declBus(c+1627,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1421+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1054,"wdata", false,-1, 31,0);
    tracep->declBus(c+1055,"waddr", false,-1, 4,0);
    tracep->declBit(c+1056,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1425+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1057,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1058,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1059,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1060,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1061,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1062,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1063,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1064,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1065,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1066,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1067,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1068,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1069,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1070,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1071,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1072,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+1073,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1074,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1075,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1076,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1077,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1078,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1079,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1080,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1081,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1082,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1083,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1084,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1085,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1018,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1847,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1019,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1020,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1021,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1022,"arvalid_i_a", false,-1);
    tracep->declBit(c+1765,"arready_o_a", false,-1);
    tracep->declBus(c+113,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+114,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+115,"rlast_o_a", false,-1);
    tracep->declBus(c+116,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+117,"rvalid_o_a", false,-1);
    tracep->declBit(c+1023,"rready_i_a", false,-1);
    tracep->declBus(c+1859,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1806,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1807,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1797,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1805,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1803,"awvalid_i_a", false,-1);
    tracep->declBit(c+1717,"awready_o_a", false,-1);
    tracep->declBus(c+1859,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1806,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1803,"wlast_i_a", false,-1);
    tracep->declBit(c+1803,"wvalid_i_a", false,-1);
    tracep->declBit(c+1718,"wready_o_a", false,-1);
    tracep->declBus(c+1589,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1590,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1591,"bvalid_o_a", false,-1);
    tracep->declBit(c+1803,"bready_i_a", false,-1);
    tracep->declBus(c+1024,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1806,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1807,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1025,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1805,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1026,"arvalid_i_b", false,-1);
    tracep->declBit(c+118,"arready_o_b", false,-1);
    tracep->declBus(c+119,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+120,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+121,"rlast_o_b", false,-1);
    tracep->declBus(c+122,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+123,"rvalid_o_b", false,-1);
    tracep->declBit(c+1027,"rready_i_b", false,-1);
    tracep->declBus(c+1028,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1806,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1807,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1029,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1805,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1030,"awvalid_i_b", false,-1);
    tracep->declBit(c+1715,"awready_o_b", false,-1);
    tracep->declBus(c+1031,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1032,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1033,"wlast_i_b", false,-1);
    tracep->declBit(c+1034,"wvalid_i_b", false,-1);
    tracep->declBit(c+1716,"wready_o_b", false,-1);
    tracep->declBus(c+1586,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1587,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1588,"bvalid_o_b", false,-1);
    tracep->declBit(c+1035,"bready_i_b", false,-1);
    tracep->declBus(c+1036,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1037,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1038,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1039,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1040,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1041,"arvalid_o", false,-1);
    tracep->declBit(c+124,"arready_i", false,-1);
    tracep->declBus(c+125,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+126,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+127,"rlast_i", false,-1);
    tracep->declBus(c+128,"rid_i", false,-1, 3,0);
    tracep->declBit(c+129,"rvalid_i", false,-1);
    tracep->declBit(c+1042,"rready_o", false,-1);
    tracep->declBus(c+1599,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1806,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1807,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1600,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1805,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1002,"awvalid_o", false,-1);
    tracep->declBit(c+1688,"awready_i", false,-1);
    tracep->declBus(c+1601,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1602,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1603,"wlast_o", false,-1);
    tracep->declBit(c+1003,"wvalid_o", false,-1);
    tracep->declBit(c+1689,"wready_i", false,-1);
    tracep->declBus(c+1410,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1409,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1408,"bvalid_i", false,-1);
    tracep->declBit(c+1004,"bready_o", false,-1);
    tracep->declBit(c+1086,"ar_switch", false,-1);
    tracep->declBit(c+1087,"r_switch", false,-1);
    tracep->declBit(c+1088,"aw_switch", false,-1);
    tracep->declBit(c+1089,"w_switch", false,-1);
    tracep->declBit(c+1090,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+73,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+74,"arid_i", false,-1, 3,0);
    tracep->declBus(c+75,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+76,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+77,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+78,"arvalid_i", false,-1);
    tracep->declBit(c+1043,"arready_o", false,-1);
    tracep->declBus(c+1044,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1045,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1046,"rlast_o", false,-1);
    tracep->declBus(c+1806,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1047,"rvalid_o", false,-1);
    tracep->declBit(c+79,"rready_i", false,-1);
    tracep->declBus(c+1848,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1849,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1850,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1851,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1852,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1853,"awvalid_i", false,-1);
    tracep->declBit(c+1048,"awready_o", false,-1);
    tracep->declBus(c+1854,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1855,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1856,"wlast_i", false,-1);
    tracep->declBit(c+1857,"wvalid_i", false,-1);
    tracep->declBit(c+1049,"wready_o", false,-1);
    tracep->declBus(c+1050,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1806,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1051,"bvalid_o", false,-1);
    tracep->declBit(c+1858,"bready_i", false,-1);
    tracep->declBit(c+1091,"ar_state", false,-1);
    tracep->declBit(c+1092,"r_state", false,-1);
    tracep->declBit(c+1093,"aw_state", false,-1);
    tracep->declBit(c+1094,"w_state", false,-1);
    tracep->declBit(c+1860,"b_state", false,-1);
    tracep->declBus(c+1095,"araddr", false,-1, 31,0);
    tracep->declBus(c+1096,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1097,"wdata", false,-1, 31,0);
    tracep->declBus(c+1098,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1861,"wvalid", false,-1);
    tracep->declBit(c+1099,"flag_waddr", false,-1);
    tracep->declBit(c+1100,"flag_wdata", false,-1);
    tracep->declBit(c+1101,"flag_rdata", false,-1);
    tracep->declBit(c+1102,"flag_raddr", false,-1);
    tracep->declBit(c+1862,"flag_write", false,-1);
    tracep->declBus(c+1103,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1104,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1105,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1106,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1107,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1108,"lfsr_in", false,-1);
    tracep->declBus(c+1109,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1110,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1609,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1766,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1767,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1610,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1768,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1611,"a_in_src_i", false,-1);
    tracep->declBus(c+1612,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1613,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1614,"adder_a_src_i", false,-1);
    tracep->declBit(c+1615,"adder_out_src_i", false,-1);
    tracep->declBus(c+1616,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1617,"MemRead_i", false,-1);
    tracep->declBit(c+1618,"MemWrite_i", false,-1);
    tracep->declBus(c+1619,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1620,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1621,"wb_src_i", false,-1);
    tracep->declBit(c+1622,"csr_write_i", false,-1);
    tracep->declBit(c+1623,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1624,"reg_write_i", false,-1);
    tracep->declBus(c+1625,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1052,"exu_valid_i", false,-1);
    tracep->declBit(c+1053,"exu_ready_o", false,-1);
    tracep->declBus(c+1057,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1058,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1059,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1060,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1061,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1062,"MemRead_o", false,-1);
    tracep->declBit(c+1063,"MemWrite_o", false,-1);
    tracep->declBus(c+1064,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1065,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1066,"wb_src_o", false,-1);
    tracep->declBit(c+1067,"csr_write_o", false,-1);
    tracep->declBit(c+1068,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1069,"reg_write_o", false,-1);
    tracep->declBus(c+1070,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1071,"exu_valid_o", false,-1);
    tracep->declBit(c+1072,"exu_ready_i", false,-1);
    tracep->declBus(c+1112,"pc", false,-1, 31,0);
    tracep->declBus(c+1058,"rs1", false,-1, 31,0);
    tracep->declBus(c+1059,"rs2", false,-1, 31,0);
    tracep->declBus(c+1113,"imm", false,-1, 31,0);
    tracep->declBus(c+1114,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1115,"a_in_src", false,-1);
    tracep->declBus(c+1116,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1117,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1118,"adder_a_src", false,-1);
    tracep->declBit(c+1119,"adder_out_src", false,-1);
    tracep->declBus(c+1120,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1121,"a_in", false,-1, 31,0);
    tracep->declBus(c+1122,"b_in", false,-1, 31,0);
    tracep->declBus(c+1123,"a_out", false,-1, 31,0);
    tracep->declBus(c+1124,"add_out", false,-1, 31,0);
    tracep->declBus(c+1125,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1057,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1061,"npc", false,-1, 31,0);
    tracep->declBit(c+1126,"zero", false,-1);
    tracep->declBus(c+1805,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1863,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1864,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1127,"current_state", false,-1, 1,0);
    tracep->declBus(c+1128,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1121,"a", false,-1, 31,0);
    tracep->declBus(c+1122,"b", false,-1, 31,0);
    tracep->declBus(c+1120,"op", false,-1, 3,0);
    tracep->declBus(c+1057,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1126,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1865,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1058,"d0", false,-1, 31,0);
    tracep->declBus(c+1112,"d1", false,-1, 31,0);
    tracep->declBit(c+1115,"sel", false,-1);
    tracep->declBus(c+1121,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1865,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1059,"d0", false,-1, 31,0);
    tracep->declBus(c+1113,"d1", false,-1, 31,0);
    tracep->declBus(c+1866,"d2", false,-1, 31,0);
    tracep->declBus(c+1114,"d3", false,-1, 31,0);
    tracep->declBus(c+1116,"sel", false,-1, 1,0);
    tracep->declBus(c+1122,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1123,"a", false,-1, 31,0);
    tracep->declBus(c+1113,"b", false,-1, 31,0);
    tracep->declBus(c+1124,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1865,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1112,"d0", false,-1, 31,0);
    tracep->declBus(c+1058,"d1", false,-1, 31,0);
    tracep->declBit(c+1118,"sel", false,-1);
    tracep->declBus(c+1123,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1865,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1124,"d0", false,-1, 31,0);
    tracep->declBus(c+1114,"d1", false,-1, 31,0);
    tracep->declBit(c+1119,"sel", false,-1);
    tracep->declBus(c+1125,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1129,"pc4", false,-1, 31,0);
    tracep->declBus(c+1125,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1117,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1126,"zero", false,-1);
    tracep->declBus(c+1057,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1061,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1865,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1867,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBus(c+1867,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1865,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1012,"cpu_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1806,"cpu_arid_i", false,-1, 3,0);
    tracep->declBus(c+1807,"cpu_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1798,"cpu_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1805,"cpu_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1013,"cpu_arvalid_i", false,-1);
    tracep->declBit(c+1014,"cpu_arready_o", false,-1);
    tracep->declBus(c+1015,"cpu_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1840,"cpu_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1841,"cpu_rlast_o", false,-1);
    tracep->declBus(c+1842,"cpu_rid_o", false,-1, 3,0);
    tracep->declBit(c+1016,"cpu_rvalid_o", false,-1);
    tracep->declBit(c+1017,"cpu_rready_i", false,-1);
    tracep->declBus(c+1018,"mem_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1847,"mem_arid_o", false,-1, 3,0);
    tracep->declBus(c+1019,"mem_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1020,"mem_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1021,"mem_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1022,"mem_arvalid_o", false,-1);
    tracep->declBit(c+1765,"mem_arready_i", false,-1);
    tracep->declBus(c+113,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+114,"mem_rresp_i", false,-1, 1,0);
    tracep->declBit(c+115,"mem_rlast_i", false,-1);
    tracep->declBus(c+116,"mem_rid_i", false,-1, 3,0);
    tracep->declBit(c+117,"mem_rvalid_i", false,-1);
    tracep->declBit(c+1023,"mem_rready_o", false,-1);
    tracep->declBus(c+1868,"BLOCK_WORDS", false,-1, 31,0);
    tracep->declBus(c+1868,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+1868,"INDEX_BITS", false,-1, 31,0);
    tracep->declBus(c+1869,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+1868,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1130,"cpu_addr", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1131+i*4,"data_array", true,(i+0), 127,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1195+i*1,"tag_array", true,(i+0), 23,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+1211+i*1,"valid_array", true,(i+0));
    }
    tracep->declBus(c+1227,"req_tag", false,-1, 23,0);
    tracep->declBus(c+1228,"req_index", false,-1, 3,0);
    tracep->declBus(c+1229,"req_offset", false,-1, 3,0);
    tracep->declBus(c+1230,"counter", false,-1, 31,0);
    tracep->declBus(c+1231,"current_state", false,-1, 2,0);
    tracep->declBus(c+1769,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1232,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1607,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1608,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1766,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1767,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1420,"a5", false,-1, 31,0);
    tracep->declBus(c+1005,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1006,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1010,"idu_valid_i", false,-1);
    tracep->declBit(c+1011,"idu_ready_o", false,-1);
    tracep->declBus(c+1609,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1766,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1767,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1610,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1768,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1611,"a_in_src_o", false,-1);
    tracep->declBus(c+1612,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1613,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1614,"adder_a_src_o", false,-1);
    tracep->declBit(c+1615,"adder_out_src_o", false,-1);
    tracep->declBus(c+1616,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1617,"MemRead_o", false,-1);
    tracep->declBit(c+1618,"MemWrite_o", false,-1);
    tracep->declBus(c+1619,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1620,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1621,"wb_src_o", false,-1);
    tracep->declBit(c+1622,"csr_write_o", false,-1);
    tracep->declBit(c+1623,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1624,"reg_write_o", false,-1);
    tracep->declBus(c+1625,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1052,"idu_valid_o", false,-1);
    tracep->declBit(c+1053,"idu_ready_i", false,-1);
    tracep->declBit(c+1626,"csr_write_i", false,-1);
    tracep->declBus(c+1627,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1457+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1609,"pc", false,-1, 31,0);
    tracep->declBus(c+1628,"inst", false,-1, 31,0);
    tracep->declBus(c+1629,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1805,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1863,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1864,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1233,"current_state", false,-1, 1,0);
    tracep->declBus(c+1234,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1628,"inst", false,-1, 31,0);
    tracep->declBus(c+1616,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1630,"opcode", false,-1, 6,0);
    tracep->declBus(c+1631,"funct3", false,-1, 2,0);
    tracep->declBus(c+1632,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1626,"wen", false,-1);
    tracep->declBus(c+1628,"inst", false,-1, 31,0);
    tracep->declBus(c+1627,"wdata", false,-1, 31,0);
    tracep->declBus(c+1420,"NO", false,-1, 31,0);
    tracep->declBus(c+1609,"pc", false,-1, 31,0);
    tracep->declBus(c+1768,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1461+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1465,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1466,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1467,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1468,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1870,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1871,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1630,"opcode", false,-1, 6,0);
    tracep->declBus(c+1631,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1628,"inst", false,-1, 31,0);
    tracep->declBit(c+1611,"a_in_src", false,-1);
    tracep->declBus(c+1612,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1624,"reg_write", false,-1);
    tracep->declBus(c+1613,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1614,"adder_a_src", false,-1);
    tracep->declBit(c+1617,"MemRead", false,-1);
    tracep->declBit(c+1618,"MemWrite", false,-1);
    tracep->declBus(c+1629,"wmask", false,-1, 7,0);
    tracep->declBit(c+1621,"wb_src", false,-1);
    tracep->declBus(c+1620,"rmask", false,-1, 2,0);
    tracep->declBit(c+1622,"csr_write", false,-1);
    tracep->declBit(c+1615,"adder_out_src", false,-1);
    tracep->declBit(c+1623,"csr_wdata_src", false,-1);
    tracep->declBus(c+1630,"opcode", false,-1, 6,0);
    tracep->declBus(c+1631,"funct3", false,-1, 2,0);
    tracep->declBus(c+1632,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1865,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1628,"inst", false,-1, 31,0);
    tracep->declBus(c+1610,"data", false,-1, 31,0);
    tracep->declBus(c+1630,"opcode", false,-1, 6,0);
    tracep->declBus(c+1631,"funct3", false,-1, 2,0);
    tracep->declBus(c+1632,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1012,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1806,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1807,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1798,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1805,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1013,"arvalid_o", false,-1);
    tracep->declBit(c+1014,"arready_i", false,-1);
    tracep->declBus(c+1015,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1840,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1841,"rlast_i", false,-1);
    tracep->declBus(c+1842,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1016,"rvalid_i", false,-1);
    tracep->declBit(c+1017,"rready_o", false,-1);
    tracep->declBus(c+1007,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1008,"ifu_valid_i", false,-1);
    tracep->declBit(c+1009,"ifu_ready_o", false,-1);
    tracep->declBus(c+1005,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1006,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1010,"ifu_valid_o", false,-1);
    tracep->declBit(c+1011,"ifu_ready_i", false,-1);
    tracep->declBus(c+1235,"pc", false,-1, 31,0);
    tracep->declBus(c+1872,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1873,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1874,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1875,"lfsr_in", false,-1);
    tracep->declBit(c+1013,"arvalid", false,-1);
    tracep->declBus(c+1012,"araddr", false,-1, 31,0);
    tracep->declBus(c+1236,"inst", false,-1, 31,0);
    tracep->declBit(c+1017,"rready", false,-1);
    tracep->declBus(c+1876,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1877+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1909,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1797,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1794,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1798,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1799,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1808,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+1237,"current_state", false,-1, 2,0);
    tracep->declBus(c+1238,"next_state", false,-1, 2,0);
    tracep->declBus(c+1239,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+1240,"ready_flag", false,-1);
    tracep->declBit(c+1241,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1057,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1058,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1059,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1060,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1061,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1062,"MemRead_i", false,-1);
    tracep->declBit(c+1063,"MemWrite_i", false,-1);
    tracep->declBus(c+1064,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1065,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1066,"wb_src_i", false,-1);
    tracep->declBit(c+1067,"csr_write_i", false,-1);
    tracep->declBit(c+1068,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1069,"reg_write_i", false,-1);
    tracep->declBus(c+1070,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1071,"lsu_valid_i", false,-1);
    tracep->declBit(c+1072,"lsu_ready_o", false,-1);
    tracep->declBus(c+1073,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1074,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1075,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1076,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1077,"npc_o", false,-1, 31,0);
    tracep->declBus(c+1078,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1079,"wb_src_o", false,-1);
    tracep->declBit(c+1080,"csr_write_o", false,-1);
    tracep->declBit(c+1081,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1082,"reg_write_o", false,-1);
    tracep->declBus(c+1083,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1084,"lsu_valid_o", false,-1);
    tracep->declBit(c+1085,"lsu_ready_i", false,-1);
    tracep->declBus(c+1024,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1806,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1807,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1025,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1805,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1026,"arvalid_o", false,-1);
    tracep->declBit(c+118,"arready_i", false,-1);
    tracep->declBus(c+119,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+120,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+121,"rlast_i", false,-1);
    tracep->declBus(c+122,"rid_i", false,-1, 3,0);
    tracep->declBit(c+123,"rvalid_i", false,-1);
    tracep->declBit(c+1027,"rready_o", false,-1);
    tracep->declBus(c+1028,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1806,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1807,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1029,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1805,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1030,"awvalid_o", false,-1);
    tracep->declBit(c+1715,"awready_i", false,-1);
    tracep->declBus(c+1031,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1032,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1033,"wlast_o", false,-1);
    tracep->declBit(c+1034,"wvalid_o", false,-1);
    tracep->declBit(c+1716,"wready_i", false,-1);
    tracep->declBus(c+1586,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1587,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1588,"bvalid_i", false,-1);
    tracep->declBit(c+1035,"bready_o", false,-1);
    tracep->declBus(c+1073,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1074,"rs1", false,-1, 31,0);
    tracep->declBus(c+1910,"rs2", false,-1, 31,0);
    tracep->declBus(c+1911,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1078,"rmask", false,-1, 2,0);
    tracep->declBit(c+1242,"flag", false,-1);
    tracep->declBit(c+1912,"wvalid_tmp", false,-1);
    tracep->declBus(c+1913,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1914,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1915,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1916,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1917,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1918,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1919,"lfsr_in", false,-1);
    tracep->declBit(c+1026,"arvalid", false,-1);
    tracep->declBus(c+1024,"araddr", false,-1, 31,0);
    tracep->declBit(c+1027,"rready", false,-1);
    tracep->declBus(c+1028,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1030,"awvalid", false,-1);
    tracep->declBus(c+1031,"wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1034,"wvalid", false,-1);
    tracep->declBit(c+1035,"bready", false,-1);
    tracep->declBus(c+1920,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1921+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1953,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1954,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1955+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1987,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1988+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2020+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+2052,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1805,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1863,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1864,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+2053,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1243,"current_state", false,-1, 1,0);
    tracep->declBus(c+1244,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+2054,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1865,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBus(c+1054,"wdata", false,-1, 31,0);
    tracep->declBus(c+1055,"waddr", false,-1, 4,0);
    tracep->declBit(c+1056,"wen", false,-1);
    tracep->declBus(c+1607,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1766,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1608,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1767,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1420,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1469+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1501+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1073,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1074,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1075,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1076,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1077,"npc_i", false,-1, 31,0);
    tracep->declBus(c+1078,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1079,"wb_src_i", false,-1);
    tracep->declBit(c+1080,"csr_write_i", false,-1);
    tracep->declBit(c+1081,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1082,"reg_write_i", false,-1);
    tracep->declBus(c+1083,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1084,"wbu_valid_i", false,-1);
    tracep->declBit(c+1085,"wbu_ready_o", false,-1);
    tracep->declBus(c+1007,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1008,"wbu_valid_o", false,-1);
    tracep->declBit(c+1009,"wbu_ready_i", false,-1);
    tracep->declBus(c+1627,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1054,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1626,"csr_write_o", false,-1);
    tracep->declBit(c+1056,"reg_write_o", false,-1);
    tracep->declBus(c+1055,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1245,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1246,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1247,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1248,"rs1", false,-1, 31,0);
    tracep->declBus(c+1249,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1250,"rmask", false,-1, 2,0);
    tracep->declBit(c+1251,"wb_src", false,-1);
    tracep->declBit(c+1252,"csr_wdata_src", false,-1);
    tracep->declBit(c+1253,"difftest_check", false,-1);
    tracep->declBit(c+1254,"difftest_check_flag", false,-1);
    tracep->declBus(c+1805,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1863,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1864,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1255,"current_state", false,-1, 1,0);
    tracep->declBus(c+1256,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1865,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1248,"d0", false,-1, 31,0);
    tracep->declBus(c+1249,"d1", false,-1, 31,0);
    tracep->declBit(c+1252,"sel", false,-1);
    tracep->declBus(c+1627,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1246,"read_data", false,-1, 31,0);
    tracep->declBus(c+1257,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1250,"rmask", false,-1, 2,0);
    tracep->declBus(c+1245,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1258,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1259,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1260,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1261,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1262,"byte3", false,-1, 31,0);
    tracep->declBus(c+1263,"byte2", false,-1, 31,0);
    tracep->declBus(c+1264,"byte1", false,-1, 31,0);
    tracep->declBus(c+1265,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1865,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1247,"d0", false,-1, 31,0);
    tracep->declBus(c+1245,"d1", false,-1, 31,0);
    tracep->declBit(c+1251,"sel", false,-1);
    tracep->declBus(c+1054,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1764,"rst_n", false,-1);
    tracep->declBus(c+1036,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1037,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1038,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1039,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1040,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1041,"axi_arvalid_i", false,-1);
    tracep->declBit(c+124,"axi_arready_o", false,-1);
    tracep->declBus(c+125,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+126,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+127,"axi_rlast_o", false,-1);
    tracep->declBus(c+128,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+129,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1042,"axi_rready_i", false,-1);
    tracep->declBus(c+1599,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1806,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1807,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1600,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1805,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1002,"axi_awvalid_i", false,-1);
    tracep->declBit(c+1688,"axi_awready_o", false,-1);
    tracep->declBus(c+1601,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1602,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1603,"axi_wlast_i", false,-1);
    tracep->declBit(c+1003,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1689,"axi_wready_o", false,-1);
    tracep->declBus(c+1410,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1409,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1408,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1004,"axi_bready_i", false,-1);
    tracep->declBus(c+46,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+45,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+47,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+48,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+49,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+60,"sram_arvalid_o", false,-1);
    tracep->declBit(c+111,"sram_arready_i", false,-1);
    tracep->declBus(c+1760,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1761,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1636,"sram_rlast_i", false,-1);
    tracep->declBus(c+1635,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1634,"sram_rvalid_i", false,-1);
    tracep->declBit(c+61,"sram_rready_o", false,-1);
    tracep->declBus(c+1599,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1806,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1807,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1600,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1805,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1002,"sram_awvalid_o", false,-1);
    tracep->declBit(c+1688,"sram_awready_i", false,-1);
    tracep->declBus(c+1601,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1602,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1603,"sram_wlast_o", false,-1);
    tracep->declBit(c+1003,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1689,"sram_wready_i", false,-1);
    tracep->declBus(c+1410,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1409,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1408,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1004,"sram_bready_o", false,-1);
    tracep->declBus(c+73,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+74,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+75,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+76,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+77,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+78,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1043,"clint_arready_i", false,-1);
    tracep->declBus(c+1044,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1045,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1046,"clint_rlast_i", false,-1);
    tracep->declBus(c+1806,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1047,"clint_rvalid_i", false,-1);
    tracep->declBit(c+79,"clint_rready_o", false,-1);
    tracep->declBus(c+1848,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1849,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1850,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1851,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1852,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1853,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1048,"clint_awready_i", false,-1);
    tracep->declBus(c+1854,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1855,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1856,"clint_wlast_o", false,-1);
    tracep->declBit(c+1857,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1049,"clint_wready_i", false,-1);
    tracep->declBus(c+1050,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1806,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1051,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1858,"clint_bready_o", false,-1);
    tracep->declBit(c+80,"ar_switch", false,-1);
    tracep->declBit(c+81,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"io_d", false,-1);
    tracep->declBit(c+588,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"io_d", false,-1);
    tracep->declBit(c+588,"io_q", false,-1);
    tracep->declBit(c+588,"sync_0", false,-1);
    tracep->declBit(c+589,"sync_1", false,-1);
    tracep->declBit(c+590,"sync_2", false,-1);
    tracep->declBit(c+591,"sync_3", false,-1);
    tracep->declBit(c+592,"sync_4", false,-1);
    tracep->declBit(c+593,"sync_5", false,-1);
    tracep->declBit(c+594,"sync_6", false,-1);
    tracep->declBit(c+595,"sync_7", false,-1);
    tracep->declBit(c+596,"sync_8", false,-1);
    tracep->declBit(c+597,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1362,"auto_in_psel", false,-1);
    tracep->declBit(c+1363,"auto_in_penable", false,-1);
    tracep->declBit(c+1349,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1361,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1348,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+710,"auto_in_pready", false,-1);
    tracep->declBit(c+1803,"auto_in_pslverr", false,-1);
    tracep->declBus(c+711,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1721,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1722,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1723,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1724,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1725,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1726,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1727,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1728,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1729,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1730,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1533,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1362,"in_psel", false,-1);
    tracep->declBit(c+1363,"in_penable", false,-1);
    tracep->declBus(c+1348,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1349,"in_pwrite", false,-1);
    tracep->declBus(c+1350,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+710,"in_pready", false,-1);
    tracep->declBus(c+711,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1803,"in_pslverr", false,-1);
    tracep->declBus(c+1721,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1722,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1723,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1724,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1725,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1726,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1727,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1728,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1729,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1730,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+716,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+711,"rdata", false,-1, 31,0);
    tracep->declBus(c+717,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+710,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+718,"num", false,-1, 3,0);
    tracep->declBus(c+1723,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+719,"num", false,-1, 3,0);
    tracep->declBus(c+1724,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+720,"num", false,-1, 3,0);
    tracep->declBus(c+1725,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+721,"num", false,-1, 3,0);
    tracep->declBus(c+1726,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+722,"num", false,-1, 3,0);
    tracep->declBus(c+1727,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+723,"num", false,-1, 3,0);
    tracep->declBus(c+1728,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+724,"num", false,-1, 3,0);
    tracep->declBus(c+1729,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+725,"num", false,-1, 3,0);
    tracep->declBus(c+1730,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1359,"auto_in_psel", false,-1);
    tracep->declBit(c+1360,"auto_in_penable", false,-1);
    tracep->declBit(c+1349,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1361,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1348,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+145,"auto_in_pready", false,-1);
    tracep->declBit(c+1803,"auto_in_pslverr", false,-1);
    tracep->declBus(c+146,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1731,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1732,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1533,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1359,"in_psel", false,-1);
    tracep->declBit(c+1360,"in_penable", false,-1);
    tracep->declBus(c+1348,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1349,"in_pwrite", false,-1);
    tracep->declBus(c+1350,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+145,"in_pready", false,-1);
    tracep->declBus(c+146,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1803,"in_pslverr", false,-1);
    tracep->declBit(c+1731,"ps2_clk", false,-1);
    tracep->declBit(c+1732,"ps2_data", false,-1);
    tracep->declBus(c+598,"data_r", false,-1, 7,0);
    tracep->declBus(c+599,"old_data", false,-1, 7,0);
    tracep->declBus(c+600,"data_asic", false,-1, 7,0);
    tracep->declBus(c+601,"buffer", false,-1, 7,0);
    tracep->declBit(c+602,"ready", false,-1);
    tracep->declBit(c+603,"nextdata_n", false,-1);
    tracep->declBit(c+604,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1770,"clrn", false,-1);
    tracep->declBit(c+1731,"ps2_clk", false,-1);
    tracep->declBit(c+1732,"ps2_data", false,-1);
    tracep->declBit(c+603,"nextdata_n", false,-1);
    tracep->declBus(c+601,"data", false,-1, 7,0);
    tracep->declBit(c+602,"ready", false,-1);
    tracep->declBit(c+604,"overflow", false,-1);
    tracep->declBus(c+605,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+606+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+614,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+615,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+616,"count", false,-1, 3,0);
    tracep->declBus(c+617,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+618,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1699,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1700,"auto_in_wvalid", false,-1);
    tracep->declBit(c+383,"auto_in_arready", false,-1);
    tracep->declBit(c+67,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+384,"auto_in_rvalid", false,-1);
    tracep->declBus(c+385,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+386,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+384,"state", false,-1);
    tracep->declBus(c+386,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+385,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+82,"raddr", false,-1, 31,0);
    tracep->declBit(c+83,"ren", false,-1);
    tracep->declBus(c+84,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1364,"auto_in_psel", false,-1);
    tracep->declBit(c+1365,"auto_in_penable", false,-1);
    tracep->declBit(c+1349,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1345,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1749,"auto_in_pready", false,-1);
    tracep->declBit(c+1803,"auto_in_pslverr", false,-1);
    tracep->declBus(c+147,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1742,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1633,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1743,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1345,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1364,"in_psel", false,-1);
    tracep->declBit(c+1365,"in_penable", false,-1);
    tracep->declBus(c+1348,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1349,"in_pwrite", false,-1);
    tracep->declBus(c+1350,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1749,"in_pready", false,-1);
    tracep->declBus(c+147,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1803,"in_pslverr", false,-1);
    tracep->declBit(c+1742,"qspi_sck", false,-1);
    tracep->declBit(c+1633,"qspi_ce_n", false,-1);
    tracep->declBus(c+1743,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1743,"din", false,-1, 3,0);
    tracep->declBus(c+1771,"dout", false,-1, 3,0);
    tracep->declBus(c+1646,"douten", false,-1, 3,0);
    tracep->declBit(c+1772,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1719,"clk_i", false,-1);
    tracep->declBit(c+1720,"rst_i", false,-1);
    tracep->declBus(c+1345,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1350,"dat_i", false,-1, 31,0);
    tracep->declBus(c+147,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1351,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1364,"cyc_i", false,-1);
    tracep->declBit(c+1364,"stb_i", false,-1);
    tracep->declBit(c+1772,"ack_o", false,-1);
    tracep->declBit(c+1349,"we_i", false,-1);
    tracep->declBit(c+1742,"sck", false,-1);
    tracep->declBit(c+1633,"ce_n", false,-1);
    tracep->declBus(c+1743,"din", false,-1, 3,0);
    tracep->declBus(c+1771,"dout", false,-1, 3,0);
    tracep->declBus(c+1646,"douten", false,-1, 3,0);
    tracep->declBus(c+1805,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1863,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1864,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+726,"mr_sck", false,-1);
    tracep->declBit(c+727,"mr_ce_n", false,-1);
    tracep->declBus(c+1743,"mr_din", false,-1, 3,0);
    tracep->declBus(c+728,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+729,"mr_doe", false,-1);
    tracep->declBit(c+730,"mw_sck", false,-1);
    tracep->declBit(c+731,"mw_ce_n", false,-1);
    tracep->declBus(c+1743,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1551,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+732,"mw_doe", false,-1);
    tracep->declBit(c+1647,"mr_rd", false,-1);
    tracep->declBit(c+733,"mr_done", false,-1);
    tracep->declBit(c+1648,"mw_wr", false,-1);
    tracep->declBit(c+1552,"mw_done", false,-1);
    tracep->declBit(c+1364,"wb_valid", false,-1);
    tracep->declBit(c+1534,"wb_we", false,-1);
    tracep->declBit(c+1535,"wb_re", false,-1);
    tracep->declBus(c+1566,"state", false,-1, 1,0);
    tracep->declBus(c+1773,"nstate", false,-1, 1,0);
    tracep->declBus(c+1774,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1775,"qpi_sck", false,-1);
    tracep->declBus(c+1536,"size", false,-1, 2,0);
    tracep->declBus(c+1537,"byte0", false,-1, 7,0);
    tracep->declBus(c+1538,"byte1", false,-1, 7,0);
    tracep->declBus(c+1539,"byte2", false,-1, 7,0);
    tracep->declBus(c+1540,"byte3", false,-1, 7,0);
    tracep->declBus(c+1541,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1770,"rst_n", false,-1);
    tracep->declBus(c+1542,"addr", false,-1, 23,0);
    tracep->declBit(c+1647,"rd", false,-1);
    tracep->declBus(c+1808,"size", false,-1, 2,0);
    tracep->declBit(c+733,"done", false,-1);
    tracep->declBus(c+147,"line", false,-1, 31,0);
    tracep->declBit(c+726,"sck", false,-1);
    tracep->declBit(c+727,"ce_n", false,-1);
    tracep->declBus(c+1743,"din", false,-1, 3,0);
    tracep->declBus(c+728,"dout", false,-1, 3,0);
    tracep->declBit(c+729,"douten", false,-1);
    tracep->declBus(c+2055,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2056,"READ", false,-1, 0,0);
    tracep->declBus(c+2057,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+734,"state", false,-1);
    tracep->declBit(c+1649,"nstate", false,-1);
    tracep->declBus(c+735,"counter", false,-1, 7,0);
    tracep->declBus(c+736,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+619+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+2058,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+737,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1770,"rst_n", false,-1);
    tracep->declBus(c+1543,"addr", false,-1, 23,0);
    tracep->declBus(c+1541,"line", false,-1, 31,0);
    tracep->declBus(c+1536,"size", false,-1, 2,0);
    tracep->declBit(c+1648,"wr", false,-1);
    tracep->declBit(c+1552,"done", false,-1);
    tracep->declBit(c+730,"sck", false,-1);
    tracep->declBit(c+731,"ce_n", false,-1);
    tracep->declBus(c+1743,"din", false,-1, 3,0);
    tracep->declBus(c+1551,"dout", false,-1, 3,0);
    tracep->declBit(c+732,"douten", false,-1);
    tracep->declBus(c+2055,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2056,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1544,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+738,"state", false,-1);
    tracep->declBit(c+1650,"nstate", false,-1);
    tracep->declBus(c+739,"counter", false,-1, 7,0);
    tracep->declBus(c+740,"saddr", false,-1, 23,0);
    tracep->declBus(c+2059,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+102,"auto_in_awready", false,-1);
    tracep->declBit(c+1391,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1392,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1393,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1394,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1395,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"auto_in_wready", false,-1);
    tracep->declBit(c+1397,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1398,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1399,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1400,"auto_in_wlast", false,-1);
    tracep->declBit(c+1401,"auto_in_bready", false,-1);
    tracep->declBit(c+1565,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1563,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1805,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"auto_in_arready", false,-1);
    tracep->declBit(c+44,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1755,"auto_in_rready", false,-1);
    tracep->declBit(c+1562,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1563,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+715,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1805,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1564,"auto_in_rlast", false,-1);
    tracep->declBit(c+1744,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1559,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+705,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+706,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+707,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+708,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1745,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1560,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1561,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1592,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+102,"in_awready", false,-1);
    tracep->declBit(c+1391,"in_awvalid", false,-1);
    tracep->declBus(c+1393,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1392,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1394,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1395,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1396,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"in_wready", false,-1);
    tracep->declBit(c+1397,"in_wvalid", false,-1);
    tracep->declBus(c+1398,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1399,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1400,"in_wlast", false,-1);
    tracep->declBit(c+1401,"in_bready", false,-1);
    tracep->declBit(c+1565,"in_bvalid", false,-1);
    tracep->declBus(c+1805,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1563,"in_bid", false,-1, 3,0);
    tracep->declBit(c+101,"in_arready", false,-1);
    tracep->declBit(c+44,"in_arvalid", false,-1);
    tracep->declBus(c+46,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+45,"in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1755,"in_rready", false,-1);
    tracep->declBit(c+1562,"in_rvalid", false,-1);
    tracep->declBus(c+1805,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+715,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1564,"in_rlast", false,-1);
    tracep->declBus(c+1563,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1744,"sdram_clk", false,-1);
    tracep->declBit(c+1559,"sdram_cke", false,-1);
    tracep->declBit(c+705,"sdram_cs", false,-1);
    tracep->declBit(c+706,"sdram_ras", false,-1);
    tracep->declBit(c+707,"sdram_cas", false,-1);
    tracep->declBit(c+708,"sdram_we", false,-1);
    tracep->declBus(c+1745,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1560,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1561,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1592,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+741,"sdram_dout_en", false,-1);
    tracep->declBus(c+742,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1719,"clk_i", false,-1);
    tracep->declBit(c+1720,"rst_i", false,-1);
    tracep->declBit(c+1391,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1393,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1392,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1394,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1396,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1397,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1398,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1399,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1400,"inport_wlast_i", false,-1);
    tracep->declBit(c+1401,"inport_bready_i", false,-1);
    tracep->declBit(c+44,"inport_arvalid_i", false,-1);
    tracep->declBus(c+46,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+45,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+47,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+49,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1755,"inport_rready_i", false,-1);
    tracep->declBus(c+1592,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+102,"inport_awready_o", false,-1);
    tracep->declBit(c+103,"inport_wready_o", false,-1);
    tracep->declBit(c+1565,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1805,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1563,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+101,"inport_arready_o", false,-1);
    tracep->declBit(c+1562,"inport_rvalid_o", false,-1);
    tracep->declBus(c+715,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1805,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1563,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1564,"inport_rlast_o", false,-1);
    tracep->declBit(c+1744,"sdram_clk_o", false,-1);
    tracep->declBit(c+1559,"sdram_cke_o", false,-1);
    tracep->declBit(c+705,"sdram_cs_o", false,-1);
    tracep->declBit(c+706,"sdram_ras_o", false,-1);
    tracep->declBit(c+707,"sdram_cas_o", false,-1);
    tracep->declBit(c+708,"sdram_we_o", false,-1);
    tracep->declBus(c+1561,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1745,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1560,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+742,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+741,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1792,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1869,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1796,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2060,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+130,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+131,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+132,"ram_rd_w", false,-1);
    tracep->declBit(c+1567,"ram_accept_w", false,-1);
    tracep->declBus(c+1398,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+743,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1776,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+744,"ram_ack_w", false,-1);
    tracep->declBit(c+1803,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1719,"clk_i", false,-1);
    tracep->declBit(c+1720,"rst_i", false,-1);
    tracep->declBit(c+1391,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1393,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1392,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1394,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1396,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1397,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1398,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1399,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1400,"axi_wlast_i", false,-1);
    tracep->declBit(c+1401,"axi_bready_i", false,-1);
    tracep->declBit(c+44,"axi_arvalid_i", false,-1);
    tracep->declBus(c+46,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+45,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+47,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+49,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1755,"axi_rready_i", false,-1);
    tracep->declBit(c+1567,"ram_accept_i", false,-1);
    tracep->declBit(c+744,"ram_ack_i", false,-1);
    tracep->declBit(c+1803,"ram_error_i", false,-1);
    tracep->declBus(c+743,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+102,"axi_awready_o", false,-1);
    tracep->declBit(c+103,"axi_wready_o", false,-1);
    tracep->declBit(c+1565,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1805,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1563,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+101,"axi_arready_o", false,-1);
    tracep->declBit(c+1562,"axi_rvalid_o", false,-1);
    tracep->declBus(c+715,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1805,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1563,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1564,"axi_rlast_o", false,-1);
    tracep->declBus(c+131,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+132,"ram_rd_o", false,-1);
    tracep->declBus(c+1776,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+130,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1398,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+745,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+746,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+747,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+748,"req_rd_q", false,-1);
    tracep->declBit(c+749,"req_wr_q", false,-1);
    tracep->declBus(c+750,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+751,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+752,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+753,"req_prio_q", false,-1);
    tracep->declBit(c+754,"req_hold_rd_q", false,-1);
    tracep->declBit(c+755,"req_hold_wr_q", false,-1);
    tracep->declBit(c+756,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+133,"req_push_w", false,-1);
    tracep->declBus(c+1777,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+757,"req_out_valid_w", false,-1);
    tracep->declBus(c+1568,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+134,"resp_accept_w", false,-1);
    tracep->declBit(c+1778,"resp_is_write_w", false,-1);
    tracep->declBit(c+1779,"resp_is_read_w", false,-1);
    tracep->declBit(c+1564,"resp_is_last_w", false,-1);
    tracep->declBus(c+1563,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+758,"resp_valid_w", false,-1);
    tracep->declBit(c+759,"write_prio_w", false,-1);
    tracep->declBit(c+760,"read_prio_w", false,-1);
    tracep->declBit(c+135,"write_active_w", false,-1);
    tracep->declBit(c+132,"read_active_w", false,-1);
    tracep->declBus(c+130,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1780,"wr_w", false,-1);
    tracep->declBit(c+132,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+2061,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1868,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2060,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1719,"clk_i", false,-1);
    tracep->declBit(c+1720,"rst_i", false,-1);
    tracep->declBus(c+1777,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+133,"push_i", false,-1);
    tracep->declBit(c+134,"pop_i", false,-1);
    tracep->declBus(c+1568,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+756,"accept_o", false,-1);
    tracep->declBit(c+757,"valid_o", false,-1);
    tracep->declBus(c+2062,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+761+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+765,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+766,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+767,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1865,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1868,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2060,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1719,"clk_i", false,-1);
    tracep->declBit(c+1720,"rst_i", false,-1);
    tracep->declBus(c+743,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+744,"push_i", false,-1);
    tracep->declBit(c+134,"pop_i", false,-1);
    tracep->declBus(c+715,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+768,"accept_o", false,-1);
    tracep->declBit(c+758,"valid_o", false,-1);
    tracep->declBus(c+2062,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+769+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+773,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+774,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+775,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1719,"clk_i", false,-1);
    tracep->declBit(c+1720,"rst_i", false,-1);
    tracep->declBus(c+131,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+132,"inport_rd_i", false,-1);
    tracep->declBus(c+1776,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+130,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1398,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1592,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1567,"inport_accept_o", false,-1);
    tracep->declBit(c+744,"inport_ack_o", false,-1);
    tracep->declBit(c+1803,"inport_error_o", false,-1);
    tracep->declBus(c+743,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1744,"sdram_clk_o", false,-1);
    tracep->declBit(c+1559,"sdram_cke_o", false,-1);
    tracep->declBit(c+705,"sdram_cs_o", false,-1);
    tracep->declBit(c+706,"sdram_ras_o", false,-1);
    tracep->declBit(c+707,"sdram_cas_o", false,-1);
    tracep->declBit(c+708,"sdram_we_o", false,-1);
    tracep->declBus(c+1561,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1745,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1560,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+742,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+741,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1792,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1869,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1796,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2060,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+2060,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1868,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1868,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+2063,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+2064,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+2065,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+2066,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1868,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+2067,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2068,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2069,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2070,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+2071,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+2072,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2073,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+2074,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1868,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1806,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+2073,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+2072,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2068,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+2070,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+2069,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+2071,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+2067,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+2075,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2076,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2077,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+2077,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1865,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+2077,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+2060,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2060,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2061,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+130,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+131,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+132,"ram_rd_w", false,-1);
    tracep->declBit(c+1567,"ram_accept_w", false,-1);
    tracep->declBus(c+1398,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+743,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+744,"ram_ack_w", false,-1);
    tracep->declBit(c+136,"ram_req_w", false,-1);
    tracep->declBus(c+776,"command_q", false,-1, 3,0);
    tracep->declBus(c+1569,"addr_q", false,-1, 12,0);
    tracep->declBus(c+742,"data_q", false,-1, 31,0);
    tracep->declBit(c+777,"data_rd_en_q", false,-1);
    tracep->declBus(c+1561,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1559,"cke_q", false,-1);
    tracep->declBus(c+1560,"bank_q", false,-1, 1,0);
    tracep->declBus(c+743,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+778,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1592,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+779,"refresh_q", false,-1);
    tracep->declBus(c+780,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+781+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1570,"state_q", false,-1, 3,0);
    tracep->declBus(c+137,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+138,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+785,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+786,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+139,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+140,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+141,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1868,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+787,"delay_q", false,-1, 3,0);
    tracep->declBus(c+142,"delay_r", false,-1, 3,0);
    tracep->declBus(c+2078,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1571,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+788,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+789,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+790,"idx", false,-1, 31,0);
    tracep->declBus(c+791,"rd_q", false,-1, 3,0);
    tracep->declBit(c+744,"ack_q", false,-1);
    tracep->declArray(c+1572,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1369,"auto_in_psel", false,-1);
    tracep->declBit(c+1370,"auto_in_penable", false,-1);
    tracep->declBit(c+1349,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1358,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1348,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+712,"auto_in_pready", false,-1);
    tracep->declBit(c+713,"auto_in_pslverr", false,-1);
    tracep->declBus(c+714,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+704,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1557,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1558,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1741,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+2079,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2080,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+2081,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1545,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1369,"in_psel", false,-1);
    tracep->declBit(c+1370,"in_penable", false,-1);
    tracep->declBus(c+1348,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1349,"in_pwrite", false,-1);
    tracep->declBus(c+1350,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+712,"in_pready", false,-1);
    tracep->declBus(c+714,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+713,"in_pslverr", false,-1);
    tracep->declBit(c+704,"spi_sck", false,-1);
    tracep->declBus(c+1557,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1558,"spi_mosi", false,-1);
    tracep->declBit(c+1741,"spi_miso", false,-1);
    tracep->declBit(c+792,"spi_irq_out", false,-1);
    tracep->declBus(c+2082,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+2083,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+2082,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+2084,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+2085,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+2086,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1806,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2073,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+2072,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+2068,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+2070,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+2069,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+2071,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+2067,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+2075,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+2076,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+2087,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+793,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1553,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+794,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+795,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+796,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+797,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+798,"wb_we_i", false,-1);
    tracep->declBit(c+799,"wb_stb_i", false,-1);
    tracep->declBit(c+800,"wb_cyc_i", false,-1);
    tracep->declBit(c+801,"wb_ack_o", false,-1);
    tracep->declBit(c+1803,"wb_err_o", false,-1);
    tracep->declBit(c+802,"wb_int_o", false,-1);
    tracep->declBit(c+803,"done", false,-1);
    tracep->declBus(c+804,"paddr", false,-1, 31,0);
    tracep->declQuad(c+805,"data", false,-1, 63,0);
    tracep->declBit(c+807,"is_flash_access", false,-1);
    tracep->declBus(c+808,"tmp", false,-1, 31,0);
    tracep->declQuad(c+809,"tmp64", false,-1, 63,0);
    tracep->declBus(c+811,"counter", false,-1, 7,0);
    tracep->declBit(c+812,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+2088,"Tp", false,-1, 31,0);
    tracep->declBit(c+1719,"wb_clk_i", false,-1);
    tracep->declBit(c+1720,"wb_rst_i", false,-1);
    tracep->declBus(c+794,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+795,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+796,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+797,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+798,"wb_we_i", false,-1);
    tracep->declBit(c+799,"wb_stb_i", false,-1);
    tracep->declBit(c+800,"wb_cyc_i", false,-1);
    tracep->declBit(c+801,"wb_ack_o", false,-1);
    tracep->declBit(c+1803,"wb_err_o", false,-1);
    tracep->declBit(c+802,"wb_int_o", false,-1);
    tracep->declBus(c+1557,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+704,"sclk_pad_o", false,-1);
    tracep->declBit(c+1558,"mosi_pad_o", false,-1);
    tracep->declBit(c+1741,"miso_pad_i", false,-1);
    tracep->declBus(c+813,"divider", false,-1, 15,0);
    tracep->declBus(c+814,"ctrl", false,-1, 13,0);
    tracep->declBus(c+815,"ss", false,-1, 7,0);
    tracep->declBus(c+816,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+817,"rx", false,-1, 127,0);
    tracep->declBit(c+821,"rx_negedge", false,-1);
    tracep->declBit(c+822,"tx_negedge", false,-1);
    tracep->declBus(c+823,"char_len", false,-1, 6,0);
    tracep->declBit(c+824,"go", false,-1);
    tracep->declBit(c+825,"lsb", false,-1);
    tracep->declBit(c+826,"ie", false,-1);
    tracep->declBit(c+827,"ass", false,-1);
    tracep->declBit(c+828,"spi_divider_sel", false,-1);
    tracep->declBit(c+829,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+830,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+831,"spi_ss_sel", false,-1);
    tracep->declBit(c+832,"tip", false,-1);
    tracep->declBit(c+833,"pos_edge", false,-1);
    tracep->declBit(c+834,"neg_edge", false,-1);
    tracep->declBit(c+835,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+2088,"Tp", false,-1, 31,0);
    tracep->declBit(c+1719,"clk_in", false,-1);
    tracep->declBit(c+1720,"rst", false,-1);
    tracep->declBit(c+832,"enable", false,-1);
    tracep->declBit(c+824,"go", false,-1);
    tracep->declBit(c+835,"last_clk", false,-1);
    tracep->declBus(c+813,"divider", false,-1, 15,0);
    tracep->declBit(c+704,"clk_out", false,-1);
    tracep->declBit(c+833,"pos_edge", false,-1);
    tracep->declBit(c+834,"neg_edge", false,-1);
    tracep->declBus(c+836,"cnt", false,-1, 15,0);
    tracep->declBit(c+837,"cnt_zero", false,-1);
    tracep->declBit(c+838,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+2088,"Tp", false,-1, 31,0);
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1720,"rst", false,-1);
    tracep->declBus(c+839,"latch", false,-1, 3,0);
    tracep->declBus(c+797,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+823,"len", false,-1, 6,0);
    tracep->declBit(c+825,"lsb", false,-1);
    tracep->declBit(c+824,"go", false,-1);
    tracep->declBit(c+833,"pos_edge", false,-1);
    tracep->declBit(c+834,"neg_edge", false,-1);
    tracep->declBit(c+821,"rx_negedge", false,-1);
    tracep->declBit(c+822,"tx_negedge", false,-1);
    tracep->declBit(c+832,"tip", false,-1);
    tracep->declBit(c+835,"last", false,-1);
    tracep->declBus(c+795,"p_in", false,-1, 31,0);
    tracep->declArray(c+817,"p_out", false,-1, 127,0);
    tracep->declBit(c+704,"s_clk", false,-1);
    tracep->declBit(c+1741,"s_in", false,-1);
    tracep->declBit(c+1558,"s_out", false,-1);
    tracep->declBus(c+840,"cnt", false,-1, 7,0);
    tracep->declArray(c+817,"data", false,-1, 127,0);
    tracep->declBus(c+841,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+842,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+843,"rx_clk", false,-1);
    tracep->declBit(c+844,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1366,"auto_in_psel", false,-1);
    tracep->declBit(c+1367,"auto_in_penable", false,-1);
    tracep->declBit(c+1349,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1361,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1348,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1368,"auto_in_pready", false,-1);
    tracep->declBit(c+1803,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1750,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1739,"uart_rx", false,-1);
    tracep->declBit(c+1740,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1366,"in_psel", false,-1);
    tracep->declBit(c+1367,"in_penable", false,-1);
    tracep->declBus(c+1348,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1368,"in_pready", false,-1);
    tracep->declBit(c+1803,"in_pslverr", false,-1);
    tracep->declBus(c+1533,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1349,"in_pwrite", false,-1);
    tracep->declBus(c+1750,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1350,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1739,"uart_rx", false,-1);
    tracep->declBit(c+1740,"uart_tx", false,-1);
    tracep->declBit(c+845,"rtsn", false,-1);
    tracep->declBit(c+1803,"ctsn", false,-1);
    tracep->declBit(c+846,"dtr_pad_o", false,-1);
    tracep->declBit(c+1803,"dsr_pad_i", false,-1);
    tracep->declBit(c+1803,"ri_pad_i", false,-1);
    tracep->declBit(c+1803,"dcd_pad_i", false,-1);
    tracep->declBit(c+847,"interrupt", false,-1);
    tracep->declBit(c+1781,"reg_we", false,-1);
    tracep->declBit(c+1782,"reg_re", false,-1);
    tracep->declBus(c+1546,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1547,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+623,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1554,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+848,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1720,"wb_rst_i", false,-1);
    tracep->declBus(c+1546,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1548,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1554,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1781,"wb_we_i", false,-1);
    tracep->declBit(c+1782,"wb_re_i", false,-1);
    tracep->declBit(c+1740,"stx_pad_o", false,-1);
    tracep->declBit(c+1739,"srx_pad_i", false,-1);
    tracep->declBus(c+2075,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+848,"rts_pad_o", false,-1);
    tracep->declBit(c+846,"dtr_pad_o", false,-1);
    tracep->declBit(c+847,"int_o", false,-1);
    tracep->declBit(c+849,"enable", false,-1);
    tracep->declBit(c+850,"srx_pad", false,-1);
    tracep->declBus(c+851,"ier", false,-1, 3,0);
    tracep->declBus(c+852,"iir", false,-1, 3,0);
    tracep->declBus(c+853,"fcr", false,-1, 1,0);
    tracep->declBus(c+854,"mcr", false,-1, 4,0);
    tracep->declBus(c+855,"lcr", false,-1, 7,0);
    tracep->declBus(c+856,"msr", false,-1, 7,0);
    tracep->declBus(c+857,"dl", false,-1, 15,0);
    tracep->declBus(c+858,"scratch", false,-1, 7,0);
    tracep->declBit(c+859,"start_dlc", false,-1);
    tracep->declBit(c+860,"lsr_mask_d", false,-1);
    tracep->declBit(c+861,"msi_reset", false,-1);
    tracep->declBus(c+862,"dlc", false,-1, 15,0);
    tracep->declBus(c+863,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+864,"rx_reset", false,-1);
    tracep->declBit(c+865,"tx_reset", false,-1);
    tracep->declBit(c+866,"dlab", false,-1);
    tracep->declBit(c+1804,"cts_pad_i", false,-1);
    tracep->declBit(c+1803,"dsr_pad_i", false,-1);
    tracep->declBit(c+1803,"ri_pad_i", false,-1);
    tracep->declBit(c+1803,"dcd_pad_i", false,-1);
    tracep->declBit(c+867,"loopback", false,-1);
    tracep->declBit(c+1803,"cts", false,-1);
    tracep->declBit(c+1804,"dsr", false,-1);
    tracep->declBit(c+1804,"ri", false,-1);
    tracep->declBit(c+1804,"dcd", false,-1);
    tracep->declBit(c+868,"cts_c", false,-1);
    tracep->declBit(c+869,"dsr_c", false,-1);
    tracep->declBit(c+870,"ri_c", false,-1);
    tracep->declBit(c+871,"dcd_c", false,-1);
    tracep->declBus(c+872,"lsr", false,-1, 7,0);
    tracep->declBit(c+873,"lsr0", false,-1);
    tracep->declBit(c+874,"lsr1", false,-1);
    tracep->declBit(c+875,"lsr2", false,-1);
    tracep->declBit(c+876,"lsr3", false,-1);
    tracep->declBit(c+877,"lsr4", false,-1);
    tracep->declBit(c+878,"lsr5", false,-1);
    tracep->declBit(c+879,"lsr6", false,-1);
    tracep->declBit(c+880,"lsr7", false,-1);
    tracep->declBit(c+881,"lsr0r", false,-1);
    tracep->declBit(c+882,"lsr1r", false,-1);
    tracep->declBit(c+883,"lsr2r", false,-1);
    tracep->declBit(c+884,"lsr3r", false,-1);
    tracep->declBit(c+885,"lsr4r", false,-1);
    tracep->declBit(c+886,"lsr5r", false,-1);
    tracep->declBit(c+887,"lsr6r", false,-1);
    tracep->declBit(c+888,"lsr7r", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBit(c+889,"rls_int", false,-1);
    tracep->declBit(c+890,"rda_int", false,-1);
    tracep->declBit(c+891,"ti_int", false,-1);
    tracep->declBit(c+892,"thre_int", false,-1);
    tracep->declBit(c+893,"ms_int", false,-1);
    tracep->declBit(c+894,"tf_push", false,-1);
    tracep->declBit(c+895,"rf_pop", false,-1);
    tracep->declBus(c+1783,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+896,"rf_error_bit", false,-1);
    tracep->declBit(c+874,"rf_overrun", false,-1);
    tracep->declBit(c+897,"rf_push_pulse", false,-1);
    tracep->declBus(c+898,"rf_count", false,-1, 4,0);
    tracep->declBus(c+899,"tf_count", false,-1, 4,0);
    tracep->declBus(c+900,"tstate", false,-1, 2,0);
    tracep->declBus(c+901,"rstate", false,-1, 3,0);
    tracep->declBus(c+902,"counter_t", false,-1, 9,0);
    tracep->declBit(c+903,"thre_set_en", false,-1);
    tracep->declBus(c+904,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+905,"block_value", false,-1, 7,0);
    tracep->declBit(c+906,"serial_out", false,-1);
    tracep->declBit(c+907,"serial_in", false,-1);
    tracep->declBit(c+31,"lsr_mask_condition", false,-1);
    tracep->declBit(c+32,"iir_read", false,-1);
    tracep->declBit(c+33,"msr_read", false,-1);
    tracep->declBit(c+34,"fifo_read", false,-1);
    tracep->declBit(c+35,"fifo_write", false,-1);
    tracep->declBus(c+908,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+909,"lsr0_d", false,-1);
    tracep->declBit(c+910,"lsr1_d", false,-1);
    tracep->declBit(c+911,"lsr2_d", false,-1);
    tracep->declBit(c+912,"lsr3_d", false,-1);
    tracep->declBit(c+913,"lsr4_d", false,-1);
    tracep->declBit(c+914,"lsr5_d", false,-1);
    tracep->declBit(c+915,"lsr6_d", false,-1);
    tracep->declBit(c+916,"lsr7_d", false,-1);
    tracep->declBit(c+917,"rls_int_d", false,-1);
    tracep->declBit(c+918,"thre_int_d", false,-1);
    tracep->declBit(c+919,"ms_int_d", false,-1);
    tracep->declBit(c+920,"ti_int_d", false,-1);
    tracep->declBit(c+921,"rda_int_d", false,-1);
    tracep->declBit(c+922,"rls_int_rise", false,-1);
    tracep->declBit(c+923,"thre_int_rise", false,-1);
    tracep->declBit(c+924,"ms_int_rise", false,-1);
    tracep->declBit(c+925,"ti_int_rise", false,-1);
    tracep->declBit(c+926,"rda_int_rise", false,-1);
    tracep->declBit(c+927,"rls_int_pnd", false,-1);
    tracep->declBit(c+928,"rda_int_pnd", false,-1);
    tracep->declBit(c+929,"thre_int_pnd", false,-1);
    tracep->declBit(c+930,"ms_int_pnd", false,-1);
    tracep->declBit(c+931,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+2088,"Tp", false,-1, 31,0);
    tracep->declBus(c+2088,"width", false,-1, 31,0);
    tracep->declBus(c+2056,"init_value", false,-1, 0,0);
    tracep->declBit(c+1720,"rst_i", false,-1);
    tracep->declBit(c+1719,"clk_i", false,-1);
    tracep->declBit(c+1803,"stage1_rst_i", false,-1);
    tracep->declBit(c+1804,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1739,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+850,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+932,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1720,"wb_rst_i", false,-1);
    tracep->declBus(c+855,"lcr", false,-1, 7,0);
    tracep->declBit(c+895,"rf_pop", false,-1);
    tracep->declBit(c+907,"srx_pad_i", false,-1);
    tracep->declBit(c+849,"enable", false,-1);
    tracep->declBit(c+864,"rx_reset", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBus(c+902,"counter_t", false,-1, 9,0);
    tracep->declBus(c+898,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1783,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+874,"rf_overrun", false,-1);
    tracep->declBit(c+896,"rf_error_bit", false,-1);
    tracep->declBus(c+901,"rstate", false,-1, 3,0);
    tracep->declBit(c+897,"rf_push_pulse", false,-1);
    tracep->declBus(c+933,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+934,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+935,"rshift", false,-1, 7,0);
    tracep->declBit(c+936,"rparity", false,-1);
    tracep->declBit(c+937,"rparity_error", false,-1);
    tracep->declBit(c+938,"rframing_error", false,-1);
    tracep->declBit(c+939,"rbit_in", false,-1);
    tracep->declBit(c+940,"rparity_xor", false,-1);
    tracep->declBus(c+941,"counter_b", false,-1, 7,0);
    tracep->declBit(c+942,"rf_push_q", false,-1);
    tracep->declBus(c+943,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+944,"rf_push", false,-1);
    tracep->declBit(c+945,"break_error", false,-1);
    tracep->declBit(c+946,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+947,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+948,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+949,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1806,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+2073,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+2072,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+2068,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+2070,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+2069,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+2071,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+2067,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+2075,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2076,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2089,"sr_push", false,-1, 3,0);
    tracep->declBus(c+950,"toc_value", false,-1, 9,0);
    tracep->declBus(c+951,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+2090,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1867,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1868,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2054,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1720,"wb_rst_i", false,-1);
    tracep->declBit(c+897,"push", false,-1);
    tracep->declBit(c+895,"pop", false,-1);
    tracep->declBus(c+943,"data_in", false,-1, 10,0);
    tracep->declBit(c+864,"fifo_reset", false,-1);
    tracep->declBit(c+30,"reset_status", false,-1);
    tracep->declBus(c+1783,"data_out", false,-1, 10,0);
    tracep->declBit(c+874,"overrun", false,-1);
    tracep->declBus(c+898,"count", false,-1, 4,0);
    tracep->declBit(c+896,"error_bit", false,-1);
    tracep->declBus(c+1784,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+952+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+968,"top", false,-1, 3,0);
    tracep->declBus(c+969,"bottom", false,-1, 3,0);
    tracep->declBus(c+970,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+971,"word0", false,-1, 2,0);
    tracep->declBus(c+972,"word1", false,-1, 2,0);
    tracep->declBus(c+973,"word2", false,-1, 2,0);
    tracep->declBus(c+974,"word3", false,-1, 2,0);
    tracep->declBus(c+975,"word4", false,-1, 2,0);
    tracep->declBus(c+976,"word5", false,-1, 2,0);
    tracep->declBus(c+977,"word6", false,-1, 2,0);
    tracep->declBus(c+978,"word7", false,-1, 2,0);
    tracep->declBus(c+979,"word8", false,-1, 2,0);
    tracep->declBus(c+980,"word9", false,-1, 2,0);
    tracep->declBus(c+981,"word10", false,-1, 2,0);
    tracep->declBus(c+982,"word11", false,-1, 2,0);
    tracep->declBus(c+983,"word12", false,-1, 2,0);
    tracep->declBus(c+984,"word13", false,-1, 2,0);
    tracep->declBus(c+985,"word14", false,-1, 2,0);
    tracep->declBus(c+986,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1868,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2081,"data_width", false,-1, 31,0);
    tracep->declBus(c+1867,"depth", false,-1, 31,0);
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+897,"we", false,-1);
    tracep->declBus(c+968,"a", false,-1, 3,0);
    tracep->declBus(c+969,"dpra", false,-1, 3,0);
    tracep->declBus(c+987,"di", false,-1, 7,0);
    tracep->declBus(c+1784,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+624+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1720,"wb_rst_i", false,-1);
    tracep->declBus(c+855,"lcr", false,-1, 7,0);
    tracep->declBit(c+894,"tf_push", false,-1);
    tracep->declBus(c+1548,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+849,"enable", false,-1);
    tracep->declBit(c+865,"tx_reset", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBit(c+906,"stx_pad_o", false,-1);
    tracep->declBus(c+900,"tstate", false,-1, 2,0);
    tracep->declBus(c+899,"tf_count", false,-1, 4,0);
    tracep->declBus(c+988,"counter", false,-1, 4,0);
    tracep->declBus(c+989,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+990,"shift_out", false,-1, 6,0);
    tracep->declBit(c+991,"stx_o_tmp", false,-1);
    tracep->declBit(c+992,"parity_xor", false,-1);
    tracep->declBit(c+993,"tf_pop", false,-1);
    tracep->declBit(c+994,"bit_out", false,-1);
    tracep->declBus(c+1548,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1555,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+995,"tf_overrun", false,-1);
    tracep->declBus(c+1797,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1794,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1798,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1799,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1808,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1809,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+2081,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1867,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1868,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2054,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+1720,"wb_rst_i", false,-1);
    tracep->declBit(c+894,"push", false,-1);
    tracep->declBit(c+993,"pop", false,-1);
    tracep->declBus(c+1548,"data_in", false,-1, 7,0);
    tracep->declBit(c+865,"fifo_reset", false,-1);
    tracep->declBit(c+30,"reset_status", false,-1);
    tracep->declBus(c+1555,"data_out", false,-1, 7,0);
    tracep->declBit(c+995,"overrun", false,-1);
    tracep->declBus(c+899,"count", false,-1, 4,0);
    tracep->declBus(c+996,"top", false,-1, 3,0);
    tracep->declBus(c+997,"bottom", false,-1, 3,0);
    tracep->declBus(c+998,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1868,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2081,"data_width", false,-1, 31,0);
    tracep->declBus(c+1867,"depth", false,-1, 31,0);
    tracep->declBit(c+1719,"clk", false,-1);
    tracep->declBit(c+894,"we", false,-1);
    tracep->declBus(c+996,"a", false,-1, 3,0);
    tracep->declBus(c+997,"dpra", false,-1, 3,0);
    tracep->declBus(c+1548,"di", false,-1, 7,0);
    tracep->declBus(c+1555,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+640+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBit(c+1356,"auto_in_psel", false,-1);
    tracep->declBit(c+1357,"auto_in_penable", false,-1);
    tracep->declBit(c+1349,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1358,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1348,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1350,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+709,"auto_in_pready", false,-1);
    tracep->declBit(c+1801,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1802,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1733,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1734,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1735,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1736,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1737,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1738,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1719,"clock", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1545,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1356,"in_psel", false,-1);
    tracep->declBit(c+1357,"in_penable", false,-1);
    tracep->declBus(c+1348,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1349,"in_pwrite", false,-1);
    tracep->declBus(c+1350,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1351,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+709,"in_pready", false,-1);
    tracep->declBus(c+1802,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1801,"in_pslverr", false,-1);
    tracep->declBus(c+1733,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1734,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1735,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1736,"vga_hsync", false,-1);
    tracep->declBit(c+1737,"vga_vsync", false,-1);
    tracep->declBit(c+1738,"vga_valid", false,-1);
    tracep->declBus(c+999,"h_addr", false,-1, 9,0);
    tracep->declBus(c+656,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1556,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1549,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+709,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1719,"pclk", false,-1);
    tracep->declBit(c+1720,"reset", false,-1);
    tracep->declBus(c+1556,"vga_data", false,-1, 23,0);
    tracep->declBus(c+999,"h_addr", false,-1, 9,0);
    tracep->declBus(c+656,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1736,"hsync", false,-1);
    tracep->declBit(c+1737,"vsync", false,-1);
    tracep->declBit(c+1738,"valid", false,-1);
    tracep->declBus(c+1733,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1734,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1735,"vga_b", false,-1, 7,0);
    tracep->declBus(c+2091,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+2092,"h_active", false,-1, 31,0);
    tracep->declBus(c+2093,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+2094,"h_total", false,-1, 31,0);
    tracep->declBus(c+2060,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+2095,"v_active", false,-1, 31,0);
    tracep->declBus(c+2096,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+2097,"v_total", false,-1, 31,0);
    tracep->declBus(c+1000,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+657,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1001,"h_valid", false,-1);
    tracep->declBit(c+658,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+704,"sck", false,-1);
    tracep->declBit(c+1575,"ss", false,-1);
    tracep->declBit(c+1558,"mosi", false,-1);
    tracep->declBit(c+1332,"miso", false,-1);
    tracep->declBus(c+1333,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1334,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1785,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+704,"sck", false,-1);
    tracep->declBit(c+1576,"ss", false,-1);
    tracep->declBit(c+1558,"mosi", false,-1);
    tracep->declBit(c+1786,"miso", false,-1);
    tracep->declBit(c+1576,"reset", false,-1);
    tracep->declBus(c+1326,"state", false,-1, 2,0);
    tracep->declBus(c+1327,"counter", false,-1, 7,0);
    tracep->declBus(c+1328,"cmd", false,-1, 7,0);
    tracep->declBus(c+1329,"addr", false,-1, 23,0);
    tracep->declBus(c+1330,"data", false,-1, 31,0);
    tracep->declBit(c+1331,"ren", false,-1);
    tracep->declBus(c+1787,"rdata", false,-1, 31,0);
    tracep->declBus(c+1788,"raddr", false,-1, 31,0);
    tracep->declBus(c+1335,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+704,"clock", false,-1);
    tracep->declBit(c+1331,"valid", false,-1);
    tracep->declBus(c+1328,"cmd", false,-1, 7,0);
    tracep->declBus(c+1788,"addr", false,-1, 31,0);
    tracep->declBus(c+1787,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1742,"sck", false,-1);
    tracep->declBit(c+1633,"ce_n", false,-1);
    tracep->declBus(c+1743,"dio", false,-1, 3,0);
    tracep->declBus(c+694,"dio_out", false,-1, 3,0);
    tracep->declBus(c+695,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1743,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1859,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+2088,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+2060,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+2062,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1868,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+2054,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+696,"state", false,-1, 2,0);
    tracep->declBus(c+1789,"next_state", false,-1, 2,0);
    tracep->declBus(c+697,"counter", false,-1, 7,0);
    tracep->declBus(c+698,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+699,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+700,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+701,"is_read_op", false,-1);
    tracep->declBit(c+702,"is_write_op", false,-1);
    tracep->declBus(c+703,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1790,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1744,"clk", false,-1);
    tracep->declBit(c+1559,"cke", false,-1);
    tracep->declBit(c+705,"cs", false,-1);
    tracep->declBit(c+706,"ras", false,-1);
    tracep->declBit(c+707,"cas", false,-1);
    tracep->declBit(c+708,"we", false,-1);
    tracep->declBus(c+1745,"a", false,-1, 13,0);
    tracep->declBus(c+1560,"ba", false,-1, 1,0);
    tracep->declBus(c+1561,"dqm", false,-1, 3,0);
    tracep->declBus(c+1592,"dq", false,-1, 31,0);
    tracep->declBit(c+22,"cs_0", false,-1);
    tracep->declBit(c+23,"ras_0", false,-1);
    tracep->declBit(c+24,"cas_0", false,-1);
    tracep->declBit(c+25,"we_0", false,-1);
    tracep->declBit(c+26,"cs_1", false,-1);
    tracep->declBit(c+27,"ras_1", false,-1);
    tracep->declBit(c+28,"cas_1", false,-1);
    tracep->declBit(c+29,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1744,"clk", false,-1);
    tracep->declBit(c+1559,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1569,"a", false,-1, 12,0);
    tracep->declBus(c+1560,"ba", false,-1, 1,0);
    tracep->declBus(c+1561,"dqm", false,-1, 3,0);
    tracep->declBus(c+1592,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1744,"clk", false,-1);
    tracep->declBit(c+1559,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1569,"a", false,-1, 12,0);
    tracep->declBus(c+1560,"ba", false,-1, 1,0);
    tracep->declBus(c+1577,"dqm", false,-1, 1,0);
    tracep->declBus(c+1593,"dq", false,-1, 15,0);
    tracep->declBus(c+2072,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2073,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2067,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2098,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2068,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2069,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2070,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1266,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1267,"bl", false,-1, 2,0);
    tracep->declBus(c+143,"command", false,-1, 3,0);
    tracep->declBus(c+1268,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1269,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1578,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1270,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1594,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1271,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1272+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2099,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1276,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2100,"state", false,-1, 2,0);
    tracep->declBit(c+1277,"write_brust", false,-1);
    tracep->declBus(c+1278,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1279,"read_burst", false,-1);
    tracep->declBit(c+2101,"flag", false,-1);
    tracep->declBus(c+1280,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1744,"clk", false,-1);
    tracep->declBit(c+1559,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1569,"a", false,-1, 12,0);
    tracep->declBus(c+1560,"ba", false,-1, 1,0);
    tracep->declBus(c+1579,"dqm", false,-1, 1,0);
    tracep->declBus(c+1595,"dq", false,-1, 15,0);
    tracep->declBus(c+2072,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2073,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2067,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2098,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2068,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2069,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2070,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1281,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1282,"bl", false,-1, 2,0);
    tracep->declBus(c+143,"command", false,-1, 3,0);
    tracep->declBus(c+1283,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1284,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1578,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1285,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1596,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1286,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1287+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2102,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1291,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2103,"state", false,-1, 2,0);
    tracep->declBit(c+1292,"write_brust", false,-1);
    tracep->declBus(c+1293,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1294,"read_burst", false,-1);
    tracep->declBit(c+2104,"flag", false,-1);
    tracep->declBus(c+1295,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1744,"clk", false,-1);
    tracep->declBit(c+1559,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1569,"a", false,-1, 12,0);
    tracep->declBus(c+1560,"ba", false,-1, 1,0);
    tracep->declBus(c+1561,"dqm", false,-1, 3,0);
    tracep->declBus(c+1592,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1744,"clk", false,-1);
    tracep->declBit(c+1559,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1569,"a", false,-1, 12,0);
    tracep->declBus(c+1560,"ba", false,-1, 1,0);
    tracep->declBus(c+1577,"dqm", false,-1, 1,0);
    tracep->declBus(c+1593,"dq", false,-1, 15,0);
    tracep->declBus(c+2072,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2073,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2067,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2098,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2068,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2069,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2070,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1296,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1297,"bl", false,-1, 2,0);
    tracep->declBus(c+144,"command", false,-1, 3,0);
    tracep->declBus(c+1298,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1299,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1578,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1300,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1597,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1301,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1302+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2105,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1306,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2106,"state", false,-1, 2,0);
    tracep->declBit(c+1307,"write_brust", false,-1);
    tracep->declBus(c+1308,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1309,"read_burst", false,-1);
    tracep->declBit(c+2107,"flag", false,-1);
    tracep->declBus(c+1310,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1744,"clk", false,-1);
    tracep->declBit(c+1559,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1569,"a", false,-1, 12,0);
    tracep->declBus(c+1560,"ba", false,-1, 1,0);
    tracep->declBus(c+1579,"dqm", false,-1, 1,0);
    tracep->declBus(c+1595,"dq", false,-1, 15,0);
    tracep->declBus(c+2072,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2073,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2067,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2098,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2068,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2069,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2070,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1311,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1312,"bl", false,-1, 2,0);
    tracep->declBus(c+144,"command", false,-1, 3,0);
    tracep->declBus(c+1313,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1314,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1578,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1315,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1598,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1316,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1317+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2108,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1321,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2109,"state", false,-1, 2,0);
    tracep->declBit(c+1322,"write_brust", false,-1);
    tracep->declBus(c+1323,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1324,"read_burst", false,-1);
    tracep->declBit(c+2110,"flag", false,-1);
    tracep->declBus(c+1325,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+42,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+52,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+58,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullSData(oldp+59,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+64,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+68,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+72,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullIData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+82,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+86,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+87,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+88,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+89,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+90,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+91,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+93,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+94,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+95,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+96,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+97,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+98,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+99,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+100,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullIData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rdata),32);
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rresp),2);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rlast));
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rid),4);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rvalid));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+139,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 2U))),13);
    bufp->fullSData(oldp+140,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+141,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+147,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+149,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+150,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+151,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+152,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+154,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+155,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+158,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+159,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+160,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+161,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+162,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+176,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+177,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+178,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+180,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+181,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+182,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+183,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+184,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+251,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+255,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+256,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+257,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+258,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+262,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+264,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+305,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+373,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+387,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+388,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+389,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+460,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+464,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+468,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+472,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+476,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+496,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+508,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+512,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+556,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+564,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+618,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+656,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+659,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+660,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+661,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+662,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+663,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+664,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+665,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+666,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+667,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+668,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+669,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+670,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+671,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+672,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+673,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+674,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+675,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullQData(oldp+676,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+678,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+679,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+680,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+681,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+682,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+683,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+684,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+685,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+686,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+687,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+688,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+689,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+690,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+691,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+692,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+705,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+706,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+707,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+708,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullSData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+718,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+719,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+720,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+721,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+722,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+723,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+724,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+725,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+728,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+729,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+732,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+733,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+737,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+741,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+756,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+757,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+758,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+759,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+760,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+768,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+808,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+809,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+821,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+822,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+823,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+824,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+825,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+826,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+828,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+829,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+831,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+835,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+837,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+838,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+841,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+845,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+846,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+848,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+866,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+867,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+868,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+869,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+870,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+871,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+872,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+875,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+876,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+877,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+896,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+903,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+922,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+923,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+924,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+925,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+926,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+945,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+946,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+947,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+948,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+949,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+951,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+970,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+987,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+998,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+999,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready));
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_araddr),32);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arlen),8);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arsize),3);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arburst),2);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arvalid));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rready));
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1029,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                 ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1032,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arid),4);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1054,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1060,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+1061,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1108,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1124,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1126,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1129,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr),32);
    bufp->fullWData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[0]),128);
    bufp->fullWData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[1]),128);
    bufp->fullWData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[2]),128);
    bufp->fullWData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[3]),128);
    bufp->fullWData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[4]),128);
    bufp->fullWData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[5]),128);
    bufp->fullWData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[6]),128);
    bufp->fullWData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[7]),128);
    bufp->fullWData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[8]),128);
    bufp->fullWData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[9]),128);
    bufp->fullWData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[10]),128);
    bufp->fullWData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[11]),128);
    bufp->fullWData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[12]),128);
    bufp->fullWData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[13]),128);
    bufp->fullWData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[14]),128);
    bufp->fullWData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[15]),128);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[0]),24);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[1]),24);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[2]),24);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[3]),24);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[4]),24);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[5]),24);
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[6]),24);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[7]),24);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[8]),24);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[9]),24);
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[10]),24);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[11]),24);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[12]),24);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[13]),24);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[14]),24);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[15]),24);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[0]));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[1]));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[2]));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[3]));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[4]));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[5]));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[6]));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[7]));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[8]));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[9]));
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[10]));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[11]));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[12]));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[13]));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[14]));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[15]));
    bufp->fullIData(oldp+1227,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                >> 8U)),24);
    bufp->fullCData(oldp+1228,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1229,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr)),4);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__counter),32);
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state),3);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),3);
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1257,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1258,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1259,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1260,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1261,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1262,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1263,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1264,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1265,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1266,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1267,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1281,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1282,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1296,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1297,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1311,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1312,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1331,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1338,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1358,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1359,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1360,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1361,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1365,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1368,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1373,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1376,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1383,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata),32);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb),4);
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullSData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_wt),10);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_wt),32);
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid));
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid),4);
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp),2);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt),3);
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullSData(oldp+1411,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1533,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1539,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1540,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1541,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1542,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullIData(oldp+1543,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1544,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1545,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1546,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1549,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullCData(oldp+1557,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1563,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullBit(oldp+1564,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullSData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1575,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1577,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1578,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1579,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1593,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1595,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullCData(oldp+1607,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1608,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1619,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1625,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1630,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1631,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1632,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1637,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1651,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1654,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1657,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1660,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1683,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1685,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1686,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awready));
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wready));
    bufp->fullBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullCData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1704,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullBit(oldp+1719,(vlSelf->clock));
    bufp->fullBit(oldp+1720,(vlSelf->reset));
    bufp->fullSData(oldp+1721,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1722,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1723,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1724,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1725,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1726,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1727,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1728,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1729,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1730,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1731,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1732,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1733,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1734,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1735,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1736,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1737,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1738,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1739,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1740,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1741,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1744,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1745,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1746,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1747,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | (IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+1748,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
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
    bufp->fullBit(oldp+1749,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1750,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1751,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1752,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1753,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1755,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullCData(oldp+1756,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready)
                                             ? 4U : 7U)
                                         : ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_wt)
                                             ? 7U : 6U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid)
                                             ? 6U : 5U)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))
                                             ? 5U : 4U)))
                                 : 4U)),3);
    bufp->fullBit(oldp+1757,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1758,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1759,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullIData(oldp+1760,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1761,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1762,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1763,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1765,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullIData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1768,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1769,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
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
    bufp->fullBit(oldp+1770,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1771,((0xfU & vlSelf->__VdfgTmp_h81912a5e__0)),4);
    bufp->fullBit(oldp+1772,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1773,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1776,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                     : 0U))),8);
    bufp->fullCData(oldp+1777,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)) 
                                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid))
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1778,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1779,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1780,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1783,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1786,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1787,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1788,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1789,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1791,(0x226U),32);
    bufp->fullIData(oldp+1792,(0x64U),32);
    bufp->fullIData(oldp+1793,(0x200U),32);
    bufp->fullCData(oldp+1794,(1U),3);
    bufp->fullIData(oldp+1795,(0xb00U),32);
    bufp->fullIData(oldp+1796,(9U),32);
    bufp->fullCData(oldp+1797,(0U),3);
    bufp->fullCData(oldp+1798,(2U),3);
    bufp->fullCData(oldp+1799,(3U),3);
    bufp->fullBit(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1803,(0U));
    bufp->fullBit(oldp+1804,(1U));
    bufp->fullCData(oldp+1805,(0U),2);
    bufp->fullCData(oldp+1806,(0U),4);
    bufp->fullCData(oldp+1807,(0U),8);
    bufp->fullCData(oldp+1808,(4U),3);
    bufp->fullCData(oldp+1809,(5U),3);
    bufp->fullCData(oldp+1810,(6U),3);
    bufp->fullCData(oldp+1811,(7U),3);
    bufp->fullSData(oldp+1812,(1U),16);
    bufp->fullBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1829,(0U),32);
    bufp->fullBit(oldp+1830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullCData(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arid),4);
    bufp->fullIData(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1859,(0U),32);
    bufp->fullBit(oldp+1860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1863,(1U),2);
    bufp->fullCData(oldp+1864,(2U),2);
    bufp->fullIData(oldp+1865,(0x20U),32);
    bufp->fullIData(oldp+1866,(4U),32);
    bufp->fullIData(oldp+1867,(0x10U),32);
    bufp->fullIData(oldp+1868,(4U),32);
    bufp->fullIData(oldp+1869,(0x18U),32);
    bufp->fullIData(oldp+1870,(0x79737978U),32);
    bufp->fullIData(oldp+1871,(0x17e3c19U),32);
    bufp->fullCData(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+2000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+2001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+2002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+2003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+2004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+2005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+2006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+2007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+2008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+2009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+2010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+2011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+2012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+2013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+2014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+2015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+2016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+2017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+2018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+2019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+2020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+2021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+2022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+2023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+2024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+2025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+2026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+2027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+2028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+2029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+2030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+2031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+2032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+2033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+2034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+2035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+2036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+2037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+2038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+2039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+2040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+2041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+2042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+2043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+2044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+2045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+2046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+2047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+2048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+2049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+2050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+2051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+2052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+2053,(3U),2);
    bufp->fullIData(oldp+2054,(5U),32);
    bufp->fullBit(oldp+2055,(0U));
    bufp->fullBit(oldp+2056,(1U));
    bufp->fullCData(oldp+2057,(0x1bU),8);
    bufp->fullCData(oldp+2058,(0xebU),8);
    bufp->fullCData(oldp+2059,(0x38U),8);
    bufp->fullIData(oldp+2060,(2U),32);
    bufp->fullIData(oldp+2061,(6U),32);
    bufp->fullIData(oldp+2062,(3U),32);
    bufp->fullIData(oldp+2063,(0xdU),32);
    bufp->fullIData(oldp+2064,(0x2000U),32);
    bufp->fullIData(oldp+2065,(0x2710U),32);
    bufp->fullIData(oldp+2066,(0x30cU),32);
    bufp->fullCData(oldp+2067,(7U),4);
    bufp->fullCData(oldp+2068,(3U),4);
    bufp->fullCData(oldp+2069,(5U),4);
    bufp->fullCData(oldp+2070,(4U),4);
    bufp->fullCData(oldp+2071,(6U),4);
    bufp->fullCData(oldp+2072,(2U),4);
    bufp->fullCData(oldp+2073,(1U),4);
    bufp->fullSData(oldp+2074,(0x20U),13);
    bufp->fullCData(oldp+2075,(8U),4);
    bufp->fullCData(oldp+2076,(9U),4);
    bufp->fullIData(oldp+2077,(0xaU),32);
    bufp->fullIData(oldp+2078,(0x11U),32);
    bufp->fullIData(oldp+2079,(0x30000000U),32);
    bufp->fullIData(oldp+2080,(0x3fffffffU),32);
    bufp->fullIData(oldp+2081,(8U),32);
    bufp->fullCData(oldp+2082,(4U),5);
    bufp->fullCData(oldp+2083,(0U),5);
    bufp->fullCData(oldp+2084,(0x10U),5);
    bufp->fullCData(oldp+2085,(0x14U),5);
    bufp->fullCData(oldp+2086,(0x18U),5);
    bufp->fullIData(oldp+2087,(0x3000000U),32);
    bufp->fullIData(oldp+2088,(1U),32);
    bufp->fullCData(oldp+2089,(0xaU),4);
    bufp->fullIData(oldp+2090,(0xbU),32);
    bufp->fullIData(oldp+2091,(0x60U),32);
    bufp->fullIData(oldp+2092,(0x90U),32);
    bufp->fullIData(oldp+2093,(0x310U),32);
    bufp->fullIData(oldp+2094,(0x320U),32);
    bufp->fullIData(oldp+2095,(0x23U),32);
    bufp->fullIData(oldp+2096,(0x203U),32);
    bufp->fullIData(oldp+2097,(0x20dU),32);
    bufp->fullIData(oldp+2098,(0x400000U),32);
    bufp->fullCData(oldp+2099,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2100,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+2101,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+2102,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2103,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+2104,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+2105,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2106,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+2107,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+2108,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2109,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+2110,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
