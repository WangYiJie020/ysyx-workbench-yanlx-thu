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
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1789,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1790,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1791,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1792,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1793,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1794,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1795,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1796,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1797,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1798,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1799,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1800,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1801,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1802,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1803,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1804,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1805,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1806,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1807,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1808,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1789,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1790,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1791,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1792,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1793,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1794,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1795,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1796,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1797,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1798,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1799,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1800,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1801,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1802,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1803,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1804,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1805,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1806,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1807,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1808,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+685,"spi_sck", false,-1);
    tracep->declBus(c+1627,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1628,"spi_mosi", false,-1);
    tracep->declBit(c+1809,"spi_miso", false,-1);
    tracep->declBit(c+1807,"uart_rx", false,-1);
    tracep->declBit(c+1808,"uart_tx", false,-1);
    tracep->declBit(c+1810,"psram_sck", false,-1);
    tracep->declBit(c+1697,"psram_ce_n", false,-1);
    tracep->declBus(c+1811,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1812,"sdram_clk", false,-1);
    tracep->declBit(c+1629,"sdram_cke", false,-1);
    tracep->declBit(c+686,"sdram_cs", false,-1);
    tracep->declBit(c+687,"sdram_ras", false,-1);
    tracep->declBit(c+688,"sdram_cas", false,-1);
    tracep->declBit(c+689,"sdram_we", false,-1);
    tracep->declBus(c+1813,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1630,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1631,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1656,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1789,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1790,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1791,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1792,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1793,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1794,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1795,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1796,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1797,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1798,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1799,"ps2_clk", false,-1);
    tracep->declBit(c+1800,"ps2_data", false,-1);
    tracep->declBus(c+1801,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1802,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1803,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1804,"vga_hsync", false,-1);
    tracep->declBit(c+1805,"vga_vsync", false,-1);
    tracep->declBit(c+1806,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1852,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1853,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1854,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1319,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1320,"in_psel", false,-1);
    tracep->declBit(c+1321,"in_penable", false,-1);
    tracep->declBus(c+1855,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1322,"in_pwrite", false,-1);
    tracep->declBus(c+1323,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1324,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1325,"in_pready", false,-1);
    tracep->declBus(c+1326,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1327,"in_pslverr", false,-1);
    tracep->declBus(c+1328,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1329,"out_psel", false,-1);
    tracep->declBit(c+1330,"out_penable", false,-1);
    tracep->declBus(c+1331,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1332,"out_pwrite", false,-1);
    tracep->declBus(c+1333,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1606,"out_pready", false,-1);
    tracep->declBus(c+1814,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1815,"out_pslverr", false,-1);
    tracep->declBus(c+1856,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1857,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1858,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1855,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1859,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1860,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1335,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1336,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1337,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1338,"state", false,-1, 2,0);
    tracep->declBus(c+1816,"next_state", false,-1, 2,0);
    tracep->declBit(c+1861,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1329,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1330,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1332,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1328,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1606,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1815,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1814,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1339,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1340,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1332,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1341,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1331,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1862,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1863,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1342,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1343,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1332,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1331,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+120,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1864,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+121,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1345,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1332,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1331,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+691,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1864,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+692,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1347,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1348,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1332,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1328,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1817,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1864,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+122,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1349,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1332,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1331,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1864,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1818,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1352,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1353,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1332,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1341,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1331,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+694,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+695,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"sel_0", false,-1);
    tracep->declBit(c+1355,"sel_1", false,-1);
    tracep->declBit(c+1356,"sel_2", false,-1);
    tracep->declBit(c+1357,"sel_3", false,-1);
    tracep->declBit(c+1358,"sel_4", false,-1);
    tracep->declBit(c+1359,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1360,"auto_in_awready", false,-1);
    tracep->declBit(c+123,"auto_in_awvalid", false,-1);
    tracep->declBus(c+124,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+126,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+127,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1360,"auto_in_wready", false,-1);
    tracep->declBit(c+128,"auto_in_wvalid", false,-1);
    tracep->declBus(c+129,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+130,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+131,"auto_in_bready", false,-1);
    tracep->declBit(c+1361,"auto_in_bvalid", false,-1);
    tracep->declBus(c+132,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1362,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1363,"auto_in_arready", false,-1);
    tracep->declBit(c+133,"auto_in_arvalid", false,-1);
    tracep->declBus(c+134,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+136,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+137,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+138,"auto_in_rready", false,-1);
    tracep->declBit(c+1364,"auto_in_rvalid", false,-1);
    tracep->declBus(c+139,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+634,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1320,"auto_out_psel", false,-1);
    tracep->declBit(c+1321,"auto_out_penable", false,-1);
    tracep->declBit(c+1322,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1319,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1323,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1324,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1325,"auto_out_pready", false,-1);
    tracep->declBit(c+1327,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1326,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1321,"nodeOut_penable", false,-1);
    tracep->declBus(c+1365,"state", false,-1, 1,0);
    tracep->declBit(c+1363,"accept_read", false,-1);
    tracep->declBit(c+1360,"accept_write", false,-1);
    tracep->declBit(c+140,"is_write_r", false,-1);
    tracep->declBit(c+1322,"is_write", false,-1);
    tracep->declBus(c+139,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+132,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+141,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+142,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+143,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+144,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1366,"resp", false,-1, 1,0);
    tracep->declBus(c+145,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1362,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1364,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+146,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1361,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+147,"auto_in_awready", false,-1);
    tracep->declBit(c+1719,"auto_in_awvalid", false,-1);
    tracep->declBus(c+148,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+149,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+150,"auto_in_wready", false,-1);
    tracep->declBit(c+1722,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1723,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1724,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"auto_in_wlast", false,-1);
    tracep->declBit(c+640,"auto_in_bready", false,-1);
    tracep->declBit(c+151,"auto_in_bvalid", false,-1);
    tracep->declBus(c+152,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+153,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_in_arready", false,-1);
    tracep->declBit(c+28,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+155,"auto_in_rvalid", false,-1);
    tracep->declBus(c+156,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_in_rlast", false,-1);
    tracep->declBit(c+1360,"auto_out_awready", false,-1);
    tracep->declBit(c+123,"auto_out_awvalid", false,-1);
    tracep->declBus(c+124,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+126,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+127,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1360,"auto_out_wready", false,-1);
    tracep->declBit(c+128,"auto_out_wvalid", false,-1);
    tracep->declBus(c+129,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+130,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+131,"auto_out_bready", false,-1);
    tracep->declBit(c+1361,"auto_out_bvalid", false,-1);
    tracep->declBus(c+132,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1362,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1363,"auto_out_arready", false,-1);
    tracep->declBit(c+133,"auto_out_arvalid", false,-1);
    tracep->declBus(c+134,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+136,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+137,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+138,"auto_out_rready", false,-1);
    tracep->declBit(c+1364,"auto_out_rvalid", false,-1);
    tracep->declBus(c+139,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+634,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+131,"io_enq_ready", false,-1);
    tracep->declBit(c+1361,"io_enq_valid", false,-1);
    tracep->declBus(c+132,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1362,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+640,"io_deq_ready", false,-1);
    tracep->declBit(c+151,"io_deq_valid", false,-1);
    tracep->declBus(c+152,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+153,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+160,"wrap", false,-1);
    tracep->declBit(c+161,"wrap_1", false,-1);
    tracep->declBit(c+162,"maybe_full", false,-1);
    tracep->declBit(c+163,"ptr_match", false,-1);
    tracep->declBit(c+164,"empty", false,-1);
    tracep->declBit(c+165,"full", false,-1);
    tracep->declBit(c+1367,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+161,"R0_addr", false,-1);
    tracep->declBit(c+1865,"R0_en", false,-1);
    tracep->declBit(c+1787,"R0_clk", false,-1);
    tracep->declBus(c+166,"R0_data", false,-1, 5,0);
    tracep->declBit(c+160,"W0_addr", false,-1);
    tracep->declBit(c+1367,"W0_en", false,-1);
    tracep->declBit(c+1787,"W0_clk", false,-1);
    tracep->declBus(c+635,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+167+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+169,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+138,"io_enq_ready", false,-1);
    tracep->declBit(c+1364,"io_enq_valid", false,-1);
    tracep->declBus(c+139,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+634,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1362,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+155,"io_deq_valid", false,-1);
    tracep->declBus(c+156,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+157,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+158,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+159,"io_deq_bits_last", false,-1);
    tracep->declBit(c+170,"wrap", false,-1);
    tracep->declBit(c+171,"wrap_1", false,-1);
    tracep->declBit(c+172,"maybe_full", false,-1);
    tracep->declBit(c+173,"ptr_match", false,-1);
    tracep->declBit(c+174,"empty", false,-1);
    tracep->declBit(c+175,"full", false,-1);
    tracep->declBit(c+1368,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+171,"R0_addr", false,-1);
    tracep->declBit(c+1865,"R0_en", false,-1);
    tracep->declBit(c+1787,"R0_clk", false,-1);
    tracep->declQuad(c+176,"R0_data", false,-1, 38,0);
    tracep->declBit(c+170,"W0_addr", false,-1);
    tracep->declBit(c+1368,"W0_en", false,-1);
    tracep->declBit(c+1787,"W0_clk", false,-1);
    tracep->declQuad(c+636,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+178+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+182,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+154,"io_enq_ready", false,-1);
    tracep->declBit(c+28,"io_enq_valid", false,-1);
    tracep->declBus(c+29,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+30,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+31,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1363,"io_deq_ready", false,-1);
    tracep->declBit(c+133,"io_deq_valid", false,-1);
    tracep->declBus(c+134,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+135,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+136,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+137,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+183,"wrap", false,-1);
    tracep->declBit(c+184,"wrap_1", false,-1);
    tracep->declBit(c+185,"maybe_full", false,-1);
    tracep->declBit(c+186,"ptr_match", false,-1);
    tracep->declBit(c+187,"empty", false,-1);
    tracep->declBit(c+188,"full", false,-1);
    tracep->declBit(c+33,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+184,"R0_addr", false,-1);
    tracep->declBit(c+1865,"R0_en", false,-1);
    tracep->declBit(c+1787,"R0_clk", false,-1);
    tracep->declQuad(c+189,"R0_data", false,-1, 46,0);
    tracep->declBit(c+183,"W0_addr", false,-1);
    tracep->declBit(c+33,"W0_en", false,-1);
    tracep->declBit(c+1787,"W0_clk", false,-1);
    tracep->declQuad(c+34,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+191+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+195,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1719,"io_enq_valid", false,-1);
    tracep->declBus(c+148,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1720,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1721,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+149,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1360,"io_deq_ready", false,-1);
    tracep->declBit(c+123,"io_deq_valid", false,-1);
    tracep->declBus(c+124,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+125,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+126,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+127,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+196,"wrap", false,-1);
    tracep->declBit(c+197,"wrap_1", false,-1);
    tracep->declBit(c+198,"maybe_full", false,-1);
    tracep->declBit(c+199,"ptr_match", false,-1);
    tracep->declBit(c+200,"empty", false,-1);
    tracep->declBit(c+201,"full", false,-1);
    tracep->declBit(c+1726,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+197,"R0_addr", false,-1);
    tracep->declBit(c+1865,"R0_en", false,-1);
    tracep->declBit(c+1787,"R0_clk", false,-1);
    tracep->declQuad(c+202,"R0_data", false,-1, 46,0);
    tracep->declBit(c+196,"W0_addr", false,-1);
    tracep->declBit(c+1726,"W0_en", false,-1);
    tracep->declBit(c+1787,"W0_clk", false,-1);
    tracep->declQuad(c+657,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+204+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+208,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+150,"io_enq_ready", false,-1);
    tracep->declBit(c+1722,"io_enq_valid", false,-1);
    tracep->declBus(c+1723,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1724,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1725,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1360,"io_deq_ready", false,-1);
    tracep->declBit(c+128,"io_deq_valid", false,-1);
    tracep->declBus(c+129,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+130,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+209,"wrap", false,-1);
    tracep->declBit(c+210,"wrap_1", false,-1);
    tracep->declBit(c+211,"maybe_full", false,-1);
    tracep->declBit(c+212,"ptr_match", false,-1);
    tracep->declBit(c+213,"empty", false,-1);
    tracep->declBit(c+214,"full", false,-1);
    tracep->declBit(c+1727,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+210,"R0_addr", false,-1);
    tracep->declBit(c+1865,"R0_en", false,-1);
    tracep->declBit(c+1787,"R0_clk", false,-1);
    tracep->declQuad(c+215,"R0_data", false,-1, 35,0);
    tracep->declBit(c+209,"W0_addr", false,-1);
    tracep->declBit(c+1727,"W0_en", false,-1);
    tracep->declBit(c+1787,"W0_clk", false,-1);
    tracep->declQuad(c+1728,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+217+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+221,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1852,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1853,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1854,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1369,"in_arready", false,-1);
    tracep->declBit(c+36,"in_arvalid", false,-1);
    tracep->declBus(c+37,"in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"in_rready", false,-1);
    tracep->declBit(c+1370,"in_rvalid", false,-1);
    tracep->declBus(c+1371,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1372,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1373,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1374,"in_rlast", false,-1);
    tracep->declBit(c+1375,"in_awready", false,-1);
    tracep->declBit(c+1730,"in_awvalid", false,-1);
    tracep->declBus(c+1866,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1867,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1664,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1376,"in_wready", false,-1);
    tracep->declBit(c+1731,"in_wvalid", false,-1);
    tracep->declBus(c+1665,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1667,"in_wlast", false,-1);
    tracep->declBit(c+1615,"in_bready", false,-1);
    tracep->declBit(c+1377,"in_bvalid", false,-1);
    tracep->declBus(c+1378,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1379,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1698,"out_arready", false,-1);
    tracep->declBit(c+1380,"out_arvalid", false,-1);
    tracep->declBus(c+1381,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1382,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1383,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1384,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1385,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1386,"out_rready", false,-1);
    tracep->declBit(c+1632,"out_rvalid", false,-1);
    tracep->declBus(c+1633,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1634,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1868,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1635,"out_rlast", false,-1);
    tracep->declBit(c+1699,"out_awready", false,-1);
    tracep->declBit(c+1387,"out_awvalid", false,-1);
    tracep->declBus(c+1388,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1389,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1390,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1391,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1392,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1700,"out_wready", false,-1);
    tracep->declBit(c+1393,"out_wvalid", false,-1);
    tracep->declBus(c+1394,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1395,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1396,"out_wlast", false,-1);
    tracep->declBit(c+1397,"out_bready", false,-1);
    tracep->declBit(c+1636,"out_bvalid", false,-1);
    tracep->declBus(c+1633,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1868,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1856,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1857,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1858,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1855,"RD_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1859,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1860,"RD_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1869,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1870,"WT_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1871,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1872,"WT_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1398,"request_counter_rd", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1399+i*1,"wait_counter_rd", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1407+i*1,"rid", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1415+i*1,"rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1423+i*1,"rresp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1431+i*1,"rlast", true,(i+0));
    }
    tracep->declBus(c+1439,"arlen", false,-1, 7,0);
    tracep->declBus(c+1440,"arsize", false,-1, 2,0);
    tracep->declBus(c+1441,"arburst", false,-1, 1,0);
    tracep->declBus(c+1442,"r_counter", false,-1, 2,0);
    tracep->declBus(c+1443,"rlen", false,-1, 2,0);
    tracep->declBus(c+1444,"state_rd", false,-1, 2,0);
    tracep->declBus(c+1819,"next_state_rd", false,-1, 2,0);
    tracep->declBus(c+1445,"request_counter_wt", false,-1, 9,0);
    tracep->declBus(c+1446,"wait_counter_wt", false,-1, 31,0);
    tracep->declBit(c+1447,"bvalid", false,-1);
    tracep->declBus(c+1448,"bid", false,-1, 3,0);
    tracep->declBus(c+1449,"bresp", false,-1, 1,0);
    tracep->declBus(c+1450,"state_wt", false,-1, 2,0);
    tracep->declBus(c+1820,"next_state_wt", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+222,"auto_in_awready", false,-1);
    tracep->declBit(c+1732,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1866,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1867,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1664,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+223,"auto_in_wready", false,-1);
    tracep->declBit(c+1733,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1667,"auto_in_wlast", false,-1);
    tracep->declBit(c+1821,"auto_in_bready", false,-1);
    tracep->declBit(c+224,"auto_in_bvalid", false,-1);
    tracep->declBus(c+225,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+226,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+227,"auto_in_arready", false,-1);
    tracep->declBit(c+43,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_in_rready", false,-1);
    tracep->declBit(c+228,"auto_in_rvalid", false,-1);
    tracep->declBus(c+229,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+231,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+232,"auto_in_rlast", false,-1);
    tracep->declBit(c+1734,"auto_out_awready", false,-1);
    tracep->declBit(c+1735,"auto_out_awvalid", false,-1);
    tracep->declBus(c+148,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+149,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+233,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1736,"auto_out_wready", false,-1);
    tracep->declBit(c+1737,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1723,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1724,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"auto_out_wlast", false,-1);
    tracep->declBit(c+1616,"auto_out_bready", false,-1);
    tracep->declBit(c+234,"auto_out_bvalid", false,-1);
    tracep->declBus(c+225,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+236,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+45,"auto_out_arready", false,-1);
    tracep->declBit(c+46,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+44,"auto_out_rready", false,-1);
    tracep->declBit(c+228,"auto_out_rvalid", false,-1);
    tracep->declBus(c+229,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+231,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+237,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+238,"auto_out_rlast", false,-1);
    tracep->declBit(c+1737,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+239,"w_idle", false,-1);
    tracep->declBit(c+1738,"in_awready", false,-1);
    tracep->declBit(c+240,"busy", false,-1);
    tracep->declBus(c+241,"r_addr", false,-1, 31,0);
    tracep->declBus(c+242,"r_len", false,-1, 7,0);
    tracep->declBus(c+48,"len", false,-1, 7,0);
    tracep->declBus(c+49,"addr", false,-1, 31,0);
    tracep->declBit(c+243,"busy_1", false,-1);
    tracep->declBus(c+244,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+245,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+246,"len_1", false,-1, 7,0);
    tracep->declBus(c+1739,"addr_1", false,-1, 31,0);
    tracep->declBit(c+247,"wbeats_latched", false,-1);
    tracep->declBit(c+1735,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1740,"wbeats_valid", false,-1);
    tracep->declBus(c+248,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1741,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1725,"w_last", false,-1);
    tracep->declBit(c+1616,"nodeOut_bready", false,-1);
    tracep->declBus(c+249,"error_0", false,-1, 1,0);
    tracep->declBus(c+250,"error_1", false,-1, 1,0);
    tracep->declBus(c+251,"error_2", false,-1, 1,0);
    tracep->declBus(c+252,"error_3", false,-1, 1,0);
    tracep->declBus(c+253,"error_4", false,-1, 1,0);
    tracep->declBus(c+254,"error_5", false,-1, 1,0);
    tracep->declBus(c+255,"error_6", false,-1, 1,0);
    tracep->declBus(c+256,"error_7", false,-1, 1,0);
    tracep->declBus(c+257,"error_8", false,-1, 1,0);
    tracep->declBus(c+258,"error_9", false,-1, 1,0);
    tracep->declBus(c+259,"error_10", false,-1, 1,0);
    tracep->declBus(c+260,"error_11", false,-1, 1,0);
    tracep->declBus(c+261,"error_12", false,-1, 1,0);
    tracep->declBus(c+262,"error_13", false,-1, 1,0);
    tracep->declBus(c+263,"error_14", false,-1, 1,0);
    tracep->declBus(c+264,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+43,"io_enq_valid", false,-1);
    tracep->declBus(c+37,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+39,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+40,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+50,"io_deq_ready", false,-1);
    tracep->declBit(c+46,"io_deq_valid", false,-1);
    tracep->declBus(c+29,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+51,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+52,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+31,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+265,"ram", false,-1, 48,0);
    tracep->declBit(c+267,"full", false,-1);
    tracep->declBit(c+46,"io_deq_valid_0", false,-1);
    tracep->declBit(c+53,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+222,"io_enq_ready", false,-1);
    tracep->declBit(c+1732,"io_enq_valid", false,-1);
    tracep->declBus(c+1866,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1663,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1867,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1664,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1868,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1742,"io_deq_ready", false,-1);
    tracep->declBit(c+1743,"io_deq_valid", false,-1);
    tracep->declBus(c+148,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1744,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+268,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1721,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+149,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+269,"ram", false,-1, 48,0);
    tracep->declBit(c+271,"full", false,-1);
    tracep->declBit(c+1743,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1745,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+1733,"io_enq_valid", false,-1);
    tracep->declBus(c+1665,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1666,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1667,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1746,"io_deq_ready", false,-1);
    tracep->declBit(c+1747,"io_deq_valid", false,-1);
    tracep->declBus(c+1723,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1724,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1822,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+272,"ram", false,-1, 36,0);
    tracep->declBit(c+274,"full", false,-1);
    tracep->declBit(c+1747,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1748,"do_enq", false,-1);
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
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1749,"auto_in_awready", false,-1);
    tracep->declBit(c+1750,"auto_in_awvalid", false,-1);
    tracep->declBus(c+148,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1751,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1823,"auto_in_wready", false,-1);
    tracep->declBit(c+1752,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1723,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1724,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1617,"auto_in_bready", false,-1);
    tracep->declBit(c+275,"auto_in_bvalid", false,-1);
    tracep->declBus(c+276,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+277,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"auto_in_arready", false,-1);
    tracep->declBit(c+55,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+56,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+57,"auto_in_rready", false,-1);
    tracep->declBit(c+278,"auto_in_rvalid", false,-1);
    tracep->declBus(c+279,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+280,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+281,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+54,"nodeIn_arready", false,-1);
    tracep->declBit(c+1749,"nodeIn_awready", false,-1);
    tracep->declBit(c+1753,"w_sel0", false,-1);
    tracep->declBit(c+275,"w_full", false,-1);
    tracep->declBus(c+276,"w_id", false,-1, 3,0);
    tracep->declBit(c+282,"r_sel1", false,-1);
    tracep->declBit(c+283,"w_sel1", false,-1);
    tracep->declBit(c+278,"r_full", false,-1);
    tracep->declBus(c+279,"r_id", false,-1, 3,0);
    tracep->declBit(c+58,"ren", false,-1);
    tracep->declBit(c+284,"rdata_REG", false,-1);
    tracep->declBus(c+285,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+286,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+287,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+288,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+59,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+58,"R0_en", false,-1);
    tracep->declBit(c+1787,"R0_clk", false,-1);
    tracep->declBus(c+289,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1754,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1755,"W0_en", false,-1);
    tracep->declBit(c+1787,"W0_clk", false,-1);
    tracep->declBus(c+1723,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1724,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1756,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+985,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1866,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1867,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1664,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1757,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+986,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1667,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+987,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1451,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1452,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1453,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+61,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1454,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1455,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+638,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+639,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1456,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1375,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1730,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1866,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1867,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1664,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1376,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1731,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1667,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1615,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1377,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1378,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1379,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1369,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1370,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1371,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1372,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1374,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+222,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1732,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1866,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1867,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1664,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+223,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1733,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1667,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1821,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+224,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+225,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+226,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+227,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+228,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+229,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+231,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+232,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1451,"in_0_bvalid", false,-1);
    tracep->declBit(c+1454,"in_0_rvalid", false,-1);
    tracep->declBit(c+1758,"in_0_wready", false,-1);
    tracep->declBit(c+1759,"in_0_awready", false,-1);
    tracep->declBit(c+1824,"in_0_arready", false,-1);
    tracep->declBit(c+1756,"anonIn_awready", false,-1);
    tracep->declBit(c+60,"anonIn_arready", false,-1);
    tracep->declBit(c+63,"requestARIO_0_0", false,-1);
    tracep->declBit(c+64,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1668,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1669,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+65,"arSel", false,-1, 15,0);
    tracep->declBus(c+1873,"awSel", false,-1, 15,0);
    tracep->declBus(c+1457,"rSel", false,-1, 15,0);
    tracep->declBus(c+1458,"bSel", false,-1, 15,0);
    tracep->declBus(c+290,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+291,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+292,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+293,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+294,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+295,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+296,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1874,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+297,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+298,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+299,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1875,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+300,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+301,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+302,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1876,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+303,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+304,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+305,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1877,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+306,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+307,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+308,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1878,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+309,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+310,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+311,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1879,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+312,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+313,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+314,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1880,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+315,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+316,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+317,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1881,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+318,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+319,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+320,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1882,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+321,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+322,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+323,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1883,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+324,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+325,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+326,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1884,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+327,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+328,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+329,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1885,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+330,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+331,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+332,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1886,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+333,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+334,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+335,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1887,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+336,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+337,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+338,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1888,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+66,"in_0_arvalid", false,-1);
    tracep->declBit(c+339,"latched", false,-1);
    tracep->declBit(c+1760,"in_0_awvalid", false,-1);
    tracep->declBit(c+1618,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1619,"in_0_wvalid", false,-1);
    tracep->declBit(c+340,"idle_2", false,-1);
    tracep->declBit(c+1459,"anyValid", false,-1);
    tracep->declBus(c+1460,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+341,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1461,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1462,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1463,"prefixOR_1", false,-1);
    tracep->declBit(c+1464,"winner_2_1", false,-1);
    tracep->declBit(c+342,"state_2_0", false,-1);
    tracep->declBit(c+343,"state_2_1", false,-1);
    tracep->declBit(c+1465,"muxState_2_0", false,-1);
    tracep->declBit(c+1466,"muxState_2_1", false,-1);
    tracep->declBit(c+344,"idle_3", false,-1);
    tracep->declBit(c+1467,"anyValid_1", false,-1);
    tracep->declBus(c+1468,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+345,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1469,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1470,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1471,"winner_3_0", false,-1);
    tracep->declBit(c+1472,"winner_3_1", false,-1);
    tracep->declBit(c+346,"state_3_0", false,-1);
    tracep->declBit(c+347,"state_3_1", false,-1);
    tracep->declBit(c+1473,"muxState_3_0", false,-1);
    tracep->declBit(c+1474,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+1618,"io_enq_valid", false,-1);
    tracep->declBus(c+1670,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1761,"io_deq_ready", false,-1);
    tracep->declBit(c+1620,"io_deq_valid", false,-1);
    tracep->declBus(c+1762,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+349,"wrap", false,-1);
    tracep->declBit(c+350,"wrap_1", false,-1);
    tracep->declBit(c+351,"maybe_full", false,-1);
    tracep->declBit(c+352,"ptr_match", false,-1);
    tracep->declBit(c+353,"empty", false,-1);
    tracep->declBit(c+354,"full", false,-1);
    tracep->declBit(c+1620,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1763,"do_deq", false,-1);
    tracep->declBit(c+1764,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+350,"R0_addr", false,-1);
    tracep->declBit(c+1865,"R0_en", false,-1);
    tracep->declBit(c+1787,"R0_clk", false,-1);
    tracep->declBus(c+355,"R0_data", false,-1, 1,0);
    tracep->declBit(c+349,"W0_addr", false,-1);
    tracep->declBit(c+1764,"W0_en", false,-1);
    tracep->declBit(c+1787,"W0_clk", false,-1);
    tracep->declBus(c+1670,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+356+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1765,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1766,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+148,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+149,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1736,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1737,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1723,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1724,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1616,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+234,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+225,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+68,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+228,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+229,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+231,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+238,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1749,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1750,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+148,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1751,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1823,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1752,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1723,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1724,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1617,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+275,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+276,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+277,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+55,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+56,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+57,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+278,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+279,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+280,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+281,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1767,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1768,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+358,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+69,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+359,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+360,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+147,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1719,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+148,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+149,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+150,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1722,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1723,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1724,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+640,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+151,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+152,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+153,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+28,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+155,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+156,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+234,"in_0_bvalid", false,-1);
    tracep->declBit(c+228,"in_0_rvalid", false,-1);
    tracep->declBit(c+1769,"in_0_wready", false,-1);
    tracep->declBit(c+1770,"in_0_awready", false,-1);
    tracep->declBit(c+67,"in_0_arready", false,-1);
    tracep->declBit(c+1765,"anonIn_awready", false,-1);
    tracep->declBit(c+71,"requestARIO_0_0", false,-1);
    tracep->declBit(c+72,"requestARIO_0_1", false,-1);
    tracep->declBit(c+73,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1771,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1772,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1773,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+74,"arSel", false,-1, 15,0);
    tracep->declBus(c+362,"awSel", false,-1, 15,0);
    tracep->declBus(c+363,"rSel", false,-1, 15,0);
    tracep->declBus(c+364,"bSel", false,-1, 15,0);
    tracep->declBit(c+365,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+366,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+367,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+368,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+369,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+370,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+371,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+372,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+373,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+374,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+375,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+376,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+377,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+378,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+379,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+380,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+381,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+382,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+383,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+384,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+385,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+386,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+387,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+388,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+389,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+390,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+391,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+392,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+393,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+394,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+395,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+396,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+397,"latched", false,-1);
    tracep->declBit(c+1774,"in_0_awvalid", false,-1);
    tracep->declBit(c+1775,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1776,"in_0_wvalid", false,-1);
    tracep->declBit(c+398,"idle_3", false,-1);
    tracep->declBit(c+399,"anyValid", false,-1);
    tracep->declBus(c+400,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+401,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+402,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+403,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+404,"prefixOR_1", false,-1);
    tracep->declBit(c+405,"winner_3_1", false,-1);
    tracep->declBit(c+406,"winner_3_2", false,-1);
    tracep->declBit(c+407,"state_3_0", false,-1);
    tracep->declBit(c+408,"state_3_1", false,-1);
    tracep->declBit(c+409,"state_3_2", false,-1);
    tracep->declBit(c+410,"muxState_3_0", false,-1);
    tracep->declBit(c+411,"muxState_3_1", false,-1);
    tracep->declBit(c+412,"muxState_3_2", false,-1);
    tracep->declBit(c+413,"idle_4", false,-1);
    tracep->declBit(c+414,"anyValid_1", false,-1);
    tracep->declBus(c+415,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+416,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+417,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+418,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+419,"winner_4_0", false,-1);
    tracep->declBit(c+420,"winner_4_2", false,-1);
    tracep->declBit(c+421,"state_4_0", false,-1);
    tracep->declBit(c+422,"state_4_2", false,-1);
    tracep->declBit(c+423,"muxState_4_0", false,-1);
    tracep->declBit(c+424,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+425,"io_enq_ready", false,-1);
    tracep->declBit(c+1775,"io_enq_valid", false,-1);
    tracep->declBus(c+1777,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1778,"io_deq_ready", false,-1);
    tracep->declBit(c+1779,"io_deq_valid", false,-1);
    tracep->declBus(c+1780,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+426,"wrap", false,-1);
    tracep->declBit(c+427,"wrap_1", false,-1);
    tracep->declBit(c+428,"maybe_full", false,-1);
    tracep->declBit(c+429,"ptr_match", false,-1);
    tracep->declBit(c+430,"empty", false,-1);
    tracep->declBit(c+431,"full", false,-1);
    tracep->declBit(c+1779,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1781,"do_deq", false,-1);
    tracep->declBit(c+1782,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+427,"R0_addr", false,-1);
    tracep->declBit(c+1865,"R0_en", false,-1);
    tracep->declBit(c+1787,"R0_clk", false,-1);
    tracep->declBus(c+432,"R0_data", false,-1, 2,0);
    tracep->declBit(c+426,"W0_addr", false,-1);
    tracep->declBit(c+1782,"W0_en", false,-1);
    tracep->declBit(c+1787,"W0_clk", false,-1);
    tracep->declBus(c+1777,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+433+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1734,"auto_in_awready", false,-1);
    tracep->declBit(c+1735,"auto_in_awvalid", false,-1);
    tracep->declBus(c+148,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+149,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+233,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1736,"auto_in_wready", false,-1);
    tracep->declBit(c+1737,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1723,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1724,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"auto_in_wlast", false,-1);
    tracep->declBit(c+1616,"auto_in_bready", false,-1);
    tracep->declBit(c+234,"auto_in_bvalid", false,-1);
    tracep->declBus(c+225,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+236,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+45,"auto_in_arready", false,-1);
    tracep->declBit(c+46,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+44,"auto_in_rready", false,-1);
    tracep->declBit(c+228,"auto_in_rvalid", false,-1);
    tracep->declBus(c+229,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+231,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+237,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+238,"auto_in_rlast", false,-1);
    tracep->declBit(c+1765,"auto_out_awready", false,-1);
    tracep->declBit(c+1766,"auto_out_awvalid", false,-1);
    tracep->declBus(c+148,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+149,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1736,"auto_out_wready", false,-1);
    tracep->declBit(c+1737,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1723,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1724,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"auto_out_wlast", false,-1);
    tracep->declBit(c+1616,"auto_out_bready", false,-1);
    tracep->declBit(c+234,"auto_out_bvalid", false,-1);
    tracep->declBus(c+225,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_out_arready", false,-1);
    tracep->declBit(c+68,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_out_rready", false,-1);
    tracep->declBit(c+228,"auto_out_rvalid", false,-1);
    tracep->declBus(c+229,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+231,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+238,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+435,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+436,"io_deq_valid", false,-1);
    tracep->declBit(c+437,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+436,"full", false,-1);
    tracep->declBit(c+437,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+438,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+439,"io_enq_ready", false,-1);
    tracep->declBit(c+76,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+440,"io_deq_valid", false,-1);
    tracep->declBit(c+441,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+440,"full", false,-1);
    tracep->declBit(c+441,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+442,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+443,"io_enq_ready", false,-1);
    tracep->declBit(c+77,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+444,"io_deq_valid", false,-1);
    tracep->declBit(c+445,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+444,"full", false,-1);
    tracep->declBit(c+445,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+446,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+447,"io_enq_ready", false,-1);
    tracep->declBit(c+78,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+448,"io_deq_valid", false,-1);
    tracep->declBit(c+449,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+448,"full", false,-1);
    tracep->declBit(c+449,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+450,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+451,"io_enq_ready", false,-1);
    tracep->declBit(c+79,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+452,"io_deq_valid", false,-1);
    tracep->declBit(c+453,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+452,"full", false,-1);
    tracep->declBit(c+453,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+454,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+455,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+456,"io_deq_valid", false,-1);
    tracep->declBit(c+457,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+456,"full", false,-1);
    tracep->declBit(c+457,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+458,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+459,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+460,"io_deq_valid", false,-1);
    tracep->declBit(c+461,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+460,"full", false,-1);
    tracep->declBit(c+461,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+462,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+463,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+464,"io_deq_valid", false,-1);
    tracep->declBit(c+465,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+464,"full", false,-1);
    tracep->declBit(c+465,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+466,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+467,"io_enq_ready", false,-1);
    tracep->declBit(c+659,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+641,"io_deq_ready", false,-1);
    tracep->declBit(c+468,"io_deq_valid", false,-1);
    tracep->declBit(c+469,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+468,"full", false,-1);
    tracep->declBit(c+469,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+470,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+471,"io_enq_ready", false,-1);
    tracep->declBit(c+660,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+642,"io_deq_ready", false,-1);
    tracep->declBit(c+472,"io_deq_valid", false,-1);
    tracep->declBit(c+473,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+472,"full", false,-1);
    tracep->declBit(c+473,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+474,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+475,"io_enq_ready", false,-1);
    tracep->declBit(c+661,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+643,"io_deq_ready", false,-1);
    tracep->declBit(c+476,"io_deq_valid", false,-1);
    tracep->declBit(c+477,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+476,"full", false,-1);
    tracep->declBit(c+477,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+478,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+479,"io_enq_ready", false,-1);
    tracep->declBit(c+662,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+644,"io_deq_ready", false,-1);
    tracep->declBit(c+480,"io_deq_valid", false,-1);
    tracep->declBit(c+481,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+480,"full", false,-1);
    tracep->declBit(c+481,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+482,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+483,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+484,"io_deq_valid", false,-1);
    tracep->declBit(c+485,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+484,"full", false,-1);
    tracep->declBit(c+485,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+486,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+487,"io_enq_ready", false,-1);
    tracep->declBit(c+663,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+645,"io_deq_ready", false,-1);
    tracep->declBit(c+488,"io_deq_valid", false,-1);
    tracep->declBit(c+489,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+488,"full", false,-1);
    tracep->declBit(c+489,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+490,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+491,"io_enq_ready", false,-1);
    tracep->declBit(c+664,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+646,"io_deq_ready", false,-1);
    tracep->declBit(c+492,"io_deq_valid", false,-1);
    tracep->declBit(c+493,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+492,"full", false,-1);
    tracep->declBit(c+493,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+494,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+495,"io_enq_ready", false,-1);
    tracep->declBit(c+665,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+647,"io_deq_ready", false,-1);
    tracep->declBit(c+496,"io_deq_valid", false,-1);
    tracep->declBit(c+497,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+496,"full", false,-1);
    tracep->declBit(c+497,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+498,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+499,"io_enq_ready", false,-1);
    tracep->declBit(c+666,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+648,"io_deq_ready", false,-1);
    tracep->declBit(c+500,"io_deq_valid", false,-1);
    tracep->declBit(c+501,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+500,"full", false,-1);
    tracep->declBit(c+501,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+502,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+503,"io_enq_ready", false,-1);
    tracep->declBit(c+667,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+649,"io_deq_ready", false,-1);
    tracep->declBit(c+504,"io_deq_valid", false,-1);
    tracep->declBit(c+505,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+504,"full", false,-1);
    tracep->declBit(c+505,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+506,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+507,"io_enq_ready", false,-1);
    tracep->declBit(c+668,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+650,"io_deq_ready", false,-1);
    tracep->declBit(c+508,"io_deq_valid", false,-1);
    tracep->declBit(c+509,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+508,"full", false,-1);
    tracep->declBit(c+509,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+510,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+511,"io_enq_ready", false,-1);
    tracep->declBit(c+669,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+651,"io_deq_ready", false,-1);
    tracep->declBit(c+512,"io_deq_valid", false,-1);
    tracep->declBit(c+513,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+512,"full", false,-1);
    tracep->declBit(c+513,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+514,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+515,"io_enq_ready", false,-1);
    tracep->declBit(c+670,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+652,"io_deq_ready", false,-1);
    tracep->declBit(c+516,"io_deq_valid", false,-1);
    tracep->declBit(c+517,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+516,"full", false,-1);
    tracep->declBit(c+517,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+518,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+519,"io_enq_ready", false,-1);
    tracep->declBit(c+671,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+653,"io_deq_ready", false,-1);
    tracep->declBit(c+520,"io_deq_valid", false,-1);
    tracep->declBit(c+521,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+520,"full", false,-1);
    tracep->declBit(c+521,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+522,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+523,"io_enq_ready", false,-1);
    tracep->declBit(c+672,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+654,"io_deq_ready", false,-1);
    tracep->declBit(c+524,"io_deq_valid", false,-1);
    tracep->declBit(c+525,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+524,"full", false,-1);
    tracep->declBit(c+525,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+526,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+527,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+528,"io_deq_valid", false,-1);
    tracep->declBit(c+529,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+528,"full", false,-1);
    tracep->declBit(c+529,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+530,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+531,"io_enq_ready", false,-1);
    tracep->declBit(c+673,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+655,"io_deq_ready", false,-1);
    tracep->declBit(c+532,"io_deq_valid", false,-1);
    tracep->declBit(c+533,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+532,"full", false,-1);
    tracep->declBit(c+533,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+534,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+535,"io_enq_ready", false,-1);
    tracep->declBit(c+674,"io_enq_valid", false,-1);
    tracep->declBit(c+233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+656,"io_deq_ready", false,-1);
    tracep->declBit(c+536,"io_deq_valid", false,-1);
    tracep->declBit(c+537,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+536,"full", false,-1);
    tracep->declBit(c+537,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+538,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+539,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+540,"io_deq_valid", false,-1);
    tracep->declBit(c+541,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+540,"full", false,-1);
    tracep->declBit(c+541,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+542,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+543,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+544,"io_deq_valid", false,-1);
    tracep->declBit(c+545,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+544,"full", false,-1);
    tracep->declBit(c+545,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+546,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+547,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+548,"io_deq_valid", false,-1);
    tracep->declBit(c+549,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+548,"full", false,-1);
    tracep->declBit(c+549,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+550,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+551,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+552,"io_deq_valid", false,-1);
    tracep->declBit(c+553,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+552,"full", false,-1);
    tracep->declBit(c+553,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+554,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+555,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+556,"io_deq_valid", false,-1);
    tracep->declBit(c+557,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+556,"full", false,-1);
    tracep->declBit(c+557,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+558,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+559,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+560,"io_deq_valid", false,-1);
    tracep->declBit(c+561,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+560,"full", false,-1);
    tracep->declBit(c+561,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+562,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1825,"reset", false,-1);
    tracep->declBit(c+1756,"auto_master_out_awready", false,-1);
    tracep->declBit(c+985,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1866,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1867,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1664,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1757,"auto_master_out_wready", false,-1);
    tracep->declBit(c+986,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1667,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+987,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1451,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1452,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1453,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_master_out_arready", false,-1);
    tracep->declBit(c+61,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1454,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1455,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+638,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+639,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1456,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1825,"reset", false,-1);
    tracep->declBit(c+1864,"io_interrupt", false,-1);
    tracep->declBit(c+1756,"io_master_awready", false,-1);
    tracep->declBit(c+985,"io_master_awvalid", false,-1);
    tracep->declBus(c+1663,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1866,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1867,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1664,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1757,"io_master_wready", false,-1);
    tracep->declBit(c+986,"io_master_wvalid", false,-1);
    tracep->declBus(c+1665,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1667,"io_master_wlast", false,-1);
    tracep->declBit(c+987,"io_master_bready", false,-1);
    tracep->declBit(c+1451,"io_master_bvalid", false,-1);
    tracep->declBus(c+1453,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1452,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+60,"io_master_arready", false,-1);
    tracep->declBit(c+61,"io_master_arvalid", false,-1);
    tracep->declBus(c+38,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+37,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+39,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"io_master_rready", false,-1);
    tracep->declBit(c+1454,"io_master_rvalid", false,-1);
    tracep->declBus(c+639,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+638,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1456,"io_master_rlast", false,-1);
    tracep->declBus(c+1455,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1889,"io_slave_awready", false,-1);
    tracep->declBit(c+1864,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1890,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1866,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1867,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1858,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1891,"io_slave_wready", false,-1);
    tracep->declBit(c+1864,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1890,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1866,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1864,"io_slave_wlast", false,-1);
    tracep->declBit(c+1864,"io_slave_bready", false,-1);
    tracep->declBit(c+1892,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1893,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1894,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1895,"io_slave_arready", false,-1);
    tracep->declBit(c+1864,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1890,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1866,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1867,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1858,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1868,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1864,"io_slave_rready", false,-1);
    tracep->declBit(c+1896,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1897,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1898,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1899,"io_slave_rlast", false,-1);
    tracep->declBus(c+1900,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBit(c+988,"reset_ifu", false,-1);
    tracep->declBus(c+989,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+990,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+991,"npc", false,-1, 31,0);
    tracep->declBit(c+1901,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1902,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+989,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+990,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+992,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+993,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+994,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1866,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1867,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1859,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1868,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+995,"ifu_arvalid", false,-1);
    tracep->declBit(c+996,"ifu_arready", false,-1);
    tracep->declBus(c+997,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1903,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1904,"ifu_rlast", false,-1);
    tracep->declBus(c+1905,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+998,"ifu_rvalid", false,-1);
    tracep->declBit(c+999,"ifu_rready", false,-1);
    tracep->declBit(c+1906,"useless1", false,-1);
    tracep->declBit(c+1907,"useless2", false,-1);
    tracep->declBit(c+1908,"useless3", false,-1);
    tracep->declBit(c+1909,"useless4", false,-1);
    tracep->declBus(c+1000,"cache_araddr", false,-1, 31,0);
    tracep->declBus(c+1910,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+1001,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+1002,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+1003,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+1004,"cache_arvalid", false,-1);
    tracep->declBit(c+1827,"cache_arready", false,-1);
    tracep->declBus(c+91,"cache_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"cache_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"cache_rlast", false,-1);
    tracep->declBus(c+94,"cache_rid", false,-1, 3,0);
    tracep->declBit(c+95,"cache_rvalid", false,-1);
    tracep->declBit(c+1005,"cache_rready", false,-1);
    tracep->declBit(c+1006,"fencei", false,-1);
    tracep->declBus(c+1007,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1866,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1867,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1008,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1868,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1009,"lsu_arvalid", false,-1);
    tracep->declBit(c+96,"lsu_arready", false,-1);
    tracep->declBus(c+97,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+98,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+99,"lsu_rlast", false,-1);
    tracep->declBus(c+100,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+101,"lsu_rvalid", false,-1);
    tracep->declBit(c+1010,"lsu_rready", false,-1);
    tracep->declBus(c+1011,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1866,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1867,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1012,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1013,"lsu_awvalid", false,-1);
    tracep->declBit(c+1783,"lsu_awready", false,-1);
    tracep->declBus(c+1014,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1015,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1016,"lsu_wlast", false,-1);
    tracep->declBit(c+1017,"lsu_wvalid", false,-1);
    tracep->declBit(c+1784,"lsu_wready", false,-1);
    tracep->declBus(c+1621,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1622,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1623,"lsu_bvalid", false,-1);
    tracep->declBit(c+1018,"lsu_bready", false,-1);
    tracep->declBus(c+1019,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1020,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1021,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1022,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1023,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1024,"axi_arvalid", false,-1);
    tracep->declBit(c+102,"axi_arready", false,-1);
    tracep->declBus(c+103,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+105,"axi_rlast", false,-1);
    tracep->declBus(c+106,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+107,"axi_rvalid", false,-1);
    tracep->declBit(c+1025,"axi_rready", false,-1);
    tracep->declBus(c+1663,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1866,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1867,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1664,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1868,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+985,"axi_awvalid", false,-1);
    tracep->declBit(c+1756,"axi_awready", false,-1);
    tracep->declBus(c+1665,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1667,"axi_wlast", false,-1);
    tracep->declBit(c+986,"axi_wvalid", false,-1);
    tracep->declBit(c+1757,"axi_wready", false,-1);
    tracep->declBus(c+1453,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1452,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1451,"axi_bvalid", false,-1);
    tracep->declBit(c+987,"axi_bready", false,-1);
    tracep->declBus(c+108,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+109,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+110,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+111,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+112,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+113,"clint_arvalid", false,-1);
    tracep->declBit(c+1026,"clint_arready", false,-1);
    tracep->declBus(c+1027,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1028,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1029,"clint_rlast", false,-1);
    tracep->declBus(c+1866,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1030,"clint_rvalid", false,-1);
    tracep->declBit(c+114,"clint_rready", false,-1);
    tracep->declBus(c+1911,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1912,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1913,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1914,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1915,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1916,"clint_awvalid", false,-1);
    tracep->declBit(c+1031,"clint_awready", false,-1);
    tracep->declBus(c+1917,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1918,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1919,"clint_wlast", false,-1);
    tracep->declBit(c+1920,"clint_wvalid", false,-1);
    tracep->declBit(c+1032,"clint_wready", false,-1);
    tracep->declBus(c+1033,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1866,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1034,"clint_bvalid", false,-1);
    tracep->declBit(c+1921,"clint_bready", false,-1);
    tracep->declBus(c+1671,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1672,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1828,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1829,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1475,"a5", false,-1, 31,0);
    tracep->declBus(c+1673,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1828,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1829,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1674,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1830,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1675,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1676,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1677,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1678,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1679,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1680,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1681,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1682,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1683,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1684,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1685,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1686,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1687,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1688,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1689,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1035,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1036,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1690,"csr_write", false,-1);
    tracep->declBus(c+1691,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1476+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1037,"wdata", false,-1, 31,0);
    tracep->declBus(c+1038,"waddr", false,-1, 4,0);
    tracep->declBit(c+1039,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1480+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1040,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1041,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1042,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1922,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1044,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1045,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1046,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1047,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1048,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1049,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1050,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1051,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1052,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1053,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1054,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1055,"npc_valid", false,-1);
    tracep->declBus(c+1056,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1057,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1058,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1059,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1923,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1060,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1061,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1062,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1063,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1064,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1065,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1066,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1067,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBus(c+1000,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1910,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1001,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1002,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1003,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1004,"arvalid_i_a", false,-1);
    tracep->declBit(c+1827,"arready_o_a", false,-1);
    tracep->declBus(c+91,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+92,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+93,"rlast_o_a", false,-1);
    tracep->declBus(c+94,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+95,"rvalid_o_a", false,-1);
    tracep->declBit(c+1005,"rready_i_a", false,-1);
    tracep->declBus(c+1924,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1866,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1867,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1858,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1868,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1864,"awvalid_i_a", false,-1);
    tracep->declBit(c+1785,"awready_o_a", false,-1);
    tracep->declBus(c+1924,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1866,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1864,"wlast_i_a", false,-1);
    tracep->declBit(c+1864,"wvalid_i_a", false,-1);
    tracep->declBit(c+1786,"wready_o_a", false,-1);
    tracep->declBus(c+1624,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1625,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1626,"bvalid_o_a", false,-1);
    tracep->declBit(c+1864,"bready_i_a", false,-1);
    tracep->declBus(c+1007,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1866,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1867,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1008,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1868,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1009,"arvalid_i_b", false,-1);
    tracep->declBit(c+96,"arready_o_b", false,-1);
    tracep->declBus(c+97,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+98,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+99,"rlast_o_b", false,-1);
    tracep->declBus(c+100,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+101,"rvalid_o_b", false,-1);
    tracep->declBit(c+1010,"rready_i_b", false,-1);
    tracep->declBus(c+1011,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1866,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1867,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1012,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1868,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1013,"awvalid_i_b", false,-1);
    tracep->declBit(c+1783,"awready_o_b", false,-1);
    tracep->declBus(c+1014,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1015,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1016,"wlast_i_b", false,-1);
    tracep->declBit(c+1017,"wvalid_i_b", false,-1);
    tracep->declBit(c+1784,"wready_o_b", false,-1);
    tracep->declBus(c+1621,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1622,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1623,"bvalid_o_b", false,-1);
    tracep->declBit(c+1018,"bready_i_b", false,-1);
    tracep->declBus(c+1019,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1020,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1021,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1022,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1023,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1024,"arvalid_o", false,-1);
    tracep->declBit(c+102,"arready_i", false,-1);
    tracep->declBus(c+103,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+104,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+105,"rlast_i", false,-1);
    tracep->declBus(c+106,"rid_i", false,-1, 3,0);
    tracep->declBit(c+107,"rvalid_i", false,-1);
    tracep->declBit(c+1025,"rready_o", false,-1);
    tracep->declBus(c+1663,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1866,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1867,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1664,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1868,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+985,"awvalid_o", false,-1);
    tracep->declBit(c+1756,"awready_i", false,-1);
    tracep->declBus(c+1665,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1666,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1667,"wlast_o", false,-1);
    tracep->declBit(c+986,"wvalid_o", false,-1);
    tracep->declBit(c+1757,"wready_i", false,-1);
    tracep->declBus(c+1453,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1452,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1451,"bvalid_i", false,-1);
    tracep->declBit(c+987,"bready_o", false,-1);
    tracep->declBit(c+1068,"ar_switch", false,-1);
    tracep->declBit(c+1069,"r_switch", false,-1);
    tracep->declBit(c+1070,"aw_switch", false,-1);
    tracep->declBit(c+1071,"w_switch", false,-1);
    tracep->declBit(c+1072,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBus(c+108,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+109,"arid_i", false,-1, 3,0);
    tracep->declBus(c+110,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+111,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+112,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+113,"arvalid_i", false,-1);
    tracep->declBit(c+1026,"arready_o", false,-1);
    tracep->declBus(c+1027,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1028,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1029,"rlast_o", false,-1);
    tracep->declBus(c+1866,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1030,"rvalid_o", false,-1);
    tracep->declBit(c+114,"rready_i", false,-1);
    tracep->declBus(c+1911,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1912,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1913,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1914,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1915,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1916,"awvalid_i", false,-1);
    tracep->declBit(c+1031,"awready_o", false,-1);
    tracep->declBus(c+1917,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1918,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1919,"wlast_i", false,-1);
    tracep->declBit(c+1920,"wvalid_i", false,-1);
    tracep->declBit(c+1032,"wready_o", false,-1);
    tracep->declBus(c+1033,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1866,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1034,"bvalid_o", false,-1);
    tracep->declBit(c+1921,"bready_i", false,-1);
    tracep->declBit(c+1073,"ar_state", false,-1);
    tracep->declBit(c+1074,"r_state", false,-1);
    tracep->declBit(c+1075,"aw_state", false,-1);
    tracep->declBit(c+1076,"w_state", false,-1);
    tracep->declBit(c+1925,"b_state", false,-1);
    tracep->declBus(c+1077,"araddr", false,-1, 31,0);
    tracep->declBus(c+1078,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1079,"wdata", false,-1, 31,0);
    tracep->declBus(c+1080,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1926,"wvalid", false,-1);
    tracep->declBit(c+1081,"flag_waddr", false,-1);
    tracep->declBit(c+1082,"flag_wdata", false,-1);
    tracep->declBit(c+1083,"flag_rdata", false,-1);
    tracep->declBit(c+1084,"flag_raddr", false,-1);
    tracep->declBit(c+1927,"flag_write", false,-1);
    tracep->declBus(c+1085,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1086,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1087,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1088,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1089,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1090,"lfsr_in", false,-1);
    tracep->declBus(c+1091,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1092,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBit(c+988,"reset_ifu", false,-1);
    tracep->declBus(c+1673,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1828,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1829,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1674,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1830,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1675,"a_in_src_i", false,-1);
    tracep->declBus(c+1676,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1677,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1678,"adder_a_src_i", false,-1);
    tracep->declBit(c+1679,"adder_out_src_i", false,-1);
    tracep->declBus(c+1680,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1681,"MemRead_i", false,-1);
    tracep->declBit(c+1682,"MemWrite_i", false,-1);
    tracep->declBus(c+1683,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1684,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1685,"wb_src_i", false,-1);
    tracep->declBit(c+1686,"csr_write_i", false,-1);
    tracep->declBit(c+1687,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1688,"reg_write_i", false,-1);
    tracep->declBus(c+1689,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1035,"exu_valid_i", false,-1);
    tracep->declBit(c+1036,"exu_ready_o", false,-1);
    tracep->declBus(c+1040,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1041,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1042,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+991,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1044,"MemRead_o", false,-1);
    tracep->declBit(c+1045,"MemWrite_o", false,-1);
    tracep->declBus(c+1046,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1047,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1048,"wb_src_o", false,-1);
    tracep->declBit(c+1049,"csr_write_o", false,-1);
    tracep->declBit(c+1050,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1051,"reg_write_o", false,-1);
    tracep->declBus(c+1052,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1053,"exu_valid_o", false,-1);
    tracep->declBit(c+1054,"exu_ready_i", false,-1);
    tracep->declBit(c+1055,"npc_valid", false,-1);
    tracep->declBus(c+1094,"pc", false,-1, 31,0);
    tracep->declBus(c+1041,"rs1", false,-1, 31,0);
    tracep->declBus(c+1042,"rs2", false,-1, 31,0);
    tracep->declBus(c+1095,"imm", false,-1, 31,0);
    tracep->declBus(c+1096,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1097,"a_in_src", false,-1);
    tracep->declBus(c+1098,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1099,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1100,"adder_a_src", false,-1);
    tracep->declBit(c+1101,"adder_out_src", false,-1);
    tracep->declBus(c+1102,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1103,"a_in", false,-1, 31,0);
    tracep->declBus(c+1104,"b_in", false,-1, 31,0);
    tracep->declBus(c+1105,"a_out", false,-1, 31,0);
    tracep->declBus(c+1106,"add_out", false,-1, 31,0);
    tracep->declBus(c+1107,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1040,"alu_result", false,-1, 31,0);
    tracep->declBus(c+991,"npc", false,-1, 31,0);
    tracep->declBit(c+1108,"zero", false,-1);
    tracep->declBus(c+1868,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1928,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1929,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1109,"current_state", false,-1, 1,0);
    tracep->declBus(c+1110,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1103,"a", false,-1, 31,0);
    tracep->declBus(c+1104,"b", false,-1, 31,0);
    tracep->declBus(c+1102,"op", false,-1, 3,0);
    tracep->declBus(c+1040,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1108,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1930,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1041,"d0", false,-1, 31,0);
    tracep->declBus(c+1094,"d1", false,-1, 31,0);
    tracep->declBit(c+1097,"sel", false,-1);
    tracep->declBus(c+1103,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1930,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1042,"d0", false,-1, 31,0);
    tracep->declBus(c+1095,"d1", false,-1, 31,0);
    tracep->declBus(c+1931,"d2", false,-1, 31,0);
    tracep->declBus(c+1096,"d3", false,-1, 31,0);
    tracep->declBus(c+1098,"sel", false,-1, 1,0);
    tracep->declBus(c+1104,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1105,"a", false,-1, 31,0);
    tracep->declBus(c+1095,"b", false,-1, 31,0);
    tracep->declBus(c+1106,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1930,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1094,"d0", false,-1, 31,0);
    tracep->declBus(c+1041,"d1", false,-1, 31,0);
    tracep->declBit(c+1100,"sel", false,-1);
    tracep->declBus(c+1105,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1930,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1106,"d0", false,-1, 31,0);
    tracep->declBus(c+1096,"d1", false,-1, 31,0);
    tracep->declBit(c+1101,"sel", false,-1);
    tracep->declBus(c+1107,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1111,"pc4", false,-1, 31,0);
    tracep->declBus(c+1107,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1099,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1108,"zero", false,-1);
    tracep->declBus(c+1040,"alu_result", false,-1, 31,0);
    tracep->declBus(c+991,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1930,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1932,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBus(c+1932,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1930,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBus(c+994,"cpu_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1866,"cpu_arid_i", false,-1, 3,0);
    tracep->declBus(c+1867,"cpu_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1859,"cpu_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1868,"cpu_arburst_i", false,-1, 1,0);
    tracep->declBit(c+995,"cpu_arvalid_i", false,-1);
    tracep->declBit(c+996,"cpu_arready_o", false,-1);
    tracep->declBus(c+997,"cpu_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1903,"cpu_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1904,"cpu_rlast_o", false,-1);
    tracep->declBus(c+1905,"cpu_rid_o", false,-1, 3,0);
    tracep->declBit(c+998,"cpu_rvalid_o", false,-1);
    tracep->declBit(c+999,"cpu_rready_i", false,-1);
    tracep->declBus(c+1000,"mem_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1910,"mem_arid_o", false,-1, 3,0);
    tracep->declBus(c+1001,"mem_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1002,"mem_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1003,"mem_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1004,"mem_arvalid_o", false,-1);
    tracep->declBit(c+1827,"mem_arready_i", false,-1);
    tracep->declBus(c+91,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+92,"mem_rresp_i", false,-1, 1,0);
    tracep->declBit(c+93,"mem_rlast_i", false,-1);
    tracep->declBus(c+94,"mem_rid_i", false,-1, 3,0);
    tracep->declBit(c+95,"mem_rvalid_i", false,-1);
    tracep->declBit(c+1005,"mem_rready_o", false,-1);
    tracep->declBit(c+1006,"fencei", false,-1);
    tracep->declBus(c+1933,"BLOCK_WORDS", false,-1, 31,0);
    tracep->declBus(c+1933,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+1933,"INDEX_BITS", false,-1, 31,0);
    tracep->declBus(c+1934,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+1933,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1112,"cpu_addr", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1113+i*4,"data_array", true,(i+0), 127,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1177+i*1,"tag_array", true,(i+0), 23,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+1193+i*1,"valid_array", true,(i+0));
    }
    tracep->declBus(c+1209,"req_tag", false,-1, 23,0);
    tracep->declBus(c+1210,"req_index", false,-1, 3,0);
    tracep->declBus(c+1211,"req_offset", false,-1, 3,0);
    tracep->declBus(c+1212,"counter", false,-1, 31,0);
    tracep->declBus(c+1213,"current_state", false,-1, 2,0);
    tracep->declBus(c+1831,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1214,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1215,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBit(c+988,"reset_ifu", false,-1);
    tracep->declBus(c+1671,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1672,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1828,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1829,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1475,"a5", false,-1, 31,0);
    tracep->declBus(c+989,"pc_i", false,-1, 31,0);
    tracep->declBus(c+990,"inst_i", false,-1, 31,0);
    tracep->declBit(c+992,"idu_valid_i", false,-1);
    tracep->declBit(c+993,"idu_ready_o", false,-1);
    tracep->declBus(c+1673,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1828,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1829,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1674,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1830,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1675,"a_in_src_o", false,-1);
    tracep->declBus(c+1676,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1677,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1678,"adder_a_src_o", false,-1);
    tracep->declBit(c+1679,"adder_out_src_o", false,-1);
    tracep->declBus(c+1680,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1681,"MemRead_o", false,-1);
    tracep->declBit(c+1682,"MemWrite_o", false,-1);
    tracep->declBus(c+1683,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1684,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1685,"wb_src_o", false,-1);
    tracep->declBit(c+1686,"csr_write_o", false,-1);
    tracep->declBit(c+1687,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1688,"reg_write_o", false,-1);
    tracep->declBus(c+1689,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1035,"idu_valid_o", false,-1);
    tracep->declBit(c+1036,"idu_ready_i", false,-1);
    tracep->declBit(c+1690,"csr_write_i", false,-1);
    tracep->declBus(c+1691,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1512+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1006,"fencei", false,-1);
    tracep->declBus(c+1673,"pc", false,-1, 31,0);
    tracep->declBus(c+1692,"inst", false,-1, 31,0);
    tracep->declBus(c+1693,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1868,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1928,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1929,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1216,"current_state", false,-1, 1,0);
    tracep->declBus(c+1217,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1692,"inst", false,-1, 31,0);
    tracep->declBus(c+1680,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1694,"opcode", false,-1, 6,0);
    tracep->declBus(c+1695,"funct3", false,-1, 2,0);
    tracep->declBus(c+1696,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1690,"wen", false,-1);
    tracep->declBus(c+1692,"inst", false,-1, 31,0);
    tracep->declBus(c+1691,"wdata", false,-1, 31,0);
    tracep->declBus(c+1475,"NO", false,-1, 31,0);
    tracep->declBus(c+1673,"pc", false,-1, 31,0);
    tracep->declBus(c+1830,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1516+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1520,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1521,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1522,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1523,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1935,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1936,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1694,"opcode", false,-1, 6,0);
    tracep->declBus(c+1695,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1692,"inst", false,-1, 31,0);
    tracep->declBit(c+1675,"a_in_src", false,-1);
    tracep->declBus(c+1676,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1688,"reg_write", false,-1);
    tracep->declBus(c+1677,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1678,"adder_a_src", false,-1);
    tracep->declBit(c+1681,"MemRead", false,-1);
    tracep->declBit(c+1682,"MemWrite", false,-1);
    tracep->declBus(c+1693,"wmask", false,-1, 7,0);
    tracep->declBit(c+1685,"wb_src", false,-1);
    tracep->declBus(c+1684,"rmask", false,-1, 2,0);
    tracep->declBit(c+1686,"csr_write", false,-1);
    tracep->declBit(c+1679,"adder_out_src", false,-1);
    tracep->declBit(c+1687,"csr_wdata_src", false,-1);
    tracep->declBus(c+1694,"opcode", false,-1, 6,0);
    tracep->declBus(c+1695,"funct3", false,-1, 2,0);
    tracep->declBus(c+1696,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1930,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1692,"inst", false,-1, 31,0);
    tracep->declBus(c+1674,"data", false,-1, 31,0);
    tracep->declBus(c+1694,"opcode", false,-1, 6,0);
    tracep->declBus(c+1695,"funct3", false,-1, 2,0);
    tracep->declBus(c+1696,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBus(c+994,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1866,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1867,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1859,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1868,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+995,"arvalid_o", false,-1);
    tracep->declBit(c+996,"arready_i", false,-1);
    tracep->declBus(c+997,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1903,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1904,"rlast_i", false,-1);
    tracep->declBus(c+1905,"rid_i", false,-1, 3,0);
    tracep->declBit(c+998,"rvalid_i", false,-1);
    tracep->declBit(c+999,"rready_o", false,-1);
    tracep->declBus(c+991,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1055,"npc_valid", false,-1);
    tracep->declBit(c+988,"reset_o", false,-1);
    tracep->declBus(c+989,"pc_o", false,-1, 31,0);
    tracep->declBus(c+990,"inst_o", false,-1, 31,0);
    tracep->declBit(c+992,"ifu_valid_o", false,-1);
    tracep->declBit(c+993,"ifu_ready_i", false,-1);
    tracep->declBus(c+1218,"pc", false,-1, 31,0);
    tracep->declBus(c+1937,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1938,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1939,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1940,"lfsr_in", false,-1);
    tracep->declBit(c+995,"arvalid", false,-1);
    tracep->declBus(c+994,"araddr", false,-1, 31,0);
    tracep->declBus(c+1219,"inst", false,-1, 31,0);
    tracep->declBit(c+999,"rready", false,-1);
    tracep->declBus(c+1941,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1942+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1974,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1858,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1855,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1859,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1860,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1869,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+1220,"current_state", false,-1, 2,0);
    tracep->declBus(c+1221,"next_state", false,-1, 2,0);
    tracep->declBus(c+1222,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+1223,"ready_flag", false,-1);
    tracep->declBit(c+1224,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBit(c+988,"reset_ifu", false,-1);
    tracep->declBus(c+1040,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1041,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1042,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1044,"MemRead_i", false,-1);
    tracep->declBit(c+1045,"MemWrite_i", false,-1);
    tracep->declBus(c+1046,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1047,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1048,"wb_src_i", false,-1);
    tracep->declBit(c+1049,"csr_write_i", false,-1);
    tracep->declBit(c+1050,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1051,"reg_write_i", false,-1);
    tracep->declBus(c+1052,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1053,"lsu_valid_i", false,-1);
    tracep->declBit(c+1054,"lsu_ready_o", false,-1);
    tracep->declBus(c+1056,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1057,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1058,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1059,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1060,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1061,"wb_src_o", false,-1);
    tracep->declBit(c+1062,"csr_write_o", false,-1);
    tracep->declBit(c+1063,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1064,"reg_write_o", false,-1);
    tracep->declBus(c+1065,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1066,"lsu_valid_o", false,-1);
    tracep->declBit(c+1067,"lsu_ready_i", false,-1);
    tracep->declBus(c+1007,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1866,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1867,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1008,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1868,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1009,"arvalid_o", false,-1);
    tracep->declBit(c+96,"arready_i", false,-1);
    tracep->declBus(c+97,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+98,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+99,"rlast_i", false,-1);
    tracep->declBus(c+100,"rid_i", false,-1, 3,0);
    tracep->declBit(c+101,"rvalid_i", false,-1);
    tracep->declBit(c+1010,"rready_o", false,-1);
    tracep->declBus(c+1011,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1866,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1867,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1012,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1868,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1013,"awvalid_o", false,-1);
    tracep->declBit(c+1783,"awready_i", false,-1);
    tracep->declBus(c+1014,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1015,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1016,"wlast_o", false,-1);
    tracep->declBit(c+1017,"wvalid_o", false,-1);
    tracep->declBit(c+1784,"wready_i", false,-1);
    tracep->declBus(c+1621,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1622,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1623,"bvalid_i", false,-1);
    tracep->declBit(c+1018,"bready_o", false,-1);
    tracep->declBus(c+1056,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1057,"rs1", false,-1, 31,0);
    tracep->declBus(c+1975,"rs2", false,-1, 31,0);
    tracep->declBus(c+1976,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1060,"rmask", false,-1, 2,0);
    tracep->declBit(c+1225,"flag", false,-1);
    tracep->declBit(c+1977,"wvalid_tmp", false,-1);
    tracep->declBus(c+1978,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1979,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1980,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1981,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1982,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1983,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1984,"lfsr_in", false,-1);
    tracep->declBit(c+1009,"arvalid", false,-1);
    tracep->declBus(c+1007,"araddr", false,-1, 31,0);
    tracep->declBit(c+1010,"rready", false,-1);
    tracep->declBus(c+1011,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1013,"awvalid", false,-1);
    tracep->declBus(c+1014,"wdata", false,-1, 31,0);
    tracep->declBus(c+1015,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"wvalid", false,-1);
    tracep->declBit(c+1018,"bready", false,-1);
    tracep->declBus(c+1985,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1986+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+2018,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+2019,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2020+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+2052,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2053+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2085+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+2117,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1868,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1928,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1929,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+2118,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1226,"current_state", false,-1, 1,0);
    tracep->declBus(c+1227,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+2119,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1930,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBus(c+1037,"wdata", false,-1, 31,0);
    tracep->declBus(c+1038,"waddr", false,-1, 4,0);
    tracep->declBit(c+1039,"wen", false,-1);
    tracep->declBus(c+1671,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1828,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1672,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1829,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1475,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1524+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1556+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBit(c+988,"reset_ifu", false,-1);
    tracep->declBus(c+1056,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1057,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1058,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1059,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1060,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1061,"wb_src_i", false,-1);
    tracep->declBit(c+1062,"csr_write_i", false,-1);
    tracep->declBit(c+1063,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1064,"reg_write_i", false,-1);
    tracep->declBus(c+1065,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1066,"wbu_valid_i", false,-1);
    tracep->declBit(c+1067,"wbu_ready_o", false,-1);
    tracep->declBus(c+1691,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1037,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1690,"csr_write_o", false,-1);
    tracep->declBit(c+1039,"reg_write_o", false,-1);
    tracep->declBus(c+1038,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1228,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1229,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1230,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1231,"rs1", false,-1, 31,0);
    tracep->declBus(c+1232,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1233,"rmask", false,-1, 2,0);
    tracep->declBit(c+1234,"wb_src", false,-1);
    tracep->declBit(c+1235,"csr_wdata_src", false,-1);
    tracep->declBit(c+1236,"difftest_check", false,-1);
    tracep->declBit(c+1237,"difftest_check_flag", false,-1);
    tracep->declBus(c+1868,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1928,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1929,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1238,"current_state", false,-1, 1,0);
    tracep->declBus(c+1239,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1930,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1231,"d0", false,-1, 31,0);
    tracep->declBus(c+1232,"d1", false,-1, 31,0);
    tracep->declBit(c+1235,"sel", false,-1);
    tracep->declBus(c+1691,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1229,"read_data", false,-1, 31,0);
    tracep->declBus(c+1240,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1233,"rmask", false,-1, 2,0);
    tracep->declBus(c+1228,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1241,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1242,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1243,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1244,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1245,"byte3", false,-1, 31,0);
    tracep->declBus(c+1246,"byte2", false,-1, 31,0);
    tracep->declBus(c+1247,"byte1", false,-1, 31,0);
    tracep->declBus(c+1248,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1930,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1230,"d0", false,-1, 31,0);
    tracep->declBus(c+1228,"d1", false,-1, 31,0);
    tracep->declBit(c+1234,"sel", false,-1);
    tracep->declBus(c+1037,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1826,"rst_n", false,-1);
    tracep->declBus(c+1019,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1020,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1021,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1022,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1023,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1024,"axi_arvalid_i", false,-1);
    tracep->declBit(c+102,"axi_arready_o", false,-1);
    tracep->declBus(c+103,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+104,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+105,"axi_rlast_o", false,-1);
    tracep->declBus(c+106,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+107,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1025,"axi_rready_i", false,-1);
    tracep->declBus(c+1663,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1866,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1867,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1664,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1868,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+985,"axi_awvalid_i", false,-1);
    tracep->declBit(c+1756,"axi_awready_o", false,-1);
    tracep->declBus(c+1665,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1666,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1667,"axi_wlast_i", false,-1);
    tracep->declBit(c+986,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1757,"axi_wready_o", false,-1);
    tracep->declBus(c+1453,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1452,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1451,"axi_bvalid_o", false,-1);
    tracep->declBit(c+987,"axi_bready_i", false,-1);
    tracep->declBus(c+38,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+37,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+39,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+40,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+41,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+61,"sram_arvalid_o", false,-1);
    tracep->declBit(c+60,"sram_arready_i", false,-1);
    tracep->declBus(c+638,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+639,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1456,"sram_rlast_i", false,-1);
    tracep->declBus(c+1455,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1454,"sram_rvalid_i", false,-1);
    tracep->declBit(c+62,"sram_rready_o", false,-1);
    tracep->declBus(c+1663,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1866,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1867,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1664,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1868,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+985,"sram_awvalid_o", false,-1);
    tracep->declBit(c+1756,"sram_awready_i", false,-1);
    tracep->declBus(c+1665,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1666,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1667,"sram_wlast_o", false,-1);
    tracep->declBit(c+986,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1757,"sram_wready_i", false,-1);
    tracep->declBus(c+1453,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1452,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1451,"sram_bvalid_i", false,-1);
    tracep->declBit(c+987,"sram_bready_o", false,-1);
    tracep->declBus(c+108,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+109,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+110,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+111,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+112,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+113,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1026,"clint_arready_i", false,-1);
    tracep->declBus(c+1027,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1028,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1029,"clint_rlast_i", false,-1);
    tracep->declBus(c+1866,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1030,"clint_rvalid_i", false,-1);
    tracep->declBit(c+114,"clint_rready_o", false,-1);
    tracep->declBus(c+1911,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1912,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1913,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1914,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1915,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1916,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1031,"clint_awready_i", false,-1);
    tracep->declBus(c+1917,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1918,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1919,"clint_wlast_o", false,-1);
    tracep->declBit(c+1920,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1032,"clint_wready_i", false,-1);
    tracep->declBus(c+1033,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1866,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1034,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1921,"clint_bready_o", false,-1);
    tracep->declBit(c+115,"ar_switch", false,-1);
    tracep->declBit(c+116,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"io_d", false,-1);
    tracep->declBit(c+563,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"io_d", false,-1);
    tracep->declBit(c+563,"io_q", false,-1);
    tracep->declBit(c+563,"sync_0", false,-1);
    tracep->declBit(c+564,"sync_1", false,-1);
    tracep->declBit(c+565,"sync_2", false,-1);
    tracep->declBit(c+566,"sync_3", false,-1);
    tracep->declBit(c+567,"sync_4", false,-1);
    tracep->declBit(c+568,"sync_5", false,-1);
    tracep->declBit(c+569,"sync_6", false,-1);
    tracep->declBit(c+570,"sync_7", false,-1);
    tracep->declBit(c+571,"sync_8", false,-1);
    tracep->declBit(c+572,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1345,"auto_in_psel", false,-1);
    tracep->declBit(c+1346,"auto_in_penable", false,-1);
    tracep->declBit(c+1332,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1331,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+691,"auto_in_pready", false,-1);
    tracep->declBit(c+1864,"auto_in_pslverr", false,-1);
    tracep->declBus(c+692,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1789,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1790,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1791,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1792,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1793,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1794,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1795,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1796,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1797,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1798,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1588,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1345,"in_psel", false,-1);
    tracep->declBit(c+1346,"in_penable", false,-1);
    tracep->declBus(c+1331,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1332,"in_pwrite", false,-1);
    tracep->declBus(c+1333,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+691,"in_pready", false,-1);
    tracep->declBus(c+692,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1864,"in_pslverr", false,-1);
    tracep->declBus(c+1789,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1790,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1791,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1792,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1793,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1794,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1795,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1796,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1797,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1798,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+696,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+692,"rdata", false,-1, 31,0);
    tracep->declBus(c+697,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+691,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+698,"num", false,-1, 3,0);
    tracep->declBus(c+1791,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+699,"num", false,-1, 3,0);
    tracep->declBus(c+1792,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+700,"num", false,-1, 3,0);
    tracep->declBus(c+1793,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+701,"num", false,-1, 3,0);
    tracep->declBus(c+1794,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+702,"num", false,-1, 3,0);
    tracep->declBus(c+1795,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+703,"num", false,-1, 3,0);
    tracep->declBus(c+1796,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+704,"num", false,-1, 3,0);
    tracep->declBus(c+1797,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+705,"num", false,-1, 3,0);
    tracep->declBus(c+1798,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1342,"auto_in_psel", false,-1);
    tracep->declBit(c+1343,"auto_in_penable", false,-1);
    tracep->declBit(c+1332,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1331,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+120,"auto_in_pready", false,-1);
    tracep->declBit(c+1864,"auto_in_pslverr", false,-1);
    tracep->declBus(c+121,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1799,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1800,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1588,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1342,"in_psel", false,-1);
    tracep->declBit(c+1343,"in_penable", false,-1);
    tracep->declBus(c+1331,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1332,"in_pwrite", false,-1);
    tracep->declBus(c+1333,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+120,"in_pready", false,-1);
    tracep->declBus(c+121,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1864,"in_pslverr", false,-1);
    tracep->declBit(c+1799,"ps2_clk", false,-1);
    tracep->declBit(c+1800,"ps2_data", false,-1);
    tracep->declBus(c+573,"data_r", false,-1, 7,0);
    tracep->declBus(c+574,"old_data", false,-1, 7,0);
    tracep->declBus(c+575,"data_asic", false,-1, 7,0);
    tracep->declBus(c+576,"buffer", false,-1, 7,0);
    tracep->declBit(c+577,"ready", false,-1);
    tracep->declBit(c+578,"nextdata_n", false,-1);
    tracep->declBit(c+579,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1832,"clrn", false,-1);
    tracep->declBit(c+1799,"ps2_clk", false,-1);
    tracep->declBit(c+1800,"ps2_data", false,-1);
    tracep->declBit(c+578,"nextdata_n", false,-1);
    tracep->declBus(c+576,"data", false,-1, 7,0);
    tracep->declBit(c+577,"ready", false,-1);
    tracep->declBit(c+579,"overflow", false,-1);
    tracep->declBus(c+580,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+581+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+589,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+590,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+591,"count", false,-1, 3,0);
    tracep->declBus(c+592,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+593,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1767,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1768,"auto_in_wvalid", false,-1);
    tracep->declBit(c+358,"auto_in_arready", false,-1);
    tracep->declBit(c+69,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+359,"auto_in_rvalid", false,-1);
    tracep->declBus(c+360,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+359,"state", false,-1);
    tracep->declBus(c+361,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+360,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+117,"raddr", false,-1, 31,0);
    tracep->declBit(c+118,"ren", false,-1);
    tracep->declBus(c+119,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1347,"auto_in_psel", false,-1);
    tracep->declBit(c+1348,"auto_in_penable", false,-1);
    tracep->declBit(c+1332,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1328,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1817,"auto_in_pready", false,-1);
    tracep->declBit(c+1864,"auto_in_pslverr", false,-1);
    tracep->declBus(c+122,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1810,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1697,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1811,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1328,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1347,"in_psel", false,-1);
    tracep->declBit(c+1348,"in_penable", false,-1);
    tracep->declBus(c+1331,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1332,"in_pwrite", false,-1);
    tracep->declBus(c+1333,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1817,"in_pready", false,-1);
    tracep->declBus(c+122,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1864,"in_pslverr", false,-1);
    tracep->declBit(c+1810,"qspi_sck", false,-1);
    tracep->declBit(c+1697,"qspi_ce_n", false,-1);
    tracep->declBus(c+1811,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1811,"din", false,-1, 3,0);
    tracep->declBus(c+1833,"dout", false,-1, 3,0);
    tracep->declBus(c+1701,"douten", false,-1, 3,0);
    tracep->declBit(c+1834,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1787,"clk_i", false,-1);
    tracep->declBit(c+1788,"rst_i", false,-1);
    tracep->declBus(c+1328,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1333,"dat_i", false,-1, 31,0);
    tracep->declBus(c+122,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1334,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1347,"cyc_i", false,-1);
    tracep->declBit(c+1347,"stb_i", false,-1);
    tracep->declBit(c+1834,"ack_o", false,-1);
    tracep->declBit(c+1332,"we_i", false,-1);
    tracep->declBit(c+1810,"sck", false,-1);
    tracep->declBit(c+1697,"ce_n", false,-1);
    tracep->declBus(c+1811,"din", false,-1, 3,0);
    tracep->declBus(c+1833,"dout", false,-1, 3,0);
    tracep->declBus(c+1701,"douten", false,-1, 3,0);
    tracep->declBus(c+1868,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1928,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1929,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+706,"mr_sck", false,-1);
    tracep->declBit(c+707,"mr_ce_n", false,-1);
    tracep->declBus(c+1811,"mr_din", false,-1, 3,0);
    tracep->declBus(c+708,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+709,"mr_doe", false,-1);
    tracep->declBit(c+710,"mw_sck", false,-1);
    tracep->declBit(c+711,"mw_ce_n", false,-1);
    tracep->declBus(c+1811,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1607,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+712,"mw_doe", false,-1);
    tracep->declBit(c+1702,"mr_rd", false,-1);
    tracep->declBit(c+713,"mr_done", false,-1);
    tracep->declBit(c+1703,"mw_wr", false,-1);
    tracep->declBit(c+1608,"mw_done", false,-1);
    tracep->declBit(c+1347,"wb_valid", false,-1);
    tracep->declBit(c+1589,"wb_we", false,-1);
    tracep->declBit(c+1590,"wb_re", false,-1);
    tracep->declBus(c+1637,"state", false,-1, 1,0);
    tracep->declBus(c+1835,"nstate", false,-1, 1,0);
    tracep->declBus(c+1836,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1837,"qpi_sck", false,-1);
    tracep->declBus(c+1591,"size", false,-1, 2,0);
    tracep->declBus(c+1592,"byte0", false,-1, 7,0);
    tracep->declBus(c+1593,"byte1", false,-1, 7,0);
    tracep->declBus(c+1594,"byte2", false,-1, 7,0);
    tracep->declBus(c+1595,"byte3", false,-1, 7,0);
    tracep->declBus(c+1596,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1832,"rst_n", false,-1);
    tracep->declBus(c+1597,"addr", false,-1, 23,0);
    tracep->declBit(c+1702,"rd", false,-1);
    tracep->declBus(c+1869,"size", false,-1, 2,0);
    tracep->declBit(c+713,"done", false,-1);
    tracep->declBus(c+122,"line", false,-1, 31,0);
    tracep->declBit(c+706,"sck", false,-1);
    tracep->declBit(c+707,"ce_n", false,-1);
    tracep->declBus(c+1811,"din", false,-1, 3,0);
    tracep->declBus(c+708,"dout", false,-1, 3,0);
    tracep->declBit(c+709,"douten", false,-1);
    tracep->declBus(c+2120,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2121,"READ", false,-1, 0,0);
    tracep->declBus(c+2122,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+714,"state", false,-1);
    tracep->declBit(c+1704,"nstate", false,-1);
    tracep->declBus(c+715,"counter", false,-1, 7,0);
    tracep->declBus(c+716,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+594+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+2123,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+717,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1832,"rst_n", false,-1);
    tracep->declBus(c+1598,"addr", false,-1, 23,0);
    tracep->declBus(c+1596,"line", false,-1, 31,0);
    tracep->declBus(c+1591,"size", false,-1, 2,0);
    tracep->declBit(c+1703,"wr", false,-1);
    tracep->declBit(c+1608,"done", false,-1);
    tracep->declBit(c+710,"sck", false,-1);
    tracep->declBit(c+711,"ce_n", false,-1);
    tracep->declBus(c+1811,"din", false,-1, 3,0);
    tracep->declBus(c+1607,"dout", false,-1, 3,0);
    tracep->declBit(c+712,"douten", false,-1);
    tracep->declBus(c+2120,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2121,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1599,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+718,"state", false,-1);
    tracep->declBit(c+1705,"nstate", false,-1);
    tracep->declBus(c+719,"counter", false,-1, 7,0);
    tracep->declBus(c+720,"saddr", false,-1, 23,0);
    tracep->declBus(c+2124,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1699,"auto_in_awready", false,-1);
    tracep->declBit(c+1387,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1388,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1389,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1391,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1392,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1700,"auto_in_wready", false,-1);
    tracep->declBit(c+1393,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1394,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1395,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1396,"auto_in_wlast", false,-1);
    tracep->declBit(c+1397,"auto_in_bready", false,-1);
    tracep->declBit(c+1636,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1633,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1868,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1698,"auto_in_arready", false,-1);
    tracep->declBit(c+1380,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1381,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1382,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1383,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1384,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1385,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1386,"auto_in_rready", false,-1);
    tracep->declBit(c+1632,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1633,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1634,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1868,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1635,"auto_in_rlast", false,-1);
    tracep->declBit(c+1812,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1629,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+686,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+687,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+688,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+689,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1813,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1630,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1631,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1656,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1699,"in_awready", false,-1);
    tracep->declBit(c+1387,"in_awvalid", false,-1);
    tracep->declBus(c+1389,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1388,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1390,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1391,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1392,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1700,"in_wready", false,-1);
    tracep->declBit(c+1393,"in_wvalid", false,-1);
    tracep->declBus(c+1394,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1395,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1396,"in_wlast", false,-1);
    tracep->declBit(c+1397,"in_bready", false,-1);
    tracep->declBit(c+1636,"in_bvalid", false,-1);
    tracep->declBus(c+1868,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1633,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1698,"in_arready", false,-1);
    tracep->declBit(c+1380,"in_arvalid", false,-1);
    tracep->declBus(c+1382,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1381,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1383,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1384,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1385,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1386,"in_rready", false,-1);
    tracep->declBit(c+1632,"in_rvalid", false,-1);
    tracep->declBus(c+1868,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1634,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1635,"in_rlast", false,-1);
    tracep->declBus(c+1633,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1812,"sdram_clk", false,-1);
    tracep->declBit(c+1629,"sdram_cke", false,-1);
    tracep->declBit(c+686,"sdram_cs", false,-1);
    tracep->declBit(c+687,"sdram_ras", false,-1);
    tracep->declBit(c+688,"sdram_cas", false,-1);
    tracep->declBit(c+689,"sdram_we", false,-1);
    tracep->declBus(c+1813,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1630,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1631,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1656,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+721,"sdram_dout_en", false,-1);
    tracep->declBus(c+722,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1787,"clk_i", false,-1);
    tracep->declBit(c+1788,"rst_i", false,-1);
    tracep->declBit(c+1387,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1389,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1388,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1390,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1392,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1393,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1394,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1395,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1396,"inport_wlast_i", false,-1);
    tracep->declBit(c+1397,"inport_bready_i", false,-1);
    tracep->declBit(c+1380,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1382,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1381,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1383,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1385,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1386,"inport_rready_i", false,-1);
    tracep->declBus(c+1656,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1699,"inport_awready_o", false,-1);
    tracep->declBit(c+1700,"inport_wready_o", false,-1);
    tracep->declBit(c+1636,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1868,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1633,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1698,"inport_arready_o", false,-1);
    tracep->declBit(c+1632,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1634,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1868,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1633,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1635,"inport_rlast_o", false,-1);
    tracep->declBit(c+1812,"sdram_clk_o", false,-1);
    tracep->declBit(c+1629,"sdram_cke_o", false,-1);
    tracep->declBit(c+686,"sdram_cs_o", false,-1);
    tracep->declBit(c+687,"sdram_ras_o", false,-1);
    tracep->declBit(c+688,"sdram_cas_o", false,-1);
    tracep->declBit(c+689,"sdram_we_o", false,-1);
    tracep->declBus(c+1631,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1813,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1630,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+722,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+721,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1853,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1934,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1857,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2125,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1706,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1707,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1609,"ram_rd_w", false,-1);
    tracep->declBit(c+1638,"ram_accept_w", false,-1);
    tracep->declBus(c+1394,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+723,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1600,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+724,"ram_ack_w", false,-1);
    tracep->declBit(c+1864,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1787,"clk_i", false,-1);
    tracep->declBit(c+1788,"rst_i", false,-1);
    tracep->declBit(c+1387,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1389,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1388,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1390,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1392,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1393,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1394,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1395,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1396,"axi_wlast_i", false,-1);
    tracep->declBit(c+1397,"axi_bready_i", false,-1);
    tracep->declBit(c+1380,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1382,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1381,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1383,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1385,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1386,"axi_rready_i", false,-1);
    tracep->declBit(c+1638,"ram_accept_i", false,-1);
    tracep->declBit(c+724,"ram_ack_i", false,-1);
    tracep->declBit(c+1864,"ram_error_i", false,-1);
    tracep->declBus(c+723,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1699,"axi_awready_o", false,-1);
    tracep->declBit(c+1700,"axi_wready_o", false,-1);
    tracep->declBit(c+1636,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1868,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1633,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1698,"axi_arready_o", false,-1);
    tracep->declBit(c+1632,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1634,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1868,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1633,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1635,"axi_rlast_o", false,-1);
    tracep->declBus(c+1707,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1609,"ram_rd_o", false,-1);
    tracep->declBus(c+1600,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1706,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1394,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+725,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+726,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+727,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+728,"req_rd_q", false,-1);
    tracep->declBit(c+729,"req_wr_q", false,-1);
    tracep->declBus(c+730,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+731,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+732,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+733,"req_prio_q", false,-1);
    tracep->declBit(c+734,"req_hold_rd_q", false,-1);
    tracep->declBit(c+735,"req_hold_wr_q", false,-1);
    tracep->declBit(c+736,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1708,"req_push_w", false,-1);
    tracep->declBus(c+1838,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+737,"req_out_valid_w", false,-1);
    tracep->declBus(c+1639,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1709,"resp_accept_w", false,-1);
    tracep->declBit(c+1839,"resp_is_write_w", false,-1);
    tracep->declBit(c+1840,"resp_is_read_w", false,-1);
    tracep->declBit(c+1635,"resp_is_last_w", false,-1);
    tracep->declBus(c+1633,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+738,"resp_valid_w", false,-1);
    tracep->declBit(c+739,"write_prio_w", false,-1);
    tracep->declBit(c+740,"read_prio_w", false,-1);
    tracep->declBit(c+1610,"write_active_w", false,-1);
    tracep->declBit(c+1609,"read_active_w", false,-1);
    tracep->declBus(c+1706,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1841,"wr_w", false,-1);
    tracep->declBit(c+1609,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+2126,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1933,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2125,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1787,"clk_i", false,-1);
    tracep->declBit(c+1788,"rst_i", false,-1);
    tracep->declBus(c+1838,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1708,"push_i", false,-1);
    tracep->declBit(c+1709,"pop_i", false,-1);
    tracep->declBus(c+1639,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+736,"accept_o", false,-1);
    tracep->declBit(c+737,"valid_o", false,-1);
    tracep->declBus(c+2127,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+741+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+745,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+746,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+747,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1930,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1933,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2125,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1787,"clk_i", false,-1);
    tracep->declBit(c+1788,"rst_i", false,-1);
    tracep->declBus(c+723,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+724,"push_i", false,-1);
    tracep->declBit(c+1709,"pop_i", false,-1);
    tracep->declBus(c+1634,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+748,"accept_o", false,-1);
    tracep->declBit(c+738,"valid_o", false,-1);
    tracep->declBus(c+2127,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1640+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1644,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+749,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+750,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1787,"clk_i", false,-1);
    tracep->declBit(c+1788,"rst_i", false,-1);
    tracep->declBus(c+1707,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1609,"inport_rd_i", false,-1);
    tracep->declBus(c+1600,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1706,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1394,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1656,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1638,"inport_accept_o", false,-1);
    tracep->declBit(c+724,"inport_ack_o", false,-1);
    tracep->declBit(c+1864,"inport_error_o", false,-1);
    tracep->declBus(c+723,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1812,"sdram_clk_o", false,-1);
    tracep->declBit(c+1629,"sdram_cke_o", false,-1);
    tracep->declBit(c+686,"sdram_cs_o", false,-1);
    tracep->declBit(c+687,"sdram_ras_o", false,-1);
    tracep->declBit(c+688,"sdram_cas_o", false,-1);
    tracep->declBit(c+689,"sdram_we_o", false,-1);
    tracep->declBus(c+1631,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1813,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1630,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+722,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+721,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1853,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1934,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1857,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2125,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+2125,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1933,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1933,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+2128,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+2129,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+2130,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+2131,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1933,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+2132,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2133,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2134,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2135,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+2136,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+2137,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2138,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1866,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+2139,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1933,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1866,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+2138,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+2137,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2133,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+2135,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+2134,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+2136,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+2132,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+2140,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2141,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2142,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+2142,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1930,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+2142,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+2125,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2125,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2126,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1706,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1707,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1609,"ram_rd_w", false,-1);
    tracep->declBit(c+1638,"ram_accept_w", false,-1);
    tracep->declBus(c+1394,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+723,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+724,"ram_ack_w", false,-1);
    tracep->declBit(c+1710,"ram_req_w", false,-1);
    tracep->declBus(c+751,"command_q", false,-1, 3,0);
    tracep->declBus(c+1645,"addr_q", false,-1, 12,0);
    tracep->declBus(c+722,"data_q", false,-1, 31,0);
    tracep->declBit(c+752,"data_rd_en_q", false,-1);
    tracep->declBus(c+1631,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1629,"cke_q", false,-1);
    tracep->declBus(c+1630,"bank_q", false,-1, 1,0);
    tracep->declBus(c+723,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+753,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1656,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+754,"refresh_q", false,-1);
    tracep->declBus(c+755,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+756+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1646,"state_q", false,-1, 3,0);
    tracep->declBus(c+1711,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1712,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+760,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+761,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1713,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1714,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1715,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1933,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+762,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1716,"delay_r", false,-1, 3,0);
    tracep->declBus(c+2143,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1647,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+763,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+764,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+765,"idx", false,-1, 31,0);
    tracep->declBus(c+766,"rd_q", false,-1, 3,0);
    tracep->declBit(c+724,"ack_q", false,-1);
    tracep->declArray(c+1648,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1352,"auto_in_psel", false,-1);
    tracep->declBit(c+1353,"auto_in_penable", false,-1);
    tracep->declBit(c+1332,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1341,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1331,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"auto_in_pready", false,-1);
    tracep->declBit(c+694,"auto_in_pslverr", false,-1);
    tracep->declBus(c+695,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+685,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1627,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1628,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1809,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+2144,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2145,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+2146,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1601,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1352,"in_psel", false,-1);
    tracep->declBit(c+1353,"in_penable", false,-1);
    tracep->declBus(c+1331,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1332,"in_pwrite", false,-1);
    tracep->declBus(c+1333,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"in_pready", false,-1);
    tracep->declBus(c+695,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+694,"in_pslverr", false,-1);
    tracep->declBit(c+685,"spi_sck", false,-1);
    tracep->declBus(c+1627,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1628,"spi_mosi", false,-1);
    tracep->declBit(c+1809,"spi_miso", false,-1);
    tracep->declBit(c+767,"spi_irq_out", false,-1);
    tracep->declBus(c+2147,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+2148,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+2147,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+2149,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+2150,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+2151,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1866,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2138,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+2137,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+2133,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+2135,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+2134,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+2136,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+2132,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+2140,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+2141,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+2152,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+768,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1611,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+769,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+770,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+771,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+772,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+773,"wb_we_i", false,-1);
    tracep->declBit(c+774,"wb_stb_i", false,-1);
    tracep->declBit(c+775,"wb_cyc_i", false,-1);
    tracep->declBit(c+776,"wb_ack_o", false,-1);
    tracep->declBit(c+1864,"wb_err_o", false,-1);
    tracep->declBit(c+777,"wb_int_o", false,-1);
    tracep->declBit(c+778,"done", false,-1);
    tracep->declBus(c+779,"paddr", false,-1, 31,0);
    tracep->declQuad(c+780,"data", false,-1, 63,0);
    tracep->declBit(c+782,"is_flash_access", false,-1);
    tracep->declBus(c+783,"tmp", false,-1, 31,0);
    tracep->declQuad(c+784,"tmp64", false,-1, 63,0);
    tracep->declBus(c+786,"counter", false,-1, 7,0);
    tracep->declBit(c+787,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+2153,"Tp", false,-1, 31,0);
    tracep->declBit(c+1787,"wb_clk_i", false,-1);
    tracep->declBit(c+1788,"wb_rst_i", false,-1);
    tracep->declBus(c+769,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+770,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+771,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+772,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+773,"wb_we_i", false,-1);
    tracep->declBit(c+774,"wb_stb_i", false,-1);
    tracep->declBit(c+775,"wb_cyc_i", false,-1);
    tracep->declBit(c+776,"wb_ack_o", false,-1);
    tracep->declBit(c+1864,"wb_err_o", false,-1);
    tracep->declBit(c+777,"wb_int_o", false,-1);
    tracep->declBus(c+1627,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+685,"sclk_pad_o", false,-1);
    tracep->declBit(c+1628,"mosi_pad_o", false,-1);
    tracep->declBit(c+1809,"miso_pad_i", false,-1);
    tracep->declBus(c+788,"divider", false,-1, 15,0);
    tracep->declBus(c+789,"ctrl", false,-1, 13,0);
    tracep->declBus(c+790,"ss", false,-1, 7,0);
    tracep->declBus(c+791,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+792,"rx", false,-1, 127,0);
    tracep->declBit(c+796,"rx_negedge", false,-1);
    tracep->declBit(c+797,"tx_negedge", false,-1);
    tracep->declBus(c+798,"char_len", false,-1, 6,0);
    tracep->declBit(c+799,"go", false,-1);
    tracep->declBit(c+800,"lsb", false,-1);
    tracep->declBit(c+801,"ie", false,-1);
    tracep->declBit(c+802,"ass", false,-1);
    tracep->declBit(c+803,"spi_divider_sel", false,-1);
    tracep->declBit(c+804,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+805,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+806,"spi_ss_sel", false,-1);
    tracep->declBit(c+807,"tip", false,-1);
    tracep->declBit(c+808,"pos_edge", false,-1);
    tracep->declBit(c+809,"neg_edge", false,-1);
    tracep->declBit(c+810,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+2153,"Tp", false,-1, 31,0);
    tracep->declBit(c+1787,"clk_in", false,-1);
    tracep->declBit(c+1788,"rst", false,-1);
    tracep->declBit(c+807,"enable", false,-1);
    tracep->declBit(c+799,"go", false,-1);
    tracep->declBit(c+810,"last_clk", false,-1);
    tracep->declBus(c+788,"divider", false,-1, 15,0);
    tracep->declBit(c+685,"clk_out", false,-1);
    tracep->declBit(c+808,"pos_edge", false,-1);
    tracep->declBit(c+809,"neg_edge", false,-1);
    tracep->declBus(c+811,"cnt", false,-1, 15,0);
    tracep->declBit(c+812,"cnt_zero", false,-1);
    tracep->declBit(c+813,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+2153,"Tp", false,-1, 31,0);
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1788,"rst", false,-1);
    tracep->declBus(c+814,"latch", false,-1, 3,0);
    tracep->declBus(c+772,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+798,"len", false,-1, 6,0);
    tracep->declBit(c+800,"lsb", false,-1);
    tracep->declBit(c+799,"go", false,-1);
    tracep->declBit(c+808,"pos_edge", false,-1);
    tracep->declBit(c+809,"neg_edge", false,-1);
    tracep->declBit(c+796,"rx_negedge", false,-1);
    tracep->declBit(c+797,"tx_negedge", false,-1);
    tracep->declBit(c+807,"tip", false,-1);
    tracep->declBit(c+810,"last", false,-1);
    tracep->declBus(c+770,"p_in", false,-1, 31,0);
    tracep->declArray(c+792,"p_out", false,-1, 127,0);
    tracep->declBit(c+685,"s_clk", false,-1);
    tracep->declBit(c+1809,"s_in", false,-1);
    tracep->declBit(c+1628,"s_out", false,-1);
    tracep->declBus(c+815,"cnt", false,-1, 7,0);
    tracep->declArray(c+792,"data", false,-1, 127,0);
    tracep->declBus(c+816,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+817,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+818,"rx_clk", false,-1);
    tracep->declBit(c+819,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1349,"auto_in_psel", false,-1);
    tracep->declBit(c+1350,"auto_in_penable", false,-1);
    tracep->declBit(c+1332,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1331,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"auto_in_pready", false,-1);
    tracep->declBit(c+1864,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1818,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1807,"uart_rx", false,-1);
    tracep->declBit(c+1808,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1349,"in_psel", false,-1);
    tracep->declBit(c+1350,"in_penable", false,-1);
    tracep->declBus(c+1331,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1351,"in_pready", false,-1);
    tracep->declBit(c+1864,"in_pslverr", false,-1);
    tracep->declBus(c+1588,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1332,"in_pwrite", false,-1);
    tracep->declBus(c+1818,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1333,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1807,"uart_rx", false,-1);
    tracep->declBit(c+1808,"uart_tx", false,-1);
    tracep->declBit(c+820,"rtsn", false,-1);
    tracep->declBit(c+1864,"ctsn", false,-1);
    tracep->declBit(c+821,"dtr_pad_o", false,-1);
    tracep->declBit(c+1864,"dsr_pad_i", false,-1);
    tracep->declBit(c+1864,"ri_pad_i", false,-1);
    tracep->declBit(c+1864,"dcd_pad_i", false,-1);
    tracep->declBit(c+822,"interrupt", false,-1);
    tracep->declBit(c+1842,"reg_we", false,-1);
    tracep->declBit(c+1843,"reg_re", false,-1);
    tracep->declBus(c+1602,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1603,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+598,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1612,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+823,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1788,"wb_rst_i", false,-1);
    tracep->declBus(c+1602,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1604,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1612,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1842,"wb_we_i", false,-1);
    tracep->declBit(c+1843,"wb_re_i", false,-1);
    tracep->declBit(c+1808,"stx_pad_o", false,-1);
    tracep->declBit(c+1807,"srx_pad_i", false,-1);
    tracep->declBus(c+2140,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+823,"rts_pad_o", false,-1);
    tracep->declBit(c+821,"dtr_pad_o", false,-1);
    tracep->declBit(c+822,"int_o", false,-1);
    tracep->declBit(c+824,"enable", false,-1);
    tracep->declBit(c+825,"srx_pad", false,-1);
    tracep->declBus(c+826,"ier", false,-1, 3,0);
    tracep->declBus(c+827,"iir", false,-1, 3,0);
    tracep->declBus(c+828,"fcr", false,-1, 1,0);
    tracep->declBus(c+829,"mcr", false,-1, 4,0);
    tracep->declBus(c+830,"lcr", false,-1, 7,0);
    tracep->declBus(c+831,"msr", false,-1, 7,0);
    tracep->declBus(c+832,"dl", false,-1, 15,0);
    tracep->declBus(c+833,"scratch", false,-1, 7,0);
    tracep->declBit(c+834,"start_dlc", false,-1);
    tracep->declBit(c+835,"lsr_mask_d", false,-1);
    tracep->declBit(c+836,"msi_reset", false,-1);
    tracep->declBus(c+837,"dlc", false,-1, 15,0);
    tracep->declBus(c+838,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+839,"rx_reset", false,-1);
    tracep->declBit(c+840,"tx_reset", false,-1);
    tracep->declBit(c+841,"dlab", false,-1);
    tracep->declBit(c+1865,"cts_pad_i", false,-1);
    tracep->declBit(c+1864,"dsr_pad_i", false,-1);
    tracep->declBit(c+1864,"ri_pad_i", false,-1);
    tracep->declBit(c+1864,"dcd_pad_i", false,-1);
    tracep->declBit(c+842,"loopback", false,-1);
    tracep->declBit(c+1864,"cts", false,-1);
    tracep->declBit(c+1865,"dsr", false,-1);
    tracep->declBit(c+1865,"ri", false,-1);
    tracep->declBit(c+1865,"dcd", false,-1);
    tracep->declBit(c+843,"cts_c", false,-1);
    tracep->declBit(c+844,"dsr_c", false,-1);
    tracep->declBit(c+845,"ri_c", false,-1);
    tracep->declBit(c+846,"dcd_c", false,-1);
    tracep->declBus(c+847,"lsr", false,-1, 7,0);
    tracep->declBit(c+848,"lsr0", false,-1);
    tracep->declBit(c+849,"lsr1", false,-1);
    tracep->declBit(c+850,"lsr2", false,-1);
    tracep->declBit(c+851,"lsr3", false,-1);
    tracep->declBit(c+852,"lsr4", false,-1);
    tracep->declBit(c+853,"lsr5", false,-1);
    tracep->declBit(c+854,"lsr6", false,-1);
    tracep->declBit(c+855,"lsr7", false,-1);
    tracep->declBit(c+856,"lsr0r", false,-1);
    tracep->declBit(c+857,"lsr1r", false,-1);
    tracep->declBit(c+858,"lsr2r", false,-1);
    tracep->declBit(c+859,"lsr3r", false,-1);
    tracep->declBit(c+860,"lsr4r", false,-1);
    tracep->declBit(c+861,"lsr5r", false,-1);
    tracep->declBit(c+862,"lsr6r", false,-1);
    tracep->declBit(c+863,"lsr7r", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+864,"rls_int", false,-1);
    tracep->declBit(c+865,"rda_int", false,-1);
    tracep->declBit(c+866,"ti_int", false,-1);
    tracep->declBit(c+867,"thre_int", false,-1);
    tracep->declBit(c+868,"ms_int", false,-1);
    tracep->declBit(c+869,"tf_push", false,-1);
    tracep->declBit(c+870,"rf_pop", false,-1);
    tracep->declBus(c+1844,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+871,"rf_error_bit", false,-1);
    tracep->declBit(c+849,"rf_overrun", false,-1);
    tracep->declBit(c+872,"rf_push_pulse", false,-1);
    tracep->declBus(c+873,"rf_count", false,-1, 4,0);
    tracep->declBus(c+874,"tf_count", false,-1, 4,0);
    tracep->declBus(c+875,"tstate", false,-1, 2,0);
    tracep->declBus(c+876,"rstate", false,-1, 3,0);
    tracep->declBus(c+877,"counter_t", false,-1, 9,0);
    tracep->declBit(c+878,"thre_set_en", false,-1);
    tracep->declBus(c+879,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+880,"block_value", false,-1, 7,0);
    tracep->declBit(c+881,"serial_out", false,-1);
    tracep->declBit(c+882,"serial_in", false,-1);
    tracep->declBit(c+23,"lsr_mask_condition", false,-1);
    tracep->declBit(c+24,"iir_read", false,-1);
    tracep->declBit(c+25,"msr_read", false,-1);
    tracep->declBit(c+26,"fifo_read", false,-1);
    tracep->declBit(c+27,"fifo_write", false,-1);
    tracep->declBus(c+883,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+884,"lsr0_d", false,-1);
    tracep->declBit(c+885,"lsr1_d", false,-1);
    tracep->declBit(c+886,"lsr2_d", false,-1);
    tracep->declBit(c+887,"lsr3_d", false,-1);
    tracep->declBit(c+888,"lsr4_d", false,-1);
    tracep->declBit(c+889,"lsr5_d", false,-1);
    tracep->declBit(c+890,"lsr6_d", false,-1);
    tracep->declBit(c+891,"lsr7_d", false,-1);
    tracep->declBit(c+892,"rls_int_d", false,-1);
    tracep->declBit(c+893,"thre_int_d", false,-1);
    tracep->declBit(c+894,"ms_int_d", false,-1);
    tracep->declBit(c+895,"ti_int_d", false,-1);
    tracep->declBit(c+896,"rda_int_d", false,-1);
    tracep->declBit(c+897,"rls_int_rise", false,-1);
    tracep->declBit(c+898,"thre_int_rise", false,-1);
    tracep->declBit(c+899,"ms_int_rise", false,-1);
    tracep->declBit(c+900,"ti_int_rise", false,-1);
    tracep->declBit(c+901,"rda_int_rise", false,-1);
    tracep->declBit(c+902,"rls_int_pnd", false,-1);
    tracep->declBit(c+903,"rda_int_pnd", false,-1);
    tracep->declBit(c+904,"thre_int_pnd", false,-1);
    tracep->declBit(c+905,"ms_int_pnd", false,-1);
    tracep->declBit(c+906,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+2153,"Tp", false,-1, 31,0);
    tracep->declBus(c+2153,"width", false,-1, 31,0);
    tracep->declBus(c+2121,"init_value", false,-1, 0,0);
    tracep->declBit(c+1788,"rst_i", false,-1);
    tracep->declBit(c+1787,"clk_i", false,-1);
    tracep->declBit(c+1864,"stage1_rst_i", false,-1);
    tracep->declBit(c+1865,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1807,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+825,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+907,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1788,"wb_rst_i", false,-1);
    tracep->declBus(c+830,"lcr", false,-1, 7,0);
    tracep->declBit(c+870,"rf_pop", false,-1);
    tracep->declBit(c+882,"srx_pad_i", false,-1);
    tracep->declBit(c+824,"enable", false,-1);
    tracep->declBit(c+839,"rx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBus(c+877,"counter_t", false,-1, 9,0);
    tracep->declBus(c+873,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1844,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+849,"rf_overrun", false,-1);
    tracep->declBit(c+871,"rf_error_bit", false,-1);
    tracep->declBus(c+876,"rstate", false,-1, 3,0);
    tracep->declBit(c+872,"rf_push_pulse", false,-1);
    tracep->declBus(c+908,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+909,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+910,"rshift", false,-1, 7,0);
    tracep->declBit(c+911,"rparity", false,-1);
    tracep->declBit(c+912,"rparity_error", false,-1);
    tracep->declBit(c+913,"rframing_error", false,-1);
    tracep->declBit(c+914,"rbit_in", false,-1);
    tracep->declBit(c+915,"rparity_xor", false,-1);
    tracep->declBus(c+916,"counter_b", false,-1, 7,0);
    tracep->declBit(c+917,"rf_push_q", false,-1);
    tracep->declBus(c+918,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+919,"rf_push", false,-1);
    tracep->declBit(c+920,"break_error", false,-1);
    tracep->declBit(c+921,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+922,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+923,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+924,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1866,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+2138,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+2137,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+2133,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+2135,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+2134,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+2136,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+2132,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+2140,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2141,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2154,"sr_push", false,-1, 3,0);
    tracep->declBus(c+925,"toc_value", false,-1, 9,0);
    tracep->declBus(c+926,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+2155,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1932,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1933,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2119,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1788,"wb_rst_i", false,-1);
    tracep->declBit(c+872,"push", false,-1);
    tracep->declBit(c+870,"pop", false,-1);
    tracep->declBus(c+918,"data_in", false,-1, 10,0);
    tracep->declBit(c+839,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1844,"data_out", false,-1, 10,0);
    tracep->declBit(c+849,"overrun", false,-1);
    tracep->declBus(c+873,"count", false,-1, 4,0);
    tracep->declBit(c+871,"error_bit", false,-1);
    tracep->declBus(c+1845,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+927+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+943,"top", false,-1, 3,0);
    tracep->declBus(c+944,"bottom", false,-1, 3,0);
    tracep->declBus(c+945,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+946,"word0", false,-1, 2,0);
    tracep->declBus(c+947,"word1", false,-1, 2,0);
    tracep->declBus(c+948,"word2", false,-1, 2,0);
    tracep->declBus(c+949,"word3", false,-1, 2,0);
    tracep->declBus(c+950,"word4", false,-1, 2,0);
    tracep->declBus(c+951,"word5", false,-1, 2,0);
    tracep->declBus(c+952,"word6", false,-1, 2,0);
    tracep->declBus(c+953,"word7", false,-1, 2,0);
    tracep->declBus(c+954,"word8", false,-1, 2,0);
    tracep->declBus(c+955,"word9", false,-1, 2,0);
    tracep->declBus(c+956,"word10", false,-1, 2,0);
    tracep->declBus(c+957,"word11", false,-1, 2,0);
    tracep->declBus(c+958,"word12", false,-1, 2,0);
    tracep->declBus(c+959,"word13", false,-1, 2,0);
    tracep->declBus(c+960,"word14", false,-1, 2,0);
    tracep->declBus(c+961,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1933,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2146,"data_width", false,-1, 31,0);
    tracep->declBus(c+1932,"depth", false,-1, 31,0);
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+872,"we", false,-1);
    tracep->declBus(c+943,"a", false,-1, 3,0);
    tracep->declBus(c+944,"dpra", false,-1, 3,0);
    tracep->declBus(c+962,"di", false,-1, 7,0);
    tracep->declBus(c+1845,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+599+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1788,"wb_rst_i", false,-1);
    tracep->declBus(c+830,"lcr", false,-1, 7,0);
    tracep->declBit(c+869,"tf_push", false,-1);
    tracep->declBus(c+1604,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+824,"enable", false,-1);
    tracep->declBit(c+840,"tx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+881,"stx_pad_o", false,-1);
    tracep->declBus(c+875,"tstate", false,-1, 2,0);
    tracep->declBus(c+874,"tf_count", false,-1, 4,0);
    tracep->declBus(c+963,"counter", false,-1, 4,0);
    tracep->declBus(c+964,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+965,"shift_out", false,-1, 6,0);
    tracep->declBit(c+966,"stx_o_tmp", false,-1);
    tracep->declBit(c+967,"parity_xor", false,-1);
    tracep->declBit(c+968,"tf_pop", false,-1);
    tracep->declBit(c+969,"bit_out", false,-1);
    tracep->declBus(c+1604,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1613,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+970,"tf_overrun", false,-1);
    tracep->declBus(c+1858,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1855,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1859,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1860,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1869,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1870,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+2146,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1932,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1933,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2119,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+1788,"wb_rst_i", false,-1);
    tracep->declBit(c+869,"push", false,-1);
    tracep->declBit(c+968,"pop", false,-1);
    tracep->declBus(c+1604,"data_in", false,-1, 7,0);
    tracep->declBit(c+840,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1613,"data_out", false,-1, 7,0);
    tracep->declBit(c+970,"overrun", false,-1);
    tracep->declBus(c+874,"count", false,-1, 4,0);
    tracep->declBus(c+971,"top", false,-1, 3,0);
    tracep->declBus(c+972,"bottom", false,-1, 3,0);
    tracep->declBus(c+973,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1933,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2146,"data_width", false,-1, 31,0);
    tracep->declBus(c+1932,"depth", false,-1, 31,0);
    tracep->declBit(c+1787,"clk", false,-1);
    tracep->declBit(c+869,"we", false,-1);
    tracep->declBus(c+971,"a", false,-1, 3,0);
    tracep->declBus(c+972,"dpra", false,-1, 3,0);
    tracep->declBus(c+1604,"di", false,-1, 7,0);
    tracep->declBus(c+1613,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+615+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBit(c+1339,"auto_in_psel", false,-1);
    tracep->declBit(c+1340,"auto_in_penable", false,-1);
    tracep->declBit(c+1332,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1341,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1331,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1333,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"auto_in_pready", false,-1);
    tracep->declBit(c+1862,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1863,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1801,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1802,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1803,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1804,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1805,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1806,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1787,"clock", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1601,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1339,"in_psel", false,-1);
    tracep->declBit(c+1340,"in_penable", false,-1);
    tracep->declBus(c+1331,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1332,"in_pwrite", false,-1);
    tracep->declBus(c+1333,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1334,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"in_pready", false,-1);
    tracep->declBus(c+1863,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1862,"in_pslverr", false,-1);
    tracep->declBus(c+1801,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1802,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1803,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1804,"vga_hsync", false,-1);
    tracep->declBit(c+1805,"vga_vsync", false,-1);
    tracep->declBit(c+1806,"vga_valid", false,-1);
    tracep->declBus(c+974,"h_addr", false,-1, 9,0);
    tracep->declBus(c+631,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1614,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1605,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+690,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1787,"pclk", false,-1);
    tracep->declBit(c+1788,"reset", false,-1);
    tracep->declBus(c+1614,"vga_data", false,-1, 23,0);
    tracep->declBus(c+974,"h_addr", false,-1, 9,0);
    tracep->declBus(c+631,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1804,"hsync", false,-1);
    tracep->declBit(c+1805,"vsync", false,-1);
    tracep->declBit(c+1806,"valid", false,-1);
    tracep->declBus(c+1801,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1802,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1803,"vga_b", false,-1, 7,0);
    tracep->declBus(c+2156,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+2157,"h_active", false,-1, 31,0);
    tracep->declBus(c+2158,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+2159,"h_total", false,-1, 31,0);
    tracep->declBus(c+2125,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+2160,"v_active", false,-1, 31,0);
    tracep->declBus(c+2161,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+2162,"v_total", false,-1, 31,0);
    tracep->declBus(c+975,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+632,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+976,"h_valid", false,-1);
    tracep->declBit(c+633,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+685,"sck", false,-1);
    tracep->declBit(c+1651,"ss", false,-1);
    tracep->declBit(c+1628,"mosi", false,-1);
    tracep->declBit(c+1315,"miso", false,-1);
    tracep->declBus(c+1316,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1317,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1846,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+685,"sck", false,-1);
    tracep->declBit(c+1652,"ss", false,-1);
    tracep->declBit(c+1628,"mosi", false,-1);
    tracep->declBit(c+1847,"miso", false,-1);
    tracep->declBit(c+1652,"reset", false,-1);
    tracep->declBus(c+1309,"state", false,-1, 2,0);
    tracep->declBus(c+1310,"counter", false,-1, 7,0);
    tracep->declBus(c+1311,"cmd", false,-1, 7,0);
    tracep->declBus(c+1312,"addr", false,-1, 23,0);
    tracep->declBus(c+1313,"data", false,-1, 31,0);
    tracep->declBit(c+1314,"ren", false,-1);
    tracep->declBus(c+1848,"rdata", false,-1, 31,0);
    tracep->declBus(c+1849,"raddr", false,-1, 31,0);
    tracep->declBus(c+1318,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+685,"clock", false,-1);
    tracep->declBit(c+1314,"valid", false,-1);
    tracep->declBus(c+1311,"cmd", false,-1, 7,0);
    tracep->declBus(c+1849,"addr", false,-1, 31,0);
    tracep->declBus(c+1848,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1810,"sck", false,-1);
    tracep->declBit(c+1697,"ce_n", false,-1);
    tracep->declBus(c+1811,"dio", false,-1, 3,0);
    tracep->declBus(c+675,"dio_out", false,-1, 3,0);
    tracep->declBus(c+676,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1811,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1924,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+2153,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+2125,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+2127,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1933,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+2119,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+677,"state", false,-1, 2,0);
    tracep->declBus(c+1850,"next_state", false,-1, 2,0);
    tracep->declBus(c+678,"counter", false,-1, 7,0);
    tracep->declBus(c+679,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+680,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+681,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+682,"is_read_op", false,-1);
    tracep->declBit(c+683,"is_write_op", false,-1);
    tracep->declBus(c+684,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1851,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1812,"clk", false,-1);
    tracep->declBit(c+1629,"cke", false,-1);
    tracep->declBit(c+686,"cs", false,-1);
    tracep->declBit(c+687,"ras", false,-1);
    tracep->declBit(c+688,"cas", false,-1);
    tracep->declBit(c+689,"we", false,-1);
    tracep->declBus(c+1813,"a", false,-1, 13,0);
    tracep->declBus(c+1630,"ba", false,-1, 1,0);
    tracep->declBus(c+1631,"dqm", false,-1, 3,0);
    tracep->declBus(c+1656,"dq", false,-1, 31,0);
    tracep->declBit(c+977,"cs_0", false,-1);
    tracep->declBit(c+978,"ras_0", false,-1);
    tracep->declBit(c+979,"cas_0", false,-1);
    tracep->declBit(c+980,"we_0", false,-1);
    tracep->declBit(c+981,"cs_1", false,-1);
    tracep->declBit(c+982,"ras_1", false,-1);
    tracep->declBit(c+983,"cas_1", false,-1);
    tracep->declBit(c+984,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1812,"clk", false,-1);
    tracep->declBit(c+1629,"cke", false,-1);
    tracep->declBit(c+981,"cs", false,-1);
    tracep->declBit(c+982,"ras", false,-1);
    tracep->declBit(c+983,"cas", false,-1);
    tracep->declBit(c+984,"we", false,-1);
    tracep->declBus(c+1645,"a", false,-1, 12,0);
    tracep->declBus(c+1630,"ba", false,-1, 1,0);
    tracep->declBus(c+1631,"dqm", false,-1, 3,0);
    tracep->declBus(c+1656,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1812,"clk", false,-1);
    tracep->declBit(c+1629,"cke", false,-1);
    tracep->declBit(c+981,"cs", false,-1);
    tracep->declBit(c+982,"ras", false,-1);
    tracep->declBit(c+983,"cas", false,-1);
    tracep->declBit(c+984,"we", false,-1);
    tracep->declBus(c+1645,"a", false,-1, 12,0);
    tracep->declBus(c+1630,"ba", false,-1, 1,0);
    tracep->declBus(c+1653,"dqm", false,-1, 1,0);
    tracep->declBus(c+1657,"dq", false,-1, 15,0);
    tracep->declBus(c+2137,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2138,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2132,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2163,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2133,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2134,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2135,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1866,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1249,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1250,"bl", false,-1, 2,0);
    tracep->declBus(c+1717,"command", false,-1, 3,0);
    tracep->declBus(c+1251,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1252,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1654,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1253,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1658,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1254,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1255+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2164,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1259,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2165,"state", false,-1, 2,0);
    tracep->declBit(c+1260,"write_brust", false,-1);
    tracep->declBus(c+1261,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1262,"read_burst", false,-1);
    tracep->declBit(c+2166,"flag", false,-1);
    tracep->declBus(c+1263,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1812,"clk", false,-1);
    tracep->declBit(c+1629,"cke", false,-1);
    tracep->declBit(c+981,"cs", false,-1);
    tracep->declBit(c+982,"ras", false,-1);
    tracep->declBit(c+983,"cas", false,-1);
    tracep->declBit(c+984,"we", false,-1);
    tracep->declBus(c+1645,"a", false,-1, 12,0);
    tracep->declBus(c+1630,"ba", false,-1, 1,0);
    tracep->declBus(c+1655,"dqm", false,-1, 1,0);
    tracep->declBus(c+1659,"dq", false,-1, 15,0);
    tracep->declBus(c+2137,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2138,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2132,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2163,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2133,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2134,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2135,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1866,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1264,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1265,"bl", false,-1, 2,0);
    tracep->declBus(c+1717,"command", false,-1, 3,0);
    tracep->declBus(c+1266,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1267,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1654,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1268,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1660,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1269,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1270+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2167,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1274,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2168,"state", false,-1, 2,0);
    tracep->declBit(c+1275,"write_brust", false,-1);
    tracep->declBus(c+1276,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1277,"read_burst", false,-1);
    tracep->declBit(c+2169,"flag", false,-1);
    tracep->declBus(c+1278,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1812,"clk", false,-1);
    tracep->declBit(c+1629,"cke", false,-1);
    tracep->declBit(c+977,"cs", false,-1);
    tracep->declBit(c+978,"ras", false,-1);
    tracep->declBit(c+979,"cas", false,-1);
    tracep->declBit(c+980,"we", false,-1);
    tracep->declBus(c+1645,"a", false,-1, 12,0);
    tracep->declBus(c+1630,"ba", false,-1, 1,0);
    tracep->declBus(c+1631,"dqm", false,-1, 3,0);
    tracep->declBus(c+1656,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1812,"clk", false,-1);
    tracep->declBit(c+1629,"cke", false,-1);
    tracep->declBit(c+977,"cs", false,-1);
    tracep->declBit(c+978,"ras", false,-1);
    tracep->declBit(c+979,"cas", false,-1);
    tracep->declBit(c+980,"we", false,-1);
    tracep->declBus(c+1645,"a", false,-1, 12,0);
    tracep->declBus(c+1630,"ba", false,-1, 1,0);
    tracep->declBus(c+1653,"dqm", false,-1, 1,0);
    tracep->declBus(c+1657,"dq", false,-1, 15,0);
    tracep->declBus(c+2137,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2138,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2132,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2163,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2133,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2134,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2135,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1866,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1279,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1280,"bl", false,-1, 2,0);
    tracep->declBus(c+1718,"command", false,-1, 3,0);
    tracep->declBus(c+1281,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1282,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1654,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1283,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1661,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1284,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1285+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2170,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1289,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2171,"state", false,-1, 2,0);
    tracep->declBit(c+1290,"write_brust", false,-1);
    tracep->declBus(c+1291,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1292,"read_burst", false,-1);
    tracep->declBit(c+2172,"flag", false,-1);
    tracep->declBus(c+1293,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1812,"clk", false,-1);
    tracep->declBit(c+1629,"cke", false,-1);
    tracep->declBit(c+977,"cs", false,-1);
    tracep->declBit(c+978,"ras", false,-1);
    tracep->declBit(c+979,"cas", false,-1);
    tracep->declBit(c+980,"we", false,-1);
    tracep->declBus(c+1645,"a", false,-1, 12,0);
    tracep->declBus(c+1630,"ba", false,-1, 1,0);
    tracep->declBus(c+1655,"dqm", false,-1, 1,0);
    tracep->declBus(c+1659,"dq", false,-1, 15,0);
    tracep->declBus(c+2137,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2138,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2132,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2163,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+2133,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2134,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2135,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1866,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1294,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1295,"bl", false,-1, 2,0);
    tracep->declBus(c+1718,"command", false,-1, 3,0);
    tracep->declBus(c+1296,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1297,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1654,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1298,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1662,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1299,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1300+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2173,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1304,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2174,"state", false,-1, 2,0);
    tracep->declBit(c+1305,"write_brust", false,-1);
    tracep->declBus(c+1306,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1307,"read_burst", false,-1);
    tracep->declBit(c+2175,"flag", false,-1);
    tracep->declBus(c+1308,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+34,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+47,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+56,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+59,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+65,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+69,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+70,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+74,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+75,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+76,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+77,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+78,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+79,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+80,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+81,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+83,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+84,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+85,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+86,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+87,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+88,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+89,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+90,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullIData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rdata),32);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rresp),2);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rlast));
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rid),4);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rvalid));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+117,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+122,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+123,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+124,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+125,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+126,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+127,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+128,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+129,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+130,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+131,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+133,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+134,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+135,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+136,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+137,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+152,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+153,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+154,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+156,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+157,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+158,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+159,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+226,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+230,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+231,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+232,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+233,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+237,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+239,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+280,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+281,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+358,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+362,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+363,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+364,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+425,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+439,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+443,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+447,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+451,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+455,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+459,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+463,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+467,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+471,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+479,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+483,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+487,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+491,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+495,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+499,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+503,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+507,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+511,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+515,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+519,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+523,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+527,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+535,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+539,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+543,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+547,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+555,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+559,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+593,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+631,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullIData(oldp+634,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+635,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+636,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullIData(oldp+638,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                                           : 0U))),32);
    bufp->fullCData(oldp+639,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                       ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                            ? (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                       >> 1U))
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U)) : 0U) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                         : 0U)))),2);
    bufp->fullBit(oldp+640,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+641,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+642,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+643,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+644,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+645,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+646,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+647,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+648,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+649,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+650,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+651,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+652,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+653,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+654,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+655,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+656,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullQData(oldp+657,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+659,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+660,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+661,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+662,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+663,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+664,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+665,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+666,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+667,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+668,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+669,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+670,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+671,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+672,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+673,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+674,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
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
    bufp->fullBit(oldp+686,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+687,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+689,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+698,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+699,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+700,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+701,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+702,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+703,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+704,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+705,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+708,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+709,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+712,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+713,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+717,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+721,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+736,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+737,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+738,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+739,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+740,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+748,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+783,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+784,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+796,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+797,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+798,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+799,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+800,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+801,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+802,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+803,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+810,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+812,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+813,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+816,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+820,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+821,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+823,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+841,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+842,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+843,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+844,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+845,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+846,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+847,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+850,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+851,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+852,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+871,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+878,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+897,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+898,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+899,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+900,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+901,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+920,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+921,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+922,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+923,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+924,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+926,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+945,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+962,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+973,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+974,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+977,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+978,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+979,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+980,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+981,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+982,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+983,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+984,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+991,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_araddr),32);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arlen),8);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arsize),3);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arburst),2);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arvalid));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rready));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1012,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                 ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1015,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arid),4);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1037,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1043,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1090,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1106,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1108,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1111,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr),32);
    bufp->fullWData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[0]),128);
    bufp->fullWData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[1]),128);
    bufp->fullWData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[2]),128);
    bufp->fullWData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[3]),128);
    bufp->fullWData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[4]),128);
    bufp->fullWData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[5]),128);
    bufp->fullWData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[6]),128);
    bufp->fullWData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[7]),128);
    bufp->fullWData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[8]),128);
    bufp->fullWData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[9]),128);
    bufp->fullWData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[10]),128);
    bufp->fullWData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[11]),128);
    bufp->fullWData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[12]),128);
    bufp->fullWData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[13]),128);
    bufp->fullWData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[14]),128);
    bufp->fullWData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[15]),128);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[0]),24);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[1]),24);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[2]),24);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[3]),24);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[4]),24);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[5]),24);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[6]),24);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[7]),24);
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[8]),24);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[9]),24);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[10]),24);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[11]),24);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[12]),24);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[13]),24);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[14]),24);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[15]),24);
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[0]));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[1]));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[2]));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[3]));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[4]));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[5]));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[6]));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[7]));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[8]));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[9]));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[10]));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[11]));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[12]));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[13]));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[14]));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[15]));
    bufp->fullIData(oldp+1209,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                >> 8U)),24);
    bufp->fullCData(oldp+1210,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1211,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr)),4);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__counter),32);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state),3);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),3);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1239,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 2U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                              ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))))),2);
    bufp->fullCData(oldp+1240,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1241,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1242,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1243,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1244,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1245,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1246,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1247,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1248,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1249,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1250,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1264,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1265,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1279,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1280,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1294,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1295,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1314,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1321,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1341,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1342,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1344,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1348,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1351,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1356,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1359,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1366,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize),3);
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata),32);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb),4);
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullSData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_rd),10);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[0]),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[1]),32);
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[2]),32);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[3]),32);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[4]),32);
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[5]),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[6]),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[7]),32);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[0]),4);
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[1]),4);
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[2]),4);
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[3]),4);
    bufp->fullCData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[4]),4);
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[5]),4);
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[6]),4);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[7]),4);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[0]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[1]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[2]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[3]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[4]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[5]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[6]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[7]),32);
    bufp->fullCData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[0]),2);
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[1]),2);
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[2]),2);
    bufp->fullCData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[3]),2);
    bufp->fullCData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[4]),2);
    bufp->fullCData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[5]),2);
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[6]),2);
    bufp->fullCData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[7]),2);
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[0]));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[1]));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[2]));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[3]));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[4]));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[5]));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[6]));
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[7]));
    bufp->fullCData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen),8);
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize),3);
    bufp->fullCData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst),2);
    bufp->fullCData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_counter),3);
    bufp->fullCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen),3);
    bufp->fullCData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd),3);
    bufp->fullSData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_wt),10);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_wt),32);
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid));
    bufp->fullCData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid),4);
    bufp->fullCData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp),2);
    bufp->fullCData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt),3);
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1457,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1458,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1588,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1594,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1595,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1596,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1597,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullIData(oldp+1598,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1599,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullCData(oldp+1600,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullIData(oldp+1601,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1602,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1605,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1633,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+1635,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullCData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullSData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1651,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1653,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1654,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1655,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1657,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1659,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullIData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullCData(oldp+1671,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1672,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1683,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1689,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1694,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1695,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1696,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullCData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1713,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1714,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1715,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+1719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1725,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1728,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1751,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1752,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1753,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1754,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awready));
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wready));
    bufp->fullBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullCData(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1767,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1768,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1772,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullBit(oldp+1787,(vlSelf->clock));
    bufp->fullBit(oldp+1788,(vlSelf->reset));
    bufp->fullSData(oldp+1789,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1790,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1791,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1792,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1793,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1794,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1795,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1796,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1797,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1798,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1799,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1800,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1801,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1802,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1803,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1804,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1805,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1806,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1807,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1808,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1809,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1810,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1812,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1813,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1814,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1815,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | (IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+1816,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
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
    bufp->fullBit(oldp+1817,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1818,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1819,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready) 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast
                                                  [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen])
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast)))
                                                   ? 2U
                                                   : 3U))
                                              : ((0U 
                                                  == 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd
                                                  [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen])
                                                  ? 3U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                                     >> 4U))
                                                  ? 2U
                                                  : 1U)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                                  ? 1U
                                                  : 0U))))),3);
    bufp->fullCData(oldp+1820,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready)
                                             ? 4U : 7U)
                                         : ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_wt)
                                             ? 7U : 6U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)
                                             ? 6U : 5U)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))
                                             ? 5U : 4U)))
                                 : 4U)),3);
    bufp->fullBit(oldp+1821,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1822,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1823,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1824,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1825,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1827,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullIData(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1830,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1831,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
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
    bufp->fullBit(oldp+1832,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1833,((0xfU & vlSelf->__VdfgTmp_h81912a5e__0)),4);
    bufp->fullBit(oldp+1834,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1835,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1838,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid)))
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
    bufp->fullBit(oldp+1839,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1840,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1841,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1844,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1846,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1847,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1848,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1849,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1850,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1851,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1852,(0x226U),32);
    bufp->fullIData(oldp+1853,(0x64U),32);
    bufp->fullIData(oldp+1854,(0x200U),32);
    bufp->fullCData(oldp+1855,(1U),3);
    bufp->fullIData(oldp+1856,(0xb00U),32);
    bufp->fullIData(oldp+1857,(9U),32);
    bufp->fullCData(oldp+1858,(0U),3);
    bufp->fullCData(oldp+1859,(2U),3);
    bufp->fullCData(oldp+1860,(3U),3);
    bufp->fullBit(oldp+1861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1862,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1863,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1864,(0U));
    bufp->fullBit(oldp+1865,(1U));
    bufp->fullCData(oldp+1866,(0U),4);
    bufp->fullCData(oldp+1867,(0U),8);
    bufp->fullCData(oldp+1868,(0U),2);
    bufp->fullCData(oldp+1869,(4U),3);
    bufp->fullCData(oldp+1870,(5U),3);
    bufp->fullCData(oldp+1871,(6U),3);
    bufp->fullCData(oldp+1872,(7U),3);
    bufp->fullSData(oldp+1873,(1U),16);
    bufp->fullBit(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1890,(0U),32);
    bufp->fullBit(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullCData(oldp+1903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullCData(oldp+1910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arid),4);
    bufp->fullIData(oldp+1911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1924,(0U),32);
    bufp->fullBit(oldp+1925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1928,(1U),2);
    bufp->fullCData(oldp+1929,(2U),2);
    bufp->fullIData(oldp+1930,(0x20U),32);
    bufp->fullIData(oldp+1931,(4U),32);
    bufp->fullIData(oldp+1932,(0x10U),32);
    bufp->fullIData(oldp+1933,(4U),32);
    bufp->fullIData(oldp+1934,(0x18U),32);
    bufp->fullIData(oldp+1935,(0x79737978U),32);
    bufp->fullIData(oldp+1936,(0x17e3c19U),32);
    bufp->fullCData(oldp+1937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+2000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+2001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+2002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+2003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+2004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+2005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+2006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+2007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+2008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+2009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+2010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+2011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+2012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+2013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+2014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+2015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+2016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+2017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+2018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+2019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+2020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+2021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+2022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+2023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+2024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+2025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+2026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+2027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+2028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+2029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+2030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+2031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+2032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+2033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+2034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+2035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+2036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+2037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+2038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+2039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+2040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+2041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+2042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+2043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+2044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+2045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+2046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+2047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+2048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+2049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+2050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+2051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+2052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+2053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+2054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+2055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+2056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+2057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+2058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+2059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+2060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+2061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+2062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+2063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+2064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+2065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+2066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+2067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+2068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+2069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+2070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+2071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+2072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+2073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+2074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+2075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+2076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+2077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+2078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+2079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+2080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+2081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+2082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+2083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+2084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+2085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+2086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+2087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+2088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+2089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+2090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+2091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+2092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+2093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+2094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+2095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+2096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+2097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+2098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+2099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+2100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+2101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+2102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+2103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+2104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+2105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+2106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+2107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+2108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+2109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+2110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+2111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+2112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+2113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+2114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+2115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+2116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+2117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+2118,(3U),2);
    bufp->fullIData(oldp+2119,(5U),32);
    bufp->fullBit(oldp+2120,(0U));
    bufp->fullBit(oldp+2121,(1U));
    bufp->fullCData(oldp+2122,(0x1bU),8);
    bufp->fullCData(oldp+2123,(0xebU),8);
    bufp->fullCData(oldp+2124,(0x38U),8);
    bufp->fullIData(oldp+2125,(2U),32);
    bufp->fullIData(oldp+2126,(6U),32);
    bufp->fullIData(oldp+2127,(3U),32);
    bufp->fullIData(oldp+2128,(0xdU),32);
    bufp->fullIData(oldp+2129,(0x2000U),32);
    bufp->fullIData(oldp+2130,(0x2710U),32);
    bufp->fullIData(oldp+2131,(0x30cU),32);
    bufp->fullCData(oldp+2132,(7U),4);
    bufp->fullCData(oldp+2133,(3U),4);
    bufp->fullCData(oldp+2134,(5U),4);
    bufp->fullCData(oldp+2135,(4U),4);
    bufp->fullCData(oldp+2136,(6U),4);
    bufp->fullCData(oldp+2137,(2U),4);
    bufp->fullCData(oldp+2138,(1U),4);
    bufp->fullSData(oldp+2139,(0x20U),13);
    bufp->fullCData(oldp+2140,(8U),4);
    bufp->fullCData(oldp+2141,(9U),4);
    bufp->fullIData(oldp+2142,(0xaU),32);
    bufp->fullIData(oldp+2143,(0x11U),32);
    bufp->fullIData(oldp+2144,(0x30000000U),32);
    bufp->fullIData(oldp+2145,(0x3fffffffU),32);
    bufp->fullIData(oldp+2146,(8U),32);
    bufp->fullCData(oldp+2147,(4U),5);
    bufp->fullCData(oldp+2148,(0U),5);
    bufp->fullCData(oldp+2149,(0x10U),5);
    bufp->fullCData(oldp+2150,(0x14U),5);
    bufp->fullCData(oldp+2151,(0x18U),5);
    bufp->fullIData(oldp+2152,(0x3000000U),32);
    bufp->fullIData(oldp+2153,(1U),32);
    bufp->fullCData(oldp+2154,(0xaU),4);
    bufp->fullIData(oldp+2155,(0xbU),32);
    bufp->fullIData(oldp+2156,(0x60U),32);
    bufp->fullIData(oldp+2157,(0x90U),32);
    bufp->fullIData(oldp+2158,(0x310U),32);
    bufp->fullIData(oldp+2159,(0x320U),32);
    bufp->fullIData(oldp+2160,(0x23U),32);
    bufp->fullIData(oldp+2161,(0x203U),32);
    bufp->fullIData(oldp+2162,(0x20dU),32);
    bufp->fullIData(oldp+2163,(0x400000U),32);
    bufp->fullCData(oldp+2164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+2166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+2167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+2169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+2170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+2172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+2173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+2175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
