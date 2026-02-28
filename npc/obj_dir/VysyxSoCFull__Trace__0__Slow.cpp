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
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1670,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1671,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1672,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1673,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1674,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1675,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1676,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1677,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1678,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1679,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1680,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1681,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1682,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1683,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1684,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1685,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1686,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1687,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1688,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1689,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1670,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1671,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1672,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1673,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1674,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1675,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1676,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1677,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1678,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1679,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1680,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1681,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1682,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1683,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1684,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1685,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1686,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1687,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1688,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1689,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+789,"spi_sck", false,-1);
    tracep->declBus(c+1514,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1515,"spi_mosi", false,-1);
    tracep->declBit(c+1690,"spi_miso", false,-1);
    tracep->declBit(c+1688,"uart_rx", false,-1);
    tracep->declBit(c+1689,"uart_tx", false,-1);
    tracep->declBit(c+1691,"psram_sck", false,-1);
    tracep->declBit(c+1662,"psram_ce_n", false,-1);
    tracep->declBus(c+1692,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1693,"sdram_clk", false,-1);
    tracep->declBit(c+1516,"sdram_cke", false,-1);
    tracep->declBit(c+790,"sdram_cs", false,-1);
    tracep->declBit(c+791,"sdram_ras", false,-1);
    tracep->declBit(c+792,"sdram_cas", false,-1);
    tracep->declBit(c+793,"sdram_we", false,-1);
    tracep->declBus(c+1694,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1518,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1597,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1670,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1671,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1672,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1673,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1674,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1675,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1676,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1677,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1678,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1680,"ps2_clk", false,-1);
    tracep->declBit(c+1681,"ps2_data", false,-1);
    tracep->declBus(c+1682,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1683,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1684,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1685,"vga_hsync", false,-1);
    tracep->declBit(c+1686,"vga_vsync", false,-1);
    tracep->declBit(c+1687,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1740,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1741,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1742,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1297,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+154,"in_psel", false,-1);
    tracep->declBit(c+155,"in_penable", false,-1);
    tracep->declBus(c+1743,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+156,"in_pwrite", false,-1);
    tracep->declBus(c+157,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+158,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+159,"in_pready", false,-1);
    tracep->declBus(c+160,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+161,"in_pslverr", false,-1);
    tracep->declBus(c+1298,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1299,"out_psel", false,-1);
    tracep->declBit(c+1300,"out_penable", false,-1);
    tracep->declBus(c+1301,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1302,"out_pwrite", false,-1);
    tracep->declBus(c+1303,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1695,"out_pready", false,-1);
    tracep->declBus(c+1696,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1697,"out_pslverr", false,-1);
    tracep->declBus(c+1744,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1745,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1746,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1743,"ST_FORWARD", false,-1, 2,0);
    tracep->declBus(c+1747,"ST_WAIT", false,-1, 2,0);
    tracep->declBus(c+1748,"ST_SKIP", false,-1, 2,0);
    tracep->declBus(c+1749,"ST_DONE", false,-1, 2,0);
    tracep->declBus(c+162,"state", false,-1, 2,0);
    tracep->declBus(c+163,"accum", false,-1, 31,0);
    tracep->declBus(c+164,"dev_cycles", false,-1, 15,0);
    tracep->declBus(c+165,"wait_cnt", false,-1, 31,0);
    tracep->declBus(c+166,"saved_prdata", false,-1, 31,0);
    tracep->declBit(c+167,"saved_pslverr", false,-1);
    tracep->declBit(c+1305,"fwd_active", false,-1);
    tracep->declBus(c+168,"accum_final", false,-1, 31,0);
    tracep->declBus(c+169,"total_cpu", false,-1, 31,0);
    tracep->declBus(c+170,"k_plus1", false,-1, 31,0);
    tracep->declBus(c+171,"extra_delay", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1299,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1300,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1302,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1298,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1301,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1695,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1697,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1696,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1306,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1308,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1301,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+794,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1750,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1751,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1309,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1310,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1301,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+172,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1752,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+173,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1312,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1313,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1301,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+795,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1752,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+796,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1314,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1315,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1298,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1301,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1698,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1752,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+174,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1316,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1317,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1301,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1318,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1752,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1699,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1320,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1308,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1301,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+797,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+798,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+799,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1321,"sel_0", false,-1);
    tracep->declBit(c+1322,"sel_1", false,-1);
    tracep->declBit(c+1323,"sel_2", false,-1);
    tracep->declBit(c+1324,"sel_3", false,-1);
    tracep->declBit(c+1325,"sel_4", false,-1);
    tracep->declBit(c+1326,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+175,"auto_in_awready", false,-1);
    tracep->declBit(c+176,"auto_in_awvalid", false,-1);
    tracep->declBus(c+177,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+175,"auto_in_wready", false,-1);
    tracep->declBit(c+181,"auto_in_wvalid", false,-1);
    tracep->declBus(c+182,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+183,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+184,"auto_in_bready", false,-1);
    tracep->declBit(c+185,"auto_in_bvalid", false,-1);
    tracep->declBus(c+186,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_in_arready", false,-1);
    tracep->declBit(c+189,"auto_in_arvalid", false,-1);
    tracep->declBus(c+190,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+191,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+192,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+193,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+194,"auto_in_rready", false,-1);
    tracep->declBit(c+195,"auto_in_rvalid", false,-1);
    tracep->declBus(c+196,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+187,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_out_psel", false,-1);
    tracep->declBit(c+155,"auto_out_penable", false,-1);
    tracep->declBit(c+156,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1297,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+157,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+159,"auto_out_pready", false,-1);
    tracep->declBit(c+161,"auto_out_pslverr", false,-1);
    tracep->declBus(c+160,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+155,"nodeOut_penable", false,-1);
    tracep->declBus(c+198,"state", false,-1, 1,0);
    tracep->declBit(c+188,"accept_read", false,-1);
    tracep->declBit(c+175,"accept_write", false,-1);
    tracep->declBit(c+199,"is_write_r", false,-1);
    tracep->declBit(c+156,"is_write", false,-1);
    tracep->declBus(c+196,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+186,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+200,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+201,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+202,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+203,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+204,"resp", false,-1, 1,0);
    tracep->declBus(c+205,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+187,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+195,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+206,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+185,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+207,"auto_in_awready", false,-1);
    tracep->declBit(c+1532,"auto_in_awvalid", false,-1);
    tracep->declBus(c+208,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_in_wready", false,-1);
    tracep->declBit(c+1535,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1536,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1537,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_in_wlast", false,-1);
    tracep->declBit(c+760,"auto_in_bready", false,-1);
    tracep->declBit(c+211,"auto_in_bvalid", false,-1);
    tracep->declBus(c+212,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+214,"auto_in_arready", false,-1);
    tracep->declBit(c+38,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+215,"auto_in_rvalid", false,-1);
    tracep->declBus(c+216,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+217,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+218,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+219,"auto_in_rlast", false,-1);
    tracep->declBit(c+175,"auto_out_awready", false,-1);
    tracep->declBit(c+176,"auto_out_awvalid", false,-1);
    tracep->declBus(c+177,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+180,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+175,"auto_out_wready", false,-1);
    tracep->declBit(c+181,"auto_out_wvalid", false,-1);
    tracep->declBus(c+182,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+183,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+184,"auto_out_bready", false,-1);
    tracep->declBit(c+185,"auto_out_bvalid", false,-1);
    tracep->declBus(c+186,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_out_arready", false,-1);
    tracep->declBit(c+189,"auto_out_arvalid", false,-1);
    tracep->declBus(c+190,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+191,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+192,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+193,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+194,"auto_out_rready", false,-1);
    tracep->declBit(c+195,"auto_out_rvalid", false,-1);
    tracep->declBus(c+196,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+197,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+187,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+185,"io_enq_valid", false,-1);
    tracep->declBus(c+186,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+187,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+760,"io_deq_ready", false,-1);
    tracep->declBit(c+211,"io_deq_valid", false,-1);
    tracep->declBus(c+212,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+213,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+220,"wrap", false,-1);
    tracep->declBit(c+221,"wrap_1", false,-1);
    tracep->declBit(c+222,"maybe_full", false,-1);
    tracep->declBit(c+223,"ptr_match", false,-1);
    tracep->declBit(c+224,"empty", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+221,"R0_addr", false,-1);
    tracep->declBit(c+1753,"R0_en", false,-1);
    tracep->declBit(c+1668,"R0_clk", false,-1);
    tracep->declBus(c+227,"R0_data", false,-1, 5,0);
    tracep->declBit(c+220,"W0_addr", false,-1);
    tracep->declBit(c+226,"W0_en", false,-1);
    tracep->declBit(c+1668,"W0_clk", false,-1);
    tracep->declBus(c+228,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+229+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+194,"io_enq_ready", false,-1);
    tracep->declBit(c+195,"io_enq_valid", false,-1);
    tracep->declBus(c+196,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+197,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+187,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+215,"io_deq_valid", false,-1);
    tracep->declBus(c+216,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+217,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+218,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+219,"io_deq_bits_last", false,-1);
    tracep->declBit(c+232,"wrap", false,-1);
    tracep->declBit(c+233,"wrap_1", false,-1);
    tracep->declBit(c+234,"maybe_full", false,-1);
    tracep->declBit(c+235,"ptr_match", false,-1);
    tracep->declBit(c+236,"empty", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+233,"R0_addr", false,-1);
    tracep->declBit(c+1753,"R0_en", false,-1);
    tracep->declBit(c+1668,"R0_clk", false,-1);
    tracep->declQuad(c+239,"R0_data", false,-1, 38,0);
    tracep->declBit(c+232,"W0_addr", false,-1);
    tracep->declBit(c+238,"W0_en", false,-1);
    tracep->declBit(c+1668,"W0_clk", false,-1);
    tracep->declQuad(c+241,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+243+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+247,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+214,"io_enq_ready", false,-1);
    tracep->declBit(c+38,"io_enq_valid", false,-1);
    tracep->declBus(c+39,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+40,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+41,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+42,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+188,"io_deq_ready", false,-1);
    tracep->declBit(c+189,"io_deq_valid", false,-1);
    tracep->declBus(c+190,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+191,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+192,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+193,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+248,"wrap", false,-1);
    tracep->declBit(c+249,"wrap_1", false,-1);
    tracep->declBit(c+250,"maybe_full", false,-1);
    tracep->declBit(c+251,"ptr_match", false,-1);
    tracep->declBit(c+252,"empty", false,-1);
    tracep->declBit(c+253,"full", false,-1);
    tracep->declBit(c+43,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+249,"R0_addr", false,-1);
    tracep->declBit(c+1753,"R0_en", false,-1);
    tracep->declBit(c+1668,"R0_clk", false,-1);
    tracep->declQuad(c+254,"R0_data", false,-1, 46,0);
    tracep->declBit(c+248,"W0_addr", false,-1);
    tracep->declBit(c+43,"W0_en", false,-1);
    tracep->declBit(c+1668,"W0_clk", false,-1);
    tracep->declQuad(c+44,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+256+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+260,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+1532,"io_enq_valid", false,-1);
    tracep->declBus(c+208,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1533,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1534,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+209,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+175,"io_deq_ready", false,-1);
    tracep->declBit(c+176,"io_deq_valid", false,-1);
    tracep->declBus(c+177,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+178,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+179,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+180,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+261,"wrap", false,-1);
    tracep->declBit(c+262,"wrap_1", false,-1);
    tracep->declBit(c+263,"maybe_full", false,-1);
    tracep->declBit(c+264,"ptr_match", false,-1);
    tracep->declBit(c+265,"empty", false,-1);
    tracep->declBit(c+266,"full", false,-1);
    tracep->declBit(c+1539,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+262,"R0_addr", false,-1);
    tracep->declBit(c+1753,"R0_en", false,-1);
    tracep->declBit(c+1668,"R0_clk", false,-1);
    tracep->declQuad(c+267,"R0_data", false,-1, 46,0);
    tracep->declBit(c+261,"W0_addr", false,-1);
    tracep->declBit(c+1539,"W0_en", false,-1);
    tracep->declBit(c+1668,"W0_clk", false,-1);
    tracep->declQuad(c+761,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+269+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+273,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+1535,"io_enq_valid", false,-1);
    tracep->declBus(c+1536,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1537,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1538,"io_enq_bits_last", false,-1);
    tracep->declBit(c+175,"io_deq_ready", false,-1);
    tracep->declBit(c+181,"io_deq_valid", false,-1);
    tracep->declBus(c+182,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+183,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+274,"wrap", false,-1);
    tracep->declBit(c+275,"wrap_1", false,-1);
    tracep->declBit(c+276,"maybe_full", false,-1);
    tracep->declBit(c+277,"ptr_match", false,-1);
    tracep->declBit(c+278,"empty", false,-1);
    tracep->declBit(c+279,"full", false,-1);
    tracep->declBit(c+1540,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+275,"R0_addr", false,-1);
    tracep->declBit(c+1753,"R0_en", false,-1);
    tracep->declBit(c+1668,"R0_clk", false,-1);
    tracep->declQuad(c+280,"R0_data", false,-1, 35,0);
    tracep->declBit(c+274,"W0_addr", false,-1);
    tracep->declBit(c+1540,"W0_en", false,-1);
    tracep->declBit(c+1668,"W0_clk", false,-1);
    tracep->declQuad(c+1541,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+282+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1740,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1741,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1742,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBus(c+1754,"AXI_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1754,"AXI_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1755,"AXI_ID_W", false,-1, 31,0);
    tracep->declBus(c+1756,"AXI_USER_W", false,-1, 31,0);
    tracep->declBus(c+1757,"MAX_BURST_LEN", false,-1, 31,0);
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1758,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1759,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1543,"in_awvalid", false,-1);
    tracep->declBit(c+1700,"in_awready", false,-1);
    tracep->declBus(c+1096,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"in_wlast", false,-1);
    tracep->declBit(c+1544,"in_wvalid", false,-1);
    tracep->declBit(c+1701,"in_wready", false,-1);
    tracep->declBus(c+287,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1327,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+288,"in_bvalid", false,-1);
    tracep->declBit(c+1702,"in_bready", false,-1);
    tracep->declBus(c+46,"in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"in_arvalid", false,-1);
    tracep->declBit(c+1703,"in_arready", false,-1);
    tracep->declBus(c+289,"in_rid", false,-1, 3,0);
    tracep->declBus(c+290,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+292,"in_rlast", false,-1);
    tracep->declBit(c+293,"in_rvalid", false,-1);
    tracep->declBit(c+5,"in_rready", false,-1);
    tracep->declBus(c+1758,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1759,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1545,"out_awvalid", false,-1);
    tracep->declBit(c+127,"out_awready", false,-1);
    tracep->declBus(c+1096,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"out_wlast", false,-1);
    tracep->declBit(c+1546,"out_wvalid", false,-1);
    tracep->declBit(c+128,"out_wready", false,-1);
    tracep->declBus(c+800,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1760,"out_bresp", false,-1, 1,0);
    tracep->declBit(c+801,"out_bvalid", false,-1);
    tracep->declBit(c+294,"out_bready", false,-1);
    tracep->declBus(c+46,"out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"out_arvalid", false,-1);
    tracep->declBit(c+129,"out_arready", false,-1);
    tracep->declBus(c+800,"out_rid", false,-1, 3,0);
    tracep->declBus(c+802,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1760,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+803,"out_rlast", false,-1);
    tracep->declBit(c+804,"out_rvalid", false,-1);
    tracep->declBit(c+295,"out_rready", false,-1);
    tracep->declBus(c+1744,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1745,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1760,"R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1761,"R_FORWARD", false,-1, 1,0);
    tracep->declBus(c+1762,"R_DRAIN", false,-1, 1,0);
    tracep->declBus(c+296,"r_state", false,-1, 1,0);
    tracep->declBus(c+297,"r_accum", false,-1, 31,0);
    tracep->declBus(c+298,"r_elapsed", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+299+i*1,"r_buf_id", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+307+i*1,"r_buf_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+315+i*1,"r_buf_resp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+323+i*1,"r_buf_last", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+331+i*1,"r_buf_target", true,(i+0), 31,0);
    }
    tracep->declBus(c+339,"r_wr_ptr", false,-1, 3,0);
    tracep->declBus(c+340,"r_rd_ptr", false,-1, 3,0);
    tracep->declBit(c+341,"r_ar_done", false,-1);
    tracep->declBit(c+342,"r_ar_pass", false,-1);
    tracep->declBit(c+293,"r_out_valid", false,-1);
    tracep->declBus(c+289,"r_out_id", false,-1, 3,0);
    tracep->declBus(c+290,"r_out_data", false,-1, 31,0);
    tracep->declBus(c+291,"r_out_resp", false,-1, 1,0);
    tracep->declBit(c+292,"r_out_last", false,-1);
    tracep->declBit(c+6,"r_out_handshake", false,-1);
    tracep->declBit(c+343,"r_fifo_has_data", false,-1);
    tracep->declBus(c+344,"ri", false,-1, 31,0);
    tracep->declBus(c+1760,"W_IDLE", false,-1, 1,0);
    tracep->declBus(c+1761,"W_FORWARD", false,-1, 1,0);
    tracep->declBus(c+1762,"W_WAIT", false,-1, 1,0);
    tracep->declBus(c+1763,"W_DONE", false,-1, 1,0);
    tracep->declBus(c+345,"w_state", false,-1, 1,0);
    tracep->declBus(c+346,"w_accum", false,-1, 31,0);
    tracep->declBus(c+347,"w_elapsed", false,-1, 31,0);
    tracep->declBit(c+348,"w_aw_done", false,-1);
    tracep->declBit(c+349,"w_w_done", false,-1);
    tracep->declBit(c+288,"w_bvalid_r", false,-1);
    tracep->declBus(c+287,"w_bid_r", false,-1, 3,0);
    tracep->declBus(c+1327,"w_bresp_r", false,-1, 1,0);
    tracep->declBus(c+350,"w_wait_cnt", false,-1, 31,0);
    tracep->declBit(c+351,"w_aw_pass", false,-1);
    tracep->declBit(c+352,"w_w_pass", false,-1);
    tracep->declBus(c+353,"w_total_cpu", false,-1, 31,0);
    tracep->declBus(c+354,"w_cur_plus2", false,-1, 31,0);
    tracep->declBus(c+355,"w_extra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+356,"auto_in_awready", false,-1);
    tracep->declBit(c+1547,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1758,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1759,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+357,"auto_in_wready", false,-1);
    tracep->declBit(c+1548,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1096,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"auto_in_wlast", false,-1);
    tracep->declBit(c+1704,"auto_in_bready", false,-1);
    tracep->declBit(c+1328,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1329,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1330,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+358,"auto_in_arready", false,-1);
    tracep->declBit(c+53,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_in_rready", false,-1);
    tracep->declBit(c+359,"auto_in_rvalid", false,-1);
    tracep->declBus(c+360,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+362,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+363,"auto_in_rlast", false,-1);
    tracep->declBit(c+1549,"auto_out_awready", false,-1);
    tracep->declBit(c+1550,"auto_out_awvalid", false,-1);
    tracep->declBus(c+208,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+364,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1551,"auto_out_wready", false,-1);
    tracep->declBit(c+1552,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1536,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1537,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_out_wlast", false,-1);
    tracep->declBit(c+1553,"auto_out_bready", false,-1);
    tracep->declBit(c+365,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1329,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1331,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1332,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+55,"auto_out_arready", false,-1);
    tracep->declBit(c+56,"auto_out_arvalid", false,-1);
    tracep->declBus(c+39,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+57,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+54,"auto_out_rready", false,-1);
    tracep->declBit(c+359,"auto_out_rvalid", false,-1);
    tracep->declBus(c+360,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+362,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+366,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+367,"auto_out_rlast", false,-1);
    tracep->declBit(c+1552,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+368,"w_idle", false,-1);
    tracep->declBit(c+1554,"in_awready", false,-1);
    tracep->declBit(c+369,"busy", false,-1);
    tracep->declBus(c+370,"r_addr", false,-1, 31,0);
    tracep->declBus(c+371,"r_len", false,-1, 7,0);
    tracep->declBus(c+58,"len", false,-1, 7,0);
    tracep->declBus(c+59,"addr", false,-1, 31,0);
    tracep->declBit(c+372,"busy_1", false,-1);
    tracep->declBus(c+373,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+374,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+375,"len_1", false,-1, 7,0);
    tracep->declBus(c+1555,"addr_1", false,-1, 31,0);
    tracep->declBit(c+376,"wbeats_latched", false,-1);
    tracep->declBit(c+1550,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1556,"wbeats_valid", false,-1);
    tracep->declBus(c+377,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1557,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1538,"w_last", false,-1);
    tracep->declBit(c+1553,"nodeOut_bready", false,-1);
    tracep->declBus(c+1333,"error_0", false,-1, 1,0);
    tracep->declBus(c+1334,"error_1", false,-1, 1,0);
    tracep->declBus(c+1335,"error_2", false,-1, 1,0);
    tracep->declBus(c+1336,"error_3", false,-1, 1,0);
    tracep->declBus(c+1337,"error_4", false,-1, 1,0);
    tracep->declBus(c+1338,"error_5", false,-1, 1,0);
    tracep->declBus(c+1339,"error_6", false,-1, 1,0);
    tracep->declBus(c+1340,"error_7", false,-1, 1,0);
    tracep->declBus(c+1341,"error_8", false,-1, 1,0);
    tracep->declBus(c+1342,"error_9", false,-1, 1,0);
    tracep->declBus(c+1343,"error_10", false,-1, 1,0);
    tracep->declBus(c+1344,"error_11", false,-1, 1,0);
    tracep->declBus(c+1345,"error_12", false,-1, 1,0);
    tracep->declBus(c+1346,"error_13", false,-1, 1,0);
    tracep->declBus(c+1347,"error_14", false,-1, 1,0);
    tracep->declBus(c+1348,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+358,"io_enq_ready", false,-1);
    tracep->declBit(c+53,"io_enq_valid", false,-1);
    tracep->declBus(c+46,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+47,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+48,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+49,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+50,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+60,"io_deq_ready", false,-1);
    tracep->declBit(c+56,"io_deq_valid", false,-1);
    tracep->declBus(c+39,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+61,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+62,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+41,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+42,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+378,"ram", false,-1, 48,0);
    tracep->declBit(c+380,"full", false,-1);
    tracep->declBit(c+56,"io_deq_valid_0", false,-1);
    tracep->declBit(c+63,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+1547,"io_enq_valid", false,-1);
    tracep->declBus(c+1758,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1094,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1759,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1095,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1760,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1558,"io_deq_ready", false,-1);
    tracep->declBit(c+1559,"io_deq_valid", false,-1);
    tracep->declBus(c+208,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1560,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+381,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1534,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+209,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+382,"ram", false,-1, 48,0);
    tracep->declBit(c+384,"full", false,-1);
    tracep->declBit(c+1559,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1561,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+357,"io_enq_ready", false,-1);
    tracep->declBit(c+1548,"io_enq_valid", false,-1);
    tracep->declBus(c+1096,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1097,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1098,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1562,"io_deq_ready", false,-1);
    tracep->declBit(c+1563,"io_deq_valid", false,-1);
    tracep->declBus(c+1536,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1537,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1705,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+385,"ram", false,-1, 36,0);
    tracep->declBit(c+387,"full", false,-1);
    tracep->declBit(c+1563,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1564,"do_enq", false,-1);
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
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1565,"auto_in_awready", false,-1);
    tracep->declBit(c+1566,"auto_in_awvalid", false,-1);
    tracep->declBus(c+208,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1567,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1568,"auto_in_wready", false,-1);
    tracep->declBit(c+1569,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1536,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1537,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1570,"auto_in_bready", false,-1);
    tracep->declBit(c+388,"auto_in_bvalid", false,-1);
    tracep->declBus(c+389,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+390,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+64,"auto_in_arready", false,-1);
    tracep->declBit(c+65,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+67,"auto_in_rready", false,-1);
    tracep->declBit(c+391,"auto_in_rvalid", false,-1);
    tracep->declBus(c+392,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+393,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+394,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+64,"nodeIn_arready", false,-1);
    tracep->declBit(c+1565,"nodeIn_awready", false,-1);
    tracep->declBit(c+1571,"w_sel0", false,-1);
    tracep->declBit(c+388,"w_full", false,-1);
    tracep->declBus(c+389,"w_id", false,-1, 3,0);
    tracep->declBit(c+395,"r_sel1", false,-1);
    tracep->declBit(c+396,"w_sel1", false,-1);
    tracep->declBit(c+391,"r_full", false,-1);
    tracep->declBus(c+392,"r_id", false,-1, 3,0);
    tracep->declBit(c+68,"ren", false,-1);
    tracep->declBit(c+397,"rdata_REG", false,-1);
    tracep->declBus(c+398,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+399,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+400,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+401,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+69,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+68,"R0_en", false,-1);
    tracep->declBit(c+1668,"R0_clk", false,-1);
    tracep->declBus(c+402,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1572,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1573,"W0_en", false,-1);
    tracep->declBit(c+1668,"W0_clk", false,-1);
    tracep->declBus(c+1536,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1537,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+130,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1099,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1758,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1759,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1706,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1100,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1096,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1101,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1349,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1350,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1351,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+131,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+70,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+403,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+404,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+405,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+406,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+407,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1700,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1543,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1758,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1759,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1701,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1544,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1096,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1702,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+288,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+287,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1327,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1703,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+51,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+293,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+292,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+356,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1547,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1758,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1759,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+357,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1548,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1096,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1704,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1328,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1329,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1330,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+358,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+53,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+359,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+360,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+362,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+363,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1349,"in_0_bvalid", false,-1);
    tracep->declBit(c+403,"in_0_rvalid", false,-1);
    tracep->declBit(c+132,"in_0_wready", false,-1);
    tracep->declBit(c+133,"in_0_awready", false,-1);
    tracep->declBit(c+1707,"in_0_arready", false,-1);
    tracep->declBit(c+130,"anonIn_awready", false,-1);
    tracep->declBit(c+131,"anonIn_arready", false,-1);
    tracep->declBit(c+72,"requestARIO_0_0", false,-1);
    tracep->declBit(c+73,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1102,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1103,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+74,"arSel", false,-1, 15,0);
    tracep->declBus(c+1764,"awSel", false,-1, 15,0);
    tracep->declBus(c+408,"rSel", false,-1, 15,0);
    tracep->declBus(c+1352,"bSel", false,-1, 15,0);
    tracep->declBus(c+409,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+410,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+411,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+412,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+413,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+414,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+415,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1765,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+416,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+417,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+418,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1766,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+419,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+420,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+421,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1767,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+422,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+423,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+424,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1768,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+425,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+426,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+427,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1769,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+428,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+429,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+430,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1770,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+431,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+432,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+433,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1771,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+434,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+435,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+436,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1772,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+437,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+438,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+439,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1773,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+440,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+441,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+442,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1774,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+443,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+444,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+445,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1775,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+446,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+447,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+448,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1776,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+449,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+450,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+451,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1777,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+452,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+453,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+454,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1778,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+455,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+456,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+457,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1779,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+75,"in_0_arvalid", false,-1);
    tracep->declBit(c+458,"latched", false,-1);
    tracep->declBit(c+1574,"in_0_awvalid", false,-1);
    tracep->declBit(c+1575,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1576,"in_0_wvalid", false,-1);
    tracep->declBit(c+459,"idle_2", false,-1);
    tracep->declBit(c+460,"anyValid", false,-1);
    tracep->declBus(c+461,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+462,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+463,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+464,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+465,"prefixOR_1", false,-1);
    tracep->declBit(c+466,"winner_2_1", false,-1);
    tracep->declBit(c+467,"state_2_0", false,-1);
    tracep->declBit(c+468,"state_2_1", false,-1);
    tracep->declBit(c+469,"muxState_2_0", false,-1);
    tracep->declBit(c+470,"muxState_2_1", false,-1);
    tracep->declBit(c+471,"idle_3", false,-1);
    tracep->declBit(c+1353,"anyValid_1", false,-1);
    tracep->declBus(c+1354,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+472,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1355,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1356,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1357,"winner_3_0", false,-1);
    tracep->declBit(c+1358,"winner_3_1", false,-1);
    tracep->declBit(c+473,"state_3_0", false,-1);
    tracep->declBit(c+474,"state_3_1", false,-1);
    tracep->declBit(c+1359,"muxState_3_0", false,-1);
    tracep->declBit(c+1360,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+475,"io_enq_ready", false,-1);
    tracep->declBit(c+1575,"io_enq_valid", false,-1);
    tracep->declBus(c+1104,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+134,"io_deq_ready", false,-1);
    tracep->declBit(c+1577,"io_deq_valid", false,-1);
    tracep->declBus(c+1578,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+476,"wrap", false,-1);
    tracep->declBit(c+477,"wrap_1", false,-1);
    tracep->declBit(c+478,"maybe_full", false,-1);
    tracep->declBit(c+479,"ptr_match", false,-1);
    tracep->declBit(c+480,"empty", false,-1);
    tracep->declBit(c+481,"full", false,-1);
    tracep->declBit(c+1577,"io_deq_valid_0", false,-1);
    tracep->declBit(c+135,"do_deq", false,-1);
    tracep->declBit(c+136,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+477,"R0_addr", false,-1);
    tracep->declBit(c+1753,"R0_en", false,-1);
    tracep->declBit(c+1668,"R0_clk", false,-1);
    tracep->declBus(c+482,"R0_data", false,-1, 1,0);
    tracep->declBit(c+476,"W0_addr", false,-1);
    tracep->declBit(c+136,"W0_en", false,-1);
    tracep->declBit(c+1668,"W0_clk", false,-1);
    tracep->declBus(c+1104,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+483+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1579,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1580,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+208,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1551,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1552,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1536,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1537,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1553,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+365,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1329,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1331,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+76,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+77,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+359,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+360,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+362,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+367,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1565,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1566,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+208,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1567,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1568,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1569,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1536,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1537,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1570,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+388,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+389,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+390,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+64,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+65,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+67,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+391,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+392,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+393,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+394,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1581,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1582,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+485,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+78,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+79,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+7,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+486,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+487,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+488,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+207,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1532,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+208,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1535,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1536,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1537,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+760,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+211,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+212,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+214,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+38,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+215,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+217,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+218,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+219,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+365,"in_0_bvalid", false,-1);
    tracep->declBit(c+359,"in_0_rvalid", false,-1);
    tracep->declBit(c+1583,"in_0_wready", false,-1);
    tracep->declBit(c+1584,"in_0_awready", false,-1);
    tracep->declBit(c+76,"in_0_arready", false,-1);
    tracep->declBit(c+1579,"anonIn_awready", false,-1);
    tracep->declBit(c+80,"requestARIO_0_0", false,-1);
    tracep->declBit(c+81,"requestARIO_0_1", false,-1);
    tracep->declBit(c+82,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1585,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1586,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1587,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+83,"arSel", false,-1, 15,0);
    tracep->declBus(c+489,"awSel", false,-1, 15,0);
    tracep->declBus(c+490,"rSel", false,-1, 15,0);
    tracep->declBus(c+1361,"bSel", false,-1, 15,0);
    tracep->declBit(c+491,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+492,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+493,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+494,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+495,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+496,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+497,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+498,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+499,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+500,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+501,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+502,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+503,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+504,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+505,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+506,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+507,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+508,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+509,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+510,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+511,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+512,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+513,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+514,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+515,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+516,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+517,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+518,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+519,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+520,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+521,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+522,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+523,"latched", false,-1);
    tracep->declBit(c+1588,"in_0_awvalid", false,-1);
    tracep->declBit(c+1589,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1590,"in_0_wvalid", false,-1);
    tracep->declBit(c+524,"idle_3", false,-1);
    tracep->declBit(c+525,"anyValid", false,-1);
    tracep->declBus(c+526,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+527,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+528,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+529,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+530,"prefixOR_1", false,-1);
    tracep->declBit(c+531,"winner_3_1", false,-1);
    tracep->declBit(c+532,"winner_3_2", false,-1);
    tracep->declBit(c+533,"state_3_0", false,-1);
    tracep->declBit(c+534,"state_3_1", false,-1);
    tracep->declBit(c+535,"state_3_2", false,-1);
    tracep->declBit(c+536,"muxState_3_0", false,-1);
    tracep->declBit(c+537,"muxState_3_1", false,-1);
    tracep->declBit(c+538,"muxState_3_2", false,-1);
    tracep->declBit(c+539,"idle_4", false,-1);
    tracep->declBit(c+540,"anyValid_1", false,-1);
    tracep->declBus(c+541,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+542,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+543,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+544,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+545,"winner_4_0", false,-1);
    tracep->declBit(c+546,"winner_4_2", false,-1);
    tracep->declBit(c+547,"state_4_0", false,-1);
    tracep->declBit(c+548,"state_4_2", false,-1);
    tracep->declBit(c+549,"muxState_4_0", false,-1);
    tracep->declBit(c+550,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+551,"io_enq_ready", false,-1);
    tracep->declBit(c+1589,"io_enq_valid", false,-1);
    tracep->declBus(c+1591,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1592,"io_deq_ready", false,-1);
    tracep->declBit(c+1593,"io_deq_valid", false,-1);
    tracep->declBus(c+1594,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+552,"wrap", false,-1);
    tracep->declBit(c+553,"wrap_1", false,-1);
    tracep->declBit(c+554,"maybe_full", false,-1);
    tracep->declBit(c+555,"ptr_match", false,-1);
    tracep->declBit(c+556,"empty", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+1593,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1595,"do_deq", false,-1);
    tracep->declBit(c+1596,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+553,"R0_addr", false,-1);
    tracep->declBit(c+1753,"R0_en", false,-1);
    tracep->declBit(c+1668,"R0_clk", false,-1);
    tracep->declBus(c+558,"R0_data", false,-1, 2,0);
    tracep->declBit(c+552,"W0_addr", false,-1);
    tracep->declBit(c+1596,"W0_en", false,-1);
    tracep->declBit(c+1668,"W0_clk", false,-1);
    tracep->declBus(c+1591,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+559+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1549,"auto_in_awready", false,-1);
    tracep->declBit(c+1550,"auto_in_awvalid", false,-1);
    tracep->declBus(c+208,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+364,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1551,"auto_in_wready", false,-1);
    tracep->declBit(c+1552,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1536,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1537,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_in_wlast", false,-1);
    tracep->declBit(c+1553,"auto_in_bready", false,-1);
    tracep->declBit(c+365,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1329,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1331,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1332,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+55,"auto_in_arready", false,-1);
    tracep->declBit(c+56,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+57,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+54,"auto_in_rready", false,-1);
    tracep->declBit(c+359,"auto_in_rvalid", false,-1);
    tracep->declBus(c+360,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+362,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+366,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+367,"auto_in_rlast", false,-1);
    tracep->declBit(c+1579,"auto_out_awready", false,-1);
    tracep->declBit(c+1580,"auto_out_awvalid", false,-1);
    tracep->declBus(c+208,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1551,"auto_out_wready", false,-1);
    tracep->declBit(c+1552,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1536,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1537,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_out_wlast", false,-1);
    tracep->declBit(c+1553,"auto_out_bready", false,-1);
    tracep->declBit(c+365,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1329,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1331,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+76,"auto_out_arready", false,-1);
    tracep->declBit(c+77,"auto_out_arvalid", false,-1);
    tracep->declBus(c+39,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_out_rready", false,-1);
    tracep->declBit(c+359,"auto_out_rvalid", false,-1);
    tracep->declBus(c+360,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+362,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+367,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+561,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+562,"io_deq_valid", false,-1);
    tracep->declBit(c+563,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+562,"full", false,-1);
    tracep->declBit(c+563,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+564,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+565,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+566,"io_deq_valid", false,-1);
    tracep->declBit(c+567,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+566,"full", false,-1);
    tracep->declBit(c+567,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+568,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+569,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+570,"io_deq_valid", false,-1);
    tracep->declBit(c+571,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+570,"full", false,-1);
    tracep->declBit(c+571,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+572,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+573,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+574,"io_deq_valid", false,-1);
    tracep->declBit(c+575,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+574,"full", false,-1);
    tracep->declBit(c+575,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+576,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+577,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+578,"io_deq_valid", false,-1);
    tracep->declBit(c+579,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+578,"full", false,-1);
    tracep->declBit(c+579,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+580,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+581,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+582,"io_deq_valid", false,-1);
    tracep->declBit(c+583,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+582,"full", false,-1);
    tracep->declBit(c+583,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+584,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+585,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+586,"io_deq_valid", false,-1);
    tracep->declBit(c+587,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+586,"full", false,-1);
    tracep->declBit(c+587,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+588,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+589,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+590,"io_deq_valid", false,-1);
    tracep->declBit(c+591,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+590,"full", false,-1);
    tracep->declBit(c+591,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+592,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+593,"io_enq_ready", false,-1);
    tracep->declBit(c+763,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1491,"io_deq_ready", false,-1);
    tracep->declBit(c+594,"io_deq_valid", false,-1);
    tracep->declBit(c+595,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+594,"full", false,-1);
    tracep->declBit(c+595,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+596,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+597,"io_enq_ready", false,-1);
    tracep->declBit(c+764,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1492,"io_deq_ready", false,-1);
    tracep->declBit(c+598,"io_deq_valid", false,-1);
    tracep->declBit(c+599,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+598,"full", false,-1);
    tracep->declBit(c+599,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+600,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+601,"io_enq_ready", false,-1);
    tracep->declBit(c+765,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1493,"io_deq_ready", false,-1);
    tracep->declBit(c+602,"io_deq_valid", false,-1);
    tracep->declBit(c+603,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+602,"full", false,-1);
    tracep->declBit(c+603,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+604,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+605,"io_enq_ready", false,-1);
    tracep->declBit(c+766,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1494,"io_deq_ready", false,-1);
    tracep->declBit(c+606,"io_deq_valid", false,-1);
    tracep->declBit(c+607,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+606,"full", false,-1);
    tracep->declBit(c+607,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+608,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+609,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+610,"io_deq_valid", false,-1);
    tracep->declBit(c+611,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+610,"full", false,-1);
    tracep->declBit(c+611,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+612,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+613,"io_enq_ready", false,-1);
    tracep->declBit(c+767,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1495,"io_deq_ready", false,-1);
    tracep->declBit(c+614,"io_deq_valid", false,-1);
    tracep->declBit(c+615,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+614,"full", false,-1);
    tracep->declBit(c+615,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+616,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+617,"io_enq_ready", false,-1);
    tracep->declBit(c+768,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1496,"io_deq_ready", false,-1);
    tracep->declBit(c+618,"io_deq_valid", false,-1);
    tracep->declBit(c+619,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+618,"full", false,-1);
    tracep->declBit(c+619,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+620,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+621,"io_enq_ready", false,-1);
    tracep->declBit(c+769,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1497,"io_deq_ready", false,-1);
    tracep->declBit(c+622,"io_deq_valid", false,-1);
    tracep->declBit(c+623,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+622,"full", false,-1);
    tracep->declBit(c+623,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+624,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+625,"io_enq_ready", false,-1);
    tracep->declBit(c+770,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1498,"io_deq_ready", false,-1);
    tracep->declBit(c+626,"io_deq_valid", false,-1);
    tracep->declBit(c+627,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+626,"full", false,-1);
    tracep->declBit(c+627,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+628,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+629,"io_enq_ready", false,-1);
    tracep->declBit(c+771,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1499,"io_deq_ready", false,-1);
    tracep->declBit(c+630,"io_deq_valid", false,-1);
    tracep->declBit(c+631,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+630,"full", false,-1);
    tracep->declBit(c+631,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+632,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+633,"io_enq_ready", false,-1);
    tracep->declBit(c+772,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1500,"io_deq_ready", false,-1);
    tracep->declBit(c+634,"io_deq_valid", false,-1);
    tracep->declBit(c+635,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+634,"full", false,-1);
    tracep->declBit(c+635,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+636,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+637,"io_enq_ready", false,-1);
    tracep->declBit(c+773,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1501,"io_deq_ready", false,-1);
    tracep->declBit(c+638,"io_deq_valid", false,-1);
    tracep->declBit(c+639,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+638,"full", false,-1);
    tracep->declBit(c+639,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+640,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+641,"io_enq_ready", false,-1);
    tracep->declBit(c+774,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1502,"io_deq_ready", false,-1);
    tracep->declBit(c+642,"io_deq_valid", false,-1);
    tracep->declBit(c+643,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+642,"full", false,-1);
    tracep->declBit(c+643,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+644,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+645,"io_enq_ready", false,-1);
    tracep->declBit(c+775,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1503,"io_deq_ready", false,-1);
    tracep->declBit(c+646,"io_deq_valid", false,-1);
    tracep->declBit(c+647,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+646,"full", false,-1);
    tracep->declBit(c+647,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+648,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+649,"io_enq_ready", false,-1);
    tracep->declBit(c+776,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1504,"io_deq_ready", false,-1);
    tracep->declBit(c+650,"io_deq_valid", false,-1);
    tracep->declBit(c+651,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+650,"full", false,-1);
    tracep->declBit(c+651,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+652,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+653,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+654,"io_deq_valid", false,-1);
    tracep->declBit(c+655,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+654,"full", false,-1);
    tracep->declBit(c+655,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+656,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+657,"io_enq_ready", false,-1);
    tracep->declBit(c+777,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1505,"io_deq_ready", false,-1);
    tracep->declBit(c+658,"io_deq_valid", false,-1);
    tracep->declBit(c+659,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+658,"full", false,-1);
    tracep->declBit(c+659,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+660,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+661,"io_enq_ready", false,-1);
    tracep->declBit(c+778,"io_enq_valid", false,-1);
    tracep->declBit(c+364,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1506,"io_deq_ready", false,-1);
    tracep->declBit(c+662,"io_deq_valid", false,-1);
    tracep->declBit(c+663,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+662,"full", false,-1);
    tracep->declBit(c+663,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+664,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+665,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+666,"io_deq_valid", false,-1);
    tracep->declBit(c+667,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+666,"full", false,-1);
    tracep->declBit(c+667,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+668,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+669,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+670,"io_deq_valid", false,-1);
    tracep->declBit(c+671,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+670,"full", false,-1);
    tracep->declBit(c+671,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+672,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+673,"io_enq_ready", false,-1);
    tracep->declBit(c+96,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+674,"io_deq_valid", false,-1);
    tracep->declBit(c+675,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+674,"full", false,-1);
    tracep->declBit(c+675,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+676,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+677,"io_enq_ready", false,-1);
    tracep->declBit(c+97,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+678,"io_deq_valid", false,-1);
    tracep->declBit(c+679,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+678,"full", false,-1);
    tracep->declBit(c+679,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+680,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+681,"io_enq_ready", false,-1);
    tracep->declBit(c+98,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+682,"io_deq_valid", false,-1);
    tracep->declBit(c+683,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+682,"full", false,-1);
    tracep->declBit(c+683,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+684,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+685,"io_enq_ready", false,-1);
    tracep->declBit(c+99,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+686,"io_deq_valid", false,-1);
    tracep->declBit(c+687,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+686,"full", false,-1);
    tracep->declBit(c+687,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+688,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1708,"reset", false,-1);
    tracep->declBit(c+130,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1099,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1758,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1759,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1706,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1100,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1096,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1101,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1349,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1350,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1351,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+131,"auto_master_out_arready", false,-1);
    tracep->declBit(c+70,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+46,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"auto_master_out_rready", false,-1);
    tracep->declBit(c+403,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+404,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+405,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+406,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+407,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1708,"reset", false,-1);
    tracep->declBit(c+1752,"io_interrupt", false,-1);
    tracep->declBit(c+130,"io_master_awready", false,-1);
    tracep->declBit(c+1099,"io_master_awvalid", false,-1);
    tracep->declBus(c+1094,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1758,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1759,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1706,"io_master_wready", false,-1);
    tracep->declBit(c+1100,"io_master_wvalid", false,-1);
    tracep->declBus(c+1096,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"io_master_wlast", false,-1);
    tracep->declBit(c+1101,"io_master_bready", false,-1);
    tracep->declBit(c+1349,"io_master_bvalid", false,-1);
    tracep->declBus(c+1351,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1350,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+131,"io_master_arready", false,-1);
    tracep->declBit(c+70,"io_master_arvalid", false,-1);
    tracep->declBus(c+47,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+46,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+48,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"io_master_rready", false,-1);
    tracep->declBit(c+403,"io_master_rvalid", false,-1);
    tracep->declBus(c+406,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+405,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+407,"io_master_rlast", false,-1);
    tracep->declBus(c+404,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1780,"io_slave_awready", false,-1);
    tracep->declBit(c+1752,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1781,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1758,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1759,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1746,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1782,"io_slave_wready", false,-1);
    tracep->declBit(c+1752,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1781,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1758,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1752,"io_slave_wlast", false,-1);
    tracep->declBit(c+1752,"io_slave_bready", false,-1);
    tracep->declBit(c+1783,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1784,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1785,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1786,"io_slave_arready", false,-1);
    tracep->declBit(c+1752,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1781,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1758,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1759,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1746,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1760,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1752,"io_slave_rready", false,-1);
    tracep->declBit(c+1787,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1788,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1789,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1790,"io_slave_rlast", false,-1);
    tracep->declBus(c+1791,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBit(c+1604,"reset_ifu", false,-1);
    tracep->declBus(c+1605,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1606,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1607,"npc", false,-1, 31,0);
    tracep->declBit(c+1792,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1793,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1605,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1606,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1608,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1609,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1610,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1758,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1759,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1747,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1760,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1611,"ifu_arvalid", false,-1);
    tracep->declBit(c+137,"ifu_arready", false,-1);
    tracep->declBus(c+100,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+101,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+102,"ifu_rlast", false,-1);
    tracep->declBus(c+103,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+104,"ifu_rvalid", false,-1);
    tracep->declBit(c+1612,"ifu_rready", false,-1);
    tracep->declBit(c+1105,"bus_busy", false,-1);
    tracep->declBit(c+1794,"useless1", false,-1);
    tracep->declBit(c+1795,"useless2", false,-1);
    tracep->declBit(c+1796,"useless3", false,-1);
    tracep->declBit(c+1797,"useless4", false,-1);
    tracep->declBit(c+1613,"fencei", false,-1);
    tracep->declBus(c+1106,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1758,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1759,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1107,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1760,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1108,"lsu_arvalid", false,-1);
    tracep->declBit(c+138,"lsu_arready", false,-1);
    tracep->declBus(c+105,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+106,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+107,"lsu_rlast", false,-1);
    tracep->declBus(c+108,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+109,"lsu_rvalid", false,-1);
    tracep->declBit(c+1109,"lsu_rready", false,-1);
    tracep->declBus(c+1094,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1758,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1759,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1099,"lsu_awvalid", false,-1);
    tracep->declBit(c+130,"lsu_awready", false,-1);
    tracep->declBus(c+1096,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"lsu_wlast", false,-1);
    tracep->declBit(c+1100,"lsu_wvalid", false,-1);
    tracep->declBit(c+1706,"lsu_wready", false,-1);
    tracep->declBus(c+1351,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1350,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1349,"lsu_bvalid", false,-1);
    tracep->declBit(c+1101,"lsu_bready", false,-1);
    tracep->declBus(c+1614,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1758,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1759,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1615,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1760,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1616,"axi_arvalid", false,-1);
    tracep->declBit(c+139,"axi_arready", false,-1);
    tracep->declBus(c+110,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+111,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+112,"axi_rlast", false,-1);
    tracep->declBus(c+113,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+114,"axi_rvalid", false,-1);
    tracep->declBit(c+1617,"axi_rready", false,-1);
    tracep->declBus(c+1094,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1758,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1759,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1099,"axi_awvalid", false,-1);
    tracep->declBit(c+130,"axi_awready", false,-1);
    tracep->declBus(c+1096,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"axi_wlast", false,-1);
    tracep->declBit(c+1100,"axi_wvalid", false,-1);
    tracep->declBit(c+1706,"axi_wready", false,-1);
    tracep->declBus(c+1351,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1350,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1349,"axi_bvalid", false,-1);
    tracep->declBit(c+1101,"axi_bready", false,-1);
    tracep->declBus(c+115,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+116,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+117,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+118,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+119,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+120,"clint_arvalid", false,-1);
    tracep->declBit(c+1110,"clint_arready", false,-1);
    tracep->declBus(c+1111,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1112,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1113,"clint_rlast", false,-1);
    tracep->declBus(c+1758,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1114,"clint_rvalid", false,-1);
    tracep->declBit(c+121,"clint_rready", false,-1);
    tracep->declBus(c+1798,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1799,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1800,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1801,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1802,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1803,"clint_awvalid", false,-1);
    tracep->declBit(c+1115,"clint_awready", false,-1);
    tracep->declBus(c+1804,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1805,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1806,"clint_wlast", false,-1);
    tracep->declBit(c+1807,"clint_wvalid", false,-1);
    tracep->declBit(c+1116,"clint_wready", false,-1);
    tracep->declBus(c+1117,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1758,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1118,"clint_bvalid", false,-1);
    tracep->declBit(c+1808,"clint_bready", false,-1);
    tracep->declBus(c+1618,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1619,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1710,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1711,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1362,"a5", false,-1, 31,0);
    tracep->declBus(c+1620,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1710,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1711,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1621,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1712,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1622,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1623,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1624,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1625,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1626,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1627,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1628,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1629,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1630,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1631,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1632,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1633,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1634,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1635,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1636,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1637,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1119,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1638,"csr_write", false,-1);
    tracep->declBus(c+1639,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1363+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1120,"wdata", false,-1, 31,0);
    tracep->declBus(c+1121,"waddr", false,-1, 4,0);
    tracep->declBit(c+1122,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1367+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1123,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1124,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1125,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1126,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1809,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1127,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1128,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1129,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1130,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1131,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1132,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1133,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1134,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1135,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1136,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1137,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1138,"npc_valid", false,-1);
    tracep->declBit(c+1139,"rd_exu_valid", false,-1);
    tracep->declBus(c+1140,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1141,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1142,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1143,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1810,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1144,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1145,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1146,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1147,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1148,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1149,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1150,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1151,"ready_lsu_to_wbu", false,-1);
    tracep->declBit(c+1152,"rd_lsu_valid", false,-1);
    tracep->declBit(c+1153,"rd_wbu_valid", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBus(c+1610,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1758,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1759,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1747,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1760,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1611,"arvalid_i_a", false,-1);
    tracep->declBit(c+137,"arready_o_a", false,-1);
    tracep->declBus(c+100,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+101,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+102,"rlast_o_a", false,-1);
    tracep->declBus(c+103,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+104,"rvalid_o_a", false,-1);
    tracep->declBit(c+1612,"rready_i_a", false,-1);
    tracep->declBus(c+1811,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1758,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1759,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1746,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1760,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1752,"awvalid_i_a", false,-1);
    tracep->declBit(c+1812,"awready_o_a", false,-1);
    tracep->declBus(c+1811,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1758,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1752,"wlast_i_a", false,-1);
    tracep->declBit(c+1752,"wvalid_i_a", false,-1);
    tracep->declBit(c+1813,"wready_o_a", false,-1);
    tracep->declBus(c+1814,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1815,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1816,"bvalid_o_a", false,-1);
    tracep->declBit(c+1752,"bready_i_a", false,-1);
    tracep->declBus(c+1106,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1758,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1759,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1107,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1760,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1108,"arvalid_i_b", false,-1);
    tracep->declBit(c+138,"arready_o_b", false,-1);
    tracep->declBus(c+105,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+106,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+107,"rlast_o_b", false,-1);
    tracep->declBus(c+108,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+109,"rvalid_o_b", false,-1);
    tracep->declBit(c+1109,"rready_i_b", false,-1);
    tracep->declBus(c+1094,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1758,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1759,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1095,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1760,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1099,"awvalid_i_b", false,-1);
    tracep->declBit(c+130,"awready_o_b", false,-1);
    tracep->declBus(c+1096,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1097,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1098,"wlast_i_b", false,-1);
    tracep->declBit(c+1100,"wvalid_i_b", false,-1);
    tracep->declBit(c+1706,"wready_o_b", false,-1);
    tracep->declBus(c+1351,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1350,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1349,"bvalid_o_b", false,-1);
    tracep->declBit(c+1101,"bready_i_b", false,-1);
    tracep->declBus(c+1614,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1758,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1759,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1615,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1760,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1616,"arvalid_o", false,-1);
    tracep->declBit(c+139,"arready_i", false,-1);
    tracep->declBus(c+110,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+111,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+112,"rlast_i", false,-1);
    tracep->declBus(c+113,"rid_i", false,-1, 3,0);
    tracep->declBit(c+114,"rvalid_i", false,-1);
    tracep->declBit(c+1617,"rready_o", false,-1);
    tracep->declBus(c+1094,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1758,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1759,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1095,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1760,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1099,"awvalid_o", false,-1);
    tracep->declBit(c+130,"awready_i", false,-1);
    tracep->declBus(c+1096,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1097,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1098,"wlast_o", false,-1);
    tracep->declBit(c+1100,"wvalid_o", false,-1);
    tracep->declBit(c+1706,"wready_i", false,-1);
    tracep->declBus(c+1351,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1350,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1349,"bvalid_i", false,-1);
    tracep->declBit(c+1101,"bready_o", false,-1);
    tracep->declBit(c+1105,"bus_busy", false,-1);
    tracep->declBus(c+1817,"MASTER_A", false,-1, 0,0);
    tracep->declBus(c+1818,"MASTER_B", false,-1, 0,0);
    tracep->declBit(c+1154,"arb_grant", false,-1);
    tracep->declBit(c+1155,"arb_locked", false,-1);
    tracep->declBit(c+1156,"current_master", false,-1);
    tracep->declBit(c+1713,"ar_handshake", false,-1);
    tracep->declBit(c+1714,"r_last_handshake", false,-1);
    tracep->declBit(c+1640,"arb_grant_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBus(c+115,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+116,"arid_i", false,-1, 3,0);
    tracep->declBus(c+117,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+118,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+119,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+120,"arvalid_i", false,-1);
    tracep->declBit(c+1110,"arready_o", false,-1);
    tracep->declBus(c+1111,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1112,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1113,"rlast_o", false,-1);
    tracep->declBus(c+1758,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1114,"rvalid_o", false,-1);
    tracep->declBit(c+121,"rready_i", false,-1);
    tracep->declBus(c+1798,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1799,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1800,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1801,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1802,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1803,"awvalid_i", false,-1);
    tracep->declBit(c+1115,"awready_o", false,-1);
    tracep->declBus(c+1804,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1805,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1806,"wlast_i", false,-1);
    tracep->declBit(c+1807,"wvalid_i", false,-1);
    tracep->declBit(c+1116,"wready_o", false,-1);
    tracep->declBus(c+1117,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1758,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1118,"bvalid_o", false,-1);
    tracep->declBit(c+1808,"bready_i", false,-1);
    tracep->declBit(c+1157,"ar_state", false,-1);
    tracep->declBit(c+1158,"r_state", false,-1);
    tracep->declBit(c+1159,"aw_state", false,-1);
    tracep->declBit(c+1160,"w_state", false,-1);
    tracep->declBit(c+1819,"b_state", false,-1);
    tracep->declBus(c+1161,"araddr", false,-1, 31,0);
    tracep->declBus(c+1162,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1163,"wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1820,"wvalid", false,-1);
    tracep->declBit(c+1165,"flag_waddr", false,-1);
    tracep->declBit(c+1166,"flag_wdata", false,-1);
    tracep->declBit(c+1167,"flag_rdata", false,-1);
    tracep->declBit(c+1168,"flag_raddr", false,-1);
    tracep->declBit(c+1821,"flag_write", false,-1);
    tracep->declBus(c+1169,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1170,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1171,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1172,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1173,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1174,"lfsr_in", false,-1);
    tracep->declBus(c+1175,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1176,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBit(c+1604,"reset_ifu", false,-1);
    tracep->declBus(c+1620,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1710,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1711,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1621,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1712,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1622,"a_in_src_i", false,-1);
    tracep->declBus(c+1623,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1624,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1625,"adder_a_src_i", false,-1);
    tracep->declBit(c+1626,"adder_out_src_i", false,-1);
    tracep->declBus(c+1627,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1628,"MemRead_i", false,-1);
    tracep->declBit(c+1629,"MemWrite_i", false,-1);
    tracep->declBus(c+1630,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1631,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1632,"wb_src_i", false,-1);
    tracep->declBit(c+1633,"csr_write_i", false,-1);
    tracep->declBit(c+1634,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1635,"reg_write_i", false,-1);
    tracep->declBus(c+1636,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1637,"exu_valid_i", false,-1);
    tracep->declBit(c+1119,"exu_ready_o", false,-1);
    tracep->declBus(c+1123,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1124,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1125,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1126,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1607,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1127,"MemRead_o", false,-1);
    tracep->declBit(c+1128,"MemWrite_o", false,-1);
    tracep->declBus(c+1129,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1130,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1131,"wb_src_o", false,-1);
    tracep->declBit(c+1132,"csr_write_o", false,-1);
    tracep->declBit(c+1133,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1134,"reg_write_o", false,-1);
    tracep->declBus(c+1135,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1136,"exu_valid_o", false,-1);
    tracep->declBit(c+1137,"exu_ready_i", false,-1);
    tracep->declBit(c+1138,"npc_valid", false,-1);
    tracep->declBit(c+1139,"rd_exu_valid", false,-1);
    tracep->declBus(c+1178,"pc", false,-1, 31,0);
    tracep->declBus(c+1124,"rs1", false,-1, 31,0);
    tracep->declBus(c+1125,"rs2", false,-1, 31,0);
    tracep->declBus(c+1179,"imm", false,-1, 31,0);
    tracep->declBus(c+1180,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1181,"a_in_src", false,-1);
    tracep->declBus(c+1182,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1183,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1184,"adder_a_src", false,-1);
    tracep->declBit(c+1185,"adder_out_src", false,-1);
    tracep->declBus(c+1186,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1187,"npc_flag", false,-1);
    tracep->declBus(c+1188,"a_in", false,-1, 31,0);
    tracep->declBus(c+1189,"b_in", false,-1, 31,0);
    tracep->declBus(c+1190,"a_out", false,-1, 31,0);
    tracep->declBus(c+1191,"add_out", false,-1, 31,0);
    tracep->declBus(c+1192,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1123,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1607,"npc", false,-1, 31,0);
    tracep->declBit(c+1193,"zero", false,-1);
    tracep->declBus(c+1760,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1761,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1762,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1194,"current_state", false,-1, 1,0);
    tracep->declBus(c+1641,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1188,"a", false,-1, 31,0);
    tracep->declBus(c+1189,"b", false,-1, 31,0);
    tracep->declBus(c+1186,"op", false,-1, 3,0);
    tracep->declBus(c+1123,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1193,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1754,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1124,"d0", false,-1, 31,0);
    tracep->declBus(c+1178,"d1", false,-1, 31,0);
    tracep->declBit(c+1181,"sel", false,-1);
    tracep->declBus(c+1188,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1754,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1125,"d0", false,-1, 31,0);
    tracep->declBus(c+1179,"d1", false,-1, 31,0);
    tracep->declBus(c+1822,"d2", false,-1, 31,0);
    tracep->declBus(c+1180,"d3", false,-1, 31,0);
    tracep->declBus(c+1182,"sel", false,-1, 1,0);
    tracep->declBus(c+1189,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1190,"a", false,-1, 31,0);
    tracep->declBus(c+1179,"b", false,-1, 31,0);
    tracep->declBus(c+1191,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1754,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1178,"d0", false,-1, 31,0);
    tracep->declBus(c+1124,"d1", false,-1, 31,0);
    tracep->declBit(c+1184,"sel", false,-1);
    tracep->declBus(c+1190,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1754,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1191,"d0", false,-1, 31,0);
    tracep->declBus(c+1180,"d1", false,-1, 31,0);
    tracep->declBit(c+1185,"sel", false,-1);
    tracep->declBus(c+1192,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1195,"pc4", false,-1, 31,0);
    tracep->declBus(c+1192,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1183,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1193,"zero", false,-1);
    tracep->declBus(c+1123,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1607,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBit(c+1604,"reset_ifu", false,-1);
    tracep->declBus(c+1618,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1619,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1710,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1711,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1362,"a5", false,-1, 31,0);
    tracep->declBus(c+1605,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1606,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1608,"idu_valid_i", false,-1);
    tracep->declBit(c+1609,"idu_ready_o", false,-1);
    tracep->declBus(c+1620,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1710,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1711,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1621,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1712,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1622,"a_in_src_o", false,-1);
    tracep->declBus(c+1623,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1624,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1625,"adder_a_src_o", false,-1);
    tracep->declBit(c+1626,"adder_out_src_o", false,-1);
    tracep->declBus(c+1627,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1628,"MemRead_o", false,-1);
    tracep->declBit(c+1629,"MemWrite_o", false,-1);
    tracep->declBus(c+1630,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1631,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1632,"wb_src_o", false,-1);
    tracep->declBit(c+1633,"csr_write_o", false,-1);
    tracep->declBit(c+1634,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1635,"reg_write_o", false,-1);
    tracep->declBus(c+1636,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1637,"idu_valid_o", false,-1);
    tracep->declBit(c+1119,"idu_ready_i", false,-1);
    tracep->declBit(c+1638,"csr_write_i", false,-1);
    tracep->declBus(c+1639,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1399+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1613,"fencei", false,-1);
    tracep->declBus(c+1196,"exu_rd", false,-1, 4,0);
    tracep->declBus(c+1197,"lsu_rd", false,-1, 4,0);
    tracep->declBus(c+1198,"wbu_rd", false,-1, 4,0);
    tracep->declBus(c+1620,"pc", false,-1, 31,0);
    tracep->declBus(c+1642,"inst", false,-1, 31,0);
    tracep->declBus(c+1643,"opcode", false,-1, 6,0);
    tracep->declBus(c+1644,"wmask_tmp", false,-1, 7,0);
    tracep->declBit(c+1645,"opcode_r", false,-1);
    tracep->declBit(c+1646,"opcode_i", false,-1);
    tracep->declBit(c+1647,"opcode_s", false,-1);
    tracep->declBit(c+1648,"opcode_sb", false,-1);
    tracep->declBit(c+1649,"opcode_u", false,-1);
    tracep->declBit(c+1650,"opcode_uj", false,-1);
    tracep->declBit(c+1715,"isRAW", false,-1);
    tracep->declBit(c+1651,"flag", false,-1);
    tracep->declBit(c+1716,"exu_raw", false,-1);
    tracep->declBit(c+1717,"lsu_raw", false,-1);
    tracep->declBit(c+1718,"wbu_raw", false,-1);
    tracep->declBus(c+1760,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1761,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1762,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1652,"current_state", false,-1, 1,0);
    tracep->declBus(c+1653,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1642,"inst", false,-1, 31,0);
    tracep->declBus(c+1627,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1643,"opcode", false,-1, 6,0);
    tracep->declBus(c+1654,"funct3", false,-1, 2,0);
    tracep->declBus(c+1655,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1638,"wen", false,-1);
    tracep->declBus(c+1642,"inst", false,-1, 31,0);
    tracep->declBus(c+1639,"wdata", false,-1, 31,0);
    tracep->declBus(c+1362,"NO", false,-1, 31,0);
    tracep->declBus(c+1620,"pc", false,-1, 31,0);
    tracep->declBus(c+1712,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1403+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1407,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1408,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1409,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1410,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1823,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1824,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1643,"opcode", false,-1, 6,0);
    tracep->declBus(c+1654,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1642,"inst", false,-1, 31,0);
    tracep->declBit(c+1622,"a_in_src", false,-1);
    tracep->declBus(c+1623,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1635,"reg_write", false,-1);
    tracep->declBus(c+1624,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1625,"adder_a_src", false,-1);
    tracep->declBit(c+1628,"MemRead", false,-1);
    tracep->declBit(c+1629,"MemWrite", false,-1);
    tracep->declBus(c+1644,"wmask", false,-1, 7,0);
    tracep->declBit(c+1632,"wb_src", false,-1);
    tracep->declBus(c+1631,"rmask", false,-1, 2,0);
    tracep->declBit(c+1633,"csr_write", false,-1);
    tracep->declBit(c+1626,"adder_out_src", false,-1);
    tracep->declBit(c+1634,"csr_wdata_src", false,-1);
    tracep->declBus(c+1643,"opcode", false,-1, 6,0);
    tracep->declBus(c+1654,"funct3", false,-1, 2,0);
    tracep->declBus(c+1655,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1754,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1642,"inst", false,-1, 31,0);
    tracep->declBus(c+1621,"data", false,-1, 31,0);
    tracep->declBus(c+1643,"opcode", false,-1, 6,0);
    tracep->declBus(c+1654,"funct3", false,-1, 2,0);
    tracep->declBus(c+1655,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBus(c+1610,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1758,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1759,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1747,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1760,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1611,"arvalid_o", false,-1);
    tracep->declBit(c+137,"arready_i", false,-1);
    tracep->declBus(c+100,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+101,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+102,"rlast_i", false,-1);
    tracep->declBus(c+103,"rid_i", false,-1, 3,0);
    tracep->declBit(c+104,"rvalid_i", false,-1);
    tracep->declBit(c+1612,"rready_o", false,-1);
    tracep->declBus(c+1607,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1138,"npc_valid", false,-1);
    tracep->declBit(c+1604,"reset_o", false,-1);
    tracep->declBus(c+1605,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1606,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1608,"ifu_valid_o", false,-1);
    tracep->declBit(c+1609,"ifu_ready_i", false,-1);
    tracep->declBit(c+1105,"bus_busy", false,-1);
    tracep->declBus(c+1656,"pc_dbg", false,-1, 31,0);
    tracep->declBus(c+1746,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1743,"S_WAIT_R", false,-1, 2,0);
    tracep->declBus(c+1747,"S_OUT", false,-1, 2,0);
    tracep->declBus(c+1748,"S_FLUSH", false,-1, 2,0);
    tracep->declBus(c+1656,"pc_fetch", false,-1, 31,0);
    tracep->declBus(c+1657,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1658,"inst_buf", false,-1, 31,0);
    tracep->declBus(c+1659,"state", false,-1, 2,0);
    tracep->declBit(c+1660,"ctrl_hazard", false,-1);
    tracep->declBit(c+1661,"ar_inflight", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBus(c+1123,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1124,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1125,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1126,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1127,"MemRead_i", false,-1);
    tracep->declBit(c+1128,"MemWrite_i", false,-1);
    tracep->declBus(c+1129,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1130,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1131,"wb_src_i", false,-1);
    tracep->declBit(c+1132,"csr_write_i", false,-1);
    tracep->declBit(c+1133,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1134,"reg_write_i", false,-1);
    tracep->declBus(c+1135,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1136,"lsu_valid_i", false,-1);
    tracep->declBit(c+1137,"lsu_ready_o", false,-1);
    tracep->declBus(c+1140,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1141,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1142,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1143,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1144,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1145,"wb_src_o", false,-1);
    tracep->declBit(c+1146,"csr_write_o", false,-1);
    tracep->declBit(c+1147,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1148,"reg_write_o", false,-1);
    tracep->declBus(c+1149,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1150,"lsu_valid_o", false,-1);
    tracep->declBit(c+1151,"lsu_ready_i", false,-1);
    tracep->declBus(c+1106,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1758,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1759,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1107,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1760,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1108,"arvalid_o", false,-1);
    tracep->declBit(c+138,"arready_i", false,-1);
    tracep->declBus(c+105,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+106,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+107,"rlast_i", false,-1);
    tracep->declBus(c+108,"rid_i", false,-1, 3,0);
    tracep->declBit(c+109,"rvalid_i", false,-1);
    tracep->declBit(c+1109,"rready_o", false,-1);
    tracep->declBus(c+1094,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1758,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1759,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1095,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1760,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1099,"awvalid_o", false,-1);
    tracep->declBit(c+130,"awready_i", false,-1);
    tracep->declBus(c+1096,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1097,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1098,"wlast_o", false,-1);
    tracep->declBit(c+1100,"wvalid_o", false,-1);
    tracep->declBit(c+1706,"wready_i", false,-1);
    tracep->declBus(c+1351,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1350,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1349,"bvalid_i", false,-1);
    tracep->declBit(c+1101,"bready_o", false,-1);
    tracep->declBit(c+1105,"bus_busy", false,-1);
    tracep->declBit(c+1152,"rd_lsu_valid", false,-1);
    tracep->declBus(c+1140,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1141,"rs1", false,-1, 31,0);
    tracep->declBus(c+1825,"rs2", false,-1, 31,0);
    tracep->declBus(c+1826,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1144,"rmask", false,-1, 2,0);
    tracep->declBus(c+1199,"wmask", false,-1, 3,0);
    tracep->declBit(c+1200,"flag", false,-1);
    tracep->declBit(c+1827,"wvalid_tmp", false,-1);
    tracep->declBit(c+1201,"MemRead", false,-1);
    tracep->declBit(c+1202,"MemWrite", false,-1);
    tracep->declBit(c+1108,"arvalid", false,-1);
    tracep->declBus(c+1106,"araddr", false,-1, 31,0);
    tracep->declBit(c+1109,"rready", false,-1);
    tracep->declBus(c+1094,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1099,"awvalid", false,-1);
    tracep->declBus(c+1096,"wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1100,"wvalid", false,-1);
    tracep->declBit(c+1101,"bready", false,-1);
    tracep->declBit(c+1203,"read_mem", false,-1);
    tracep->declBit(c+1204,"write_mem", false,-1);
    tracep->declBus(c+1760,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1761,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1762,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1205,"current_state", false,-1, 1,0);
    tracep->declBus(c+1719,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1828,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1754,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBus(c+1120,"wdata", false,-1, 31,0);
    tracep->declBus(c+1121,"waddr", false,-1, 4,0);
    tracep->declBit(c+1122,"wen", false,-1);
    tracep->declBus(c+1618,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1710,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1619,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1711,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1362,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1411+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1443+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBus(c+1140,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1141,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1142,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1143,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1144,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1145,"wb_src_i", false,-1);
    tracep->declBit(c+1146,"csr_write_i", false,-1);
    tracep->declBit(c+1147,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1148,"reg_write_i", false,-1);
    tracep->declBus(c+1149,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1150,"wbu_valid_i", false,-1);
    tracep->declBit(c+1151,"wbu_ready_o", false,-1);
    tracep->declBus(c+1639,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1120,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1638,"csr_write_o", false,-1);
    tracep->declBit(c+1122,"reg_write_o", false,-1);
    tracep->declBus(c+1121,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1153,"rd_wbu_valid", false,-1);
    tracep->declBus(c+1206,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1207,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1208,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1209,"rs1", false,-1, 31,0);
    tracep->declBus(c+1210,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1211,"rmask", false,-1, 2,0);
    tracep->declBit(c+1212,"wb_src", false,-1);
    tracep->declBit(c+1213,"csr_wdata_src", false,-1);
    tracep->declBit(c+1214,"difftest_check", false,-1);
    tracep->declBit(c+1215,"difftest_check_flag", false,-1);
    tracep->declBus(c+1760,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1761,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1762,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1216,"current_state", false,-1, 1,0);
    tracep->declBus(c+1217,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1754,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1209,"d0", false,-1, 31,0);
    tracep->declBus(c+1210,"d1", false,-1, 31,0);
    tracep->declBit(c+1213,"sel", false,-1);
    tracep->declBus(c+1639,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1207,"read_data", false,-1, 31,0);
    tracep->declBus(c+1218,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1211,"rmask", false,-1, 2,0);
    tracep->declBus(c+1206,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1219,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1220,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1221,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1222,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1223,"byte3", false,-1, 31,0);
    tracep->declBus(c+1224,"byte2", false,-1, 31,0);
    tracep->declBus(c+1225,"byte1", false,-1, 31,0);
    tracep->declBus(c+1226,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1754,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1208,"d0", false,-1, 31,0);
    tracep->declBus(c+1206,"d1", false,-1, 31,0);
    tracep->declBit(c+1212,"sel", false,-1);
    tracep->declBus(c+1120,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1709,"rst_n", false,-1);
    tracep->declBus(c+1614,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1758,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1759,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1615,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1760,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1616,"axi_arvalid_i", false,-1);
    tracep->declBit(c+139,"axi_arready_o", false,-1);
    tracep->declBus(c+110,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+111,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+112,"axi_rlast_o", false,-1);
    tracep->declBus(c+113,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+114,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1617,"axi_rready_i", false,-1);
    tracep->declBus(c+1094,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1758,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1759,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1095,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1760,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1099,"axi_awvalid_i", false,-1);
    tracep->declBit(c+130,"axi_awready_o", false,-1);
    tracep->declBus(c+1096,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1097,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1098,"axi_wlast_i", false,-1);
    tracep->declBit(c+1100,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1706,"axi_wready_o", false,-1);
    tracep->declBus(c+1351,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1350,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1349,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1101,"axi_bready_i", false,-1);
    tracep->declBus(c+47,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+46,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+48,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+49,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+50,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+70,"sram_arvalid_o", false,-1);
    tracep->declBit(c+131,"sram_arready_i", false,-1);
    tracep->declBus(c+405,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+406,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+407,"sram_rlast_i", false,-1);
    tracep->declBus(c+404,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+403,"sram_rvalid_i", false,-1);
    tracep->declBit(c+71,"sram_rready_o", false,-1);
    tracep->declBus(c+1094,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1758,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1759,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1095,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1760,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1099,"sram_awvalid_o", false,-1);
    tracep->declBit(c+130,"sram_awready_i", false,-1);
    tracep->declBus(c+1096,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1097,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1098,"sram_wlast_o", false,-1);
    tracep->declBit(c+1100,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1706,"sram_wready_i", false,-1);
    tracep->declBus(c+1351,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1350,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1349,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1101,"sram_bready_o", false,-1);
    tracep->declBus(c+115,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+116,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+117,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+118,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+119,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+120,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1110,"clint_arready_i", false,-1);
    tracep->declBus(c+1111,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1112,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1113,"clint_rlast_i", false,-1);
    tracep->declBus(c+1758,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1114,"clint_rvalid_i", false,-1);
    tracep->declBit(c+121,"clint_rready_o", false,-1);
    tracep->declBus(c+1798,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1799,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1800,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1801,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1802,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1803,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1115,"clint_awready_i", false,-1);
    tracep->declBus(c+1804,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1805,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1806,"clint_wlast_o", false,-1);
    tracep->declBit(c+1807,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1116,"clint_wready_i", false,-1);
    tracep->declBus(c+1117,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1758,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1118,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1808,"clint_bready_o", false,-1);
    tracep->declBit(c+122,"ar_switch", false,-1);
    tracep->declBit(c+123,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"io_d", false,-1);
    tracep->declBit(c+689,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"io_d", false,-1);
    tracep->declBit(c+689,"io_q", false,-1);
    tracep->declBit(c+689,"sync_0", false,-1);
    tracep->declBit(c+690,"sync_1", false,-1);
    tracep->declBit(c+691,"sync_2", false,-1);
    tracep->declBit(c+692,"sync_3", false,-1);
    tracep->declBit(c+693,"sync_4", false,-1);
    tracep->declBit(c+694,"sync_5", false,-1);
    tracep->declBit(c+695,"sync_6", false,-1);
    tracep->declBit(c+696,"sync_7", false,-1);
    tracep->declBit(c+697,"sync_8", false,-1);
    tracep->declBit(c+698,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1312,"auto_in_psel", false,-1);
    tracep->declBit(c+1313,"auto_in_penable", false,-1);
    tracep->declBit(c+1302,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1301,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+795,"auto_in_pready", false,-1);
    tracep->declBit(c+1752,"auto_in_pslverr", false,-1);
    tracep->declBus(c+796,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1670,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1671,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1672,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1673,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1674,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1675,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1676,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1677,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1678,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1475,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1312,"in_psel", false,-1);
    tracep->declBit(c+1313,"in_penable", false,-1);
    tracep->declBus(c+1301,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1302,"in_pwrite", false,-1);
    tracep->declBus(c+1303,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+795,"in_pready", false,-1);
    tracep->declBus(c+796,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1752,"in_pslverr", false,-1);
    tracep->declBus(c+1670,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1671,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1672,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1673,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1674,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1675,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1676,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1677,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1678,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+805,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+796,"rdata", false,-1, 31,0);
    tracep->declBus(c+806,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+795,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+807,"num", false,-1, 3,0);
    tracep->declBus(c+1672,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+808,"num", false,-1, 3,0);
    tracep->declBus(c+1673,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+809,"num", false,-1, 3,0);
    tracep->declBus(c+1674,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+810,"num", false,-1, 3,0);
    tracep->declBus(c+1675,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+811,"num", false,-1, 3,0);
    tracep->declBus(c+1676,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+812,"num", false,-1, 3,0);
    tracep->declBus(c+1677,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+813,"num", false,-1, 3,0);
    tracep->declBus(c+1678,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+814,"num", false,-1, 3,0);
    tracep->declBus(c+1679,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1309,"auto_in_psel", false,-1);
    tracep->declBit(c+1310,"auto_in_penable", false,-1);
    tracep->declBit(c+1302,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1301,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+172,"auto_in_pready", false,-1);
    tracep->declBit(c+1752,"auto_in_pslverr", false,-1);
    tracep->declBus(c+173,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1680,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1681,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1475,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1309,"in_psel", false,-1);
    tracep->declBit(c+1310,"in_penable", false,-1);
    tracep->declBus(c+1301,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1302,"in_pwrite", false,-1);
    tracep->declBus(c+1303,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+172,"in_pready", false,-1);
    tracep->declBus(c+173,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1752,"in_pslverr", false,-1);
    tracep->declBit(c+1680,"ps2_clk", false,-1);
    tracep->declBit(c+1681,"ps2_data", false,-1);
    tracep->declBus(c+699,"data_r", false,-1, 7,0);
    tracep->declBus(c+700,"old_data", false,-1, 7,0);
    tracep->declBus(c+701,"data_asic", false,-1, 7,0);
    tracep->declBus(c+702,"buffer", false,-1, 7,0);
    tracep->declBit(c+703,"ready", false,-1);
    tracep->declBit(c+704,"nextdata_n", false,-1);
    tracep->declBit(c+705,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1720,"clrn", false,-1);
    tracep->declBit(c+1680,"ps2_clk", false,-1);
    tracep->declBit(c+1681,"ps2_data", false,-1);
    tracep->declBit(c+704,"nextdata_n", false,-1);
    tracep->declBus(c+702,"data", false,-1, 7,0);
    tracep->declBit(c+703,"ready", false,-1);
    tracep->declBit(c+705,"overflow", false,-1);
    tracep->declBus(c+706,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+707+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+715,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+716,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+717,"count", false,-1, 3,0);
    tracep->declBus(c+718,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+719,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1581,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1582,"auto_in_wvalid", false,-1);
    tracep->declBit(c+485,"auto_in_arready", false,-1);
    tracep->declBit(c+78,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+79,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+7,"auto_in_rready", false,-1);
    tracep->declBit(c+486,"auto_in_rvalid", false,-1);
    tracep->declBus(c+487,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+488,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+486,"state", false,-1);
    tracep->declBus(c+488,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+487,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+124,"raddr", false,-1, 31,0);
    tracep->declBit(c+125,"ren", false,-1);
    tracep->declBus(c+126,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1314,"auto_in_psel", false,-1);
    tracep->declBit(c+1315,"auto_in_penable", false,-1);
    tracep->declBit(c+1302,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1298,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1301,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1698,"auto_in_pready", false,-1);
    tracep->declBit(c+1752,"auto_in_pslverr", false,-1);
    tracep->declBus(c+174,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1691,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1662,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1692,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1298,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1314,"in_psel", false,-1);
    tracep->declBit(c+1315,"in_penable", false,-1);
    tracep->declBus(c+1301,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1302,"in_pwrite", false,-1);
    tracep->declBus(c+1303,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1698,"in_pready", false,-1);
    tracep->declBus(c+174,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1752,"in_pslverr", false,-1);
    tracep->declBit(c+1691,"qspi_sck", false,-1);
    tracep->declBit(c+1662,"qspi_ce_n", false,-1);
    tracep->declBus(c+1692,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1692,"din", false,-1, 3,0);
    tracep->declBus(c+1721,"dout", false,-1, 3,0);
    tracep->declBus(c+1663,"douten", false,-1, 3,0);
    tracep->declBit(c+1722,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1668,"clk_i", false,-1);
    tracep->declBit(c+1669,"rst_i", false,-1);
    tracep->declBus(c+1298,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1303,"dat_i", false,-1, 31,0);
    tracep->declBus(c+174,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1304,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1314,"cyc_i", false,-1);
    tracep->declBit(c+1314,"stb_i", false,-1);
    tracep->declBit(c+1722,"ack_o", false,-1);
    tracep->declBit(c+1302,"we_i", false,-1);
    tracep->declBit(c+1691,"sck", false,-1);
    tracep->declBit(c+1662,"ce_n", false,-1);
    tracep->declBus(c+1692,"din", false,-1, 3,0);
    tracep->declBus(c+1721,"dout", false,-1, 3,0);
    tracep->declBus(c+1663,"douten", false,-1, 3,0);
    tracep->declBus(c+1760,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1761,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1762,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+815,"mr_sck", false,-1);
    tracep->declBit(c+816,"mr_ce_n", false,-1);
    tracep->declBus(c+1692,"mr_din", false,-1, 3,0);
    tracep->declBus(c+817,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+818,"mr_doe", false,-1);
    tracep->declBit(c+819,"mw_sck", false,-1);
    tracep->declBit(c+820,"mw_ce_n", false,-1);
    tracep->declBus(c+1692,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1507,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+821,"mw_doe", false,-1);
    tracep->declBit(c+1664,"mr_rd", false,-1);
    tracep->declBit(c+822,"mr_done", false,-1);
    tracep->declBit(c+1665,"mw_wr", false,-1);
    tracep->declBit(c+1508,"mw_done", false,-1);
    tracep->declBit(c+1314,"wb_valid", false,-1);
    tracep->declBit(c+1476,"wb_we", false,-1);
    tracep->declBit(c+1477,"wb_re", false,-1);
    tracep->declBus(c+1519,"state", false,-1, 1,0);
    tracep->declBus(c+1723,"nstate", false,-1, 1,0);
    tracep->declBus(c+1724,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1725,"qpi_sck", false,-1);
    tracep->declBus(c+1478,"size", false,-1, 2,0);
    tracep->declBus(c+1479,"byte0", false,-1, 7,0);
    tracep->declBus(c+1480,"byte1", false,-1, 7,0);
    tracep->declBus(c+1481,"byte2", false,-1, 7,0);
    tracep->declBus(c+1482,"byte3", false,-1, 7,0);
    tracep->declBus(c+1726,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1720,"rst_n", false,-1);
    tracep->declBus(c+1483,"addr", false,-1, 23,0);
    tracep->declBit(c+1664,"rd", false,-1);
    tracep->declBus(c+1749,"size", false,-1, 2,0);
    tracep->declBit(c+822,"done", false,-1);
    tracep->declBus(c+174,"line", false,-1, 31,0);
    tracep->declBit(c+815,"sck", false,-1);
    tracep->declBit(c+816,"ce_n", false,-1);
    tracep->declBus(c+1692,"din", false,-1, 3,0);
    tracep->declBus(c+817,"dout", false,-1, 3,0);
    tracep->declBit(c+818,"douten", false,-1);
    tracep->declBus(c+1817,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1818,"READ", false,-1, 0,0);
    tracep->declBus(c+1829,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+823,"state", false,-1);
    tracep->declBit(c+1666,"nstate", false,-1);
    tracep->declBus(c+824,"counter", false,-1, 7,0);
    tracep->declBus(c+825,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+720+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1830,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+826,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1720,"rst_n", false,-1);
    tracep->declBus(c+1484,"addr", false,-1, 23,0);
    tracep->declBus(c+1726,"line", false,-1, 31,0);
    tracep->declBus(c+1478,"size", false,-1, 2,0);
    tracep->declBit(c+1665,"wr", false,-1);
    tracep->declBit(c+1508,"done", false,-1);
    tracep->declBit(c+819,"sck", false,-1);
    tracep->declBit(c+820,"ce_n", false,-1);
    tracep->declBus(c+1692,"din", false,-1, 3,0);
    tracep->declBus(c+1507,"dout", false,-1, 3,0);
    tracep->declBit(c+821,"douten", false,-1);
    tracep->declBus(c+1817,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1818,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1485,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+827,"state", false,-1);
    tracep->declBit(c+1667,"nstate", false,-1);
    tracep->declBus(c+828,"counter", false,-1, 7,0);
    tracep->declBus(c+829,"saddr", false,-1, 23,0);
    tracep->declBus(c+1831,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+127,"auto_in_awready", false,-1);
    tracep->declBit(c+1545,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1758,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1759,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+128,"auto_in_wready", false,-1);
    tracep->declBit(c+1546,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1096,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"auto_in_wlast", false,-1);
    tracep->declBit(c+294,"auto_in_bready", false,-1);
    tracep->declBit(c+801,"auto_in_bvalid", false,-1);
    tracep->declBus(c+800,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1760,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+129,"auto_in_arready", false,-1);
    tracep->declBit(c+52,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+295,"auto_in_rready", false,-1);
    tracep->declBit(c+804,"auto_in_rvalid", false,-1);
    tracep->declBus(c+800,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1760,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+803,"auto_in_rlast", false,-1);
    tracep->declBit(c+1693,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1516,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+790,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+791,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+792,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+793,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1694,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1518,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1597,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+127,"in_awready", false,-1);
    tracep->declBit(c+1545,"in_awvalid", false,-1);
    tracep->declBus(c+1094,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1758,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1759,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1095,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1760,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+128,"in_wready", false,-1);
    tracep->declBit(c+1546,"in_wvalid", false,-1);
    tracep->declBus(c+1096,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1097,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"in_wlast", false,-1);
    tracep->declBit(c+294,"in_bready", false,-1);
    tracep->declBit(c+801,"in_bvalid", false,-1);
    tracep->declBus(c+1760,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+800,"in_bid", false,-1, 3,0);
    tracep->declBit(c+129,"in_arready", false,-1);
    tracep->declBit(c+52,"in_arvalid", false,-1);
    tracep->declBus(c+47,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+46,"in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+295,"in_rready", false,-1);
    tracep->declBit(c+804,"in_rvalid", false,-1);
    tracep->declBus(c+1760,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+802,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+803,"in_rlast", false,-1);
    tracep->declBus(c+800,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1693,"sdram_clk", false,-1);
    tracep->declBit(c+1516,"sdram_cke", false,-1);
    tracep->declBit(c+790,"sdram_cs", false,-1);
    tracep->declBit(c+791,"sdram_ras", false,-1);
    tracep->declBit(c+792,"sdram_cas", false,-1);
    tracep->declBit(c+793,"sdram_we", false,-1);
    tracep->declBus(c+1694,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1518,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1597,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+830,"sdram_dout_en", false,-1);
    tracep->declBus(c+831,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1668,"clk_i", false,-1);
    tracep->declBit(c+1669,"rst_i", false,-1);
    tracep->declBit(c+1545,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1094,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1758,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1759,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1760,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1546,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1096,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1097,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1098,"inport_wlast_i", false,-1);
    tracep->declBit(c+294,"inport_bready_i", false,-1);
    tracep->declBit(c+52,"inport_arvalid_i", false,-1);
    tracep->declBus(c+47,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+46,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+48,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+50,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+295,"inport_rready_i", false,-1);
    tracep->declBus(c+1597,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+127,"inport_awready_o", false,-1);
    tracep->declBit(c+128,"inport_wready_o", false,-1);
    tracep->declBit(c+801,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1760,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+800,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+129,"inport_arready_o", false,-1);
    tracep->declBit(c+804,"inport_rvalid_o", false,-1);
    tracep->declBus(c+802,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1760,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+800,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+803,"inport_rlast_o", false,-1);
    tracep->declBit(c+1693,"sdram_clk_o", false,-1);
    tracep->declBit(c+1516,"sdram_cke_o", false,-1);
    tracep->declBit(c+790,"sdram_cs_o", false,-1);
    tracep->declBit(c+791,"sdram_ras_o", false,-1);
    tracep->declBit(c+792,"sdram_cas_o", false,-1);
    tracep->declBit(c+793,"sdram_we_o", false,-1);
    tracep->declBus(c+1518,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1694,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+831,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+830,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1741,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1832,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1833,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1834,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+140,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+141,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+142,"ram_rd_w", false,-1);
    tracep->declBit(c+1520,"ram_accept_w", false,-1);
    tracep->declBus(c+1096,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+832,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1727,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+833,"ram_ack_w", false,-1);
    tracep->declBit(c+1752,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1668,"clk_i", false,-1);
    tracep->declBit(c+1669,"rst_i", false,-1);
    tracep->declBit(c+1545,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1094,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1758,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1759,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1760,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1546,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1096,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1097,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1098,"axi_wlast_i", false,-1);
    tracep->declBit(c+294,"axi_bready_i", false,-1);
    tracep->declBit(c+52,"axi_arvalid_i", false,-1);
    tracep->declBus(c+47,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+46,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+48,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+50,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+295,"axi_rready_i", false,-1);
    tracep->declBit(c+1520,"ram_accept_i", false,-1);
    tracep->declBit(c+833,"ram_ack_i", false,-1);
    tracep->declBit(c+1752,"ram_error_i", false,-1);
    tracep->declBus(c+832,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+127,"axi_awready_o", false,-1);
    tracep->declBit(c+128,"axi_wready_o", false,-1);
    tracep->declBit(c+801,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1760,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+800,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+129,"axi_arready_o", false,-1);
    tracep->declBit(c+804,"axi_rvalid_o", false,-1);
    tracep->declBus(c+802,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1760,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+800,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+803,"axi_rlast_o", false,-1);
    tracep->declBus(c+141,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+142,"ram_rd_o", false,-1);
    tracep->declBus(c+1727,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+140,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1096,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+834,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+835,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+836,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+837,"req_rd_q", false,-1);
    tracep->declBit(c+838,"req_wr_q", false,-1);
    tracep->declBus(c+839,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+840,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+841,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+842,"req_prio_q", false,-1);
    tracep->declBit(c+843,"req_hold_rd_q", false,-1);
    tracep->declBit(c+844,"req_hold_wr_q", false,-1);
    tracep->declBit(c+845,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+143,"req_push_w", false,-1);
    tracep->declBus(c+1728,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+846,"req_out_valid_w", false,-1);
    tracep->declBus(c+847,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1509,"resp_accept_w", false,-1);
    tracep->declBit(c+848,"resp_is_write_w", false,-1);
    tracep->declBit(c+849,"resp_is_read_w", false,-1);
    tracep->declBit(c+803,"resp_is_last_w", false,-1);
    tracep->declBus(c+800,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+850,"resp_valid_w", false,-1);
    tracep->declBit(c+851,"write_prio_w", false,-1);
    tracep->declBit(c+852,"read_prio_w", false,-1);
    tracep->declBit(c+144,"write_active_w", false,-1);
    tracep->declBit(c+142,"read_active_w", false,-1);
    tracep->declBus(c+140,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1729,"wr_w", false,-1);
    tracep->declBit(c+142,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1835,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1755,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1834,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1668,"clk_i", false,-1);
    tracep->declBit(c+1669,"rst_i", false,-1);
    tracep->declBus(c+1728,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+143,"push_i", false,-1);
    tracep->declBit(c+1509,"pop_i", false,-1);
    tracep->declBus(c+847,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+845,"accept_o", false,-1);
    tracep->declBit(c+846,"valid_o", false,-1);
    tracep->declBus(c+1836,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+853+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+857,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+858,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+859,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1754,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1755,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1834,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1668,"clk_i", false,-1);
    tracep->declBit(c+1669,"rst_i", false,-1);
    tracep->declBus(c+832,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+833,"push_i", false,-1);
    tracep->declBit(c+1509,"pop_i", false,-1);
    tracep->declBus(c+802,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+860,"accept_o", false,-1);
    tracep->declBit(c+850,"valid_o", false,-1);
    tracep->declBus(c+1836,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+861+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+865,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+866,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+867,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1668,"clk_i", false,-1);
    tracep->declBit(c+1669,"rst_i", false,-1);
    tracep->declBus(c+141,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+142,"inport_rd_i", false,-1);
    tracep->declBus(c+1727,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+140,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1096,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1597,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1520,"inport_accept_o", false,-1);
    tracep->declBit(c+833,"inport_ack_o", false,-1);
    tracep->declBit(c+1752,"inport_error_o", false,-1);
    tracep->declBus(c+832,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1693,"sdram_clk_o", false,-1);
    tracep->declBit(c+1516,"sdram_cke_o", false,-1);
    tracep->declBit(c+790,"sdram_cs_o", false,-1);
    tracep->declBit(c+791,"sdram_ras_o", false,-1);
    tracep->declBit(c+792,"sdram_cas_o", false,-1);
    tracep->declBit(c+793,"sdram_we_o", false,-1);
    tracep->declBus(c+1518,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1694,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1517,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+831,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+830,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1741,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1832,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1833,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1834,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1834,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1755,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1755,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1837,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1838,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1839,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1755,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1841,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1842,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1843,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1844,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1845,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1846,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1847,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1758,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1848,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1755,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1758,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1847,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1846,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1842,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1844,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1843,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1845,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1841,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1849,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1850,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1851,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1851,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1754,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1851,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1834,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1834,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1835,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+140,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+141,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+142,"ram_rd_w", false,-1);
    tracep->declBit(c+1520,"ram_accept_w", false,-1);
    tracep->declBus(c+1096,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+832,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+833,"ram_ack_w", false,-1);
    tracep->declBit(c+145,"ram_req_w", false,-1);
    tracep->declBus(c+868,"command_q", false,-1, 3,0);
    tracep->declBus(c+1521,"addr_q", false,-1, 12,0);
    tracep->declBus(c+831,"data_q", false,-1, 31,0);
    tracep->declBit(c+869,"data_rd_en_q", false,-1);
    tracep->declBus(c+1518,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1516,"cke_q", false,-1);
    tracep->declBus(c+1517,"bank_q", false,-1, 1,0);
    tracep->declBus(c+832,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+870,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1597,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+871,"refresh_q", false,-1);
    tracep->declBus(c+872,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+873+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1522,"state_q", false,-1, 3,0);
    tracep->declBus(c+146,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+147,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+877,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+878,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+148,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+149,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+150,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1755,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+879,"delay_q", false,-1, 3,0);
    tracep->declBus(c+151,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1852,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1523,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+880,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+881,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+882,"idx", false,-1, 31,0);
    tracep->declBus(c+883,"rd_q", false,-1, 3,0);
    tracep->declBit(c+833,"ack_q", false,-1);
    tracep->declArray(c+1524,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1319,"auto_in_psel", false,-1);
    tracep->declBit(c+1320,"auto_in_penable", false,-1);
    tracep->declBit(c+1302,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1308,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1301,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+797,"auto_in_pready", false,-1);
    tracep->declBit(c+798,"auto_in_pslverr", false,-1);
    tracep->declBus(c+799,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+789,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1514,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1515,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1690,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1853,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1854,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1757,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1486,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1319,"in_psel", false,-1);
    tracep->declBit(c+1320,"in_penable", false,-1);
    tracep->declBus(c+1301,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1302,"in_pwrite", false,-1);
    tracep->declBus(c+1303,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+797,"in_pready", false,-1);
    tracep->declBus(c+799,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+798,"in_pslverr", false,-1);
    tracep->declBit(c+789,"spi_sck", false,-1);
    tracep->declBus(c+1514,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1515,"spi_mosi", false,-1);
    tracep->declBit(c+1690,"spi_miso", false,-1);
    tracep->declBit(c+884,"spi_irq_out", false,-1);
    tracep->declBus(c+1855,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1856,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1855,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1857,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1858,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1859,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1758,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1847,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1846,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1842,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1844,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1843,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1845,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1841,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1849,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1850,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1860,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+885,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1510,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+886,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+887,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+888,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+889,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+890,"wb_we_i", false,-1);
    tracep->declBit(c+891,"wb_stb_i", false,-1);
    tracep->declBit(c+892,"wb_cyc_i", false,-1);
    tracep->declBit(c+893,"wb_ack_o", false,-1);
    tracep->declBit(c+1752,"wb_err_o", false,-1);
    tracep->declBit(c+894,"wb_int_o", false,-1);
    tracep->declBit(c+895,"done", false,-1);
    tracep->declBus(c+896,"paddr", false,-1, 31,0);
    tracep->declQuad(c+897,"data", false,-1, 63,0);
    tracep->declBit(c+899,"is_flash_access", false,-1);
    tracep->declBus(c+900,"tmp", false,-1, 31,0);
    tracep->declQuad(c+901,"tmp64", false,-1, 63,0);
    tracep->declBus(c+903,"counter", false,-1, 7,0);
    tracep->declBit(c+904,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1756,"Tp", false,-1, 31,0);
    tracep->declBit(c+1668,"wb_clk_i", false,-1);
    tracep->declBit(c+1669,"wb_rst_i", false,-1);
    tracep->declBus(c+886,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+887,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+888,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+889,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+890,"wb_we_i", false,-1);
    tracep->declBit(c+891,"wb_stb_i", false,-1);
    tracep->declBit(c+892,"wb_cyc_i", false,-1);
    tracep->declBit(c+893,"wb_ack_o", false,-1);
    tracep->declBit(c+1752,"wb_err_o", false,-1);
    tracep->declBit(c+894,"wb_int_o", false,-1);
    tracep->declBus(c+1514,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+789,"sclk_pad_o", false,-1);
    tracep->declBit(c+1515,"mosi_pad_o", false,-1);
    tracep->declBit(c+1690,"miso_pad_i", false,-1);
    tracep->declBus(c+905,"divider", false,-1, 15,0);
    tracep->declBus(c+906,"ctrl", false,-1, 13,0);
    tracep->declBus(c+907,"ss", false,-1, 7,0);
    tracep->declBus(c+908,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+909,"rx", false,-1, 127,0);
    tracep->declBit(c+913,"rx_negedge", false,-1);
    tracep->declBit(c+914,"tx_negedge", false,-1);
    tracep->declBus(c+915,"char_len", false,-1, 6,0);
    tracep->declBit(c+916,"go", false,-1);
    tracep->declBit(c+917,"lsb", false,-1);
    tracep->declBit(c+918,"ie", false,-1);
    tracep->declBit(c+919,"ass", false,-1);
    tracep->declBit(c+920,"spi_divider_sel", false,-1);
    tracep->declBit(c+921,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+922,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+923,"spi_ss_sel", false,-1);
    tracep->declBit(c+924,"tip", false,-1);
    tracep->declBit(c+925,"pos_edge", false,-1);
    tracep->declBit(c+926,"neg_edge", false,-1);
    tracep->declBit(c+927,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1756,"Tp", false,-1, 31,0);
    tracep->declBit(c+1668,"clk_in", false,-1);
    tracep->declBit(c+1669,"rst", false,-1);
    tracep->declBit(c+924,"enable", false,-1);
    tracep->declBit(c+916,"go", false,-1);
    tracep->declBit(c+927,"last_clk", false,-1);
    tracep->declBus(c+905,"divider", false,-1, 15,0);
    tracep->declBit(c+789,"clk_out", false,-1);
    tracep->declBit(c+925,"pos_edge", false,-1);
    tracep->declBit(c+926,"neg_edge", false,-1);
    tracep->declBus(c+928,"cnt", false,-1, 15,0);
    tracep->declBit(c+929,"cnt_zero", false,-1);
    tracep->declBit(c+930,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1756,"Tp", false,-1, 31,0);
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1669,"rst", false,-1);
    tracep->declBus(c+931,"latch", false,-1, 3,0);
    tracep->declBus(c+889,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+915,"len", false,-1, 6,0);
    tracep->declBit(c+917,"lsb", false,-1);
    tracep->declBit(c+916,"go", false,-1);
    tracep->declBit(c+925,"pos_edge", false,-1);
    tracep->declBit(c+926,"neg_edge", false,-1);
    tracep->declBit(c+913,"rx_negedge", false,-1);
    tracep->declBit(c+914,"tx_negedge", false,-1);
    tracep->declBit(c+924,"tip", false,-1);
    tracep->declBit(c+927,"last", false,-1);
    tracep->declBus(c+887,"p_in", false,-1, 31,0);
    tracep->declArray(c+909,"p_out", false,-1, 127,0);
    tracep->declBit(c+789,"s_clk", false,-1);
    tracep->declBit(c+1690,"s_in", false,-1);
    tracep->declBit(c+1515,"s_out", false,-1);
    tracep->declBus(c+932,"cnt", false,-1, 7,0);
    tracep->declArray(c+909,"data", false,-1, 127,0);
    tracep->declBus(c+933,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+934,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+935,"rx_clk", false,-1);
    tracep->declBit(c+936,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1316,"auto_in_psel", false,-1);
    tracep->declBit(c+1317,"auto_in_penable", false,-1);
    tracep->declBit(c+1302,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1301,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1318,"auto_in_pready", false,-1);
    tracep->declBit(c+1752,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1699,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1688,"uart_rx", false,-1);
    tracep->declBit(c+1689,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1316,"in_psel", false,-1);
    tracep->declBit(c+1317,"in_penable", false,-1);
    tracep->declBus(c+1301,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1318,"in_pready", false,-1);
    tracep->declBit(c+1752,"in_pslverr", false,-1);
    tracep->declBus(c+1475,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1302,"in_pwrite", false,-1);
    tracep->declBus(c+1699,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1303,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1688,"uart_rx", false,-1);
    tracep->declBit(c+1689,"uart_tx", false,-1);
    tracep->declBit(c+937,"rtsn", false,-1);
    tracep->declBit(c+1752,"ctsn", false,-1);
    tracep->declBit(c+938,"dtr_pad_o", false,-1);
    tracep->declBit(c+1752,"dsr_pad_i", false,-1);
    tracep->declBit(c+1752,"ri_pad_i", false,-1);
    tracep->declBit(c+1752,"dcd_pad_i", false,-1);
    tracep->declBit(c+939,"interrupt", false,-1);
    tracep->declBit(c+1730,"reg_we", false,-1);
    tracep->declBit(c+1731,"reg_re", false,-1);
    tracep->declBus(c+1487,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1488,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+724,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1511,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+940,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1669,"wb_rst_i", false,-1);
    tracep->declBus(c+1487,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1489,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1511,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1730,"wb_we_i", false,-1);
    tracep->declBit(c+1731,"wb_re_i", false,-1);
    tracep->declBit(c+1689,"stx_pad_o", false,-1);
    tracep->declBit(c+1688,"srx_pad_i", false,-1);
    tracep->declBus(c+1849,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+940,"rts_pad_o", false,-1);
    tracep->declBit(c+938,"dtr_pad_o", false,-1);
    tracep->declBit(c+939,"int_o", false,-1);
    tracep->declBit(c+941,"enable", false,-1);
    tracep->declBit(c+942,"srx_pad", false,-1);
    tracep->declBus(c+943,"ier", false,-1, 3,0);
    tracep->declBus(c+944,"iir", false,-1, 3,0);
    tracep->declBus(c+945,"fcr", false,-1, 1,0);
    tracep->declBus(c+946,"mcr", false,-1, 4,0);
    tracep->declBus(c+947,"lcr", false,-1, 7,0);
    tracep->declBus(c+948,"msr", false,-1, 7,0);
    tracep->declBus(c+949,"dl", false,-1, 15,0);
    tracep->declBus(c+950,"scratch", false,-1, 7,0);
    tracep->declBit(c+951,"start_dlc", false,-1);
    tracep->declBit(c+952,"lsr_mask_d", false,-1);
    tracep->declBit(c+953,"msi_reset", false,-1);
    tracep->declBus(c+954,"dlc", false,-1, 15,0);
    tracep->declBus(c+955,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+956,"rx_reset", false,-1);
    tracep->declBit(c+957,"tx_reset", false,-1);
    tracep->declBit(c+958,"dlab", false,-1);
    tracep->declBit(c+1753,"cts_pad_i", false,-1);
    tracep->declBit(c+1752,"dsr_pad_i", false,-1);
    tracep->declBit(c+1752,"ri_pad_i", false,-1);
    tracep->declBit(c+1752,"dcd_pad_i", false,-1);
    tracep->declBit(c+959,"loopback", false,-1);
    tracep->declBit(c+1752,"cts", false,-1);
    tracep->declBit(c+1753,"dsr", false,-1);
    tracep->declBit(c+1753,"ri", false,-1);
    tracep->declBit(c+1753,"dcd", false,-1);
    tracep->declBit(c+960,"cts_c", false,-1);
    tracep->declBit(c+961,"dsr_c", false,-1);
    tracep->declBit(c+962,"ri_c", false,-1);
    tracep->declBit(c+963,"dcd_c", false,-1);
    tracep->declBus(c+964,"lsr", false,-1, 7,0);
    tracep->declBit(c+965,"lsr0", false,-1);
    tracep->declBit(c+966,"lsr1", false,-1);
    tracep->declBit(c+967,"lsr2", false,-1);
    tracep->declBit(c+968,"lsr3", false,-1);
    tracep->declBit(c+969,"lsr4", false,-1);
    tracep->declBit(c+970,"lsr5", false,-1);
    tracep->declBit(c+971,"lsr6", false,-1);
    tracep->declBit(c+972,"lsr7", false,-1);
    tracep->declBit(c+973,"lsr0r", false,-1);
    tracep->declBit(c+974,"lsr1r", false,-1);
    tracep->declBit(c+975,"lsr2r", false,-1);
    tracep->declBit(c+976,"lsr3r", false,-1);
    tracep->declBit(c+977,"lsr4r", false,-1);
    tracep->declBit(c+978,"lsr5r", false,-1);
    tracep->declBit(c+979,"lsr6r", false,-1);
    tracep->declBit(c+980,"lsr7r", false,-1);
    tracep->declBit(c+32,"lsr_mask", false,-1);
    tracep->declBit(c+981,"rls_int", false,-1);
    tracep->declBit(c+982,"rda_int", false,-1);
    tracep->declBit(c+983,"ti_int", false,-1);
    tracep->declBit(c+984,"thre_int", false,-1);
    tracep->declBit(c+985,"ms_int", false,-1);
    tracep->declBit(c+986,"tf_push", false,-1);
    tracep->declBit(c+987,"rf_pop", false,-1);
    tracep->declBus(c+1732,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+988,"rf_error_bit", false,-1);
    tracep->declBit(c+966,"rf_overrun", false,-1);
    tracep->declBit(c+989,"rf_push_pulse", false,-1);
    tracep->declBus(c+990,"rf_count", false,-1, 4,0);
    tracep->declBus(c+991,"tf_count", false,-1, 4,0);
    tracep->declBus(c+992,"tstate", false,-1, 2,0);
    tracep->declBus(c+993,"rstate", false,-1, 3,0);
    tracep->declBus(c+994,"counter_t", false,-1, 9,0);
    tracep->declBit(c+995,"thre_set_en", false,-1);
    tracep->declBus(c+996,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+997,"block_value", false,-1, 7,0);
    tracep->declBit(c+998,"serial_out", false,-1);
    tracep->declBit(c+999,"serial_in", false,-1);
    tracep->declBit(c+33,"lsr_mask_condition", false,-1);
    tracep->declBit(c+34,"iir_read", false,-1);
    tracep->declBit(c+35,"msr_read", false,-1);
    tracep->declBit(c+36,"fifo_read", false,-1);
    tracep->declBit(c+37,"fifo_write", false,-1);
    tracep->declBus(c+1000,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1001,"lsr0_d", false,-1);
    tracep->declBit(c+1002,"lsr1_d", false,-1);
    tracep->declBit(c+1003,"lsr2_d", false,-1);
    tracep->declBit(c+1004,"lsr3_d", false,-1);
    tracep->declBit(c+1005,"lsr4_d", false,-1);
    tracep->declBit(c+1006,"lsr5_d", false,-1);
    tracep->declBit(c+1007,"lsr6_d", false,-1);
    tracep->declBit(c+1008,"lsr7_d", false,-1);
    tracep->declBit(c+1009,"rls_int_d", false,-1);
    tracep->declBit(c+1010,"thre_int_d", false,-1);
    tracep->declBit(c+1011,"ms_int_d", false,-1);
    tracep->declBit(c+1012,"ti_int_d", false,-1);
    tracep->declBit(c+1013,"rda_int_d", false,-1);
    tracep->declBit(c+1014,"rls_int_rise", false,-1);
    tracep->declBit(c+1015,"thre_int_rise", false,-1);
    tracep->declBit(c+1016,"ms_int_rise", false,-1);
    tracep->declBit(c+1017,"ti_int_rise", false,-1);
    tracep->declBit(c+1018,"rda_int_rise", false,-1);
    tracep->declBit(c+1019,"rls_int_pnd", false,-1);
    tracep->declBit(c+1020,"rda_int_pnd", false,-1);
    tracep->declBit(c+1021,"thre_int_pnd", false,-1);
    tracep->declBit(c+1022,"ms_int_pnd", false,-1);
    tracep->declBit(c+1023,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1756,"Tp", false,-1, 31,0);
    tracep->declBus(c+1756,"width", false,-1, 31,0);
    tracep->declBus(c+1818,"init_value", false,-1, 0,0);
    tracep->declBit(c+1669,"rst_i", false,-1);
    tracep->declBit(c+1668,"clk_i", false,-1);
    tracep->declBit(c+1752,"stage1_rst_i", false,-1);
    tracep->declBit(c+1753,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1688,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+942,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1024,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1669,"wb_rst_i", false,-1);
    tracep->declBus(c+947,"lcr", false,-1, 7,0);
    tracep->declBit(c+987,"rf_pop", false,-1);
    tracep->declBit(c+999,"srx_pad_i", false,-1);
    tracep->declBit(c+941,"enable", false,-1);
    tracep->declBit(c+956,"rx_reset", false,-1);
    tracep->declBit(c+32,"lsr_mask", false,-1);
    tracep->declBus(c+994,"counter_t", false,-1, 9,0);
    tracep->declBus(c+990,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1732,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+966,"rf_overrun", false,-1);
    tracep->declBit(c+988,"rf_error_bit", false,-1);
    tracep->declBus(c+993,"rstate", false,-1, 3,0);
    tracep->declBit(c+989,"rf_push_pulse", false,-1);
    tracep->declBus(c+1025,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1026,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1027,"rshift", false,-1, 7,0);
    tracep->declBit(c+1028,"rparity", false,-1);
    tracep->declBit(c+1029,"rparity_error", false,-1);
    tracep->declBit(c+1030,"rframing_error", false,-1);
    tracep->declBit(c+1031,"rbit_in", false,-1);
    tracep->declBit(c+1032,"rparity_xor", false,-1);
    tracep->declBus(c+1033,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1034,"rf_push_q", false,-1);
    tracep->declBus(c+1035,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1036,"rf_push", false,-1);
    tracep->declBit(c+1037,"break_error", false,-1);
    tracep->declBit(c+1038,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1039,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1040,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1041,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1758,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1847,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1846,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1842,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1844,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1843,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1845,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1841,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1849,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1850,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1861,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1042,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1043,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1862,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1863,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1755,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1828,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1669,"wb_rst_i", false,-1);
    tracep->declBit(c+989,"push", false,-1);
    tracep->declBit(c+987,"pop", false,-1);
    tracep->declBus(c+1035,"data_in", false,-1, 10,0);
    tracep->declBit(c+956,"fifo_reset", false,-1);
    tracep->declBit(c+32,"reset_status", false,-1);
    tracep->declBus(c+1732,"data_out", false,-1, 10,0);
    tracep->declBit(c+966,"overrun", false,-1);
    tracep->declBus(c+990,"count", false,-1, 4,0);
    tracep->declBit(c+988,"error_bit", false,-1);
    tracep->declBus(c+1733,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1044+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1060,"top", false,-1, 3,0);
    tracep->declBus(c+1061,"bottom", false,-1, 3,0);
    tracep->declBus(c+1062,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1063,"word0", false,-1, 2,0);
    tracep->declBus(c+1064,"word1", false,-1, 2,0);
    tracep->declBus(c+1065,"word2", false,-1, 2,0);
    tracep->declBus(c+1066,"word3", false,-1, 2,0);
    tracep->declBus(c+1067,"word4", false,-1, 2,0);
    tracep->declBus(c+1068,"word5", false,-1, 2,0);
    tracep->declBus(c+1069,"word6", false,-1, 2,0);
    tracep->declBus(c+1070,"word7", false,-1, 2,0);
    tracep->declBus(c+1071,"word8", false,-1, 2,0);
    tracep->declBus(c+1072,"word9", false,-1, 2,0);
    tracep->declBus(c+1073,"word10", false,-1, 2,0);
    tracep->declBus(c+1074,"word11", false,-1, 2,0);
    tracep->declBus(c+1075,"word12", false,-1, 2,0);
    tracep->declBus(c+1076,"word13", false,-1, 2,0);
    tracep->declBus(c+1077,"word14", false,-1, 2,0);
    tracep->declBus(c+1078,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1755,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1757,"data_width", false,-1, 31,0);
    tracep->declBus(c+1863,"depth", false,-1, 31,0);
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+989,"we", false,-1);
    tracep->declBus(c+1060,"a", false,-1, 3,0);
    tracep->declBus(c+1061,"dpra", false,-1, 3,0);
    tracep->declBus(c+1079,"di", false,-1, 7,0);
    tracep->declBus(c+1733,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+725+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1669,"wb_rst_i", false,-1);
    tracep->declBus(c+947,"lcr", false,-1, 7,0);
    tracep->declBit(c+986,"tf_push", false,-1);
    tracep->declBus(c+1489,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+941,"enable", false,-1);
    tracep->declBit(c+957,"tx_reset", false,-1);
    tracep->declBit(c+32,"lsr_mask", false,-1);
    tracep->declBit(c+998,"stx_pad_o", false,-1);
    tracep->declBus(c+992,"tstate", false,-1, 2,0);
    tracep->declBus(c+991,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1080,"counter", false,-1, 4,0);
    tracep->declBus(c+1081,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1082,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1083,"stx_o_tmp", false,-1);
    tracep->declBit(c+1084,"parity_xor", false,-1);
    tracep->declBit(c+1085,"tf_pop", false,-1);
    tracep->declBit(c+1086,"bit_out", false,-1);
    tracep->declBus(c+1489,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1512,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1087,"tf_overrun", false,-1);
    tracep->declBus(c+1746,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1743,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1747,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1748,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1749,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1864,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1757,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1863,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1755,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1828,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+1669,"wb_rst_i", false,-1);
    tracep->declBit(c+986,"push", false,-1);
    tracep->declBit(c+1085,"pop", false,-1);
    tracep->declBus(c+1489,"data_in", false,-1, 7,0);
    tracep->declBit(c+957,"fifo_reset", false,-1);
    tracep->declBit(c+32,"reset_status", false,-1);
    tracep->declBus(c+1512,"data_out", false,-1, 7,0);
    tracep->declBit(c+1087,"overrun", false,-1);
    tracep->declBus(c+991,"count", false,-1, 4,0);
    tracep->declBus(c+1088,"top", false,-1, 3,0);
    tracep->declBus(c+1089,"bottom", false,-1, 3,0);
    tracep->declBus(c+1090,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1755,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1757,"data_width", false,-1, 31,0);
    tracep->declBus(c+1863,"depth", false,-1, 31,0);
    tracep->declBit(c+1668,"clk", false,-1);
    tracep->declBit(c+986,"we", false,-1);
    tracep->declBus(c+1088,"a", false,-1, 3,0);
    tracep->declBus(c+1089,"dpra", false,-1, 3,0);
    tracep->declBus(c+1489,"di", false,-1, 7,0);
    tracep->declBus(c+1512,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+741+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBit(c+1306,"auto_in_psel", false,-1);
    tracep->declBit(c+1307,"auto_in_penable", false,-1);
    tracep->declBit(c+1302,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1308,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1301,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1303,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+794,"auto_in_pready", false,-1);
    tracep->declBit(c+1750,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1751,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1682,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1683,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1684,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1685,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1686,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1687,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1668,"clock", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1486,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1306,"in_psel", false,-1);
    tracep->declBit(c+1307,"in_penable", false,-1);
    tracep->declBus(c+1301,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1302,"in_pwrite", false,-1);
    tracep->declBus(c+1303,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1304,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+794,"in_pready", false,-1);
    tracep->declBus(c+1751,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1750,"in_pslverr", false,-1);
    tracep->declBus(c+1682,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1683,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1684,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1685,"vga_hsync", false,-1);
    tracep->declBit(c+1686,"vga_vsync", false,-1);
    tracep->declBit(c+1687,"vga_valid", false,-1);
    tracep->declBus(c+1091,"h_addr", false,-1, 9,0);
    tracep->declBus(c+757,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1513,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1490,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+794,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1668,"pclk", false,-1);
    tracep->declBit(c+1669,"reset", false,-1);
    tracep->declBus(c+1513,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1091,"h_addr", false,-1, 9,0);
    tracep->declBus(c+757,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1685,"hsync", false,-1);
    tracep->declBit(c+1686,"vsync", false,-1);
    tracep->declBit(c+1687,"valid", false,-1);
    tracep->declBus(c+1682,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1683,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1684,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1865,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1866,"h_active", false,-1, 31,0);
    tracep->declBus(c+1867,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1868,"h_total", false,-1, 31,0);
    tracep->declBus(c+1834,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1869,"v_active", false,-1, 31,0);
    tracep->declBus(c+1870,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1871,"v_total", false,-1, 31,0);
    tracep->declBus(c+1092,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+758,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1093,"h_valid", false,-1);
    tracep->declBit(c+759,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+789,"sck", false,-1);
    tracep->declBit(c+1527,"ss", false,-1);
    tracep->declBit(c+1515,"mosi", false,-1);
    tracep->declBit(c+1293,"miso", false,-1);
    tracep->declBus(c+1294,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1295,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1734,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+789,"sck", false,-1);
    tracep->declBit(c+1528,"ss", false,-1);
    tracep->declBit(c+1515,"mosi", false,-1);
    tracep->declBit(c+1735,"miso", false,-1);
    tracep->declBit(c+1528,"reset", false,-1);
    tracep->declBus(c+1287,"state", false,-1, 2,0);
    tracep->declBus(c+1288,"counter", false,-1, 7,0);
    tracep->declBus(c+1289,"cmd", false,-1, 7,0);
    tracep->declBus(c+1290,"addr", false,-1, 23,0);
    tracep->declBus(c+1291,"data", false,-1, 31,0);
    tracep->declBit(c+1292,"ren", false,-1);
    tracep->declBus(c+1736,"rdata", false,-1, 31,0);
    tracep->declBus(c+1737,"raddr", false,-1, 31,0);
    tracep->declBus(c+1296,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+789,"clock", false,-1);
    tracep->declBit(c+1292,"valid", false,-1);
    tracep->declBus(c+1289,"cmd", false,-1, 7,0);
    tracep->declBus(c+1737,"addr", false,-1, 31,0);
    tracep->declBus(c+1736,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1691,"sck", false,-1);
    tracep->declBit(c+1662,"ce_n", false,-1);
    tracep->declBus(c+1692,"dio", false,-1, 3,0);
    tracep->declBus(c+779,"dio_out", false,-1, 3,0);
    tracep->declBus(c+780,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1692,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1811,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1756,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1834,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1836,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1755,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1828,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+781,"state", false,-1, 2,0);
    tracep->declBus(c+1738,"next_state", false,-1, 2,0);
    tracep->declBus(c+782,"counter", false,-1, 7,0);
    tracep->declBus(c+783,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+784,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+785,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+786,"is_read_op", false,-1);
    tracep->declBit(c+787,"is_write_op", false,-1);
    tracep->declBus(c+788,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1739,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1693,"clk", false,-1);
    tracep->declBit(c+1516,"cke", false,-1);
    tracep->declBit(c+790,"cs", false,-1);
    tracep->declBit(c+791,"ras", false,-1);
    tracep->declBit(c+792,"cas", false,-1);
    tracep->declBit(c+793,"we", false,-1);
    tracep->declBus(c+1694,"a", false,-1, 13,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1518,"dqm", false,-1, 3,0);
    tracep->declBus(c+1597,"dq", false,-1, 31,0);
    tracep->declBit(c+24,"cs_0", false,-1);
    tracep->declBit(c+25,"ras_0", false,-1);
    tracep->declBit(c+26,"cas_0", false,-1);
    tracep->declBit(c+27,"we_0", false,-1);
    tracep->declBit(c+28,"cs_1", false,-1);
    tracep->declBit(c+29,"ras_1", false,-1);
    tracep->declBit(c+30,"cas_1", false,-1);
    tracep->declBit(c+31,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1693,"clk", false,-1);
    tracep->declBit(c+1516,"cke", false,-1);
    tracep->declBit(c+28,"cs", false,-1);
    tracep->declBit(c+29,"ras", false,-1);
    tracep->declBit(c+30,"cas", false,-1);
    tracep->declBit(c+31,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1518,"dqm", false,-1, 3,0);
    tracep->declBus(c+1597,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1693,"clk", false,-1);
    tracep->declBit(c+1516,"cke", false,-1);
    tracep->declBit(c+28,"cs", false,-1);
    tracep->declBit(c+29,"ras", false,-1);
    tracep->declBit(c+30,"cas", false,-1);
    tracep->declBit(c+31,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1529,"dqm", false,-1, 1,0);
    tracep->declBus(c+1598,"dq", false,-1, 15,0);
    tracep->declBus(c+1846,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1847,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1841,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1872,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1842,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1843,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1844,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1758,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1227,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1228,"bl", false,-1, 2,0);
    tracep->declBus(c+152,"command", false,-1, 3,0);
    tracep->declBus(c+1229,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1230,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1530,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1231,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1599,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1232,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1233+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1873,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1237,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1874,"state", false,-1, 2,0);
    tracep->declBit(c+1238,"write_brust", false,-1);
    tracep->declBus(c+1239,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1240,"read_burst", false,-1);
    tracep->declBit(c+1875,"flag", false,-1);
    tracep->declBus(c+1241,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1693,"clk", false,-1);
    tracep->declBit(c+1516,"cke", false,-1);
    tracep->declBit(c+28,"cs", false,-1);
    tracep->declBit(c+29,"ras", false,-1);
    tracep->declBit(c+30,"cas", false,-1);
    tracep->declBit(c+31,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1531,"dqm", false,-1, 1,0);
    tracep->declBus(c+1600,"dq", false,-1, 15,0);
    tracep->declBus(c+1846,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1847,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1841,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1872,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1842,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1843,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1844,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1758,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1242,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1243,"bl", false,-1, 2,0);
    tracep->declBus(c+152,"command", false,-1, 3,0);
    tracep->declBus(c+1244,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1245,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1530,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1246,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1601,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1247,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1248+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1876,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1252,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1877,"state", false,-1, 2,0);
    tracep->declBit(c+1253,"write_brust", false,-1);
    tracep->declBus(c+1254,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1255,"read_burst", false,-1);
    tracep->declBit(c+1878,"flag", false,-1);
    tracep->declBus(c+1256,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1693,"clk", false,-1);
    tracep->declBit(c+1516,"cke", false,-1);
    tracep->declBit(c+24,"cs", false,-1);
    tracep->declBit(c+25,"ras", false,-1);
    tracep->declBit(c+26,"cas", false,-1);
    tracep->declBit(c+27,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1518,"dqm", false,-1, 3,0);
    tracep->declBus(c+1597,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1693,"clk", false,-1);
    tracep->declBit(c+1516,"cke", false,-1);
    tracep->declBit(c+24,"cs", false,-1);
    tracep->declBit(c+25,"ras", false,-1);
    tracep->declBit(c+26,"cas", false,-1);
    tracep->declBit(c+27,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1529,"dqm", false,-1, 1,0);
    tracep->declBus(c+1598,"dq", false,-1, 15,0);
    tracep->declBus(c+1846,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1847,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1841,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1872,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1842,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1843,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1844,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1758,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1257,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1258,"bl", false,-1, 2,0);
    tracep->declBus(c+153,"command", false,-1, 3,0);
    tracep->declBus(c+1259,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1260,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1530,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1261,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1602,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1262,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1263+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1879,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1267,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1880,"state", false,-1, 2,0);
    tracep->declBit(c+1268,"write_brust", false,-1);
    tracep->declBus(c+1269,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1270,"read_burst", false,-1);
    tracep->declBit(c+1881,"flag", false,-1);
    tracep->declBus(c+1271,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1693,"clk", false,-1);
    tracep->declBit(c+1516,"cke", false,-1);
    tracep->declBit(c+24,"cs", false,-1);
    tracep->declBit(c+25,"ras", false,-1);
    tracep->declBit(c+26,"cas", false,-1);
    tracep->declBit(c+27,"we", false,-1);
    tracep->declBus(c+1521,"a", false,-1, 12,0);
    tracep->declBus(c+1517,"ba", false,-1, 1,0);
    tracep->declBus(c+1531,"dqm", false,-1, 1,0);
    tracep->declBus(c+1600,"dq", false,-1, 15,0);
    tracep->declBus(c+1846,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1847,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1841,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1872,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1842,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1843,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1844,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1758,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1272,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1273,"bl", false,-1, 2,0);
    tracep->declBus(c+153,"command", false,-1, 3,0);
    tracep->declBus(c+1274,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1275,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1530,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1276,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1603,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1277,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1278+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1882,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1282,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1883,"state", false,-1, 2,0);
    tracep->declBit(c+1283,"write_brust", false,-1);
    tracep->declBus(c+1284,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1285,"read_burst", false,-1);
    tracep->declBit(c+1884,"flag", false,-1);
    tracep->declBus(c+1286,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+5,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+6,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_valid))));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+8,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+9,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+10,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+11,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+12,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+13,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+14,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+15,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+16,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+17,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+18,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+19,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+20,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+21,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+22,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+23,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+24,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 3U)))));
    bufp->fullBit(oldp+25,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 2U)))));
    bufp->fullBit(oldp+26,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 1U)))));
    bufp->fullBit(oldp+27,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+28,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U)))));
    bufp->fullBit(oldp+29,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U)))));
    bufp->fullBit(oldp+30,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U)))));
    bufp->fullBit(oldp+31,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+44,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+57,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+66,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+69,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+74,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+79,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+83,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+84,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+85,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+86,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+87,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+88,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+89,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+90,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+92,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+93,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+94,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+95,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+96,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+97,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+98,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+99,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullIData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullIData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+124,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+148,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 2U))),13);
    bufp->fullSData(oldp+149,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+150,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+155,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? (IData)(vlSelf->__VdfgTmp_h7fb30c92__0)
                                : 0U)),4);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullIData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum),32);
    bufp->fullSData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles),16);
    bufp->fullIData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_prdata),32);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_pslverr));
    bufp->fullIData(oldp+168,(((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum)),32);
    bufp->fullIData(oldp+169,((((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum) 
                               >> 9U)),32);
    bufp->fullIData(oldp+170,(((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles))),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_delay),32);
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+174,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+176,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+177,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+178,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+179,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+180,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+182,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+183,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+189,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+190,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+191,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+192,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+193,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullIData(oldp+197,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+204,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+212,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+213,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+214,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+216,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+217,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+218,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+219,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+228,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+241,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_bid_r),4);
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_bvalid_r));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_id),4);
    bufp->fullIData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_data),32);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_resp),2);
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_last));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_valid));
    bufp->fullBit(oldp+294,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_state))));
    bufp->fullBit(oldp+295,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_state))));
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_state),2);
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_accum),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_elapsed),32);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[0]),4);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[1]),4);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[2]),4);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[3]),4);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[4]),4);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[5]),4);
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[6]),4);
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[7]),4);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[0]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[1]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[2]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[3]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[4]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[5]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[6]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[7]),32);
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[0]),2);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[1]),2);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[2]),2);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[3]),2);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[4]),2);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[5]),2);
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[6]),2);
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[7]),2);
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[0]));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[1]));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[2]));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[3]));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[4]));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[5]));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[6]));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[7]));
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[0]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[1]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[2]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[3]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[4]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[5]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[6]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[7]),32);
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_wr_ptr),4);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_rd_ptr),4);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_ar_done));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_ar_pass));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_fifo_has_data));
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__ri),32);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_state),2);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_accum),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_elapsed),32);
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_aw_done));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_w_done));
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_wait_cnt),32);
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_aw_pass));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_w_pass));
    bufp->fullIData(oldp+353,((((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_accum) 
                               >> 9U)),32);
    bufp->fullIData(oldp+354,(((IData)(2U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_elapsed)),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_extra),32);
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+357,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+358,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+361,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+362,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+363,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+364,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+366,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+368,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+393,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+394,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullIData(oldp+405,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_data
                                           : 0U))),32);
    bufp->fullCData(oldp+406,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_resp)
                                         : 0U)))),2);
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+408,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+489,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+490,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+561,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+565,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+569,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+573,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+577,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+581,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+585,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+589,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+593,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+597,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+601,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+605,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+609,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+613,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+617,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+621,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+625,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+629,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+633,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+637,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+641,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+645,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+649,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+653,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+657,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+661,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+665,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+669,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+673,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+677,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+681,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+685,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+719,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+757,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+760,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+761,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+763,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+764,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+765,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+766,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+767,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+768,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+769,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+770,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+771,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+772,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+773,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+774,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+775,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+776,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+777,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+778,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+784,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+785,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+790,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+791,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+792,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+793,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullCData(oldp+800,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+803,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+807,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+808,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+809,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+810,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+811,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+812,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+813,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+814,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+817,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+818,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+821,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+822,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+826,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+830,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+845,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+846,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+848,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+849,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+850,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+851,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+852,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+860,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+900,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+901,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+913,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+914,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+915,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+916,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+917,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+918,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+919,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+920,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+921,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+923,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+927,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+929,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+930,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+933,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+937,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+938,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+940,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+958,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+959,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+960,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+961,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+962,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+963,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+964,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+967,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+968,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+969,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+988,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+995,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1014,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1015,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1016,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1017,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1018,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1037,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1038,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1039,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1040,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1041,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1043,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1062,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1079,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1090,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1091,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_busy));
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1126,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu_valid));
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_lsu_valid));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu_valid));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_locked));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__current_master));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1174,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc_flag));
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1190,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1191,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1193,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullIData(oldp+1195,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd),5);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd),5);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd),5);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemWrite));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1214,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1217,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state)))),2);
    bufp->fullCData(oldp+1218,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1219,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1220,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1221,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1222,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1223,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1224,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1225,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1226,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1227,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1228,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1242,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1243,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1257,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1258,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1272,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1273,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1292,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1310,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),29);
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1315,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1318,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1323,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1326,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_bresp_r),2);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1330,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                << 1U)))))),2);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullCData(oldp+1351,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U))))
                                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_bresp_r)
                                                  : 0U)))),2);
    bufp->fullSData(oldp+1352,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullSData(oldp+1361,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),32);
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullIData(oldp+1483,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1485,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1490,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1492,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1493,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1494,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1495,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1496,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1497,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1498,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1499,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1500,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1501,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1502,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1503,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1504,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1505,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1506,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullSData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1527,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1529,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1530,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1531,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1532,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1535,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1538,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1541,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1567,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1568,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1571,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1572,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1581,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1582,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1586,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1598,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1600,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc),32);
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullCData(oldp+1618,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1619,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1630,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1636,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant_next));
    bufp->fullCData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1643,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullBit(oldp+1645,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1646,(((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))))));
    bufp->fullBit(oldp+1647,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1648,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1649,(((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)))));
    bufp->fullBit(oldp+1650,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__flag));
    bufp->fullCData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1654,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1655,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_fetch),32);
    bufp->fullIData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_out),32);
    bufp->fullIData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_buf),32);
    bufp->fullCData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),3);
    bufp->fullBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ctrl_hazard));
    bufp->fullBit(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ar_inflight));
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1668,(vlSelf->clock));
    bufp->fullBit(oldp+1669,(vlSelf->reset));
    bufp->fullSData(oldp+1670,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1671,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1672,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1673,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1674,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1675,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1676,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1677,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1678,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1679,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1680,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1681,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1682,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1683,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1684,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1685,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1686,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1687,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1688,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1689,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1690,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1693,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1694,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1695,((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                                       | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                                          | (((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                    : 
                                                   (0x1cU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))) 
                                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                                                | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))))))))))));
    bufp->fullIData(oldp+1696,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))
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
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                        : 0U))))))),32);
    bufp->fullBit(oldp+1697,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+1698,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_aw_pass) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_w_pass) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_ar_pass))));
    bufp->fullBit(oldp+1704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1705,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullBit(oldp+1706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1707,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_ar_pass))))));
    bufp->fullBit(oldp+1708,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1712,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1713,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullBit(oldp+1714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast)))));
    bufp->fullBit(oldp+1715,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb2cd5b05__0) 
                                     | (((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                     >> 0x14U)))))
                                     ? 1U : 0U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb2cd5b05__0)
                                                     ? 1U
                                                     : 0U))) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                    ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6cecb5c4__0) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd)) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0x14U)))))
                                        ? 1U : 0U) : 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                     ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6cecb5c4__0)
                                              ? 1U : 0U))) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha6e393a3__0) 
                                          | (((0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd)) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                    >> 0x14U)))))
                                          ? 1U : 0U)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                          ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha6e393a3__0)
                                                   ? 1U
                                                   : 0U))))) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state)))));
    bufp->fullBit(oldp+1716,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb2cd5b05__0) 
                                         | (((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U)))))
                                         ? 1U : 0U)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb2cd5b05__0)
                                                  ? 1U
                                                  : 0U))))));
    bufp->fullBit(oldp+1717,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6cecb5c4__0) 
                                         | (((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U)))))
                                         ? 1U : 0U)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6cecb5c4__0)
                                                  ? 1U
                                                  : 0U))))));
    bufp->fullBit(oldp+1718,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha6e393a3__0) 
                                         | (((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U)))))
                                         ? 1U : 0U)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha6e393a3__0)
                                                  ? 1U
                                                  : 0U))))));
    bufp->fullCData(oldp+1719,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu))
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu))
                                         ? 1U : 2U)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                     ? ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem)) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem)))
                                         ? 2U : 1U)
                                     : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                             ? 0U : 2U)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))))),2);
    bufp->fullBit(oldp+1720,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1721,((0xfU & vlSelf->__VdfgTmp_h9aa666fe__0)),4);
    bufp->fullBit(oldp+1722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1723,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullIData(oldp+1726,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                          : 0U))),8);
    bufp->fullCData(oldp+1728,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? 0x10U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w) 
                                                 << 5U) 
                                                | (((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1732,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1735,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1737,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1740,(0x226U),32);
    bufp->fullIData(oldp+1741,(0x64U),32);
    bufp->fullIData(oldp+1742,(0x200U),32);
    bufp->fullCData(oldp+1743,(1U),3);
    bufp->fullIData(oldp+1744,(0xb00U),32);
    bufp->fullIData(oldp+1745,(9U),32);
    bufp->fullCData(oldp+1746,(0U),3);
    bufp->fullCData(oldp+1747,(2U),3);
    bufp->fullCData(oldp+1748,(3U),3);
    bufp->fullCData(oldp+1749,(4U),3);
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1752,(0U));
    bufp->fullBit(oldp+1753,(1U));
    bufp->fullIData(oldp+1754,(0x20U),32);
    bufp->fullIData(oldp+1755,(4U),32);
    bufp->fullIData(oldp+1756,(1U),32);
    bufp->fullIData(oldp+1757,(8U),32);
    bufp->fullCData(oldp+1758,(0U),4);
    bufp->fullCData(oldp+1759,(0U),8);
    bufp->fullCData(oldp+1760,(0U),2);
    bufp->fullCData(oldp+1761,(1U),2);
    bufp->fullCData(oldp+1762,(2U),2);
    bufp->fullCData(oldp+1763,(3U),2);
    bufp->fullSData(oldp+1764,(1U),16);
    bufp->fullBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1781,(0U),32);
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1811,(0U),32);
    bufp->fullBit(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1817,(0U));
    bufp->fullBit(oldp+1818,(1U));
    bufp->fullBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullIData(oldp+1822,(4U),32);
    bufp->fullIData(oldp+1823,(0x79737978U),32);
    bufp->fullIData(oldp+1824,(0x17e3c19U),32);
    bufp->fullIData(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1828,(5U),32);
    bufp->fullCData(oldp+1829,(0x1bU),8);
    bufp->fullCData(oldp+1830,(0xebU),8);
    bufp->fullCData(oldp+1831,(0x38U),8);
    bufp->fullIData(oldp+1832,(0x18U),32);
    bufp->fullIData(oldp+1833,(9U),32);
    bufp->fullIData(oldp+1834,(2U),32);
    bufp->fullIData(oldp+1835,(6U),32);
    bufp->fullIData(oldp+1836,(3U),32);
    bufp->fullIData(oldp+1837,(0xdU),32);
    bufp->fullIData(oldp+1838,(0x2000U),32);
    bufp->fullIData(oldp+1839,(0x2710U),32);
    bufp->fullIData(oldp+1840,(0x30cU),32);
    bufp->fullCData(oldp+1841,(7U),4);
    bufp->fullCData(oldp+1842,(3U),4);
    bufp->fullCData(oldp+1843,(5U),4);
    bufp->fullCData(oldp+1844,(4U),4);
    bufp->fullCData(oldp+1845,(6U),4);
    bufp->fullCData(oldp+1846,(2U),4);
    bufp->fullCData(oldp+1847,(1U),4);
    bufp->fullSData(oldp+1848,(0x20U),13);
    bufp->fullCData(oldp+1849,(8U),4);
    bufp->fullCData(oldp+1850,(9U),4);
    bufp->fullIData(oldp+1851,(0xaU),32);
    bufp->fullIData(oldp+1852,(0x11U),32);
    bufp->fullIData(oldp+1853,(0x30000000U),32);
    bufp->fullIData(oldp+1854,(0x3fffffffU),32);
    bufp->fullCData(oldp+1855,(4U),5);
    bufp->fullCData(oldp+1856,(0U),5);
    bufp->fullCData(oldp+1857,(0x10U),5);
    bufp->fullCData(oldp+1858,(0x14U),5);
    bufp->fullCData(oldp+1859,(0x18U),5);
    bufp->fullIData(oldp+1860,(0x3000000U),32);
    bufp->fullCData(oldp+1861,(0xaU),4);
    bufp->fullIData(oldp+1862,(0xbU),32);
    bufp->fullIData(oldp+1863,(0x10U),32);
    bufp->fullCData(oldp+1864,(5U),3);
    bufp->fullIData(oldp+1865,(0x60U),32);
    bufp->fullIData(oldp+1866,(0x90U),32);
    bufp->fullIData(oldp+1867,(0x310U),32);
    bufp->fullIData(oldp+1868,(0x320U),32);
    bufp->fullIData(oldp+1869,(0x23U),32);
    bufp->fullIData(oldp+1870,(0x203U),32);
    bufp->fullIData(oldp+1871,(0x20dU),32);
    bufp->fullIData(oldp+1872,(0x400000U),32);
    bufp->fullCData(oldp+1873,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1874,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1875,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1876,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1877,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1878,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+1879,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1880,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1881,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1882,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1883,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1884,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
