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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1685,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1686,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1687,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1688,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1689,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1690,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1691,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1692,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1693,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1694,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1695,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1696,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1697,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1698,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1699,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1700,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1701,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1702,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1703,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1704,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1685,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1686,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1687,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1688,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1689,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1690,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1691,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1692,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1693,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1694,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1695,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1696,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1697,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1698,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1699,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1700,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1701,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1702,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1703,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1704,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+799,"spi_sck", false,-1);
    tracep->declBus(c+1529,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1530,"spi_mosi", false,-1);
    tracep->declBit(c+1705,"spi_miso", false,-1);
    tracep->declBit(c+1703,"uart_rx", false,-1);
    tracep->declBit(c+1704,"uart_tx", false,-1);
    tracep->declBit(c+1706,"psram_sck", false,-1);
    tracep->declBit(c+1677,"psram_ce_n", false,-1);
    tracep->declBus(c+1707,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1708,"sdram_clk", false,-1);
    tracep->declBit(c+1531,"sdram_cke", false,-1);
    tracep->declBit(c+800,"sdram_cs", false,-1);
    tracep->declBit(c+801,"sdram_ras", false,-1);
    tracep->declBit(c+802,"sdram_cas", false,-1);
    tracep->declBit(c+803,"sdram_we", false,-1);
    tracep->declBus(c+1709,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1532,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1533,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1612,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1685,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1686,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1687,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1688,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1689,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1690,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1691,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1692,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1693,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1694,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1695,"ps2_clk", false,-1);
    tracep->declBit(c+1696,"ps2_data", false,-1);
    tracep->declBus(c+1697,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1698,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1699,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1700,"vga_hsync", false,-1);
    tracep->declBit(c+1701,"vga_vsync", false,-1);
    tracep->declBit(c+1702,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1755,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1756,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1757,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1312,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+154,"in_psel", false,-1);
    tracep->declBit(c+155,"in_penable", false,-1);
    tracep->declBus(c+1758,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+156,"in_pwrite", false,-1);
    tracep->declBus(c+157,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+158,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+159,"in_pready", false,-1);
    tracep->declBus(c+160,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+161,"in_pslverr", false,-1);
    tracep->declBus(c+1313,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1314,"out_psel", false,-1);
    tracep->declBit(c+1315,"out_penable", false,-1);
    tracep->declBus(c+1316,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1317,"out_pwrite", false,-1);
    tracep->declBus(c+1318,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1710,"out_pready", false,-1);
    tracep->declBus(c+1711,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1712,"out_pslverr", false,-1);
    tracep->declBus(c+1759,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1760,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1761,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1758,"ST_FORWARD", false,-1, 2,0);
    tracep->declBus(c+1762,"ST_WAIT", false,-1, 2,0);
    tracep->declBus(c+1763,"ST_SKIP", false,-1, 2,0);
    tracep->declBus(c+1764,"ST_DONE", false,-1, 2,0);
    tracep->declBus(c+162,"state", false,-1, 2,0);
    tracep->declBus(c+163,"accum", false,-1, 31,0);
    tracep->declBus(c+164,"dev_cycles", false,-1, 15,0);
    tracep->declBus(c+165,"wait_cnt", false,-1, 31,0);
    tracep->declBus(c+166,"saved_prdata", false,-1, 31,0);
    tracep->declBit(c+167,"saved_pslverr", false,-1);
    tracep->declBit(c+1320,"fwd_active", false,-1);
    tracep->declBus(c+168,"accum_final", false,-1, 31,0);
    tracep->declBus(c+169,"total_cpu", false,-1, 31,0);
    tracep->declBus(c+170,"k_plus1", false,-1, 31,0);
    tracep->declBus(c+171,"extra_delay", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1314,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1315,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1317,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1313,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1316,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1710,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1712,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1711,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1321,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1322,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1317,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1323,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1316,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+804,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1765,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1766,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1324,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1325,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1317,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1326,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1316,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+172,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1767,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+173,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1327,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1328,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1317,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1326,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1316,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+805,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1767,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+806,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1329,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1330,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1317,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1313,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1316,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1713,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1767,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+174,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1331,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1332,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1317,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1326,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1316,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1333,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1767,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1714,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1334,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1335,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1317,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1323,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1316,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+807,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+808,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+809,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1336,"sel_0", false,-1);
    tracep->declBit(c+1337,"sel_1", false,-1);
    tracep->declBit(c+1338,"sel_2", false,-1);
    tracep->declBit(c+1339,"sel_3", false,-1);
    tracep->declBit(c+1340,"sel_4", false,-1);
    tracep->declBit(c+1341,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
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
    tracep->declBus(c+1312,"auto_out_paddr", false,-1, 31,0);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+207,"auto_in_awready", false,-1);
    tracep->declBit(c+1547,"auto_in_awvalid", false,-1);
    tracep->declBus(c+208,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_in_wready", false,-1);
    tracep->declBit(c+1550,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_in_wlast", false,-1);
    tracep->declBit(c+770,"auto_in_bready", false,-1);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+185,"io_enq_valid", false,-1);
    tracep->declBus(c+186,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+187,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+770,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1768,"R0_en", false,-1);
    tracep->declBit(c+1683,"R0_clk", false,-1);
    tracep->declBus(c+227,"R0_data", false,-1, 5,0);
    tracep->declBit(c+220,"W0_addr", false,-1);
    tracep->declBit(c+226,"W0_en", false,-1);
    tracep->declBit(c+1683,"W0_clk", false,-1);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
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
    tracep->declBit(c+1768,"R0_en", false,-1);
    tracep->declBit(c+1683,"R0_clk", false,-1);
    tracep->declQuad(c+239,"R0_data", false,-1, 38,0);
    tracep->declBit(c+232,"W0_addr", false,-1);
    tracep->declBit(c+238,"W0_en", false,-1);
    tracep->declBit(c+1683,"W0_clk", false,-1);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
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
    tracep->declBit(c+1768,"R0_en", false,-1);
    tracep->declBit(c+1683,"R0_clk", false,-1);
    tracep->declQuad(c+254,"R0_data", false,-1, 46,0);
    tracep->declBit(c+248,"W0_addr", false,-1);
    tracep->declBit(c+43,"W0_en", false,-1);
    tracep->declBit(c+1683,"W0_clk", false,-1);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+1547,"io_enq_valid", false,-1);
    tracep->declBus(c+208,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1548,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1549,"io_enq_bits_size", false,-1, 2,0);
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
    tracep->declBit(c+1554,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+262,"R0_addr", false,-1);
    tracep->declBit(c+1768,"R0_en", false,-1);
    tracep->declBit(c+1683,"R0_clk", false,-1);
    tracep->declQuad(c+267,"R0_data", false,-1, 46,0);
    tracep->declBit(c+261,"W0_addr", false,-1);
    tracep->declBit(c+1554,"W0_en", false,-1);
    tracep->declBit(c+1683,"W0_clk", false,-1);
    tracep->declQuad(c+771,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+1550,"io_enq_valid", false,-1);
    tracep->declBus(c+1551,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1552,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1553,"io_enq_bits_last", false,-1);
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
    tracep->declBit(c+1555,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+275,"R0_addr", false,-1);
    tracep->declBit(c+1768,"R0_en", false,-1);
    tracep->declBit(c+1683,"R0_clk", false,-1);
    tracep->declQuad(c+280,"R0_data", false,-1, 35,0);
    tracep->declBit(c+274,"W0_addr", false,-1);
    tracep->declBit(c+1555,"W0_en", false,-1);
    tracep->declBit(c+1683,"W0_clk", false,-1);
    tracep->declQuad(c+1556,"W0_data", false,-1, 35,0);
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
    tracep->declBus(c+1755,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1756,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1757,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBus(c+1769,"AXI_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1770,"AXI_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1771,"AXI_ID_W", false,-1, 31,0);
    tracep->declBus(c+1772,"AXI_USER_W", false,-1, 31,0);
    tracep->declBus(c+1773,"MAX_BURST_LEN", false,-1, 31,0);
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1774,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1106,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1775,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1558,"in_awvalid", false,-1);
    tracep->declBit(c+1715,"in_awready", false,-1);
    tracep->declQuad(c+1108,"in_wdata", false,-1, 63,0);
    tracep->declBus(c+1110,"in_wstrb", false,-1, 7,0);
    tracep->declBit(c+1111,"in_wlast", false,-1);
    tracep->declBit(c+1559,"in_wvalid", false,-1);
    tracep->declBit(c+1716,"in_wready", false,-1);
    tracep->declBus(c+287,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1342,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+288,"in_bvalid", false,-1);
    tracep->declBit(c+1717,"in_bready", false,-1);
    tracep->declBus(c+46,"in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"in_arvalid", false,-1);
    tracep->declBit(c+1718,"in_arready", false,-1);
    tracep->declBus(c+289,"in_rid", false,-1, 3,0);
    tracep->declQuad(c+290,"in_rdata", false,-1, 63,0);
    tracep->declBus(c+292,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+293,"in_rlast", false,-1);
    tracep->declBit(c+294,"in_rvalid", false,-1);
    tracep->declBit(c+5,"in_rready", false,-1);
    tracep->declBus(c+1774,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1106,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1775,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1560,"out_awvalid", false,-1);
    tracep->declBit(c+127,"out_awready", false,-1);
    tracep->declQuad(c+1108,"out_wdata", false,-1, 63,0);
    tracep->declBus(c+1110,"out_wstrb", false,-1, 7,0);
    tracep->declBit(c+1111,"out_wlast", false,-1);
    tracep->declBit(c+1561,"out_wvalid", false,-1);
    tracep->declBit(c+128,"out_wready", false,-1);
    tracep->declBus(c+810,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1776,"out_bresp", false,-1, 1,0);
    tracep->declBit(c+811,"out_bvalid", false,-1);
    tracep->declBit(c+295,"out_bready", false,-1);
    tracep->declBus(c+46,"out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"out_arvalid", false,-1);
    tracep->declBit(c+129,"out_arready", false,-1);
    tracep->declBus(c+810,"out_rid", false,-1, 3,0);
    tracep->declQuad(c+812,"out_rdata", false,-1, 63,0);
    tracep->declBus(c+1776,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+814,"out_rlast", false,-1);
    tracep->declBit(c+815,"out_rvalid", false,-1);
    tracep->declBit(c+296,"out_rready", false,-1);
    tracep->declBus(c+1759,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1760,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1776,"R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1777,"R_FORWARD", false,-1, 1,0);
    tracep->declBus(c+1778,"R_DRAIN", false,-1, 1,0);
    tracep->declBus(c+297,"r_state", false,-1, 1,0);
    tracep->declBus(c+298,"r_accum", false,-1, 31,0);
    tracep->declBus(c+299,"r_elapsed", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+300+i*1,"r_buf_id", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+308+i*2,"r_buf_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+324+i*1,"r_buf_resp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+332+i*1,"r_buf_last", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+340+i*1,"r_buf_target", true,(i+0), 31,0);
    }
    tracep->declBus(c+348,"r_wr_ptr", false,-1, 2,0);
    tracep->declBus(c+349,"r_rd_ptr", false,-1, 2,0);
    tracep->declBit(c+350,"r_ar_done", false,-1);
    tracep->declBit(c+351,"r_ar_pass", false,-1);
    tracep->declBit(c+294,"r_out_valid", false,-1);
    tracep->declBus(c+289,"r_out_id", false,-1, 3,0);
    tracep->declQuad(c+290,"r_out_data", false,-1, 63,0);
    tracep->declBus(c+292,"r_out_resp", false,-1, 1,0);
    tracep->declBit(c+293,"r_out_last", false,-1);
    tracep->declBit(c+6,"r_out_handshake", false,-1);
    tracep->declBit(c+352,"r_fifo_has_data", false,-1);
    tracep->declBus(c+353,"ri", false,-1, 31,0);
    tracep->declBus(c+1776,"W_IDLE", false,-1, 1,0);
    tracep->declBus(c+1777,"W_FORWARD", false,-1, 1,0);
    tracep->declBus(c+1778,"W_WAIT", false,-1, 1,0);
    tracep->declBus(c+1779,"W_DONE", false,-1, 1,0);
    tracep->declBus(c+354,"w_state", false,-1, 1,0);
    tracep->declBus(c+355,"w_accum", false,-1, 31,0);
    tracep->declBus(c+356,"w_elapsed", false,-1, 31,0);
    tracep->declBit(c+357,"w_aw_done", false,-1);
    tracep->declBit(c+358,"w_w_done", false,-1);
    tracep->declBit(c+288,"w_bvalid_r", false,-1);
    tracep->declBus(c+287,"w_bid_r", false,-1, 3,0);
    tracep->declBus(c+1342,"w_bresp_r", false,-1, 1,0);
    tracep->declBus(c+359,"w_wait_cnt", false,-1, 31,0);
    tracep->declBit(c+360,"w_aw_pass", false,-1);
    tracep->declBit(c+361,"w_w_pass", false,-1);
    tracep->declBus(c+362,"w_total_cpu", false,-1, 31,0);
    tracep->declBus(c+363,"w_cur_plus2", false,-1, 31,0);
    tracep->declBus(c+364,"w_extra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+365,"auto_in_awready", false,-1);
    tracep->declBit(c+1562,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1774,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1106,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1775,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+366,"auto_in_wready", false,-1);
    tracep->declBit(c+1563,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1112,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"auto_in_wlast", false,-1);
    tracep->declBit(c+1719,"auto_in_bready", false,-1);
    tracep->declBit(c+1343,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1344,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1345,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+367,"auto_in_arready", false,-1);
    tracep->declBit(c+53,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_in_rready", false,-1);
    tracep->declBit(c+368,"auto_in_rvalid", false,-1);
    tracep->declBus(c+369,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+370,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+372,"auto_in_rlast", false,-1);
    tracep->declBit(c+1564,"auto_out_awready", false,-1);
    tracep->declBit(c+1565,"auto_out_awvalid", false,-1);
    tracep->declBus(c+208,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+373,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1566,"auto_out_wready", false,-1);
    tracep->declBit(c+1567,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_out_wlast", false,-1);
    tracep->declBit(c+1568,"auto_out_bready", false,-1);
    tracep->declBit(c+374,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1344,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1346,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1347,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+55,"auto_out_arready", false,-1);
    tracep->declBit(c+56,"auto_out_arvalid", false,-1);
    tracep->declBus(c+39,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+57,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+54,"auto_out_rready", false,-1);
    tracep->declBit(c+368,"auto_out_rvalid", false,-1);
    tracep->declBus(c+369,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+370,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+375,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+376,"auto_out_rlast", false,-1);
    tracep->declBit(c+1567,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+377,"w_idle", false,-1);
    tracep->declBit(c+1569,"in_awready", false,-1);
    tracep->declBit(c+378,"busy", false,-1);
    tracep->declBus(c+379,"r_addr", false,-1, 31,0);
    tracep->declBus(c+380,"r_len", false,-1, 7,0);
    tracep->declBus(c+58,"len", false,-1, 7,0);
    tracep->declBus(c+59,"addr", false,-1, 31,0);
    tracep->declBit(c+381,"busy_1", false,-1);
    tracep->declBus(c+382,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+383,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+384,"len_1", false,-1, 7,0);
    tracep->declBus(c+1570,"addr_1", false,-1, 31,0);
    tracep->declBit(c+385,"wbeats_latched", false,-1);
    tracep->declBit(c+1565,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1571,"wbeats_valid", false,-1);
    tracep->declBus(c+386,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1572,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1553,"w_last", false,-1);
    tracep->declBit(c+1568,"nodeOut_bready", false,-1);
    tracep->declBus(c+1348,"error_0", false,-1, 1,0);
    tracep->declBus(c+1349,"error_1", false,-1, 1,0);
    tracep->declBus(c+1350,"error_2", false,-1, 1,0);
    tracep->declBus(c+1351,"error_3", false,-1, 1,0);
    tracep->declBus(c+1352,"error_4", false,-1, 1,0);
    tracep->declBus(c+1353,"error_5", false,-1, 1,0);
    tracep->declBus(c+1354,"error_6", false,-1, 1,0);
    tracep->declBus(c+1355,"error_7", false,-1, 1,0);
    tracep->declBus(c+1356,"error_8", false,-1, 1,0);
    tracep->declBus(c+1357,"error_9", false,-1, 1,0);
    tracep->declBus(c+1358,"error_10", false,-1, 1,0);
    tracep->declBus(c+1359,"error_11", false,-1, 1,0);
    tracep->declBus(c+1360,"error_12", false,-1, 1,0);
    tracep->declBus(c+1361,"error_13", false,-1, 1,0);
    tracep->declBus(c+1362,"error_14", false,-1, 1,0);
    tracep->declBus(c+1363,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
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
    tracep->declQuad(c+387,"ram", false,-1, 48,0);
    tracep->declBit(c+389,"full", false,-1);
    tracep->declBit(c+56,"io_deq_valid_0", false,-1);
    tracep->declBit(c+63,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+365,"io_enq_ready", false,-1);
    tracep->declBit(c+1562,"io_enq_valid", false,-1);
    tracep->declBus(c+1774,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1106,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1775,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1107,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1776,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1573,"io_deq_ready", false,-1);
    tracep->declBit(c+1574,"io_deq_valid", false,-1);
    tracep->declBus(c+208,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1575,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+390,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1549,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+209,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+391,"ram", false,-1, 48,0);
    tracep->declBit(c+393,"full", false,-1);
    tracep->declBit(c+1574,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1576,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+366,"io_enq_ready", false,-1);
    tracep->declBit(c+1563,"io_enq_valid", false,-1);
    tracep->declBus(c+1112,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1113,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1111,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1577,"io_deq_ready", false,-1);
    tracep->declBit(c+1578,"io_deq_valid", false,-1);
    tracep->declBus(c+1551,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1552,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1720,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+394,"ram", false,-1, 36,0);
    tracep->declBit(c+396,"full", false,-1);
    tracep->declBit(c+1578,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1579,"do_enq", false,-1);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1580,"auto_in_awready", false,-1);
    tracep->declBit(c+1581,"auto_in_awvalid", false,-1);
    tracep->declBus(c+208,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1582,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1583,"auto_in_wready", false,-1);
    tracep->declBit(c+1584,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1585,"auto_in_bready", false,-1);
    tracep->declBit(c+397,"auto_in_bvalid", false,-1);
    tracep->declBus(c+398,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+399,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+64,"auto_in_arready", false,-1);
    tracep->declBit(c+65,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+67,"auto_in_rready", false,-1);
    tracep->declBit(c+400,"auto_in_rvalid", false,-1);
    tracep->declBus(c+401,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+402,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+403,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+64,"nodeIn_arready", false,-1);
    tracep->declBit(c+1580,"nodeIn_awready", false,-1);
    tracep->declBit(c+1586,"w_sel0", false,-1);
    tracep->declBit(c+397,"w_full", false,-1);
    tracep->declBus(c+398,"w_id", false,-1, 3,0);
    tracep->declBit(c+404,"r_sel1", false,-1);
    tracep->declBit(c+405,"w_sel1", false,-1);
    tracep->declBit(c+400,"r_full", false,-1);
    tracep->declBus(c+401,"r_id", false,-1, 3,0);
    tracep->declBit(c+68,"ren", false,-1);
    tracep->declBit(c+406,"rdata_REG", false,-1);
    tracep->declBus(c+407,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+408,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+409,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+410,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+69,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+68,"R0_en", false,-1);
    tracep->declBit(c+1683,"R0_clk", false,-1);
    tracep->declBus(c+411,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1587,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1588,"W0_en", false,-1);
    tracep->declBit(c+1683,"W0_clk", false,-1);
    tracep->declBus(c+1551,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1552,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+130,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1114,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1774,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1106,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1775,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1721,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1115,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1112,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1116,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1364,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1365,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1366,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+131,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+70,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+412,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+413,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+414,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+415,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+416,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1715,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1558,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1774,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1106,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1775,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1716,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1559,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1112,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1717,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+288,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+287,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1342,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1718,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+51,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+294,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+417,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+292,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+293,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+365,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1562,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1774,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1106,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1775,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+366,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1563,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1112,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1719,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1343,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1345,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+367,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+53,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+368,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+369,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+370,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+372,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1364,"in_0_bvalid", false,-1);
    tracep->declBit(c+412,"in_0_rvalid", false,-1);
    tracep->declBit(c+132,"in_0_wready", false,-1);
    tracep->declBit(c+133,"in_0_awready", false,-1);
    tracep->declBit(c+1722,"in_0_arready", false,-1);
    tracep->declBit(c+130,"anonIn_awready", false,-1);
    tracep->declBit(c+131,"anonIn_arready", false,-1);
    tracep->declBit(c+72,"requestARIO_0_0", false,-1);
    tracep->declBit(c+73,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1117,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1118,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+74,"arSel", false,-1, 15,0);
    tracep->declBus(c+1780,"awSel", false,-1, 15,0);
    tracep->declBus(c+418,"rSel", false,-1, 15,0);
    tracep->declBus(c+1367,"bSel", false,-1, 15,0);
    tracep->declBus(c+419,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+420,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+421,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+422,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+423,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+424,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+425,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1781,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+426,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+427,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+428,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1782,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+429,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+430,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+431,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1783,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+432,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+433,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+434,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1784,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+435,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+436,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+437,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1785,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+438,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+439,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+440,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1786,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+441,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+442,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+443,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1787,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+444,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+445,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+446,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1788,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+447,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+448,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+449,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1789,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+450,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+451,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+452,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1790,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+453,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+454,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+455,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1791,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+456,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+457,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+458,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1792,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+459,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+460,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+461,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1793,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+462,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+463,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+464,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1794,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+465,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+466,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+467,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1795,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+75,"in_0_arvalid", false,-1);
    tracep->declBit(c+468,"latched", false,-1);
    tracep->declBit(c+1589,"in_0_awvalid", false,-1);
    tracep->declBit(c+1590,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1591,"in_0_wvalid", false,-1);
    tracep->declBit(c+469,"idle_2", false,-1);
    tracep->declBit(c+470,"anyValid", false,-1);
    tracep->declBus(c+471,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+472,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+473,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+474,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+475,"prefixOR_1", false,-1);
    tracep->declBit(c+476,"winner_2_1", false,-1);
    tracep->declBit(c+477,"state_2_0", false,-1);
    tracep->declBit(c+478,"state_2_1", false,-1);
    tracep->declBit(c+479,"muxState_2_0", false,-1);
    tracep->declBit(c+480,"muxState_2_1", false,-1);
    tracep->declBit(c+481,"idle_3", false,-1);
    tracep->declBit(c+1368,"anyValid_1", false,-1);
    tracep->declBus(c+1369,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+482,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1370,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1371,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1372,"winner_3_0", false,-1);
    tracep->declBit(c+1373,"winner_3_1", false,-1);
    tracep->declBit(c+483,"state_3_0", false,-1);
    tracep->declBit(c+484,"state_3_1", false,-1);
    tracep->declBit(c+1374,"muxState_3_0", false,-1);
    tracep->declBit(c+1375,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+1590,"io_enq_valid", false,-1);
    tracep->declBus(c+1119,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+134,"io_deq_ready", false,-1);
    tracep->declBit(c+1592,"io_deq_valid", false,-1);
    tracep->declBus(c+1593,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+486,"wrap", false,-1);
    tracep->declBit(c+487,"wrap_1", false,-1);
    tracep->declBit(c+488,"maybe_full", false,-1);
    tracep->declBit(c+489,"ptr_match", false,-1);
    tracep->declBit(c+490,"empty", false,-1);
    tracep->declBit(c+491,"full", false,-1);
    tracep->declBit(c+1592,"io_deq_valid_0", false,-1);
    tracep->declBit(c+135,"do_deq", false,-1);
    tracep->declBit(c+136,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+487,"R0_addr", false,-1);
    tracep->declBit(c+1768,"R0_en", false,-1);
    tracep->declBit(c+1683,"R0_clk", false,-1);
    tracep->declBus(c+492,"R0_data", false,-1, 1,0);
    tracep->declBit(c+486,"W0_addr", false,-1);
    tracep->declBit(c+136,"W0_en", false,-1);
    tracep->declBit(c+1683,"W0_clk", false,-1);
    tracep->declBus(c+1119,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+493+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1594,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1595,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+208,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1566,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1567,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1568,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+374,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1344,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1346,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+76,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+77,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+368,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+369,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+370,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+376,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1580,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1581,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+208,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1582,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1583,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1584,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1585,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+397,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+398,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+399,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+64,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+65,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+67,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+400,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+401,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+402,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+403,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1596,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1597,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+495,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+78,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+79,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+7,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+496,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+497,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+498,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+207,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1547,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+208,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1550,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+770,"auto_anon_out_0_bready", false,-1);
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
    tracep->declBit(c+374,"in_0_bvalid", false,-1);
    tracep->declBit(c+368,"in_0_rvalid", false,-1);
    tracep->declBit(c+1598,"in_0_wready", false,-1);
    tracep->declBit(c+1599,"in_0_awready", false,-1);
    tracep->declBit(c+76,"in_0_arready", false,-1);
    tracep->declBit(c+1594,"anonIn_awready", false,-1);
    tracep->declBit(c+80,"requestARIO_0_0", false,-1);
    tracep->declBit(c+81,"requestARIO_0_1", false,-1);
    tracep->declBit(c+82,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1600,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1601,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1602,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+83,"arSel", false,-1, 15,0);
    tracep->declBus(c+499,"awSel", false,-1, 15,0);
    tracep->declBus(c+500,"rSel", false,-1, 15,0);
    tracep->declBus(c+1376,"bSel", false,-1, 15,0);
    tracep->declBit(c+501,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+502,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+503,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+504,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+505,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+506,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+507,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+508,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+509,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+510,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+511,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+512,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+513,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+514,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+515,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+516,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+517,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+518,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+519,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+520,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+521,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+522,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+523,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+524,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+525,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+526,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+527,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+528,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+529,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+530,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+531,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+532,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+533,"latched", false,-1);
    tracep->declBit(c+1603,"in_0_awvalid", false,-1);
    tracep->declBit(c+1604,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1605,"in_0_wvalid", false,-1);
    tracep->declBit(c+534,"idle_3", false,-1);
    tracep->declBit(c+535,"anyValid", false,-1);
    tracep->declBus(c+536,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+537,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+538,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+539,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+540,"prefixOR_1", false,-1);
    tracep->declBit(c+541,"winner_3_1", false,-1);
    tracep->declBit(c+542,"winner_3_2", false,-1);
    tracep->declBit(c+543,"state_3_0", false,-1);
    tracep->declBit(c+544,"state_3_1", false,-1);
    tracep->declBit(c+545,"state_3_2", false,-1);
    tracep->declBit(c+546,"muxState_3_0", false,-1);
    tracep->declBit(c+547,"muxState_3_1", false,-1);
    tracep->declBit(c+548,"muxState_3_2", false,-1);
    tracep->declBit(c+549,"idle_4", false,-1);
    tracep->declBit(c+550,"anyValid_1", false,-1);
    tracep->declBus(c+551,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+552,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+553,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+554,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+555,"winner_4_0", false,-1);
    tracep->declBit(c+556,"winner_4_2", false,-1);
    tracep->declBit(c+557,"state_4_0", false,-1);
    tracep->declBit(c+558,"state_4_2", false,-1);
    tracep->declBit(c+559,"muxState_4_0", false,-1);
    tracep->declBit(c+560,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+561,"io_enq_ready", false,-1);
    tracep->declBit(c+1604,"io_enq_valid", false,-1);
    tracep->declBus(c+1606,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1607,"io_deq_ready", false,-1);
    tracep->declBit(c+1608,"io_deq_valid", false,-1);
    tracep->declBus(c+1609,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+562,"wrap", false,-1);
    tracep->declBit(c+563,"wrap_1", false,-1);
    tracep->declBit(c+564,"maybe_full", false,-1);
    tracep->declBit(c+565,"ptr_match", false,-1);
    tracep->declBit(c+566,"empty", false,-1);
    tracep->declBit(c+567,"full", false,-1);
    tracep->declBit(c+1608,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1610,"do_deq", false,-1);
    tracep->declBit(c+1611,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+563,"R0_addr", false,-1);
    tracep->declBit(c+1768,"R0_en", false,-1);
    tracep->declBit(c+1683,"R0_clk", false,-1);
    tracep->declBus(c+568,"R0_data", false,-1, 2,0);
    tracep->declBit(c+562,"W0_addr", false,-1);
    tracep->declBit(c+1611,"W0_en", false,-1);
    tracep->declBit(c+1683,"W0_clk", false,-1);
    tracep->declBus(c+1606,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+569+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1564,"auto_in_awready", false,-1);
    tracep->declBit(c+1565,"auto_in_awvalid", false,-1);
    tracep->declBus(c+208,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+373,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1566,"auto_in_wready", false,-1);
    tracep->declBit(c+1567,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_in_wlast", false,-1);
    tracep->declBit(c+1568,"auto_in_bready", false,-1);
    tracep->declBit(c+374,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1344,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1346,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1347,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+55,"auto_in_arready", false,-1);
    tracep->declBit(c+56,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+57,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+54,"auto_in_rready", false,-1);
    tracep->declBit(c+368,"auto_in_rvalid", false,-1);
    tracep->declBus(c+369,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+370,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+375,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+376,"auto_in_rlast", false,-1);
    tracep->declBit(c+1594,"auto_out_awready", false,-1);
    tracep->declBit(c+1595,"auto_out_awvalid", false,-1);
    tracep->declBus(c+208,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+209,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1566,"auto_out_wready", false,-1);
    tracep->declBit(c+1567,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_out_wlast", false,-1);
    tracep->declBit(c+1568,"auto_out_bready", false,-1);
    tracep->declBit(c+374,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1344,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1346,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+76,"auto_out_arready", false,-1);
    tracep->declBit(c+77,"auto_out_arvalid", false,-1);
    tracep->declBus(c+39,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_out_rready", false,-1);
    tracep->declBit(c+368,"auto_out_rvalid", false,-1);
    tracep->declBus(c+369,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+370,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+376,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+571,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+572,"io_deq_valid", false,-1);
    tracep->declBit(c+573,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+572,"full", false,-1);
    tracep->declBit(c+573,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+574,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+575,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+576,"io_deq_valid", false,-1);
    tracep->declBit(c+577,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+576,"full", false,-1);
    tracep->declBit(c+577,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+578,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+579,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+580,"io_deq_valid", false,-1);
    tracep->declBit(c+581,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+580,"full", false,-1);
    tracep->declBit(c+581,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+582,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+583,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+584,"io_deq_valid", false,-1);
    tracep->declBit(c+585,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+584,"full", false,-1);
    tracep->declBit(c+585,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+586,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+587,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+588,"io_deq_valid", false,-1);
    tracep->declBit(c+589,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+588,"full", false,-1);
    tracep->declBit(c+589,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+590,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+591,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+592,"io_deq_valid", false,-1);
    tracep->declBit(c+593,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+592,"full", false,-1);
    tracep->declBit(c+593,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+594,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+595,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+596,"io_deq_valid", false,-1);
    tracep->declBit(c+597,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+596,"full", false,-1);
    tracep->declBit(c+597,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+598,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+599,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+600,"io_deq_valid", false,-1);
    tracep->declBit(c+601,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+600,"full", false,-1);
    tracep->declBit(c+601,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+602,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+603,"io_enq_ready", false,-1);
    tracep->declBit(c+773,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1506,"io_deq_ready", false,-1);
    tracep->declBit(c+604,"io_deq_valid", false,-1);
    tracep->declBit(c+605,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+604,"full", false,-1);
    tracep->declBit(c+605,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+606,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+607,"io_enq_ready", false,-1);
    tracep->declBit(c+774,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1507,"io_deq_ready", false,-1);
    tracep->declBit(c+608,"io_deq_valid", false,-1);
    tracep->declBit(c+609,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+608,"full", false,-1);
    tracep->declBit(c+609,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+610,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+611,"io_enq_ready", false,-1);
    tracep->declBit(c+775,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1508,"io_deq_ready", false,-1);
    tracep->declBit(c+612,"io_deq_valid", false,-1);
    tracep->declBit(c+613,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+612,"full", false,-1);
    tracep->declBit(c+613,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+614,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+615,"io_enq_ready", false,-1);
    tracep->declBit(c+776,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1509,"io_deq_ready", false,-1);
    tracep->declBit(c+616,"io_deq_valid", false,-1);
    tracep->declBit(c+617,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+616,"full", false,-1);
    tracep->declBit(c+617,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+618,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+619,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+620,"io_deq_valid", false,-1);
    tracep->declBit(c+621,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+620,"full", false,-1);
    tracep->declBit(c+621,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+622,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+623,"io_enq_ready", false,-1);
    tracep->declBit(c+777,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1510,"io_deq_ready", false,-1);
    tracep->declBit(c+624,"io_deq_valid", false,-1);
    tracep->declBit(c+625,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+624,"full", false,-1);
    tracep->declBit(c+625,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+626,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+627,"io_enq_ready", false,-1);
    tracep->declBit(c+778,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1511,"io_deq_ready", false,-1);
    tracep->declBit(c+628,"io_deq_valid", false,-1);
    tracep->declBit(c+629,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+628,"full", false,-1);
    tracep->declBit(c+629,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+630,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+631,"io_enq_ready", false,-1);
    tracep->declBit(c+779,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1512,"io_deq_ready", false,-1);
    tracep->declBit(c+632,"io_deq_valid", false,-1);
    tracep->declBit(c+633,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+632,"full", false,-1);
    tracep->declBit(c+633,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+634,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+635,"io_enq_ready", false,-1);
    tracep->declBit(c+780,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1513,"io_deq_ready", false,-1);
    tracep->declBit(c+636,"io_deq_valid", false,-1);
    tracep->declBit(c+637,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+636,"full", false,-1);
    tracep->declBit(c+637,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+638,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+639,"io_enq_ready", false,-1);
    tracep->declBit(c+781,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1514,"io_deq_ready", false,-1);
    tracep->declBit(c+640,"io_deq_valid", false,-1);
    tracep->declBit(c+641,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+640,"full", false,-1);
    tracep->declBit(c+641,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+642,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+643,"io_enq_ready", false,-1);
    tracep->declBit(c+782,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1515,"io_deq_ready", false,-1);
    tracep->declBit(c+644,"io_deq_valid", false,-1);
    tracep->declBit(c+645,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+644,"full", false,-1);
    tracep->declBit(c+645,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+646,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+647,"io_enq_ready", false,-1);
    tracep->declBit(c+783,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1516,"io_deq_ready", false,-1);
    tracep->declBit(c+648,"io_deq_valid", false,-1);
    tracep->declBit(c+649,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+648,"full", false,-1);
    tracep->declBit(c+649,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+650,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+651,"io_enq_ready", false,-1);
    tracep->declBit(c+784,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1517,"io_deq_ready", false,-1);
    tracep->declBit(c+652,"io_deq_valid", false,-1);
    tracep->declBit(c+653,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+652,"full", false,-1);
    tracep->declBit(c+653,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+654,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+655,"io_enq_ready", false,-1);
    tracep->declBit(c+785,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1518,"io_deq_ready", false,-1);
    tracep->declBit(c+656,"io_deq_valid", false,-1);
    tracep->declBit(c+657,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+656,"full", false,-1);
    tracep->declBit(c+657,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+658,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+659,"io_enq_ready", false,-1);
    tracep->declBit(c+786,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1519,"io_deq_ready", false,-1);
    tracep->declBit(c+660,"io_deq_valid", false,-1);
    tracep->declBit(c+661,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+660,"full", false,-1);
    tracep->declBit(c+661,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+662,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+663,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+664,"io_deq_valid", false,-1);
    tracep->declBit(c+665,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+664,"full", false,-1);
    tracep->declBit(c+665,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+666,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+667,"io_enq_ready", false,-1);
    tracep->declBit(c+787,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1520,"io_deq_ready", false,-1);
    tracep->declBit(c+668,"io_deq_valid", false,-1);
    tracep->declBit(c+669,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+668,"full", false,-1);
    tracep->declBit(c+669,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+670,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+671,"io_enq_ready", false,-1);
    tracep->declBit(c+788,"io_enq_valid", false,-1);
    tracep->declBit(c+373,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1521,"io_deq_ready", false,-1);
    tracep->declBit(c+672,"io_deq_valid", false,-1);
    tracep->declBit(c+673,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+672,"full", false,-1);
    tracep->declBit(c+673,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+674,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+675,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+676,"io_deq_valid", false,-1);
    tracep->declBit(c+677,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+676,"full", false,-1);
    tracep->declBit(c+677,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+678,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+679,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+680,"io_deq_valid", false,-1);
    tracep->declBit(c+681,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+680,"full", false,-1);
    tracep->declBit(c+681,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+682,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+683,"io_enq_ready", false,-1);
    tracep->declBit(c+96,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+684,"io_deq_valid", false,-1);
    tracep->declBit(c+685,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+684,"full", false,-1);
    tracep->declBit(c+685,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+686,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+687,"io_enq_ready", false,-1);
    tracep->declBit(c+97,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+688,"io_deq_valid", false,-1);
    tracep->declBit(c+689,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+688,"full", false,-1);
    tracep->declBit(c+689,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+690,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+691,"io_enq_ready", false,-1);
    tracep->declBit(c+98,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+692,"io_deq_valid", false,-1);
    tracep->declBit(c+693,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+692,"full", false,-1);
    tracep->declBit(c+693,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+694,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+695,"io_enq_ready", false,-1);
    tracep->declBit(c+99,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+696,"io_deq_valid", false,-1);
    tracep->declBit(c+697,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+696,"full", false,-1);
    tracep->declBit(c+697,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+698,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1723,"reset", false,-1);
    tracep->declBit(c+130,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1114,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1774,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1106,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1775,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1721,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1115,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1112,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1116,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1364,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1365,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1366,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+131,"auto_master_out_arready", false,-1);
    tracep->declBit(c+70,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+46,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"auto_master_out_rready", false,-1);
    tracep->declBit(c+412,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+413,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+414,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+415,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+416,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1723,"reset", false,-1);
    tracep->declBit(c+1767,"io_interrupt", false,-1);
    tracep->declBit(c+130,"io_master_awready", false,-1);
    tracep->declBit(c+1114,"io_master_awvalid", false,-1);
    tracep->declBus(c+1106,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1774,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1775,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1721,"io_master_wready", false,-1);
    tracep->declBit(c+1115,"io_master_wvalid", false,-1);
    tracep->declBus(c+1112,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"io_master_wlast", false,-1);
    tracep->declBit(c+1116,"io_master_bready", false,-1);
    tracep->declBit(c+1364,"io_master_bvalid", false,-1);
    tracep->declBus(c+1366,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1365,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+131,"io_master_arready", false,-1);
    tracep->declBit(c+70,"io_master_arvalid", false,-1);
    tracep->declBus(c+47,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+46,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+48,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"io_master_rready", false,-1);
    tracep->declBit(c+412,"io_master_rvalid", false,-1);
    tracep->declBus(c+415,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+414,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+416,"io_master_rlast", false,-1);
    tracep->declBus(c+413,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1796,"io_slave_awready", false,-1);
    tracep->declBit(c+1767,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1797,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1774,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1775,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1761,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1798,"io_slave_wready", false,-1);
    tracep->declBit(c+1767,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1797,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1774,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1767,"io_slave_wlast", false,-1);
    tracep->declBit(c+1767,"io_slave_bready", false,-1);
    tracep->declBit(c+1799,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1800,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1801,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1802,"io_slave_arready", false,-1);
    tracep->declBit(c+1767,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1797,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1774,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1775,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1761,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1776,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1767,"io_slave_rready", false,-1);
    tracep->declBit(c+1803,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1804,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1805,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1806,"io_slave_rlast", false,-1);
    tracep->declBus(c+1807,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBit(c+1619,"reset_ifu", false,-1);
    tracep->declBus(c+1620,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1621,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1622,"npc", false,-1, 31,0);
    tracep->declBit(c+1808,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1809,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1620,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1621,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1623,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1624,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1625,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1774,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1775,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1762,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1776,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1626,"ifu_arvalid", false,-1);
    tracep->declBit(c+137,"ifu_arready", false,-1);
    tracep->declBus(c+100,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+101,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+102,"ifu_rlast", false,-1);
    tracep->declBus(c+103,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+104,"ifu_rvalid", false,-1);
    tracep->declBit(c+1627,"ifu_rready", false,-1);
    tracep->declBit(c+1120,"bus_busy", false,-1);
    tracep->declBit(c+1810,"useless1", false,-1);
    tracep->declBit(c+1811,"useless2", false,-1);
    tracep->declBit(c+1812,"useless3", false,-1);
    tracep->declBit(c+1813,"useless4", false,-1);
    tracep->declBit(c+1628,"fencei", false,-1);
    tracep->declBus(c+1121,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1774,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1775,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1776,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1123,"lsu_arvalid", false,-1);
    tracep->declBit(c+138,"lsu_arready", false,-1);
    tracep->declBus(c+105,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+106,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+107,"lsu_rlast", false,-1);
    tracep->declBus(c+108,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+109,"lsu_rvalid", false,-1);
    tracep->declBit(c+1124,"lsu_rready", false,-1);
    tracep->declBus(c+1106,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1774,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1775,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1114,"lsu_awvalid", false,-1);
    tracep->declBit(c+130,"lsu_awready", false,-1);
    tracep->declBus(c+1112,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"lsu_wlast", false,-1);
    tracep->declBit(c+1115,"lsu_wvalid", false,-1);
    tracep->declBit(c+1721,"lsu_wready", false,-1);
    tracep->declBus(c+1366,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1365,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1364,"lsu_bvalid", false,-1);
    tracep->declBit(c+1116,"lsu_bready", false,-1);
    tracep->declBus(c+1629,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1774,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1775,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1630,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1776,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1631,"axi_arvalid", false,-1);
    tracep->declBit(c+139,"axi_arready", false,-1);
    tracep->declBus(c+110,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+111,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+112,"axi_rlast", false,-1);
    tracep->declBus(c+113,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+114,"axi_rvalid", false,-1);
    tracep->declBit(c+1632,"axi_rready", false,-1);
    tracep->declBus(c+1106,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1774,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1775,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1114,"axi_awvalid", false,-1);
    tracep->declBit(c+130,"axi_awready", false,-1);
    tracep->declBus(c+1112,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"axi_wlast", false,-1);
    tracep->declBit(c+1115,"axi_wvalid", false,-1);
    tracep->declBit(c+1721,"axi_wready", false,-1);
    tracep->declBus(c+1366,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1365,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1364,"axi_bvalid", false,-1);
    tracep->declBit(c+1116,"axi_bready", false,-1);
    tracep->declBus(c+115,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+116,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+117,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+118,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+119,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+120,"clint_arvalid", false,-1);
    tracep->declBit(c+1125,"clint_arready", false,-1);
    tracep->declBus(c+1126,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1127,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1128,"clint_rlast", false,-1);
    tracep->declBus(c+1774,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1129,"clint_rvalid", false,-1);
    tracep->declBit(c+121,"clint_rready", false,-1);
    tracep->declBus(c+1814,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1815,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1816,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1817,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1818,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1819,"clint_awvalid", false,-1);
    tracep->declBit(c+1130,"clint_awready", false,-1);
    tracep->declBus(c+1820,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1821,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1822,"clint_wlast", false,-1);
    tracep->declBit(c+1823,"clint_wvalid", false,-1);
    tracep->declBit(c+1131,"clint_wready", false,-1);
    tracep->declBus(c+1132,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1774,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1133,"clint_bvalid", false,-1);
    tracep->declBit(c+1824,"clint_bready", false,-1);
    tracep->declBus(c+1633,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1634,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1725,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1726,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1377,"a5", false,-1, 31,0);
    tracep->declBus(c+1635,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1725,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1726,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1636,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1727,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1637,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1638,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1639,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1640,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1641,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1642,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1643,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1644,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1645,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1646,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1647,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1648,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1649,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1650,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1651,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1652,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1134,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1653,"csr_write", false,-1);
    tracep->declBus(c+1654,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1378+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1135,"wdata", false,-1, 31,0);
    tracep->declBus(c+1136,"waddr", false,-1, 4,0);
    tracep->declBit(c+1137,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1382+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1138,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1139,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1140,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1141,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1825,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1142,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1143,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1144,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1145,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1146,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1147,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1148,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1149,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1150,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1151,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1152,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1153,"npc_valid", false,-1);
    tracep->declBit(c+1154,"rd_exu_valid", false,-1);
    tracep->declBus(c+1155,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1156,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1157,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1158,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1826,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1159,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1160,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1161,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1162,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1163,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1164,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1165,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1166,"ready_lsu_to_wbu", false,-1);
    tracep->declBit(c+1167,"rd_lsu_valid", false,-1);
    tracep->declBit(c+1168,"rd_wbu_valid", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBus(c+1625,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1774,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1775,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1762,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1776,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1626,"arvalid_i_a", false,-1);
    tracep->declBit(c+137,"arready_o_a", false,-1);
    tracep->declBus(c+100,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+101,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+102,"rlast_o_a", false,-1);
    tracep->declBus(c+103,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+104,"rvalid_o_a", false,-1);
    tracep->declBit(c+1627,"rready_i_a", false,-1);
    tracep->declBus(c+1827,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1774,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1775,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1761,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1776,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1767,"awvalid_i_a", false,-1);
    tracep->declBit(c+1828,"awready_o_a", false,-1);
    tracep->declBus(c+1827,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1774,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1767,"wlast_i_a", false,-1);
    tracep->declBit(c+1767,"wvalid_i_a", false,-1);
    tracep->declBit(c+1829,"wready_o_a", false,-1);
    tracep->declBus(c+1830,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1831,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1832,"bvalid_o_a", false,-1);
    tracep->declBit(c+1767,"bready_i_a", false,-1);
    tracep->declBus(c+1121,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1774,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1775,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1122,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1776,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1123,"arvalid_i_b", false,-1);
    tracep->declBit(c+138,"arready_o_b", false,-1);
    tracep->declBus(c+105,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+106,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+107,"rlast_o_b", false,-1);
    tracep->declBus(c+108,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+109,"rvalid_o_b", false,-1);
    tracep->declBit(c+1124,"rready_i_b", false,-1);
    tracep->declBus(c+1106,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1774,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1775,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1107,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1776,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1114,"awvalid_i_b", false,-1);
    tracep->declBit(c+130,"awready_o_b", false,-1);
    tracep->declBus(c+1112,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1113,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1111,"wlast_i_b", false,-1);
    tracep->declBit(c+1115,"wvalid_i_b", false,-1);
    tracep->declBit(c+1721,"wready_o_b", false,-1);
    tracep->declBus(c+1366,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1365,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1364,"bvalid_o_b", false,-1);
    tracep->declBit(c+1116,"bready_i_b", false,-1);
    tracep->declBus(c+1629,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1774,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1775,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1630,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1776,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1631,"arvalid_o", false,-1);
    tracep->declBit(c+139,"arready_i", false,-1);
    tracep->declBus(c+110,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+111,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+112,"rlast_i", false,-1);
    tracep->declBus(c+113,"rid_i", false,-1, 3,0);
    tracep->declBit(c+114,"rvalid_i", false,-1);
    tracep->declBit(c+1632,"rready_o", false,-1);
    tracep->declBus(c+1106,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1774,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1775,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1107,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1776,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1114,"awvalid_o", false,-1);
    tracep->declBit(c+130,"awready_i", false,-1);
    tracep->declBus(c+1112,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1113,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1111,"wlast_o", false,-1);
    tracep->declBit(c+1115,"wvalid_o", false,-1);
    tracep->declBit(c+1721,"wready_i", false,-1);
    tracep->declBus(c+1366,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1365,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1364,"bvalid_i", false,-1);
    tracep->declBit(c+1116,"bready_o", false,-1);
    tracep->declBit(c+1120,"bus_busy", false,-1);
    tracep->declBus(c+1833,"MASTER_A", false,-1, 0,0);
    tracep->declBus(c+1834,"MASTER_B", false,-1, 0,0);
    tracep->declBit(c+1169,"arb_grant", false,-1);
    tracep->declBit(c+1170,"arb_locked", false,-1);
    tracep->declBit(c+1171,"current_master", false,-1);
    tracep->declBit(c+1728,"ar_handshake", false,-1);
    tracep->declBit(c+1729,"r_last_handshake", false,-1);
    tracep->declBit(c+1655,"arb_grant_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBus(c+115,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+116,"arid_i", false,-1, 3,0);
    tracep->declBus(c+117,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+118,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+119,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+120,"arvalid_i", false,-1);
    tracep->declBit(c+1125,"arready_o", false,-1);
    tracep->declBus(c+1126,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1127,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1128,"rlast_o", false,-1);
    tracep->declBus(c+1774,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1129,"rvalid_o", false,-1);
    tracep->declBit(c+121,"rready_i", false,-1);
    tracep->declBus(c+1814,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1815,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1816,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1817,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1818,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1819,"awvalid_i", false,-1);
    tracep->declBit(c+1130,"awready_o", false,-1);
    tracep->declBus(c+1820,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1821,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1822,"wlast_i", false,-1);
    tracep->declBit(c+1823,"wvalid_i", false,-1);
    tracep->declBit(c+1131,"wready_o", false,-1);
    tracep->declBus(c+1132,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1774,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1133,"bvalid_o", false,-1);
    tracep->declBit(c+1824,"bready_i", false,-1);
    tracep->declBit(c+1172,"ar_state", false,-1);
    tracep->declBit(c+1173,"r_state", false,-1);
    tracep->declBit(c+1174,"aw_state", false,-1);
    tracep->declBit(c+1175,"w_state", false,-1);
    tracep->declBit(c+1835,"b_state", false,-1);
    tracep->declBus(c+1176,"araddr", false,-1, 31,0);
    tracep->declBus(c+1177,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1178,"wdata", false,-1, 31,0);
    tracep->declBus(c+1179,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1836,"wvalid", false,-1);
    tracep->declBit(c+1180,"flag_waddr", false,-1);
    tracep->declBit(c+1181,"flag_wdata", false,-1);
    tracep->declBit(c+1182,"flag_rdata", false,-1);
    tracep->declBit(c+1183,"flag_raddr", false,-1);
    tracep->declBit(c+1837,"flag_write", false,-1);
    tracep->declBus(c+1184,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1185,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1186,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1187,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1188,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1189,"lfsr_in", false,-1);
    tracep->declBus(c+1190,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1191,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBit(c+1619,"reset_ifu", false,-1);
    tracep->declBus(c+1635,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1725,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1726,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1636,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1727,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1637,"a_in_src_i", false,-1);
    tracep->declBus(c+1638,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1639,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1640,"adder_a_src_i", false,-1);
    tracep->declBit(c+1641,"adder_out_src_i", false,-1);
    tracep->declBus(c+1642,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1643,"MemRead_i", false,-1);
    tracep->declBit(c+1644,"MemWrite_i", false,-1);
    tracep->declBus(c+1645,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1646,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1647,"wb_src_i", false,-1);
    tracep->declBit(c+1648,"csr_write_i", false,-1);
    tracep->declBit(c+1649,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1650,"reg_write_i", false,-1);
    tracep->declBus(c+1651,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1652,"exu_valid_i", false,-1);
    tracep->declBit(c+1134,"exu_ready_o", false,-1);
    tracep->declBus(c+1138,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1139,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1140,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1141,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1622,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1142,"MemRead_o", false,-1);
    tracep->declBit(c+1143,"MemWrite_o", false,-1);
    tracep->declBus(c+1144,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1145,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1146,"wb_src_o", false,-1);
    tracep->declBit(c+1147,"csr_write_o", false,-1);
    tracep->declBit(c+1148,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1149,"reg_write_o", false,-1);
    tracep->declBus(c+1150,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1151,"exu_valid_o", false,-1);
    tracep->declBit(c+1152,"exu_ready_i", false,-1);
    tracep->declBit(c+1153,"npc_valid", false,-1);
    tracep->declBit(c+1154,"rd_exu_valid", false,-1);
    tracep->declBus(c+1193,"pc", false,-1, 31,0);
    tracep->declBus(c+1139,"rs1", false,-1, 31,0);
    tracep->declBus(c+1140,"rs2", false,-1, 31,0);
    tracep->declBus(c+1194,"imm", false,-1, 31,0);
    tracep->declBus(c+1195,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1196,"a_in_src", false,-1);
    tracep->declBus(c+1197,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1198,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1199,"adder_a_src", false,-1);
    tracep->declBit(c+1200,"adder_out_src", false,-1);
    tracep->declBus(c+1201,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1202,"npc_flag", false,-1);
    tracep->declBus(c+1203,"a_in", false,-1, 31,0);
    tracep->declBus(c+1204,"b_in", false,-1, 31,0);
    tracep->declBus(c+1205,"a_out", false,-1, 31,0);
    tracep->declBus(c+1206,"add_out", false,-1, 31,0);
    tracep->declBus(c+1207,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1138,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1622,"npc", false,-1, 31,0);
    tracep->declBit(c+1208,"zero", false,-1);
    tracep->declBus(c+1776,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1777,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1778,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1209,"current_state", false,-1, 1,0);
    tracep->declBus(c+1656,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1203,"a", false,-1, 31,0);
    tracep->declBus(c+1204,"b", false,-1, 31,0);
    tracep->declBus(c+1201,"op", false,-1, 3,0);
    tracep->declBus(c+1138,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1208,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1139,"d0", false,-1, 31,0);
    tracep->declBus(c+1193,"d1", false,-1, 31,0);
    tracep->declBit(c+1196,"sel", false,-1);
    tracep->declBus(c+1203,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1140,"d0", false,-1, 31,0);
    tracep->declBus(c+1194,"d1", false,-1, 31,0);
    tracep->declBus(c+1838,"d2", false,-1, 31,0);
    tracep->declBus(c+1195,"d3", false,-1, 31,0);
    tracep->declBus(c+1197,"sel", false,-1, 1,0);
    tracep->declBus(c+1204,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1205,"a", false,-1, 31,0);
    tracep->declBus(c+1194,"b", false,-1, 31,0);
    tracep->declBus(c+1206,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1193,"d0", false,-1, 31,0);
    tracep->declBus(c+1139,"d1", false,-1, 31,0);
    tracep->declBit(c+1199,"sel", false,-1);
    tracep->declBus(c+1205,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1206,"d0", false,-1, 31,0);
    tracep->declBus(c+1195,"d1", false,-1, 31,0);
    tracep->declBit(c+1200,"sel", false,-1);
    tracep->declBus(c+1207,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1210,"pc4", false,-1, 31,0);
    tracep->declBus(c+1207,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1198,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1208,"zero", false,-1);
    tracep->declBus(c+1138,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1622,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBit(c+1619,"reset_ifu", false,-1);
    tracep->declBus(c+1633,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1634,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1725,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1726,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1377,"a5", false,-1, 31,0);
    tracep->declBus(c+1620,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1621,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1623,"idu_valid_i", false,-1);
    tracep->declBit(c+1624,"idu_ready_o", false,-1);
    tracep->declBus(c+1635,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1725,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1726,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1636,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1727,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1637,"a_in_src_o", false,-1);
    tracep->declBus(c+1638,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1639,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1640,"adder_a_src_o", false,-1);
    tracep->declBit(c+1641,"adder_out_src_o", false,-1);
    tracep->declBus(c+1642,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1643,"MemRead_o", false,-1);
    tracep->declBit(c+1644,"MemWrite_o", false,-1);
    tracep->declBus(c+1645,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1646,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1647,"wb_src_o", false,-1);
    tracep->declBit(c+1648,"csr_write_o", false,-1);
    tracep->declBit(c+1649,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1650,"reg_write_o", false,-1);
    tracep->declBus(c+1651,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1652,"idu_valid_o", false,-1);
    tracep->declBit(c+1134,"idu_ready_i", false,-1);
    tracep->declBit(c+1653,"csr_write_i", false,-1);
    tracep->declBus(c+1654,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1414+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1628,"fencei", false,-1);
    tracep->declBus(c+1211,"exu_rd", false,-1, 4,0);
    tracep->declBus(c+1212,"lsu_rd", false,-1, 4,0);
    tracep->declBus(c+1213,"wbu_rd", false,-1, 4,0);
    tracep->declBus(c+1635,"pc", false,-1, 31,0);
    tracep->declBus(c+1657,"inst", false,-1, 31,0);
    tracep->declBus(c+1658,"opcode", false,-1, 6,0);
    tracep->declBus(c+1659,"wmask_tmp", false,-1, 7,0);
    tracep->declBit(c+1660,"opcode_r", false,-1);
    tracep->declBit(c+1661,"opcode_i", false,-1);
    tracep->declBit(c+1662,"opcode_s", false,-1);
    tracep->declBit(c+1663,"opcode_sb", false,-1);
    tracep->declBit(c+1664,"opcode_u", false,-1);
    tracep->declBit(c+1665,"opcode_uj", false,-1);
    tracep->declBit(c+1730,"isRAW", false,-1);
    tracep->declBit(c+1666,"flag", false,-1);
    tracep->declBit(c+1731,"exu_raw", false,-1);
    tracep->declBit(c+1732,"lsu_raw", false,-1);
    tracep->declBit(c+1733,"wbu_raw", false,-1);
    tracep->declBus(c+1776,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1777,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1778,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1667,"current_state", false,-1, 1,0);
    tracep->declBus(c+1668,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1657,"inst", false,-1, 31,0);
    tracep->declBus(c+1642,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1658,"opcode", false,-1, 6,0);
    tracep->declBus(c+1669,"funct3", false,-1, 2,0);
    tracep->declBus(c+1670,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1653,"wen", false,-1);
    tracep->declBus(c+1657,"inst", false,-1, 31,0);
    tracep->declBus(c+1654,"wdata", false,-1, 31,0);
    tracep->declBus(c+1377,"NO", false,-1, 31,0);
    tracep->declBus(c+1635,"pc", false,-1, 31,0);
    tracep->declBus(c+1727,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1418+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1422,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1423,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1424,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1425,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1839,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1840,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1658,"opcode", false,-1, 6,0);
    tracep->declBus(c+1669,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1657,"inst", false,-1, 31,0);
    tracep->declBit(c+1637,"a_in_src", false,-1);
    tracep->declBus(c+1638,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1650,"reg_write", false,-1);
    tracep->declBus(c+1639,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1640,"adder_a_src", false,-1);
    tracep->declBit(c+1643,"MemRead", false,-1);
    tracep->declBit(c+1644,"MemWrite", false,-1);
    tracep->declBus(c+1659,"wmask", false,-1, 7,0);
    tracep->declBit(c+1647,"wb_src", false,-1);
    tracep->declBus(c+1646,"rmask", false,-1, 2,0);
    tracep->declBit(c+1648,"csr_write", false,-1);
    tracep->declBit(c+1641,"adder_out_src", false,-1);
    tracep->declBit(c+1649,"csr_wdata_src", false,-1);
    tracep->declBus(c+1658,"opcode", false,-1, 6,0);
    tracep->declBus(c+1669,"funct3", false,-1, 2,0);
    tracep->declBus(c+1670,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1770,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1657,"inst", false,-1, 31,0);
    tracep->declBus(c+1636,"data", false,-1, 31,0);
    tracep->declBus(c+1658,"opcode", false,-1, 6,0);
    tracep->declBus(c+1669,"funct3", false,-1, 2,0);
    tracep->declBus(c+1670,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBus(c+1625,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1774,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1775,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1762,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1776,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1626,"arvalid_o", false,-1);
    tracep->declBit(c+137,"arready_i", false,-1);
    tracep->declBus(c+100,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+101,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+102,"rlast_i", false,-1);
    tracep->declBus(c+103,"rid_i", false,-1, 3,0);
    tracep->declBit(c+104,"rvalid_i", false,-1);
    tracep->declBit(c+1627,"rready_o", false,-1);
    tracep->declBus(c+1622,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1153,"npc_valid", false,-1);
    tracep->declBit(c+1619,"reset_o", false,-1);
    tracep->declBus(c+1620,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1621,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1623,"ifu_valid_o", false,-1);
    tracep->declBit(c+1624,"ifu_ready_i", false,-1);
    tracep->declBit(c+1120,"bus_busy", false,-1);
    tracep->declBus(c+1671,"pc_dbg", false,-1, 31,0);
    tracep->declBus(c+1761,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1758,"S_WAIT_R", false,-1, 2,0);
    tracep->declBus(c+1762,"S_OUT", false,-1, 2,0);
    tracep->declBus(c+1763,"S_FLUSH", false,-1, 2,0);
    tracep->declBus(c+1671,"pc_fetch", false,-1, 31,0);
    tracep->declBus(c+1672,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1673,"inst_buf", false,-1, 31,0);
    tracep->declBus(c+1674,"state", false,-1, 2,0);
    tracep->declBit(c+1675,"ctrl_hazard", false,-1);
    tracep->declBit(c+1676,"ar_inflight", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBus(c+1138,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1139,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1140,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1141,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1142,"MemRead_i", false,-1);
    tracep->declBit(c+1143,"MemWrite_i", false,-1);
    tracep->declBus(c+1144,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1145,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1146,"wb_src_i", false,-1);
    tracep->declBit(c+1147,"csr_write_i", false,-1);
    tracep->declBit(c+1148,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1149,"reg_write_i", false,-1);
    tracep->declBus(c+1150,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1151,"lsu_valid_i", false,-1);
    tracep->declBit(c+1152,"lsu_ready_o", false,-1);
    tracep->declBus(c+1155,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1156,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1157,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1158,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1159,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1160,"wb_src_o", false,-1);
    tracep->declBit(c+1161,"csr_write_o", false,-1);
    tracep->declBit(c+1162,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1163,"reg_write_o", false,-1);
    tracep->declBus(c+1164,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1165,"lsu_valid_o", false,-1);
    tracep->declBit(c+1166,"lsu_ready_i", false,-1);
    tracep->declBus(c+1121,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1774,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1775,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1122,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1776,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1123,"arvalid_o", false,-1);
    tracep->declBit(c+138,"arready_i", false,-1);
    tracep->declBus(c+105,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+106,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+107,"rlast_i", false,-1);
    tracep->declBus(c+108,"rid_i", false,-1, 3,0);
    tracep->declBit(c+109,"rvalid_i", false,-1);
    tracep->declBit(c+1124,"rready_o", false,-1);
    tracep->declBus(c+1106,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1774,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1775,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1107,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1776,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1114,"awvalid_o", false,-1);
    tracep->declBit(c+130,"awready_i", false,-1);
    tracep->declBus(c+1112,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1113,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1111,"wlast_o", false,-1);
    tracep->declBit(c+1115,"wvalid_o", false,-1);
    tracep->declBit(c+1721,"wready_i", false,-1);
    tracep->declBus(c+1366,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1365,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1364,"bvalid_i", false,-1);
    tracep->declBit(c+1116,"bready_o", false,-1);
    tracep->declBit(c+1120,"bus_busy", false,-1);
    tracep->declBit(c+1167,"rd_lsu_valid", false,-1);
    tracep->declBus(c+1155,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1156,"rs1", false,-1, 31,0);
    tracep->declBus(c+1841,"rs2", false,-1, 31,0);
    tracep->declBus(c+1842,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1159,"rmask", false,-1, 2,0);
    tracep->declBus(c+1214,"wmask", false,-1, 3,0);
    tracep->declBit(c+1215,"flag", false,-1);
    tracep->declBit(c+1843,"wvalid_tmp", false,-1);
    tracep->declBit(c+1216,"MemRead", false,-1);
    tracep->declBit(c+1217,"MemWrite", false,-1);
    tracep->declBit(c+1123,"arvalid", false,-1);
    tracep->declBus(c+1121,"araddr", false,-1, 31,0);
    tracep->declBit(c+1124,"rready", false,-1);
    tracep->declBus(c+1106,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1114,"awvalid", false,-1);
    tracep->declBus(c+1112,"wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1115,"wvalid", false,-1);
    tracep->declBit(c+1116,"bready", false,-1);
    tracep->declBit(c+1218,"read_mem", false,-1);
    tracep->declBit(c+1219,"write_mem", false,-1);
    tracep->declBus(c+1776,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1777,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1778,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1220,"current_state", false,-1, 1,0);
    tracep->declBus(c+1734,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1844,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1770,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBus(c+1135,"wdata", false,-1, 31,0);
    tracep->declBus(c+1136,"waddr", false,-1, 4,0);
    tracep->declBit(c+1137,"wen", false,-1);
    tracep->declBus(c+1633,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1725,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1634,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1726,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1377,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1426+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1458+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBus(c+1155,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1156,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1157,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1158,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1159,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1160,"wb_src_i", false,-1);
    tracep->declBit(c+1161,"csr_write_i", false,-1);
    tracep->declBit(c+1162,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1163,"reg_write_i", false,-1);
    tracep->declBus(c+1164,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1165,"wbu_valid_i", false,-1);
    tracep->declBit(c+1166,"wbu_ready_o", false,-1);
    tracep->declBus(c+1654,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1135,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1653,"csr_write_o", false,-1);
    tracep->declBit(c+1137,"reg_write_o", false,-1);
    tracep->declBus(c+1136,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1168,"rd_wbu_valid", false,-1);
    tracep->declBus(c+1221,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1222,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1223,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1224,"rs1", false,-1, 31,0);
    tracep->declBus(c+1225,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1226,"rmask", false,-1, 2,0);
    tracep->declBit(c+1227,"wb_src", false,-1);
    tracep->declBit(c+1228,"csr_wdata_src", false,-1);
    tracep->declBit(c+1229,"difftest_check", false,-1);
    tracep->declBit(c+1230,"difftest_check_flag", false,-1);
    tracep->declBus(c+1776,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1777,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1778,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1231,"current_state", false,-1, 1,0);
    tracep->declBus(c+1232,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1224,"d0", false,-1, 31,0);
    tracep->declBus(c+1225,"d1", false,-1, 31,0);
    tracep->declBit(c+1228,"sel", false,-1);
    tracep->declBus(c+1654,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1222,"read_data", false,-1, 31,0);
    tracep->declBus(c+1233,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1226,"rmask", false,-1, 2,0);
    tracep->declBus(c+1221,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1234,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1235,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1236,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1237,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1238,"byte3", false,-1, 31,0);
    tracep->declBus(c+1239,"byte2", false,-1, 31,0);
    tracep->declBus(c+1240,"byte1", false,-1, 31,0);
    tracep->declBus(c+1241,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1223,"d0", false,-1, 31,0);
    tracep->declBus(c+1221,"d1", false,-1, 31,0);
    tracep->declBit(c+1227,"sel", false,-1);
    tracep->declBus(c+1135,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1724,"rst_n", false,-1);
    tracep->declBus(c+1629,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1774,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1775,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1630,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1776,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1631,"axi_arvalid_i", false,-1);
    tracep->declBit(c+139,"axi_arready_o", false,-1);
    tracep->declBus(c+110,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+111,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+112,"axi_rlast_o", false,-1);
    tracep->declBus(c+113,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+114,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1632,"axi_rready_i", false,-1);
    tracep->declBus(c+1106,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1774,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1775,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1107,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1776,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1114,"axi_awvalid_i", false,-1);
    tracep->declBit(c+130,"axi_awready_o", false,-1);
    tracep->declBus(c+1112,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1113,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1111,"axi_wlast_i", false,-1);
    tracep->declBit(c+1115,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1721,"axi_wready_o", false,-1);
    tracep->declBus(c+1366,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1365,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1364,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1116,"axi_bready_i", false,-1);
    tracep->declBus(c+47,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+46,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+48,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+49,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+50,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+70,"sram_arvalid_o", false,-1);
    tracep->declBit(c+131,"sram_arready_i", false,-1);
    tracep->declBus(c+414,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+415,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+416,"sram_rlast_i", false,-1);
    tracep->declBus(c+413,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+412,"sram_rvalid_i", false,-1);
    tracep->declBit(c+71,"sram_rready_o", false,-1);
    tracep->declBus(c+1106,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1774,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1775,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1107,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1776,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1114,"sram_awvalid_o", false,-1);
    tracep->declBit(c+130,"sram_awready_i", false,-1);
    tracep->declBus(c+1112,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1113,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1111,"sram_wlast_o", false,-1);
    tracep->declBit(c+1115,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1721,"sram_wready_i", false,-1);
    tracep->declBus(c+1366,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1365,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1364,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1116,"sram_bready_o", false,-1);
    tracep->declBus(c+115,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+116,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+117,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+118,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+119,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+120,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1125,"clint_arready_i", false,-1);
    tracep->declBus(c+1126,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1127,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1128,"clint_rlast_i", false,-1);
    tracep->declBus(c+1774,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1129,"clint_rvalid_i", false,-1);
    tracep->declBit(c+121,"clint_rready_o", false,-1);
    tracep->declBus(c+1814,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1815,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1816,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1817,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1818,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1819,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1130,"clint_awready_i", false,-1);
    tracep->declBus(c+1820,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1821,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1822,"clint_wlast_o", false,-1);
    tracep->declBit(c+1823,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1131,"clint_wready_i", false,-1);
    tracep->declBus(c+1132,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1774,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1133,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1824,"clint_bready_o", false,-1);
    tracep->declBit(c+122,"ar_switch", false,-1);
    tracep->declBit(c+123,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"io_d", false,-1);
    tracep->declBit(c+699,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"io_d", false,-1);
    tracep->declBit(c+699,"io_q", false,-1);
    tracep->declBit(c+699,"sync_0", false,-1);
    tracep->declBit(c+700,"sync_1", false,-1);
    tracep->declBit(c+701,"sync_2", false,-1);
    tracep->declBit(c+702,"sync_3", false,-1);
    tracep->declBit(c+703,"sync_4", false,-1);
    tracep->declBit(c+704,"sync_5", false,-1);
    tracep->declBit(c+705,"sync_6", false,-1);
    tracep->declBit(c+706,"sync_7", false,-1);
    tracep->declBit(c+707,"sync_8", false,-1);
    tracep->declBit(c+708,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1327,"auto_in_psel", false,-1);
    tracep->declBit(c+1328,"auto_in_penable", false,-1);
    tracep->declBit(c+1317,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1326,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1316,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+805,"auto_in_pready", false,-1);
    tracep->declBit(c+1767,"auto_in_pslverr", false,-1);
    tracep->declBus(c+806,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1685,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1686,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1687,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1688,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1689,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1690,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1691,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1692,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1693,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1694,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1490,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1327,"in_psel", false,-1);
    tracep->declBit(c+1328,"in_penable", false,-1);
    tracep->declBus(c+1316,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1317,"in_pwrite", false,-1);
    tracep->declBus(c+1318,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+805,"in_pready", false,-1);
    tracep->declBus(c+806,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1767,"in_pslverr", false,-1);
    tracep->declBus(c+1685,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1686,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1687,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1688,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1689,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1690,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1691,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1692,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1693,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1694,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+816,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+806,"rdata", false,-1, 31,0);
    tracep->declBus(c+817,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+805,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+818,"num", false,-1, 3,0);
    tracep->declBus(c+1687,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+819,"num", false,-1, 3,0);
    tracep->declBus(c+1688,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+820,"num", false,-1, 3,0);
    tracep->declBus(c+1689,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+821,"num", false,-1, 3,0);
    tracep->declBus(c+1690,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+822,"num", false,-1, 3,0);
    tracep->declBus(c+1691,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+823,"num", false,-1, 3,0);
    tracep->declBus(c+1692,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+824,"num", false,-1, 3,0);
    tracep->declBus(c+1693,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+825,"num", false,-1, 3,0);
    tracep->declBus(c+1694,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1324,"auto_in_psel", false,-1);
    tracep->declBit(c+1325,"auto_in_penable", false,-1);
    tracep->declBit(c+1317,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1326,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1316,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+172,"auto_in_pready", false,-1);
    tracep->declBit(c+1767,"auto_in_pslverr", false,-1);
    tracep->declBus(c+173,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1695,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1696,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1490,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1324,"in_psel", false,-1);
    tracep->declBit(c+1325,"in_penable", false,-1);
    tracep->declBus(c+1316,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1317,"in_pwrite", false,-1);
    tracep->declBus(c+1318,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+172,"in_pready", false,-1);
    tracep->declBus(c+173,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1767,"in_pslverr", false,-1);
    tracep->declBit(c+1695,"ps2_clk", false,-1);
    tracep->declBit(c+1696,"ps2_data", false,-1);
    tracep->declBus(c+709,"data_r", false,-1, 7,0);
    tracep->declBus(c+710,"old_data", false,-1, 7,0);
    tracep->declBus(c+711,"data_asic", false,-1, 7,0);
    tracep->declBus(c+712,"buffer", false,-1, 7,0);
    tracep->declBit(c+713,"ready", false,-1);
    tracep->declBit(c+714,"nextdata_n", false,-1);
    tracep->declBit(c+715,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1735,"clrn", false,-1);
    tracep->declBit(c+1695,"ps2_clk", false,-1);
    tracep->declBit(c+1696,"ps2_data", false,-1);
    tracep->declBit(c+714,"nextdata_n", false,-1);
    tracep->declBus(c+712,"data", false,-1, 7,0);
    tracep->declBit(c+713,"ready", false,-1);
    tracep->declBit(c+715,"overflow", false,-1);
    tracep->declBus(c+716,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+717+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+725,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+726,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+727,"count", false,-1, 3,0);
    tracep->declBus(c+728,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+729,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1596,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1597,"auto_in_wvalid", false,-1);
    tracep->declBit(c+495,"auto_in_arready", false,-1);
    tracep->declBit(c+78,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+79,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+7,"auto_in_rready", false,-1);
    tracep->declBit(c+496,"auto_in_rvalid", false,-1);
    tracep->declBus(c+497,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+498,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+496,"state", false,-1);
    tracep->declBus(c+498,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+497,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+124,"raddr", false,-1, 31,0);
    tracep->declBit(c+125,"ren", false,-1);
    tracep->declBus(c+126,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1329,"auto_in_psel", false,-1);
    tracep->declBit(c+1330,"auto_in_penable", false,-1);
    tracep->declBit(c+1317,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1313,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1316,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1713,"auto_in_pready", false,-1);
    tracep->declBit(c+1767,"auto_in_pslverr", false,-1);
    tracep->declBus(c+174,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1706,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1677,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1707,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1313,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1329,"in_psel", false,-1);
    tracep->declBit(c+1330,"in_penable", false,-1);
    tracep->declBus(c+1316,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1317,"in_pwrite", false,-1);
    tracep->declBus(c+1318,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1713,"in_pready", false,-1);
    tracep->declBus(c+174,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1767,"in_pslverr", false,-1);
    tracep->declBit(c+1706,"qspi_sck", false,-1);
    tracep->declBit(c+1677,"qspi_ce_n", false,-1);
    tracep->declBus(c+1707,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1707,"din", false,-1, 3,0);
    tracep->declBus(c+1736,"dout", false,-1, 3,0);
    tracep->declBus(c+1678,"douten", false,-1, 3,0);
    tracep->declBit(c+1737,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1683,"clk_i", false,-1);
    tracep->declBit(c+1684,"rst_i", false,-1);
    tracep->declBus(c+1313,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1318,"dat_i", false,-1, 31,0);
    tracep->declBus(c+174,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1319,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1329,"cyc_i", false,-1);
    tracep->declBit(c+1329,"stb_i", false,-1);
    tracep->declBit(c+1737,"ack_o", false,-1);
    tracep->declBit(c+1317,"we_i", false,-1);
    tracep->declBit(c+1706,"sck", false,-1);
    tracep->declBit(c+1677,"ce_n", false,-1);
    tracep->declBus(c+1707,"din", false,-1, 3,0);
    tracep->declBus(c+1736,"dout", false,-1, 3,0);
    tracep->declBus(c+1678,"douten", false,-1, 3,0);
    tracep->declBus(c+1776,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1777,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1778,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+826,"mr_sck", false,-1);
    tracep->declBit(c+827,"mr_ce_n", false,-1);
    tracep->declBus(c+1707,"mr_din", false,-1, 3,0);
    tracep->declBus(c+828,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+829,"mr_doe", false,-1);
    tracep->declBit(c+830,"mw_sck", false,-1);
    tracep->declBit(c+831,"mw_ce_n", false,-1);
    tracep->declBus(c+1707,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1522,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+832,"mw_doe", false,-1);
    tracep->declBit(c+1679,"mr_rd", false,-1);
    tracep->declBit(c+833,"mr_done", false,-1);
    tracep->declBit(c+1680,"mw_wr", false,-1);
    tracep->declBit(c+1523,"mw_done", false,-1);
    tracep->declBit(c+1329,"wb_valid", false,-1);
    tracep->declBit(c+1491,"wb_we", false,-1);
    tracep->declBit(c+1492,"wb_re", false,-1);
    tracep->declBus(c+1534,"state", false,-1, 1,0);
    tracep->declBus(c+1738,"nstate", false,-1, 1,0);
    tracep->declBus(c+1739,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1740,"qpi_sck", false,-1);
    tracep->declBus(c+1493,"size", false,-1, 2,0);
    tracep->declBus(c+1494,"byte0", false,-1, 7,0);
    tracep->declBus(c+1495,"byte1", false,-1, 7,0);
    tracep->declBus(c+1496,"byte2", false,-1, 7,0);
    tracep->declBus(c+1497,"byte3", false,-1, 7,0);
    tracep->declBus(c+1741,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1735,"rst_n", false,-1);
    tracep->declBus(c+1498,"addr", false,-1, 23,0);
    tracep->declBit(c+1679,"rd", false,-1);
    tracep->declBus(c+1764,"size", false,-1, 2,0);
    tracep->declBit(c+833,"done", false,-1);
    tracep->declBus(c+174,"line", false,-1, 31,0);
    tracep->declBit(c+826,"sck", false,-1);
    tracep->declBit(c+827,"ce_n", false,-1);
    tracep->declBus(c+1707,"din", false,-1, 3,0);
    tracep->declBus(c+828,"dout", false,-1, 3,0);
    tracep->declBit(c+829,"douten", false,-1);
    tracep->declBus(c+1833,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1834,"READ", false,-1, 0,0);
    tracep->declBus(c+1845,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+834,"state", false,-1);
    tracep->declBit(c+1681,"nstate", false,-1);
    tracep->declBus(c+835,"counter", false,-1, 7,0);
    tracep->declBus(c+836,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+730+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1846,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+837,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1735,"rst_n", false,-1);
    tracep->declBus(c+1499,"addr", false,-1, 23,0);
    tracep->declBus(c+1741,"line", false,-1, 31,0);
    tracep->declBus(c+1493,"size", false,-1, 2,0);
    tracep->declBit(c+1680,"wr", false,-1);
    tracep->declBit(c+1523,"done", false,-1);
    tracep->declBit(c+830,"sck", false,-1);
    tracep->declBit(c+831,"ce_n", false,-1);
    tracep->declBus(c+1707,"din", false,-1, 3,0);
    tracep->declBus(c+1522,"dout", false,-1, 3,0);
    tracep->declBit(c+832,"douten", false,-1);
    tracep->declBus(c+1833,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1834,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1500,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+838,"state", false,-1);
    tracep->declBit(c+1682,"nstate", false,-1);
    tracep->declBus(c+839,"counter", false,-1, 7,0);
    tracep->declBus(c+840,"saddr", false,-1, 23,0);
    tracep->declBus(c+1847,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+127,"auto_in_awready", false,-1);
    tracep->declBit(c+1560,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1774,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1106,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1775,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+128,"auto_in_wready", false,-1);
    tracep->declBit(c+1561,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1112,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"auto_in_wlast", false,-1);
    tracep->declBit(c+295,"auto_in_bready", false,-1);
    tracep->declBit(c+811,"auto_in_bvalid", false,-1);
    tracep->declBus(c+810,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1776,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+129,"auto_in_arready", false,-1);
    tracep->declBit(c+52,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+296,"auto_in_rready", false,-1);
    tracep->declBit(c+815,"auto_in_rvalid", false,-1);
    tracep->declBus(c+810,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+841,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1776,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+814,"auto_in_rlast", false,-1);
    tracep->declBit(c+1708,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1531,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+800,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+801,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+802,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+803,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1709,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1532,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1533,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1612,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+127,"in_awready", false,-1);
    tracep->declBit(c+1560,"in_awvalid", false,-1);
    tracep->declBus(c+1106,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1774,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1775,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+128,"in_wready", false,-1);
    tracep->declBit(c+1561,"in_wvalid", false,-1);
    tracep->declBus(c+1112,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"in_wlast", false,-1);
    tracep->declBit(c+295,"in_bready", false,-1);
    tracep->declBit(c+811,"in_bvalid", false,-1);
    tracep->declBus(c+1776,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+810,"in_bid", false,-1, 3,0);
    tracep->declBit(c+129,"in_arready", false,-1);
    tracep->declBit(c+52,"in_arvalid", false,-1);
    tracep->declBus(c+47,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+46,"in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+296,"in_rready", false,-1);
    tracep->declBit(c+815,"in_rvalid", false,-1);
    tracep->declBus(c+1776,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+841,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+814,"in_rlast", false,-1);
    tracep->declBus(c+810,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1708,"sdram_clk", false,-1);
    tracep->declBit(c+1531,"sdram_cke", false,-1);
    tracep->declBit(c+800,"sdram_cs", false,-1);
    tracep->declBit(c+801,"sdram_ras", false,-1);
    tracep->declBit(c+802,"sdram_cas", false,-1);
    tracep->declBit(c+803,"sdram_we", false,-1);
    tracep->declBus(c+1709,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1532,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1533,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1612,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+842,"sdram_dout_en", false,-1);
    tracep->declBus(c+843,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1683,"clk_i", false,-1);
    tracep->declBit(c+1684,"rst_i", false,-1);
    tracep->declBit(c+1560,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1106,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1774,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1775,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1776,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1561,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1112,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1113,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1111,"inport_wlast_i", false,-1);
    tracep->declBit(c+295,"inport_bready_i", false,-1);
    tracep->declBit(c+52,"inport_arvalid_i", false,-1);
    tracep->declBus(c+47,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+46,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+48,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+50,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+296,"inport_rready_i", false,-1);
    tracep->declBus(c+1612,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+127,"inport_awready_o", false,-1);
    tracep->declBit(c+128,"inport_wready_o", false,-1);
    tracep->declBit(c+811,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1776,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+810,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+129,"inport_arready_o", false,-1);
    tracep->declBit(c+815,"inport_rvalid_o", false,-1);
    tracep->declBus(c+841,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1776,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+810,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+814,"inport_rlast_o", false,-1);
    tracep->declBit(c+1708,"sdram_clk_o", false,-1);
    tracep->declBit(c+1531,"sdram_cke_o", false,-1);
    tracep->declBit(c+800,"sdram_cs_o", false,-1);
    tracep->declBit(c+801,"sdram_ras_o", false,-1);
    tracep->declBit(c+802,"sdram_cas_o", false,-1);
    tracep->declBit(c+803,"sdram_we_o", false,-1);
    tracep->declBus(c+1533,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1709,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1532,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+843,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+842,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1756,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1848,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1849,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1850,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+140,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+141,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+142,"ram_rd_w", false,-1);
    tracep->declBit(c+1535,"ram_accept_w", false,-1);
    tracep->declBus(c+1112,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+844,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1742,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+845,"ram_ack_w", false,-1);
    tracep->declBit(c+1767,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1683,"clk_i", false,-1);
    tracep->declBit(c+1684,"rst_i", false,-1);
    tracep->declBit(c+1560,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1106,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1774,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1775,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1776,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1561,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1112,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1113,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1111,"axi_wlast_i", false,-1);
    tracep->declBit(c+295,"axi_bready_i", false,-1);
    tracep->declBit(c+52,"axi_arvalid_i", false,-1);
    tracep->declBus(c+47,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+46,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+48,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+50,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+296,"axi_rready_i", false,-1);
    tracep->declBit(c+1535,"ram_accept_i", false,-1);
    tracep->declBit(c+845,"ram_ack_i", false,-1);
    tracep->declBit(c+1767,"ram_error_i", false,-1);
    tracep->declBus(c+844,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+127,"axi_awready_o", false,-1);
    tracep->declBit(c+128,"axi_wready_o", false,-1);
    tracep->declBit(c+811,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1776,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+810,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+129,"axi_arready_o", false,-1);
    tracep->declBit(c+815,"axi_rvalid_o", false,-1);
    tracep->declBus(c+841,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1776,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+810,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+814,"axi_rlast_o", false,-1);
    tracep->declBus(c+141,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+142,"ram_rd_o", false,-1);
    tracep->declBus(c+1742,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+140,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1112,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+846,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+847,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+848,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+849,"req_rd_q", false,-1);
    tracep->declBit(c+850,"req_wr_q", false,-1);
    tracep->declBus(c+851,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+852,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+853,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+854,"req_prio_q", false,-1);
    tracep->declBit(c+855,"req_hold_rd_q", false,-1);
    tracep->declBit(c+856,"req_hold_wr_q", false,-1);
    tracep->declBit(c+857,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+143,"req_push_w", false,-1);
    tracep->declBus(c+1743,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+858,"req_out_valid_w", false,-1);
    tracep->declBus(c+859,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1524,"resp_accept_w", false,-1);
    tracep->declBit(c+860,"resp_is_write_w", false,-1);
    tracep->declBit(c+861,"resp_is_read_w", false,-1);
    tracep->declBit(c+814,"resp_is_last_w", false,-1);
    tracep->declBus(c+810,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+862,"resp_valid_w", false,-1);
    tracep->declBit(c+863,"write_prio_w", false,-1);
    tracep->declBit(c+864,"read_prio_w", false,-1);
    tracep->declBit(c+144,"write_active_w", false,-1);
    tracep->declBit(c+142,"read_active_w", false,-1);
    tracep->declBus(c+140,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1744,"wr_w", false,-1);
    tracep->declBit(c+142,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1851,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1771,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1850,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1683,"clk_i", false,-1);
    tracep->declBit(c+1684,"rst_i", false,-1);
    tracep->declBus(c+1743,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+143,"push_i", false,-1);
    tracep->declBit(c+1524,"pop_i", false,-1);
    tracep->declBus(c+859,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+857,"accept_o", false,-1);
    tracep->declBit(c+858,"valid_o", false,-1);
    tracep->declBus(c+1852,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+865+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+869,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+870,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+871,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1771,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1850,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1683,"clk_i", false,-1);
    tracep->declBit(c+1684,"rst_i", false,-1);
    tracep->declBus(c+844,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+845,"push_i", false,-1);
    tracep->declBit(c+1524,"pop_i", false,-1);
    tracep->declBus(c+841,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+872,"accept_o", false,-1);
    tracep->declBit(c+862,"valid_o", false,-1);
    tracep->declBus(c+1852,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+873+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+877,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+878,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+879,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1683,"clk_i", false,-1);
    tracep->declBit(c+1684,"rst_i", false,-1);
    tracep->declBus(c+141,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+142,"inport_rd_i", false,-1);
    tracep->declBus(c+1742,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+140,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1112,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1612,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1535,"inport_accept_o", false,-1);
    tracep->declBit(c+845,"inport_ack_o", false,-1);
    tracep->declBit(c+1767,"inport_error_o", false,-1);
    tracep->declBus(c+844,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1708,"sdram_clk_o", false,-1);
    tracep->declBit(c+1531,"sdram_cke_o", false,-1);
    tracep->declBit(c+800,"sdram_cs_o", false,-1);
    tracep->declBit(c+801,"sdram_ras_o", false,-1);
    tracep->declBit(c+802,"sdram_cas_o", false,-1);
    tracep->declBit(c+803,"sdram_we_o", false,-1);
    tracep->declBus(c+1533,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1709,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1532,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+843,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+842,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1756,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1848,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1849,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1850,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1850,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1771,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1771,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1853,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1854,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1855,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1856,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1771,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1857,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1858,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1859,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1860,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1861,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1862,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1774,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1864,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1771,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1774,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1863,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1862,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1858,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1860,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1859,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1861,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1857,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1865,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1866,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1867,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1867,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1770,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1867,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1850,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1850,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1851,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+140,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+141,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+142,"ram_rd_w", false,-1);
    tracep->declBit(c+1535,"ram_accept_w", false,-1);
    tracep->declBus(c+1112,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+844,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+845,"ram_ack_w", false,-1);
    tracep->declBit(c+145,"ram_req_w", false,-1);
    tracep->declBus(c+880,"command_q", false,-1, 3,0);
    tracep->declBus(c+1536,"addr_q", false,-1, 12,0);
    tracep->declBus(c+843,"data_q", false,-1, 31,0);
    tracep->declBit(c+881,"data_rd_en_q", false,-1);
    tracep->declBus(c+1533,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1531,"cke_q", false,-1);
    tracep->declBus(c+1532,"bank_q", false,-1, 1,0);
    tracep->declBus(c+844,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+882,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1612,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+883,"refresh_q", false,-1);
    tracep->declBus(c+884,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+885+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1537,"state_q", false,-1, 3,0);
    tracep->declBus(c+146,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+147,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+889,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+890,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+148,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+149,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+150,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1771,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+891,"delay_q", false,-1, 3,0);
    tracep->declBus(c+151,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1868,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1538,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+892,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+893,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+894,"idx", false,-1, 31,0);
    tracep->declBus(c+895,"rd_q", false,-1, 3,0);
    tracep->declBit(c+845,"ack_q", false,-1);
    tracep->declArray(c+1539,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1334,"auto_in_psel", false,-1);
    tracep->declBit(c+1335,"auto_in_penable", false,-1);
    tracep->declBit(c+1317,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1323,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1316,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+807,"auto_in_pready", false,-1);
    tracep->declBit(c+808,"auto_in_pslverr", false,-1);
    tracep->declBus(c+809,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+799,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1529,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1530,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1705,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1869,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1870,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1773,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1501,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1334,"in_psel", false,-1);
    tracep->declBit(c+1335,"in_penable", false,-1);
    tracep->declBus(c+1316,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1317,"in_pwrite", false,-1);
    tracep->declBus(c+1318,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+807,"in_pready", false,-1);
    tracep->declBus(c+809,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+808,"in_pslverr", false,-1);
    tracep->declBit(c+799,"spi_sck", false,-1);
    tracep->declBus(c+1529,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1530,"spi_mosi", false,-1);
    tracep->declBit(c+1705,"spi_miso", false,-1);
    tracep->declBit(c+896,"spi_irq_out", false,-1);
    tracep->declBus(c+1871,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1872,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1871,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1873,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1874,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1875,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1774,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1863,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1862,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1858,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1860,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1859,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1861,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1857,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1865,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1866,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1876,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+897,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1525,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+898,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+899,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+900,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+901,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+902,"wb_we_i", false,-1);
    tracep->declBit(c+903,"wb_stb_i", false,-1);
    tracep->declBit(c+904,"wb_cyc_i", false,-1);
    tracep->declBit(c+905,"wb_ack_o", false,-1);
    tracep->declBit(c+1767,"wb_err_o", false,-1);
    tracep->declBit(c+906,"wb_int_o", false,-1);
    tracep->declBit(c+907,"done", false,-1);
    tracep->declBus(c+908,"paddr", false,-1, 31,0);
    tracep->declQuad(c+909,"data", false,-1, 63,0);
    tracep->declBit(c+911,"is_flash_access", false,-1);
    tracep->declBus(c+912,"tmp", false,-1, 31,0);
    tracep->declQuad(c+913,"tmp64", false,-1, 63,0);
    tracep->declBus(c+915,"counter", false,-1, 7,0);
    tracep->declBit(c+916,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1772,"Tp", false,-1, 31,0);
    tracep->declBit(c+1683,"wb_clk_i", false,-1);
    tracep->declBit(c+1684,"wb_rst_i", false,-1);
    tracep->declBus(c+898,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+899,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+900,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+901,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+902,"wb_we_i", false,-1);
    tracep->declBit(c+903,"wb_stb_i", false,-1);
    tracep->declBit(c+904,"wb_cyc_i", false,-1);
    tracep->declBit(c+905,"wb_ack_o", false,-1);
    tracep->declBit(c+1767,"wb_err_o", false,-1);
    tracep->declBit(c+906,"wb_int_o", false,-1);
    tracep->declBus(c+1529,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+799,"sclk_pad_o", false,-1);
    tracep->declBit(c+1530,"mosi_pad_o", false,-1);
    tracep->declBit(c+1705,"miso_pad_i", false,-1);
    tracep->declBus(c+917,"divider", false,-1, 15,0);
    tracep->declBus(c+918,"ctrl", false,-1, 13,0);
    tracep->declBus(c+919,"ss", false,-1, 7,0);
    tracep->declBus(c+920,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+921,"rx", false,-1, 127,0);
    tracep->declBit(c+925,"rx_negedge", false,-1);
    tracep->declBit(c+926,"tx_negedge", false,-1);
    tracep->declBus(c+927,"char_len", false,-1, 6,0);
    tracep->declBit(c+928,"go", false,-1);
    tracep->declBit(c+929,"lsb", false,-1);
    tracep->declBit(c+930,"ie", false,-1);
    tracep->declBit(c+931,"ass", false,-1);
    tracep->declBit(c+932,"spi_divider_sel", false,-1);
    tracep->declBit(c+933,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+934,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+935,"spi_ss_sel", false,-1);
    tracep->declBit(c+936,"tip", false,-1);
    tracep->declBit(c+937,"pos_edge", false,-1);
    tracep->declBit(c+938,"neg_edge", false,-1);
    tracep->declBit(c+939,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1772,"Tp", false,-1, 31,0);
    tracep->declBit(c+1683,"clk_in", false,-1);
    tracep->declBit(c+1684,"rst", false,-1);
    tracep->declBit(c+936,"enable", false,-1);
    tracep->declBit(c+928,"go", false,-1);
    tracep->declBit(c+939,"last_clk", false,-1);
    tracep->declBus(c+917,"divider", false,-1, 15,0);
    tracep->declBit(c+799,"clk_out", false,-1);
    tracep->declBit(c+937,"pos_edge", false,-1);
    tracep->declBit(c+938,"neg_edge", false,-1);
    tracep->declBus(c+940,"cnt", false,-1, 15,0);
    tracep->declBit(c+941,"cnt_zero", false,-1);
    tracep->declBit(c+942,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1772,"Tp", false,-1, 31,0);
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1684,"rst", false,-1);
    tracep->declBus(c+943,"latch", false,-1, 3,0);
    tracep->declBus(c+901,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+927,"len", false,-1, 6,0);
    tracep->declBit(c+929,"lsb", false,-1);
    tracep->declBit(c+928,"go", false,-1);
    tracep->declBit(c+937,"pos_edge", false,-1);
    tracep->declBit(c+938,"neg_edge", false,-1);
    tracep->declBit(c+925,"rx_negedge", false,-1);
    tracep->declBit(c+926,"tx_negedge", false,-1);
    tracep->declBit(c+936,"tip", false,-1);
    tracep->declBit(c+939,"last", false,-1);
    tracep->declBus(c+899,"p_in", false,-1, 31,0);
    tracep->declArray(c+921,"p_out", false,-1, 127,0);
    tracep->declBit(c+799,"s_clk", false,-1);
    tracep->declBit(c+1705,"s_in", false,-1);
    tracep->declBit(c+1530,"s_out", false,-1);
    tracep->declBus(c+944,"cnt", false,-1, 7,0);
    tracep->declArray(c+921,"data", false,-1, 127,0);
    tracep->declBus(c+945,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+946,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+947,"rx_clk", false,-1);
    tracep->declBit(c+948,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1331,"auto_in_psel", false,-1);
    tracep->declBit(c+1332,"auto_in_penable", false,-1);
    tracep->declBit(c+1317,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1326,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1316,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1333,"auto_in_pready", false,-1);
    tracep->declBit(c+1767,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1714,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1703,"uart_rx", false,-1);
    tracep->declBit(c+1704,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1331,"in_psel", false,-1);
    tracep->declBit(c+1332,"in_penable", false,-1);
    tracep->declBus(c+1316,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1333,"in_pready", false,-1);
    tracep->declBit(c+1767,"in_pslverr", false,-1);
    tracep->declBus(c+1490,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1317,"in_pwrite", false,-1);
    tracep->declBus(c+1714,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1318,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1703,"uart_rx", false,-1);
    tracep->declBit(c+1704,"uart_tx", false,-1);
    tracep->declBit(c+949,"rtsn", false,-1);
    tracep->declBit(c+1767,"ctsn", false,-1);
    tracep->declBit(c+950,"dtr_pad_o", false,-1);
    tracep->declBit(c+1767,"dsr_pad_i", false,-1);
    tracep->declBit(c+1767,"ri_pad_i", false,-1);
    tracep->declBit(c+1767,"dcd_pad_i", false,-1);
    tracep->declBit(c+951,"interrupt", false,-1);
    tracep->declBit(c+1745,"reg_we", false,-1);
    tracep->declBit(c+1746,"reg_re", false,-1);
    tracep->declBus(c+1502,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1503,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+734,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1526,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+952,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1684,"wb_rst_i", false,-1);
    tracep->declBus(c+1502,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1504,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1526,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1745,"wb_we_i", false,-1);
    tracep->declBit(c+1746,"wb_re_i", false,-1);
    tracep->declBit(c+1704,"stx_pad_o", false,-1);
    tracep->declBit(c+1703,"srx_pad_i", false,-1);
    tracep->declBus(c+1865,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+952,"rts_pad_o", false,-1);
    tracep->declBit(c+950,"dtr_pad_o", false,-1);
    tracep->declBit(c+951,"int_o", false,-1);
    tracep->declBit(c+953,"enable", false,-1);
    tracep->declBit(c+954,"srx_pad", false,-1);
    tracep->declBus(c+955,"ier", false,-1, 3,0);
    tracep->declBus(c+956,"iir", false,-1, 3,0);
    tracep->declBus(c+957,"fcr", false,-1, 1,0);
    tracep->declBus(c+958,"mcr", false,-1, 4,0);
    tracep->declBus(c+959,"lcr", false,-1, 7,0);
    tracep->declBus(c+960,"msr", false,-1, 7,0);
    tracep->declBus(c+961,"dl", false,-1, 15,0);
    tracep->declBus(c+962,"scratch", false,-1, 7,0);
    tracep->declBit(c+963,"start_dlc", false,-1);
    tracep->declBit(c+964,"lsr_mask_d", false,-1);
    tracep->declBit(c+965,"msi_reset", false,-1);
    tracep->declBus(c+966,"dlc", false,-1, 15,0);
    tracep->declBus(c+967,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+968,"rx_reset", false,-1);
    tracep->declBit(c+969,"tx_reset", false,-1);
    tracep->declBit(c+970,"dlab", false,-1);
    tracep->declBit(c+1768,"cts_pad_i", false,-1);
    tracep->declBit(c+1767,"dsr_pad_i", false,-1);
    tracep->declBit(c+1767,"ri_pad_i", false,-1);
    tracep->declBit(c+1767,"dcd_pad_i", false,-1);
    tracep->declBit(c+971,"loopback", false,-1);
    tracep->declBit(c+1767,"cts", false,-1);
    tracep->declBit(c+1768,"dsr", false,-1);
    tracep->declBit(c+1768,"ri", false,-1);
    tracep->declBit(c+1768,"dcd", false,-1);
    tracep->declBit(c+972,"cts_c", false,-1);
    tracep->declBit(c+973,"dsr_c", false,-1);
    tracep->declBit(c+974,"ri_c", false,-1);
    tracep->declBit(c+975,"dcd_c", false,-1);
    tracep->declBus(c+976,"lsr", false,-1, 7,0);
    tracep->declBit(c+977,"lsr0", false,-1);
    tracep->declBit(c+978,"lsr1", false,-1);
    tracep->declBit(c+979,"lsr2", false,-1);
    tracep->declBit(c+980,"lsr3", false,-1);
    tracep->declBit(c+981,"lsr4", false,-1);
    tracep->declBit(c+982,"lsr5", false,-1);
    tracep->declBit(c+983,"lsr6", false,-1);
    tracep->declBit(c+984,"lsr7", false,-1);
    tracep->declBit(c+985,"lsr0r", false,-1);
    tracep->declBit(c+986,"lsr1r", false,-1);
    tracep->declBit(c+987,"lsr2r", false,-1);
    tracep->declBit(c+988,"lsr3r", false,-1);
    tracep->declBit(c+989,"lsr4r", false,-1);
    tracep->declBit(c+990,"lsr5r", false,-1);
    tracep->declBit(c+991,"lsr6r", false,-1);
    tracep->declBit(c+992,"lsr7r", false,-1);
    tracep->declBit(c+32,"lsr_mask", false,-1);
    tracep->declBit(c+993,"rls_int", false,-1);
    tracep->declBit(c+994,"rda_int", false,-1);
    tracep->declBit(c+995,"ti_int", false,-1);
    tracep->declBit(c+996,"thre_int", false,-1);
    tracep->declBit(c+997,"ms_int", false,-1);
    tracep->declBit(c+998,"tf_push", false,-1);
    tracep->declBit(c+999,"rf_pop", false,-1);
    tracep->declBus(c+1747,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1000,"rf_error_bit", false,-1);
    tracep->declBit(c+978,"rf_overrun", false,-1);
    tracep->declBit(c+1001,"rf_push_pulse", false,-1);
    tracep->declBus(c+1002,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1003,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1004,"tstate", false,-1, 2,0);
    tracep->declBus(c+1005,"rstate", false,-1, 3,0);
    tracep->declBus(c+1006,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1007,"thre_set_en", false,-1);
    tracep->declBus(c+1008,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1009,"block_value", false,-1, 7,0);
    tracep->declBit(c+1010,"serial_out", false,-1);
    tracep->declBit(c+1011,"serial_in", false,-1);
    tracep->declBit(c+33,"lsr_mask_condition", false,-1);
    tracep->declBit(c+34,"iir_read", false,-1);
    tracep->declBit(c+35,"msr_read", false,-1);
    tracep->declBit(c+36,"fifo_read", false,-1);
    tracep->declBit(c+37,"fifo_write", false,-1);
    tracep->declBus(c+1012,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1013,"lsr0_d", false,-1);
    tracep->declBit(c+1014,"lsr1_d", false,-1);
    tracep->declBit(c+1015,"lsr2_d", false,-1);
    tracep->declBit(c+1016,"lsr3_d", false,-1);
    tracep->declBit(c+1017,"lsr4_d", false,-1);
    tracep->declBit(c+1018,"lsr5_d", false,-1);
    tracep->declBit(c+1019,"lsr6_d", false,-1);
    tracep->declBit(c+1020,"lsr7_d", false,-1);
    tracep->declBit(c+1021,"rls_int_d", false,-1);
    tracep->declBit(c+1022,"thre_int_d", false,-1);
    tracep->declBit(c+1023,"ms_int_d", false,-1);
    tracep->declBit(c+1024,"ti_int_d", false,-1);
    tracep->declBit(c+1025,"rda_int_d", false,-1);
    tracep->declBit(c+1026,"rls_int_rise", false,-1);
    tracep->declBit(c+1027,"thre_int_rise", false,-1);
    tracep->declBit(c+1028,"ms_int_rise", false,-1);
    tracep->declBit(c+1029,"ti_int_rise", false,-1);
    tracep->declBit(c+1030,"rda_int_rise", false,-1);
    tracep->declBit(c+1031,"rls_int_pnd", false,-1);
    tracep->declBit(c+1032,"rda_int_pnd", false,-1);
    tracep->declBit(c+1033,"thre_int_pnd", false,-1);
    tracep->declBit(c+1034,"ms_int_pnd", false,-1);
    tracep->declBit(c+1035,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1772,"Tp", false,-1, 31,0);
    tracep->declBus(c+1772,"width", false,-1, 31,0);
    tracep->declBus(c+1834,"init_value", false,-1, 0,0);
    tracep->declBit(c+1684,"rst_i", false,-1);
    tracep->declBit(c+1683,"clk_i", false,-1);
    tracep->declBit(c+1767,"stage1_rst_i", false,-1);
    tracep->declBit(c+1768,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1703,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+954,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1036,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1684,"wb_rst_i", false,-1);
    tracep->declBus(c+959,"lcr", false,-1, 7,0);
    tracep->declBit(c+999,"rf_pop", false,-1);
    tracep->declBit(c+1011,"srx_pad_i", false,-1);
    tracep->declBit(c+953,"enable", false,-1);
    tracep->declBit(c+968,"rx_reset", false,-1);
    tracep->declBit(c+32,"lsr_mask", false,-1);
    tracep->declBus(c+1006,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1002,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1747,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+978,"rf_overrun", false,-1);
    tracep->declBit(c+1000,"rf_error_bit", false,-1);
    tracep->declBus(c+1005,"rstate", false,-1, 3,0);
    tracep->declBit(c+1001,"rf_push_pulse", false,-1);
    tracep->declBus(c+1037,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1038,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1039,"rshift", false,-1, 7,0);
    tracep->declBit(c+1040,"rparity", false,-1);
    tracep->declBit(c+1041,"rparity_error", false,-1);
    tracep->declBit(c+1042,"rframing_error", false,-1);
    tracep->declBit(c+1043,"rbit_in", false,-1);
    tracep->declBit(c+1044,"rparity_xor", false,-1);
    tracep->declBus(c+1045,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1046,"rf_push_q", false,-1);
    tracep->declBus(c+1047,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1048,"rf_push", false,-1);
    tracep->declBit(c+1049,"break_error", false,-1);
    tracep->declBit(c+1050,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1051,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1052,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1053,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1774,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1863,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1862,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1858,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1860,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1859,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1861,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1857,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1865,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1866,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1877,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1054,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1055,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1878,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1879,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1771,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1844,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1684,"wb_rst_i", false,-1);
    tracep->declBit(c+1001,"push", false,-1);
    tracep->declBit(c+999,"pop", false,-1);
    tracep->declBus(c+1047,"data_in", false,-1, 10,0);
    tracep->declBit(c+968,"fifo_reset", false,-1);
    tracep->declBit(c+32,"reset_status", false,-1);
    tracep->declBus(c+1747,"data_out", false,-1, 10,0);
    tracep->declBit(c+978,"overrun", false,-1);
    tracep->declBus(c+1002,"count", false,-1, 4,0);
    tracep->declBit(c+1000,"error_bit", false,-1);
    tracep->declBus(c+1748,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1056+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1072,"top", false,-1, 3,0);
    tracep->declBus(c+1073,"bottom", false,-1, 3,0);
    tracep->declBus(c+1074,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1075,"word0", false,-1, 2,0);
    tracep->declBus(c+1076,"word1", false,-1, 2,0);
    tracep->declBus(c+1077,"word2", false,-1, 2,0);
    tracep->declBus(c+1078,"word3", false,-1, 2,0);
    tracep->declBus(c+1079,"word4", false,-1, 2,0);
    tracep->declBus(c+1080,"word5", false,-1, 2,0);
    tracep->declBus(c+1081,"word6", false,-1, 2,0);
    tracep->declBus(c+1082,"word7", false,-1, 2,0);
    tracep->declBus(c+1083,"word8", false,-1, 2,0);
    tracep->declBus(c+1084,"word9", false,-1, 2,0);
    tracep->declBus(c+1085,"word10", false,-1, 2,0);
    tracep->declBus(c+1086,"word11", false,-1, 2,0);
    tracep->declBus(c+1087,"word12", false,-1, 2,0);
    tracep->declBus(c+1088,"word13", false,-1, 2,0);
    tracep->declBus(c+1089,"word14", false,-1, 2,0);
    tracep->declBus(c+1090,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1771,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1773,"data_width", false,-1, 31,0);
    tracep->declBus(c+1879,"depth", false,-1, 31,0);
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1001,"we", false,-1);
    tracep->declBus(c+1072,"a", false,-1, 3,0);
    tracep->declBus(c+1073,"dpra", false,-1, 3,0);
    tracep->declBus(c+1091,"di", false,-1, 7,0);
    tracep->declBus(c+1748,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+735+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1684,"wb_rst_i", false,-1);
    tracep->declBus(c+959,"lcr", false,-1, 7,0);
    tracep->declBit(c+998,"tf_push", false,-1);
    tracep->declBus(c+1504,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+953,"enable", false,-1);
    tracep->declBit(c+969,"tx_reset", false,-1);
    tracep->declBit(c+32,"lsr_mask", false,-1);
    tracep->declBit(c+1010,"stx_pad_o", false,-1);
    tracep->declBus(c+1004,"tstate", false,-1, 2,0);
    tracep->declBus(c+1003,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1092,"counter", false,-1, 4,0);
    tracep->declBus(c+1093,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1094,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1095,"stx_o_tmp", false,-1);
    tracep->declBit(c+1096,"parity_xor", false,-1);
    tracep->declBit(c+1097,"tf_pop", false,-1);
    tracep->declBit(c+1098,"bit_out", false,-1);
    tracep->declBus(c+1504,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1527,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1099,"tf_overrun", false,-1);
    tracep->declBus(c+1761,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1758,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1762,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1763,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1764,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1880,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1773,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1879,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1771,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1844,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+1684,"wb_rst_i", false,-1);
    tracep->declBit(c+998,"push", false,-1);
    tracep->declBit(c+1097,"pop", false,-1);
    tracep->declBus(c+1504,"data_in", false,-1, 7,0);
    tracep->declBit(c+969,"fifo_reset", false,-1);
    tracep->declBit(c+32,"reset_status", false,-1);
    tracep->declBus(c+1527,"data_out", false,-1, 7,0);
    tracep->declBit(c+1099,"overrun", false,-1);
    tracep->declBus(c+1003,"count", false,-1, 4,0);
    tracep->declBus(c+1100,"top", false,-1, 3,0);
    tracep->declBus(c+1101,"bottom", false,-1, 3,0);
    tracep->declBus(c+1102,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1771,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1773,"data_width", false,-1, 31,0);
    tracep->declBus(c+1879,"depth", false,-1, 31,0);
    tracep->declBit(c+1683,"clk", false,-1);
    tracep->declBit(c+998,"we", false,-1);
    tracep->declBus(c+1100,"a", false,-1, 3,0);
    tracep->declBus(c+1101,"dpra", false,-1, 3,0);
    tracep->declBus(c+1504,"di", false,-1, 7,0);
    tracep->declBus(c+1527,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+751+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBit(c+1321,"auto_in_psel", false,-1);
    tracep->declBit(c+1322,"auto_in_penable", false,-1);
    tracep->declBit(c+1317,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1323,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1316,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1318,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+804,"auto_in_pready", false,-1);
    tracep->declBit(c+1765,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1766,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1697,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1698,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1699,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1700,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1701,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1702,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1683,"clock", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1501,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1321,"in_psel", false,-1);
    tracep->declBit(c+1322,"in_penable", false,-1);
    tracep->declBus(c+1316,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1317,"in_pwrite", false,-1);
    tracep->declBus(c+1318,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1319,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+804,"in_pready", false,-1);
    tracep->declBus(c+1766,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1765,"in_pslverr", false,-1);
    tracep->declBus(c+1697,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1698,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1699,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1700,"vga_hsync", false,-1);
    tracep->declBit(c+1701,"vga_vsync", false,-1);
    tracep->declBit(c+1702,"vga_valid", false,-1);
    tracep->declBus(c+1103,"h_addr", false,-1, 9,0);
    tracep->declBus(c+767,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1528,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1505,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+804,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1683,"pclk", false,-1);
    tracep->declBit(c+1684,"reset", false,-1);
    tracep->declBus(c+1528,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1103,"h_addr", false,-1, 9,0);
    tracep->declBus(c+767,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1700,"hsync", false,-1);
    tracep->declBit(c+1701,"vsync", false,-1);
    tracep->declBit(c+1702,"valid", false,-1);
    tracep->declBus(c+1697,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1698,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1699,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1881,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1882,"h_active", false,-1, 31,0);
    tracep->declBus(c+1883,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1884,"h_total", false,-1, 31,0);
    tracep->declBus(c+1850,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1885,"v_active", false,-1, 31,0);
    tracep->declBus(c+1886,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1887,"v_total", false,-1, 31,0);
    tracep->declBus(c+1104,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+768,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1105,"h_valid", false,-1);
    tracep->declBit(c+769,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+799,"sck", false,-1);
    tracep->declBit(c+1542,"ss", false,-1);
    tracep->declBit(c+1530,"mosi", false,-1);
    tracep->declBit(c+1308,"miso", false,-1);
    tracep->declBus(c+1309,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1310,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1749,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+799,"sck", false,-1);
    tracep->declBit(c+1543,"ss", false,-1);
    tracep->declBit(c+1530,"mosi", false,-1);
    tracep->declBit(c+1750,"miso", false,-1);
    tracep->declBit(c+1543,"reset", false,-1);
    tracep->declBus(c+1302,"state", false,-1, 2,0);
    tracep->declBus(c+1303,"counter", false,-1, 7,0);
    tracep->declBus(c+1304,"cmd", false,-1, 7,0);
    tracep->declBus(c+1305,"addr", false,-1, 23,0);
    tracep->declBus(c+1306,"data", false,-1, 31,0);
    tracep->declBit(c+1307,"ren", false,-1);
    tracep->declBus(c+1751,"rdata", false,-1, 31,0);
    tracep->declBus(c+1752,"raddr", false,-1, 31,0);
    tracep->declBus(c+1311,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+799,"clock", false,-1);
    tracep->declBit(c+1307,"valid", false,-1);
    tracep->declBus(c+1304,"cmd", false,-1, 7,0);
    tracep->declBus(c+1752,"addr", false,-1, 31,0);
    tracep->declBus(c+1751,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1706,"sck", false,-1);
    tracep->declBit(c+1677,"ce_n", false,-1);
    tracep->declBus(c+1707,"dio", false,-1, 3,0);
    tracep->declBus(c+789,"dio_out", false,-1, 3,0);
    tracep->declBus(c+790,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1707,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1827,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1772,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1850,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1852,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1771,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1844,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+791,"state", false,-1, 2,0);
    tracep->declBus(c+1753,"next_state", false,-1, 2,0);
    tracep->declBus(c+792,"counter", false,-1, 7,0);
    tracep->declBus(c+793,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+794,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+795,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+796,"is_read_op", false,-1);
    tracep->declBit(c+797,"is_write_op", false,-1);
    tracep->declBus(c+798,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1754,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1708,"clk", false,-1);
    tracep->declBit(c+1531,"cke", false,-1);
    tracep->declBit(c+800,"cs", false,-1);
    tracep->declBit(c+801,"ras", false,-1);
    tracep->declBit(c+802,"cas", false,-1);
    tracep->declBit(c+803,"we", false,-1);
    tracep->declBus(c+1709,"a", false,-1, 13,0);
    tracep->declBus(c+1532,"ba", false,-1, 1,0);
    tracep->declBus(c+1533,"dqm", false,-1, 3,0);
    tracep->declBus(c+1612,"dq", false,-1, 31,0);
    tracep->declBit(c+24,"cs_0", false,-1);
    tracep->declBit(c+25,"ras_0", false,-1);
    tracep->declBit(c+26,"cas_0", false,-1);
    tracep->declBit(c+27,"we_0", false,-1);
    tracep->declBit(c+28,"cs_1", false,-1);
    tracep->declBit(c+29,"ras_1", false,-1);
    tracep->declBit(c+30,"cas_1", false,-1);
    tracep->declBit(c+31,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1708,"clk", false,-1);
    tracep->declBit(c+1531,"cke", false,-1);
    tracep->declBit(c+28,"cs", false,-1);
    tracep->declBit(c+29,"ras", false,-1);
    tracep->declBit(c+30,"cas", false,-1);
    tracep->declBit(c+31,"we", false,-1);
    tracep->declBus(c+1536,"a", false,-1, 12,0);
    tracep->declBus(c+1532,"ba", false,-1, 1,0);
    tracep->declBus(c+1533,"dqm", false,-1, 3,0);
    tracep->declBus(c+1612,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1708,"clk", false,-1);
    tracep->declBit(c+1531,"cke", false,-1);
    tracep->declBit(c+28,"cs", false,-1);
    tracep->declBit(c+29,"ras", false,-1);
    tracep->declBit(c+30,"cas", false,-1);
    tracep->declBit(c+31,"we", false,-1);
    tracep->declBus(c+1536,"a", false,-1, 12,0);
    tracep->declBus(c+1532,"ba", false,-1, 1,0);
    tracep->declBus(c+1544,"dqm", false,-1, 1,0);
    tracep->declBus(c+1613,"dq", false,-1, 15,0);
    tracep->declBus(c+1862,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1857,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1888,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1858,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1859,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1860,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1774,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1242,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1243,"bl", false,-1, 2,0);
    tracep->declBus(c+152,"command", false,-1, 3,0);
    tracep->declBus(c+1244,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1245,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1545,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1246,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1614,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1247,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1248+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1889,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1252,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1890,"state", false,-1, 2,0);
    tracep->declBit(c+1253,"write_brust", false,-1);
    tracep->declBus(c+1254,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1255,"read_burst", false,-1);
    tracep->declBit(c+1891,"flag", false,-1);
    tracep->declBus(c+1256,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1708,"clk", false,-1);
    tracep->declBit(c+1531,"cke", false,-1);
    tracep->declBit(c+28,"cs", false,-1);
    tracep->declBit(c+29,"ras", false,-1);
    tracep->declBit(c+30,"cas", false,-1);
    tracep->declBit(c+31,"we", false,-1);
    tracep->declBus(c+1536,"a", false,-1, 12,0);
    tracep->declBus(c+1532,"ba", false,-1, 1,0);
    tracep->declBus(c+1546,"dqm", false,-1, 1,0);
    tracep->declBus(c+1615,"dq", false,-1, 15,0);
    tracep->declBus(c+1862,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1857,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1888,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1858,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1859,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1860,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1774,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1257,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1258,"bl", false,-1, 2,0);
    tracep->declBus(c+152,"command", false,-1, 3,0);
    tracep->declBus(c+1259,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1260,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1545,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1261,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1616,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1262,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1263+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1892,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1267,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1893,"state", false,-1, 2,0);
    tracep->declBit(c+1268,"write_brust", false,-1);
    tracep->declBus(c+1269,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1270,"read_burst", false,-1);
    tracep->declBit(c+1894,"flag", false,-1);
    tracep->declBus(c+1271,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1708,"clk", false,-1);
    tracep->declBit(c+1531,"cke", false,-1);
    tracep->declBit(c+24,"cs", false,-1);
    tracep->declBit(c+25,"ras", false,-1);
    tracep->declBit(c+26,"cas", false,-1);
    tracep->declBit(c+27,"we", false,-1);
    tracep->declBus(c+1536,"a", false,-1, 12,0);
    tracep->declBus(c+1532,"ba", false,-1, 1,0);
    tracep->declBus(c+1533,"dqm", false,-1, 3,0);
    tracep->declBus(c+1612,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1708,"clk", false,-1);
    tracep->declBit(c+1531,"cke", false,-1);
    tracep->declBit(c+24,"cs", false,-1);
    tracep->declBit(c+25,"ras", false,-1);
    tracep->declBit(c+26,"cas", false,-1);
    tracep->declBit(c+27,"we", false,-1);
    tracep->declBus(c+1536,"a", false,-1, 12,0);
    tracep->declBus(c+1532,"ba", false,-1, 1,0);
    tracep->declBus(c+1544,"dqm", false,-1, 1,0);
    tracep->declBus(c+1613,"dq", false,-1, 15,0);
    tracep->declBus(c+1862,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1857,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1888,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1858,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1859,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1860,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1774,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1272,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1273,"bl", false,-1, 2,0);
    tracep->declBus(c+153,"command", false,-1, 3,0);
    tracep->declBus(c+1274,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1275,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1545,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1276,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1617,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1277,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1278+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1895,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1282,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1896,"state", false,-1, 2,0);
    tracep->declBit(c+1283,"write_brust", false,-1);
    tracep->declBus(c+1284,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1285,"read_burst", false,-1);
    tracep->declBit(c+1897,"flag", false,-1);
    tracep->declBus(c+1286,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1708,"clk", false,-1);
    tracep->declBit(c+1531,"cke", false,-1);
    tracep->declBit(c+24,"cs", false,-1);
    tracep->declBit(c+25,"ras", false,-1);
    tracep->declBit(c+26,"cas", false,-1);
    tracep->declBit(c+27,"we", false,-1);
    tracep->declBus(c+1536,"a", false,-1, 12,0);
    tracep->declBus(c+1532,"ba", false,-1, 1,0);
    tracep->declBus(c+1546,"dqm", false,-1, 1,0);
    tracep->declBus(c+1615,"dq", false,-1, 15,0);
    tracep->declBus(c+1862,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1857,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1888,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1858,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1859,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1860,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1774,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1287,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1288,"bl", false,-1, 2,0);
    tracep->declBus(c+153,"command", false,-1, 3,0);
    tracep->declBus(c+1289,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1290,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1545,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1291,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1618,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1292,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1293+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1898,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1297,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1899,"state", false,-1, 2,0);
    tracep->declBit(c+1298,"write_brust", false,-1);
    tracep->declBus(c+1299,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1300,"read_burst", false,-1);
    tracep->declBit(c+1900,"flag", false,-1);
    tracep->declBus(c+1301,"dout", false,-1, 15,0);
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
    bufp->fullQData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_data),64);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_resp),2);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_last));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_valid));
    bufp->fullBit(oldp+295,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_state))));
    bufp->fullBit(oldp+296,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_state))));
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_state),2);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_accum),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_elapsed),32);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[0]),4);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[1]),4);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[2]),4);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[3]),4);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[4]),4);
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[5]),4);
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[6]),4);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_id[7]),4);
    bufp->fullQData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[0]),64);
    bufp->fullQData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[1]),64);
    bufp->fullQData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[2]),64);
    bufp->fullQData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[3]),64);
    bufp->fullQData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[4]),64);
    bufp->fullQData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[5]),64);
    bufp->fullQData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[6]),64);
    bufp->fullQData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_data[7]),64);
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[0]),2);
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[1]),2);
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[2]),2);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[3]),2);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[4]),2);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[5]),2);
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[6]),2);
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_resp[7]),2);
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[0]));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[1]));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[2]));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[3]));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[4]));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[5]));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[6]));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_last[7]));
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[0]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[1]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[2]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[3]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[4]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[5]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[6]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_buf_target[7]),32);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_wr_ptr),3);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_rd_ptr),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_ar_done));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_ar_pass));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_fifo_has_data));
    bufp->fullIData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__ri),32);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_state),2);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_accum),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_elapsed),32);
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_aw_done));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_w_done));
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_wait_cnt),32);
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_aw_pass));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_w_pass));
    bufp->fullIData(oldp+362,((((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_accum) 
                               >> 9U)),32);
    bufp->fullIData(oldp+363,(((IData)(2U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_elapsed)),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_extra),32);
    bufp->fullBit(oldp+365,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+366,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+370,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+371,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+372,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+373,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+375,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+377,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+399,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+402,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+403,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullIData(oldp+414,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_data)
                                           : 0U))),32);
    bufp->fullCData(oldp+415,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullIData(oldp+417,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_out_data)),32);
    bufp->fullSData(oldp+418,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+495,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+499,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+500,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+561,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+579,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+583,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+587,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+591,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+595,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+599,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+603,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+607,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+611,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+615,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+619,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+623,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+627,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+631,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+635,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+639,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+643,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+647,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+651,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+655,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+659,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+663,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+667,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+671,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+675,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+679,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+683,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+687,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+691,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+695,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+729,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+767,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+770,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+771,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+773,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+774,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+775,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+776,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+777,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+778,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+779,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+780,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+781,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+782,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+783,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+784,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+785,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+786,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+787,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+788,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+794,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+795,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+800,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+801,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+802,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+803,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullCData(oldp+810,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullQData(oldp+812,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]))),64);
    bufp->fullBit(oldp+814,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullSData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+818,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+819,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+820,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+821,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+822,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+823,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+824,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+825,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+828,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+829,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+832,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+833,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+837,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+842,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+857,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+858,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+860,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+861,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+862,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+863,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+864,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+872,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+912,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+913,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+925,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+926,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+927,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+928,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+929,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+930,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+931,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+932,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+933,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+935,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+939,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+941,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+942,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+945,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+949,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+950,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+952,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+970,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+971,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+972,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+973,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+974,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+975,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+976,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+979,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+980,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+981,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1000,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1007,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1026,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1027,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1028,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1029,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1030,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1049,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1050,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1051,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1052,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1053,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1055,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1074,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1091,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1102,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullQData(oldp+1108,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata))),64);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),8);
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_busy));
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1141,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu_valid));
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_lsu_valid));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu_valid));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_locked));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__current_master));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1189,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc_flag));
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1205,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1206,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1208,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullIData(oldp+1210,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd),5);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd),5);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd),5);
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemWrite));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1229,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1232,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state)))),2);
    bufp->fullCData(oldp+1233,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1234,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1235,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1236,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1237,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1238,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1239,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1240,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1241,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1242,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1243,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1257,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1258,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1272,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1273,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1287,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1288,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1307,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1313,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1316,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1325,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),29);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1330,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1333,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1338,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1341,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_bresp_r),2);
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1345,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullCData(oldp+1366,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullSData(oldp+1367,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullSData(oldp+1376,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),32);
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullIData(oldp+1498,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1500,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1505,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1506,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1507,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1508,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1509,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1510,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1511,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1512,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1513,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1514,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1515,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1516,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1517,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1518,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1519,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1520,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullSData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1542,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1544,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1545,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1546,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1547,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1553,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1556,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1582,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1584,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1586,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1587,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1596,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1597,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1601,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1613,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1615,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc),32);
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullCData(oldp+1633,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1634,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1645,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1651,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant_next));
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1658,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullBit(oldp+1660,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1661,(((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))))));
    bufp->fullBit(oldp+1662,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1663,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1664,(((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)))));
    bufp->fullBit(oldp+1665,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__flag));
    bufp->fullCData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1669,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1670,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_fetch),32);
    bufp->fullIData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_out),32);
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_buf),32);
    bufp->fullCData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),3);
    bufp->fullBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ctrl_hazard));
    bufp->fullBit(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ar_inflight));
    bufp->fullBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1683,(vlSelf->clock));
    bufp->fullBit(oldp+1684,(vlSelf->reset));
    bufp->fullSData(oldp+1685,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1686,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1687,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1688,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1689,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1690,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1691,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1692,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1693,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1694,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1695,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1696,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1697,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1698,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1699,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1700,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1701,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1702,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1703,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1704,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1705,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1708,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1709,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1710,((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
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
    bufp->fullIData(oldp+1711,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1712,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+1713,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_aw_pass) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__w_w_pass) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_ar_pass))));
    bufp->fullBit(oldp+1719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1720,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullBit(oldp+1721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1722,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_ar_pass))))));
    bufp->fullBit(oldp+1723,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1727,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullBit(oldp+1729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast)))));
    bufp->fullBit(oldp+1730,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1731,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1732,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1733,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullCData(oldp+1734,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
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
    bufp->fullBit(oldp+1735,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1736,((0xfU & vlSelf->__VdfgTmp_h9aa666fe__0)),4);
    bufp->fullBit(oldp+1737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1738,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullIData(oldp+1741,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                          : 0U))),8);
    bufp->fullCData(oldp+1743,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1747,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1750,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1752,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1753,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1755,(0x226U),32);
    bufp->fullIData(oldp+1756,(0x64U),32);
    bufp->fullIData(oldp+1757,(0x200U),32);
    bufp->fullCData(oldp+1758,(1U),3);
    bufp->fullIData(oldp+1759,(0xb00U),32);
    bufp->fullIData(oldp+1760,(9U),32);
    bufp->fullCData(oldp+1761,(0U),3);
    bufp->fullCData(oldp+1762,(2U),3);
    bufp->fullCData(oldp+1763,(3U),3);
    bufp->fullCData(oldp+1764,(4U),3);
    bufp->fullBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1767,(0U));
    bufp->fullBit(oldp+1768,(1U));
    bufp->fullIData(oldp+1769,(0x40U),32);
    bufp->fullIData(oldp+1770,(0x20U),32);
    bufp->fullIData(oldp+1771,(4U),32);
    bufp->fullIData(oldp+1772,(1U),32);
    bufp->fullIData(oldp+1773,(8U),32);
    bufp->fullCData(oldp+1774,(0U),4);
    bufp->fullCData(oldp+1775,(0U),8);
    bufp->fullCData(oldp+1776,(0U),2);
    bufp->fullCData(oldp+1777,(1U),2);
    bufp->fullCData(oldp+1778,(2U),2);
    bufp->fullCData(oldp+1779,(3U),2);
    bufp->fullSData(oldp+1780,(1U),16);
    bufp->fullBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1797,(0U),32);
    bufp->fullBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1827,(0U),32);
    bufp->fullBit(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1833,(0U));
    bufp->fullBit(oldp+1834,(1U));
    bufp->fullBit(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullIData(oldp+1838,(4U),32);
    bufp->fullIData(oldp+1839,(0x79737978U),32);
    bufp->fullIData(oldp+1840,(0x17e3c19U),32);
    bufp->fullIData(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1844,(5U),32);
    bufp->fullCData(oldp+1845,(0x1bU),8);
    bufp->fullCData(oldp+1846,(0xebU),8);
    bufp->fullCData(oldp+1847,(0x38U),8);
    bufp->fullIData(oldp+1848,(0x18U),32);
    bufp->fullIData(oldp+1849,(9U),32);
    bufp->fullIData(oldp+1850,(2U),32);
    bufp->fullIData(oldp+1851,(6U),32);
    bufp->fullIData(oldp+1852,(3U),32);
    bufp->fullIData(oldp+1853,(0xdU),32);
    bufp->fullIData(oldp+1854,(0x2000U),32);
    bufp->fullIData(oldp+1855,(0x2710U),32);
    bufp->fullIData(oldp+1856,(0x30cU),32);
    bufp->fullCData(oldp+1857,(7U),4);
    bufp->fullCData(oldp+1858,(3U),4);
    bufp->fullCData(oldp+1859,(5U),4);
    bufp->fullCData(oldp+1860,(4U),4);
    bufp->fullCData(oldp+1861,(6U),4);
    bufp->fullCData(oldp+1862,(2U),4);
    bufp->fullCData(oldp+1863,(1U),4);
    bufp->fullSData(oldp+1864,(0x20U),13);
    bufp->fullCData(oldp+1865,(8U),4);
    bufp->fullCData(oldp+1866,(9U),4);
    bufp->fullIData(oldp+1867,(0xaU),32);
    bufp->fullIData(oldp+1868,(0x11U),32);
    bufp->fullIData(oldp+1869,(0x30000000U),32);
    bufp->fullIData(oldp+1870,(0x3fffffffU),32);
    bufp->fullCData(oldp+1871,(4U),5);
    bufp->fullCData(oldp+1872,(0U),5);
    bufp->fullCData(oldp+1873,(0x10U),5);
    bufp->fullCData(oldp+1874,(0x14U),5);
    bufp->fullCData(oldp+1875,(0x18U),5);
    bufp->fullIData(oldp+1876,(0x3000000U),32);
    bufp->fullCData(oldp+1877,(0xaU),4);
    bufp->fullIData(oldp+1878,(0xbU),32);
    bufp->fullIData(oldp+1879,(0x10U),32);
    bufp->fullCData(oldp+1880,(5U),3);
    bufp->fullIData(oldp+1881,(0x60U),32);
    bufp->fullIData(oldp+1882,(0x90U),32);
    bufp->fullIData(oldp+1883,(0x310U),32);
    bufp->fullIData(oldp+1884,(0x320U),32);
    bufp->fullIData(oldp+1885,(0x23U),32);
    bufp->fullIData(oldp+1886,(0x203U),32);
    bufp->fullIData(oldp+1887,(0x20dU),32);
    bufp->fullIData(oldp+1888,(0x400000U),32);
    bufp->fullCData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1890,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1891,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1892,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1893,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1894,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+1895,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1896,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1897,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1898,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1899,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1900,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
