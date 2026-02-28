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
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1656,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1657,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1658,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1659,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1660,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1661,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1662,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1663,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1664,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1665,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1666,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1667,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1668,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1669,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1670,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1671,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1672,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1673,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1674,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1675,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1656,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1657,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1658,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1659,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1660,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1661,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1662,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1663,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1664,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1665,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1666,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1667,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1668,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1669,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1670,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1671,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1672,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1673,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1674,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1675,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+835,"spi_sck", false,-1);
    tracep->declBus(c+1523,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1524,"spi_mosi", false,-1);
    tracep->declBit(c+1676,"spi_miso", false,-1);
    tracep->declBit(c+1674,"uart_rx", false,-1);
    tracep->declBit(c+1675,"uart_tx", false,-1);
    tracep->declBit(c+1677,"psram_sck", false,-1);
    tracep->declBit(c+1648,"psram_ce_n", false,-1);
    tracep->declBus(c+1678,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1679,"sdram_clk", false,-1);
    tracep->declBit(c+836,"sdram_cke", false,-1);
    tracep->declBit(c+837,"sdram_cs", false,-1);
    tracep->declBit(c+838,"sdram_ras", false,-1);
    tracep->declBit(c+839,"sdram_cas", false,-1);
    tracep->declBit(c+840,"sdram_we", false,-1);
    tracep->declBus(c+26,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+841,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+842,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1520,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1656,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1657,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1658,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1659,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1660,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1661,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1662,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1663,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1664,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1665,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1666,"ps2_clk", false,-1);
    tracep->declBit(c+1667,"ps2_data", false,-1);
    tracep->declBus(c+1668,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1669,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1670,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1671,"vga_hsync", false,-1);
    tracep->declBit(c+1672,"vga_vsync", false,-1);
    tracep->declBit(c+1673,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1730,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1731,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1732,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1295,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+165,"in_psel", false,-1);
    tracep->declBit(c+166,"in_penable", false,-1);
    tracep->declBus(c+1733,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+170,"in_pready", false,-1);
    tracep->declBus(c+171,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+172,"in_pslverr", false,-1);
    tracep->declBus(c+1296,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1297,"out_psel", false,-1);
    tracep->declBit(c+1298,"out_penable", false,-1);
    tracep->declBus(c+1299,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1300,"out_pwrite", false,-1);
    tracep->declBus(c+1301,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1680,"out_pready", false,-1);
    tracep->declBus(c+1681,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1682,"out_pslverr", false,-1);
    tracep->declBus(c+1734,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1735,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1736,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1733,"ST_FORWARD", false,-1, 2,0);
    tracep->declBus(c+1737,"ST_WAIT", false,-1, 2,0);
    tracep->declBus(c+1738,"ST_SKIP", false,-1, 2,0);
    tracep->declBus(c+1739,"ST_DONE", false,-1, 2,0);
    tracep->declBus(c+173,"state", false,-1, 2,0);
    tracep->declBus(c+174,"accum", false,-1, 31,0);
    tracep->declBus(c+175,"dev_cycles", false,-1, 15,0);
    tracep->declBus(c+176,"wait_cnt", false,-1, 31,0);
    tracep->declBus(c+177,"saved_prdata", false,-1, 31,0);
    tracep->declBit(c+178,"saved_pslverr", false,-1);
    tracep->declBit(c+1303,"fwd_active", false,-1);
    tracep->declBus(c+179,"accum_final", false,-1, 31,0);
    tracep->declBus(c+180,"total_cpu", false,-1, 31,0);
    tracep->declBus(c+181,"k_plus1", false,-1, 31,0);
    tracep->declBus(c+182,"extra_delay", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1297,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1298,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1300,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1296,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1680,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1682,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1681,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1304,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1306,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1299,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+843,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1740,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1741,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1307,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1308,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1309,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+183,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1742,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+184,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1310,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1311,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1309,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+844,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1742,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+845,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1312,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1313,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1296,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1683,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1742,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+185,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1314,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1315,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1309,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1316,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1742,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1684,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1317,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1306,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1299,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+846,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+847,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+848,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"sel_0", false,-1);
    tracep->declBit(c+1320,"sel_1", false,-1);
    tracep->declBit(c+1321,"sel_2", false,-1);
    tracep->declBit(c+1322,"sel_3", false,-1);
    tracep->declBit(c+1323,"sel_4", false,-1);
    tracep->declBit(c+1324,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+186,"auto_in_awready", false,-1);
    tracep->declBit(c+187,"auto_in_awvalid", false,-1);
    tracep->declBus(c+188,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+189,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+190,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+191,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+186,"auto_in_wready", false,-1);
    tracep->declBit(c+192,"auto_in_wvalid", false,-1);
    tracep->declBus(c+193,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+195,"auto_in_bready", false,-1);
    tracep->declBit(c+196,"auto_in_bvalid", false,-1);
    tracep->declBus(c+197,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+198,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+199,"auto_in_arready", false,-1);
    tracep->declBit(c+200,"auto_in_arvalid", false,-1);
    tracep->declBus(c+201,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+203,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+204,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+205,"auto_in_rready", false,-1);
    tracep->declBit(c+206,"auto_in_rvalid", false,-1);
    tracep->declBus(c+207,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+208,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+198,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+165,"auto_out_psel", false,-1);
    tracep->declBit(c+166,"auto_out_penable", false,-1);
    tracep->declBit(c+167,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1295,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+168,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+170,"auto_out_pready", false,-1);
    tracep->declBit(c+172,"auto_out_pslverr", false,-1);
    tracep->declBus(c+171,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+166,"nodeOut_penable", false,-1);
    tracep->declBus(c+209,"state", false,-1, 1,0);
    tracep->declBit(c+199,"accept_read", false,-1);
    tracep->declBit(c+186,"accept_write", false,-1);
    tracep->declBit(c+210,"is_write_r", false,-1);
    tracep->declBit(c+167,"is_write", false,-1);
    tracep->declBus(c+207,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+197,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+211,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+212,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+213,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+214,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+215,"resp", false,-1, 1,0);
    tracep->declBus(c+216,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+198,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+206,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+217,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+196,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+218,"auto_in_awready", false,-1);
    tracep->declBit(c+1528,"auto_in_awvalid", false,-1);
    tracep->declBus(c+219,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1529,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1530,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+220,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+221,"auto_in_wready", false,-1);
    tracep->declBit(c+1531,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1532,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1533,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1534,"auto_in_wlast", false,-1);
    tracep->declBit(c+688,"auto_in_bready", false,-1);
    tracep->declBit(c+222,"auto_in_bvalid", false,-1);
    tracep->declBus(c+223,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+224,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+225,"auto_in_arready", false,-1);
    tracep->declBit(c+41,"auto_in_arvalid", false,-1);
    tracep->declBus(c+42,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+43,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+44,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+45,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+8,"auto_in_rready", false,-1);
    tracep->declBit(c+226,"auto_in_rvalid", false,-1);
    tracep->declBus(c+227,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+230,"auto_in_rlast", false,-1);
    tracep->declBit(c+186,"auto_out_awready", false,-1);
    tracep->declBit(c+187,"auto_out_awvalid", false,-1);
    tracep->declBus(c+188,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+189,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+190,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+191,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+186,"auto_out_wready", false,-1);
    tracep->declBit(c+192,"auto_out_wvalid", false,-1);
    tracep->declBus(c+193,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+195,"auto_out_bready", false,-1);
    tracep->declBit(c+196,"auto_out_bvalid", false,-1);
    tracep->declBus(c+197,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+198,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+199,"auto_out_arready", false,-1);
    tracep->declBit(c+200,"auto_out_arvalid", false,-1);
    tracep->declBus(c+201,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+203,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+204,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+205,"auto_out_rready", false,-1);
    tracep->declBit(c+206,"auto_out_rvalid", false,-1);
    tracep->declBus(c+207,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+208,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+198,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+195,"io_enq_ready", false,-1);
    tracep->declBit(c+196,"io_enq_valid", false,-1);
    tracep->declBus(c+197,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+198,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+688,"io_deq_ready", false,-1);
    tracep->declBit(c+222,"io_deq_valid", false,-1);
    tracep->declBus(c+223,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+224,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+231,"wrap", false,-1);
    tracep->declBit(c+232,"wrap_1", false,-1);
    tracep->declBit(c+233,"maybe_full", false,-1);
    tracep->declBit(c+234,"ptr_match", false,-1);
    tracep->declBit(c+235,"empty", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->declBit(c+237,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+232,"R0_addr", false,-1);
    tracep->declBit(c+1743,"R0_en", false,-1);
    tracep->declBit(c+1654,"R0_clk", false,-1);
    tracep->declBus(c+238,"R0_data", false,-1, 5,0);
    tracep->declBit(c+231,"W0_addr", false,-1);
    tracep->declBit(c+237,"W0_en", false,-1);
    tracep->declBit(c+1654,"W0_clk", false,-1);
    tracep->declBus(c+239,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+240+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+205,"io_enq_ready", false,-1);
    tracep->declBit(c+206,"io_enq_valid", false,-1);
    tracep->declBus(c+207,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+208,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+198,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+226,"io_deq_valid", false,-1);
    tracep->declBus(c+227,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+228,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+229,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+230,"io_deq_bits_last", false,-1);
    tracep->declBit(c+243,"wrap", false,-1);
    tracep->declBit(c+244,"wrap_1", false,-1);
    tracep->declBit(c+245,"maybe_full", false,-1);
    tracep->declBit(c+246,"ptr_match", false,-1);
    tracep->declBit(c+247,"empty", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+249,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+244,"R0_addr", false,-1);
    tracep->declBit(c+1743,"R0_en", false,-1);
    tracep->declBit(c+1654,"R0_clk", false,-1);
    tracep->declQuad(c+250,"R0_data", false,-1, 38,0);
    tracep->declBit(c+243,"W0_addr", false,-1);
    tracep->declBit(c+249,"W0_en", false,-1);
    tracep->declBit(c+1654,"W0_clk", false,-1);
    tracep->declQuad(c+252,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+254+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+41,"io_enq_valid", false,-1);
    tracep->declBus(c+42,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+43,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+44,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+45,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+199,"io_deq_ready", false,-1);
    tracep->declBit(c+200,"io_deq_valid", false,-1);
    tracep->declBus(c+201,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+202,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+203,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+204,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+259,"wrap", false,-1);
    tracep->declBit(c+260,"wrap_1", false,-1);
    tracep->declBit(c+261,"maybe_full", false,-1);
    tracep->declBit(c+262,"ptr_match", false,-1);
    tracep->declBit(c+263,"empty", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+46,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+260,"R0_addr", false,-1);
    tracep->declBit(c+1743,"R0_en", false,-1);
    tracep->declBit(c+1654,"R0_clk", false,-1);
    tracep->declQuad(c+265,"R0_data", false,-1, 46,0);
    tracep->declBit(c+259,"W0_addr", false,-1);
    tracep->declBit(c+46,"W0_en", false,-1);
    tracep->declBit(c+1654,"W0_clk", false,-1);
    tracep->declQuad(c+47,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+267+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+271,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+218,"io_enq_ready", false,-1);
    tracep->declBit(c+1528,"io_enq_valid", false,-1);
    tracep->declBus(c+219,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1529,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1530,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+220,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+186,"io_deq_ready", false,-1);
    tracep->declBit(c+187,"io_deq_valid", false,-1);
    tracep->declBus(c+188,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+189,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+190,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+191,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+272,"wrap", false,-1);
    tracep->declBit(c+273,"wrap_1", false,-1);
    tracep->declBit(c+274,"maybe_full", false,-1);
    tracep->declBit(c+275,"ptr_match", false,-1);
    tracep->declBit(c+276,"empty", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+1535,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+273,"R0_addr", false,-1);
    tracep->declBit(c+1743,"R0_en", false,-1);
    tracep->declBit(c+1654,"R0_clk", false,-1);
    tracep->declQuad(c+278,"R0_data", false,-1, 46,0);
    tracep->declBit(c+272,"W0_addr", false,-1);
    tracep->declBit(c+1535,"W0_en", false,-1);
    tracep->declBit(c+1654,"W0_clk", false,-1);
    tracep->declQuad(c+1685,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+280+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1531,"io_enq_valid", false,-1);
    tracep->declBus(c+1532,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1533,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1534,"io_enq_bits_last", false,-1);
    tracep->declBit(c+186,"io_deq_ready", false,-1);
    tracep->declBit(c+192,"io_deq_valid", false,-1);
    tracep->declBus(c+193,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+194,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+285,"wrap", false,-1);
    tracep->declBit(c+286,"wrap_1", false,-1);
    tracep->declBit(c+287,"maybe_full", false,-1);
    tracep->declBit(c+288,"ptr_match", false,-1);
    tracep->declBit(c+289,"empty", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+1536,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+286,"R0_addr", false,-1);
    tracep->declBit(c+1743,"R0_en", false,-1);
    tracep->declBit(c+1654,"R0_clk", false,-1);
    tracep->declQuad(c+291,"R0_data", false,-1, 35,0);
    tracep->declBit(c+285,"W0_addr", false,-1);
    tracep->declBit(c+1536,"W0_en", false,-1);
    tracep->declBit(c+1654,"W0_clk", false,-1);
    tracep->declQuad(c+1537,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+293+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+297,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1730,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1731,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1732,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+106,"in_arready", false,-1);
    tracep->declBit(c+49,"in_arvalid", false,-1);
    tracep->declBus(c+50,"in_arid", false,-1, 3,0);
    tracep->declBus(c+51,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+52,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1687,"in_rready", false,-1);
    tracep->declBit(c+849,"in_rvalid", false,-1);
    tracep->declBus(c+850,"in_rid", false,-1, 3,0);
    tracep->declBus(c+851,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1744,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+852,"in_rlast", false,-1);
    tracep->declBit(c+107,"in_awready", false,-1);
    tracep->declBit(c+1539,"in_awvalid", false,-1);
    tracep->declBus(c+1745,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1152,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1746,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"in_wready", false,-1);
    tracep->declBit(c+1540,"in_wvalid", false,-1);
    tracep->declBus(c+1154,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"in_wlast", false,-1);
    tracep->declBit(c+1688,"in_bready", false,-1);
    tracep->declBit(c+853,"in_bvalid", false,-1);
    tracep->declBus(c+850,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1744,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+106,"out_arready", false,-1);
    tracep->declBit(c+49,"out_arvalid", false,-1);
    tracep->declBus(c+50,"out_arid", false,-1, 3,0);
    tracep->declBus(c+51,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+52,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1687,"out_rready", false,-1);
    tracep->declBit(c+849,"out_rvalid", false,-1);
    tracep->declBus(c+850,"out_rid", false,-1, 3,0);
    tracep->declBus(c+851,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1744,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+852,"out_rlast", false,-1);
    tracep->declBit(c+107,"out_awready", false,-1);
    tracep->declBit(c+1539,"out_awvalid", false,-1);
    tracep->declBus(c+1745,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1152,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1746,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"out_wready", false,-1);
    tracep->declBit(c+1540,"out_wvalid", false,-1);
    tracep->declBus(c+1154,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"out_wlast", false,-1);
    tracep->declBit(c+1688,"out_bready", false,-1);
    tracep->declBit(c+853,"out_bvalid", false,-1);
    tracep->declBus(c+850,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1744,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1734,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1747,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1736,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1733,"RD_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1737,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1738,"RD_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1739,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1748,"WT_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1749,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1750,"WT_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1751,"request_counter_rd", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1752+i*1,"wait_counter_rd", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1760+i*1,"rid", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1768+i*1,"rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1776+i*1,"rresp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1784+i*1,"rlast", true,(i+0));
    }
    tracep->declBus(c+1792,"arlen", false,-1, 7,0);
    tracep->declBus(c+1793,"arsize", false,-1, 2,0);
    tracep->declBus(c+1794,"arburst", false,-1, 1,0);
    tracep->declBus(c+1795,"r_counter", false,-1, 2,0);
    tracep->declBus(c+1796,"rlen", false,-1, 2,0);
    tracep->declBus(c+1797,"state_rd", false,-1, 2,0);
    tracep->declBus(c+1798,"next_state_rd", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+298,"auto_in_awready", false,-1);
    tracep->declBit(c+1541,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1745,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+299,"auto_in_wready", false,-1);
    tracep->declBit(c+1542,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1154,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_in_wlast", false,-1);
    tracep->declBit(c+1689,"auto_in_bready", false,-1);
    tracep->declBit(c+1325,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1326,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1327,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+300,"auto_in_arready", false,-1);
    tracep->declBit(c+55,"auto_in_arvalid", false,-1);
    tracep->declBus(c+50,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+109,"auto_in_rready", false,-1);
    tracep->declBit(c+301,"auto_in_rvalid", false,-1);
    tracep->declBus(c+302,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+305,"auto_in_rlast", false,-1);
    tracep->declBit(c+1631,"auto_out_awready", false,-1);
    tracep->declBit(c+1543,"auto_out_awvalid", false,-1);
    tracep->declBus(c+219,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1529,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1530,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+220,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+306,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1632,"auto_out_wready", false,-1);
    tracep->declBit(c+1544,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1532,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1533,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1534,"auto_out_wlast", false,-1);
    tracep->declBit(c+1633,"auto_out_bready", false,-1);
    tracep->declBit(c+307,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1326,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1328,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1329,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+110,"auto_out_arready", false,-1);
    tracep->declBit(c+56,"auto_out_arvalid", false,-1);
    tracep->declBus(c+42,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+43,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+44,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+45,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+57,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+109,"auto_out_rready", false,-1);
    tracep->declBit(c+301,"auto_out_rvalid", false,-1);
    tracep->declBus(c+302,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+308,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+309,"auto_out_rlast", false,-1);
    tracep->declBit(c+1544,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+310,"w_idle", false,-1);
    tracep->declBit(c+1634,"in_awready", false,-1);
    tracep->declBit(c+311,"busy", false,-1);
    tracep->declBus(c+312,"r_addr", false,-1, 31,0);
    tracep->declBus(c+313,"r_len", false,-1, 7,0);
    tracep->declBus(c+58,"len", false,-1, 7,0);
    tracep->declBus(c+59,"addr", false,-1, 31,0);
    tracep->declBit(c+314,"busy_1", false,-1);
    tracep->declBus(c+315,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+316,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+317,"len_1", false,-1, 7,0);
    tracep->declBus(c+1545,"addr_1", false,-1, 31,0);
    tracep->declBit(c+318,"wbeats_latched", false,-1);
    tracep->declBit(c+1543,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1546,"wbeats_valid", false,-1);
    tracep->declBus(c+319,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1547,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1534,"w_last", false,-1);
    tracep->declBit(c+1633,"nodeOut_bready", false,-1);
    tracep->declBus(c+1330,"error_0", false,-1, 1,0);
    tracep->declBus(c+1331,"error_1", false,-1, 1,0);
    tracep->declBus(c+1332,"error_2", false,-1, 1,0);
    tracep->declBus(c+1333,"error_3", false,-1, 1,0);
    tracep->declBus(c+1334,"error_4", false,-1, 1,0);
    tracep->declBus(c+1335,"error_5", false,-1, 1,0);
    tracep->declBus(c+1336,"error_6", false,-1, 1,0);
    tracep->declBus(c+1337,"error_7", false,-1, 1,0);
    tracep->declBus(c+1338,"error_8", false,-1, 1,0);
    tracep->declBus(c+1339,"error_9", false,-1, 1,0);
    tracep->declBus(c+1340,"error_10", false,-1, 1,0);
    tracep->declBus(c+1341,"error_11", false,-1, 1,0);
    tracep->declBus(c+1342,"error_12", false,-1, 1,0);
    tracep->declBus(c+1343,"error_13", false,-1, 1,0);
    tracep->declBus(c+1344,"error_14", false,-1, 1,0);
    tracep->declBus(c+1345,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+55,"io_enq_valid", false,-1);
    tracep->declBus(c+50,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+51,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+52,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+53,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+54,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+111,"io_deq_ready", false,-1);
    tracep->declBit(c+56,"io_deq_valid", false,-1);
    tracep->declBus(c+42,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+60,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+61,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+44,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+45,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+320,"ram", false,-1, 48,0);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+56,"io_deq_valid_0", false,-1);
    tracep->declBit(c+112,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+298,"io_enq_ready", false,-1);
    tracep->declBit(c+1541,"io_enq_valid", false,-1);
    tracep->declBus(c+1745,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1152,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1746,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1153,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1744,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1635,"io_deq_ready", false,-1);
    tracep->declBit(c+1548,"io_deq_valid", false,-1);
    tracep->declBus(c+219,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1549,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+323,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1530,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+220,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+324,"ram", false,-1, 48,0);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+1548,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1636,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+1542,"io_enq_valid", false,-1);
    tracep->declBus(c+1154,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1155,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1156,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1637,"io_deq_ready", false,-1);
    tracep->declBit(c+1550,"io_deq_valid", false,-1);
    tracep->declBus(c+1532,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1533,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1690,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+327,"ram", false,-1, 36,0);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+1550,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1638,"do_enq", false,-1);
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
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1639,"auto_in_awready", false,-1);
    tracep->declBit(c+1551,"auto_in_awvalid", false,-1);
    tracep->declBus(c+219,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1552,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1691,"auto_in_wready", false,-1);
    tracep->declBit(c+1553,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1532,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1533,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1640,"auto_in_bready", false,-1);
    tracep->declBit(c+330,"auto_in_bvalid", false,-1);
    tracep->declBus(c+331,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+332,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+113,"auto_in_arready", false,-1);
    tracep->declBit(c+62,"auto_in_arvalid", false,-1);
    tracep->declBus(c+42,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+114,"auto_in_rready", false,-1);
    tracep->declBit(c+333,"auto_in_rvalid", false,-1);
    tracep->declBus(c+334,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+335,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+336,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+113,"nodeIn_arready", false,-1);
    tracep->declBit(c+1639,"nodeIn_awready", false,-1);
    tracep->declBit(c+1554,"w_sel0", false,-1);
    tracep->declBit(c+330,"w_full", false,-1);
    tracep->declBus(c+331,"w_id", false,-1, 3,0);
    tracep->declBit(c+337,"r_sel1", false,-1);
    tracep->declBit(c+338,"w_sel1", false,-1);
    tracep->declBit(c+333,"r_full", false,-1);
    tracep->declBus(c+334,"r_id", false,-1, 3,0);
    tracep->declBit(c+115,"ren", false,-1);
    tracep->declBit(c+339,"rdata_REG", false,-1);
    tracep->declBus(c+340,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+341,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+342,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+343,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+64,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+115,"R0_en", false,-1);
    tracep->declBit(c+1654,"R0_clk", false,-1);
    tracep->declBus(c+344,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1555,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1641,"W0_en", false,-1);
    tracep->declBit(c+1654,"W0_clk", false,-1);
    tracep->declBus(c+1532,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1533,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+116,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1157,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1745,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1692,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1158,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1154,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1159,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1492,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1493,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1693,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+117,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+65,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+50,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+66,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1494,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1495,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1694,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1695,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1496,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+107,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1539,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1745,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1540,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1154,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1688,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+853,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+850,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1744,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+106,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+49,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+50,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1687,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+849,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+850,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+851,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1744,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+852,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+298,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1541,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1745,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+299,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1542,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1154,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1689,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1325,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1326,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1327,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+300,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+55,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+50,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+109,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+301,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+302,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+305,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1492,"in_0_bvalid", false,-1);
    tracep->declBit(c+1494,"in_0_rvalid", false,-1);
    tracep->declBit(c+118,"in_0_wready", false,-1);
    tracep->declBit(c+119,"in_0_awready", false,-1);
    tracep->declBit(c+1696,"in_0_arready", false,-1);
    tracep->declBit(c+116,"anonIn_awready", false,-1);
    tracep->declBit(c+117,"anonIn_arready", false,-1);
    tracep->declBit(c+67,"requestARIO_0_0", false,-1);
    tracep->declBit(c+68,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1160,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1161,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+69,"arSel", false,-1, 15,0);
    tracep->declBus(c+1799,"awSel", false,-1, 15,0);
    tracep->declBus(c+1497,"rSel", false,-1, 15,0);
    tracep->declBus(c+1498,"bSel", false,-1, 15,0);
    tracep->declBus(c+345,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+346,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+347,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+348,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+349,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+350,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1800,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+352,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+353,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+354,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1801,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+355,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+356,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+357,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1802,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+358,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+359,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+360,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1803,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+361,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+362,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+363,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1804,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+364,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+365,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+366,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1805,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+367,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+368,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+369,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1806,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+370,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+371,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+372,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1807,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+373,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+374,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+375,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1808,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+376,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+377,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+378,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1809,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+379,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+380,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+381,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1810,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+382,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+383,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+384,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1811,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+385,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+386,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+387,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1812,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+388,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+389,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+390,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1813,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+391,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+392,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+393,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1814,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+70,"in_0_arvalid", false,-1);
    tracep->declBit(c+394,"latched", false,-1);
    tracep->declBit(c+1556,"in_0_awvalid", false,-1);
    tracep->declBit(c+1557,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1558,"in_0_wvalid", false,-1);
    tracep->declBit(c+395,"idle_2", false,-1);
    tracep->declBit(c+1499,"anyValid", false,-1);
    tracep->declBus(c+1500,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+396,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1501,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1502,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1503,"prefixOR_1", false,-1);
    tracep->declBit(c+1504,"winner_2_1", false,-1);
    tracep->declBit(c+397,"state_2_0", false,-1);
    tracep->declBit(c+398,"state_2_1", false,-1);
    tracep->declBit(c+1505,"muxState_2_0", false,-1);
    tracep->declBit(c+1506,"muxState_2_1", false,-1);
    tracep->declBit(c+399,"idle_3", false,-1);
    tracep->declBit(c+1507,"anyValid_1", false,-1);
    tracep->declBus(c+1508,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+400,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1509,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1510,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1511,"winner_3_0", false,-1);
    tracep->declBit(c+1512,"winner_3_1", false,-1);
    tracep->declBit(c+401,"state_3_0", false,-1);
    tracep->declBit(c+402,"state_3_1", false,-1);
    tracep->declBit(c+1513,"muxState_3_0", false,-1);
    tracep->declBit(c+1697,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+403,"io_enq_ready", false,-1);
    tracep->declBit(c+1557,"io_enq_valid", false,-1);
    tracep->declBus(c+1162,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+120,"io_deq_ready", false,-1);
    tracep->declBit(c+1559,"io_deq_valid", false,-1);
    tracep->declBus(c+1560,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+404,"wrap", false,-1);
    tracep->declBit(c+405,"wrap_1", false,-1);
    tracep->declBit(c+406,"maybe_full", false,-1);
    tracep->declBit(c+407,"ptr_match", false,-1);
    tracep->declBit(c+408,"empty", false,-1);
    tracep->declBit(c+409,"full", false,-1);
    tracep->declBit(c+1559,"io_deq_valid_0", false,-1);
    tracep->declBit(c+121,"do_deq", false,-1);
    tracep->declBit(c+122,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+405,"R0_addr", false,-1);
    tracep->declBit(c+1743,"R0_en", false,-1);
    tracep->declBit(c+1654,"R0_clk", false,-1);
    tracep->declBus(c+410,"R0_data", false,-1, 1,0);
    tracep->declBit(c+404,"W0_addr", false,-1);
    tracep->declBit(c+122,"W0_en", false,-1);
    tracep->declBit(c+1654,"W0_clk", false,-1);
    tracep->declBus(c+1162,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+411+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1642,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1561,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+219,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1529,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1530,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+220,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1632,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1544,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1532,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1533,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1534,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1633,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+307,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1326,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1328,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+71,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+42,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+43,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+44,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+45,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+109,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+301,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+302,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+309,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1639,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1551,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+219,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1552,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1691,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1553,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1532,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1533,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1640,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+330,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+331,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+332,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+113,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+42,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+114,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+333,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+334,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+335,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+336,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1562,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1563,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+413,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+72,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+42,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+73,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+9,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+414,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+415,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+416,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+218,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1528,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+219,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1529,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1530,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+220,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+221,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1531,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1532,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1533,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1534,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+688,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+222,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+223,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+224,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+225,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+41,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+42,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+43,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+44,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+45,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+8,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+226,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+227,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+230,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+307,"in_0_bvalid", false,-1);
    tracep->declBit(c+301,"in_0_rvalid", false,-1);
    tracep->declBit(c+1643,"in_0_wready", false,-1);
    tracep->declBit(c+1644,"in_0_awready", false,-1);
    tracep->declBit(c+123,"in_0_arready", false,-1);
    tracep->declBit(c+1642,"anonIn_awready", false,-1);
    tracep->declBit(c+74,"requestARIO_0_0", false,-1);
    tracep->declBit(c+75,"requestARIO_0_1", false,-1);
    tracep->declBit(c+76,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1564,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1565,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1566,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+77,"arSel", false,-1, 15,0);
    tracep->declBus(c+417,"awSel", false,-1, 15,0);
    tracep->declBus(c+418,"rSel", false,-1, 15,0);
    tracep->declBus(c+1346,"bSel", false,-1, 15,0);
    tracep->declBit(c+419,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+420,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+421,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+422,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+423,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+424,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+425,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+426,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+427,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+428,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+429,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+430,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+431,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+432,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+433,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+434,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+435,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+436,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+437,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+438,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+439,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+440,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+441,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+442,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+443,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+444,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+445,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+446,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+447,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+448,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+449,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+450,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+451,"latched", false,-1);
    tracep->declBit(c+1567,"in_0_awvalid", false,-1);
    tracep->declBit(c+1568,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1569,"in_0_wvalid", false,-1);
    tracep->declBit(c+452,"idle_3", false,-1);
    tracep->declBit(c+453,"anyValid", false,-1);
    tracep->declBus(c+454,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+455,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+456,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+457,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+458,"prefixOR_1", false,-1);
    tracep->declBit(c+459,"winner_3_1", false,-1);
    tracep->declBit(c+460,"winner_3_2", false,-1);
    tracep->declBit(c+461,"state_3_0", false,-1);
    tracep->declBit(c+462,"state_3_1", false,-1);
    tracep->declBit(c+463,"state_3_2", false,-1);
    tracep->declBit(c+464,"muxState_3_0", false,-1);
    tracep->declBit(c+465,"muxState_3_1", false,-1);
    tracep->declBit(c+466,"muxState_3_2", false,-1);
    tracep->declBit(c+467,"idle_4", false,-1);
    tracep->declBit(c+468,"anyValid_1", false,-1);
    tracep->declBus(c+469,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+470,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+471,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+472,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+473,"winner_4_0", false,-1);
    tracep->declBit(c+474,"winner_4_2", false,-1);
    tracep->declBit(c+475,"state_4_0", false,-1);
    tracep->declBit(c+476,"state_4_2", false,-1);
    tracep->declBit(c+477,"muxState_4_0", false,-1);
    tracep->declBit(c+478,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+479,"io_enq_ready", false,-1);
    tracep->declBit(c+1568,"io_enq_valid", false,-1);
    tracep->declBus(c+1570,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1645,"io_deq_ready", false,-1);
    tracep->declBit(c+1571,"io_deq_valid", false,-1);
    tracep->declBus(c+1572,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+480,"wrap", false,-1);
    tracep->declBit(c+481,"wrap_1", false,-1);
    tracep->declBit(c+482,"maybe_full", false,-1);
    tracep->declBit(c+483,"ptr_match", false,-1);
    tracep->declBit(c+484,"empty", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->declBit(c+1571,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1646,"do_deq", false,-1);
    tracep->declBit(c+1647,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+481,"R0_addr", false,-1);
    tracep->declBit(c+1743,"R0_en", false,-1);
    tracep->declBit(c+1654,"R0_clk", false,-1);
    tracep->declBus(c+486,"R0_data", false,-1, 2,0);
    tracep->declBit(c+480,"W0_addr", false,-1);
    tracep->declBit(c+1647,"W0_en", false,-1);
    tracep->declBit(c+1654,"W0_clk", false,-1);
    tracep->declBus(c+1570,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+487+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1631,"auto_in_awready", false,-1);
    tracep->declBit(c+1543,"auto_in_awvalid", false,-1);
    tracep->declBus(c+219,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1529,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1530,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+220,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+306,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1632,"auto_in_wready", false,-1);
    tracep->declBit(c+1544,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1532,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1533,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1534,"auto_in_wlast", false,-1);
    tracep->declBit(c+1633,"auto_in_bready", false,-1);
    tracep->declBit(c+307,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1326,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1328,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1329,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+110,"auto_in_arready", false,-1);
    tracep->declBit(c+56,"auto_in_arvalid", false,-1);
    tracep->declBus(c+42,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+43,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+44,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+45,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+57,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+109,"auto_in_rready", false,-1);
    tracep->declBit(c+301,"auto_in_rvalid", false,-1);
    tracep->declBus(c+302,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+308,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+309,"auto_in_rlast", false,-1);
    tracep->declBit(c+1642,"auto_out_awready", false,-1);
    tracep->declBit(c+1561,"auto_out_awvalid", false,-1);
    tracep->declBus(c+219,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1529,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1530,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+220,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1632,"auto_out_wready", false,-1);
    tracep->declBit(c+1544,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1532,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1533,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1534,"auto_out_wlast", false,-1);
    tracep->declBit(c+1633,"auto_out_bready", false,-1);
    tracep->declBit(c+307,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1326,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1328,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_out_arready", false,-1);
    tracep->declBit(c+71,"auto_out_arvalid", false,-1);
    tracep->declBus(c+42,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+43,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+44,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+45,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+109,"auto_out_rready", false,-1);
    tracep->declBit(c+301,"auto_out_rvalid", false,-1);
    tracep->declBus(c+302,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+309,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+490,"io_deq_valid", false,-1);
    tracep->declBit(c+491,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+490,"full", false,-1);
    tracep->declBit(c+491,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+492,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+493,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+494,"io_deq_valid", false,-1);
    tracep->declBit(c+495,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+494,"full", false,-1);
    tracep->declBit(c+495,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+496,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+497,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+498,"io_deq_valid", false,-1);
    tracep->declBit(c+499,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+498,"full", false,-1);
    tracep->declBit(c+499,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+500,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+501,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+502,"io_deq_valid", false,-1);
    tracep->declBit(c+503,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+502,"full", false,-1);
    tracep->declBit(c+503,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+504,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+506,"io_deq_valid", false,-1);
    tracep->declBit(c+507,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+506,"full", false,-1);
    tracep->declBit(c+507,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+508,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+509,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+510,"io_deq_valid", false,-1);
    tracep->declBit(c+511,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+510,"full", false,-1);
    tracep->declBit(c+511,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+512,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+513,"io_enq_ready", false,-1);
    tracep->declBit(c+96,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+514,"io_deq_valid", false,-1);
    tracep->declBit(c+515,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+514,"full", false,-1);
    tracep->declBit(c+515,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+516,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+517,"io_enq_ready", false,-1);
    tracep->declBit(c+97,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+518,"io_deq_valid", false,-1);
    tracep->declBit(c+519,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+518,"full", false,-1);
    tracep->declBit(c+519,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+520,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+521,"io_enq_ready", false,-1);
    tracep->declBit(c+689,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1476,"io_deq_ready", false,-1);
    tracep->declBit(c+522,"io_deq_valid", false,-1);
    tracep->declBit(c+523,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+522,"full", false,-1);
    tracep->declBit(c+523,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+524,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+525,"io_enq_ready", false,-1);
    tracep->declBit(c+690,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1477,"io_deq_ready", false,-1);
    tracep->declBit(c+526,"io_deq_valid", false,-1);
    tracep->declBit(c+527,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+526,"full", false,-1);
    tracep->declBit(c+527,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+528,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+529,"io_enq_ready", false,-1);
    tracep->declBit(c+691,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1478,"io_deq_ready", false,-1);
    tracep->declBit(c+530,"io_deq_valid", false,-1);
    tracep->declBit(c+531,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+530,"full", false,-1);
    tracep->declBit(c+531,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+532,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+533,"io_enq_ready", false,-1);
    tracep->declBit(c+692,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1479,"io_deq_ready", false,-1);
    tracep->declBit(c+534,"io_deq_valid", false,-1);
    tracep->declBit(c+535,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+534,"full", false,-1);
    tracep->declBit(c+535,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+536,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+537,"io_enq_ready", false,-1);
    tracep->declBit(c+98,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+538,"io_deq_valid", false,-1);
    tracep->declBit(c+539,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+538,"full", false,-1);
    tracep->declBit(c+539,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+540,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+541,"io_enq_ready", false,-1);
    tracep->declBit(c+693,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1480,"io_deq_ready", false,-1);
    tracep->declBit(c+542,"io_deq_valid", false,-1);
    tracep->declBit(c+543,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+542,"full", false,-1);
    tracep->declBit(c+543,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+544,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+545,"io_enq_ready", false,-1);
    tracep->declBit(c+694,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1481,"io_deq_ready", false,-1);
    tracep->declBit(c+546,"io_deq_valid", false,-1);
    tracep->declBit(c+547,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+546,"full", false,-1);
    tracep->declBit(c+547,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+548,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+549,"io_enq_ready", false,-1);
    tracep->declBit(c+695,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1482,"io_deq_ready", false,-1);
    tracep->declBit(c+550,"io_deq_valid", false,-1);
    tracep->declBit(c+551,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+550,"full", false,-1);
    tracep->declBit(c+551,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+552,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+553,"io_enq_ready", false,-1);
    tracep->declBit(c+696,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1483,"io_deq_ready", false,-1);
    tracep->declBit(c+554,"io_deq_valid", false,-1);
    tracep->declBit(c+555,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+554,"full", false,-1);
    tracep->declBit(c+555,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+556,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+557,"io_enq_ready", false,-1);
    tracep->declBit(c+697,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1484,"io_deq_ready", false,-1);
    tracep->declBit(c+558,"io_deq_valid", false,-1);
    tracep->declBit(c+559,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+558,"full", false,-1);
    tracep->declBit(c+559,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+560,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+561,"io_enq_ready", false,-1);
    tracep->declBit(c+698,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1485,"io_deq_ready", false,-1);
    tracep->declBit(c+562,"io_deq_valid", false,-1);
    tracep->declBit(c+563,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+562,"full", false,-1);
    tracep->declBit(c+563,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+564,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+565,"io_enq_ready", false,-1);
    tracep->declBit(c+699,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1486,"io_deq_ready", false,-1);
    tracep->declBit(c+566,"io_deq_valid", false,-1);
    tracep->declBit(c+567,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+566,"full", false,-1);
    tracep->declBit(c+567,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+568,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+569,"io_enq_ready", false,-1);
    tracep->declBit(c+700,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1487,"io_deq_ready", false,-1);
    tracep->declBit(c+570,"io_deq_valid", false,-1);
    tracep->declBit(c+571,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+570,"full", false,-1);
    tracep->declBit(c+571,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+572,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+573,"io_enq_ready", false,-1);
    tracep->declBit(c+701,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1488,"io_deq_ready", false,-1);
    tracep->declBit(c+574,"io_deq_valid", false,-1);
    tracep->declBit(c+575,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+574,"full", false,-1);
    tracep->declBit(c+575,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+576,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+577,"io_enq_ready", false,-1);
    tracep->declBit(c+702,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1489,"io_deq_ready", false,-1);
    tracep->declBit(c+578,"io_deq_valid", false,-1);
    tracep->declBit(c+579,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+578,"full", false,-1);
    tracep->declBit(c+579,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+580,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+581,"io_enq_ready", false,-1);
    tracep->declBit(c+99,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+582,"io_deq_valid", false,-1);
    tracep->declBit(c+583,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+582,"full", false,-1);
    tracep->declBit(c+583,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+584,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+585,"io_enq_ready", false,-1);
    tracep->declBit(c+703,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1490,"io_deq_ready", false,-1);
    tracep->declBit(c+586,"io_deq_valid", false,-1);
    tracep->declBit(c+587,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+586,"full", false,-1);
    tracep->declBit(c+587,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+588,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+589,"io_enq_ready", false,-1);
    tracep->declBit(c+704,"io_enq_valid", false,-1);
    tracep->declBit(c+306,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1491,"io_deq_ready", false,-1);
    tracep->declBit(c+590,"io_deq_valid", false,-1);
    tracep->declBit(c+591,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+590,"full", false,-1);
    tracep->declBit(c+591,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+592,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+593,"io_enq_ready", false,-1);
    tracep->declBit(c+100,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+594,"io_deq_valid", false,-1);
    tracep->declBit(c+595,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+594,"full", false,-1);
    tracep->declBit(c+595,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+596,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+597,"io_enq_ready", false,-1);
    tracep->declBit(c+101,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+598,"io_deq_valid", false,-1);
    tracep->declBit(c+599,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+598,"full", false,-1);
    tracep->declBit(c+599,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+600,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+601,"io_enq_ready", false,-1);
    tracep->declBit(c+102,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+602,"io_deq_valid", false,-1);
    tracep->declBit(c+603,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+602,"full", false,-1);
    tracep->declBit(c+603,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+604,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+605,"io_enq_ready", false,-1);
    tracep->declBit(c+103,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+606,"io_deq_valid", false,-1);
    tracep->declBit(c+607,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+606,"full", false,-1);
    tracep->declBit(c+607,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+608,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+609,"io_enq_ready", false,-1);
    tracep->declBit(c+104,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+24,"io_deq_ready", false,-1);
    tracep->declBit(c+610,"io_deq_valid", false,-1);
    tracep->declBit(c+611,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+610,"full", false,-1);
    tracep->declBit(c+611,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+612,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+613,"io_enq_ready", false,-1);
    tracep->declBit(c+105,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+25,"io_deq_ready", false,-1);
    tracep->declBit(c+614,"io_deq_valid", false,-1);
    tracep->declBit(c+615,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+614,"full", false,-1);
    tracep->declBit(c+615,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+616,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1698,"reset", false,-1);
    tracep->declBit(c+116,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1157,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1745,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1692,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1158,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1154,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1159,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1492,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1493,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1693,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+117,"auto_master_out_arready", false,-1);
    tracep->declBit(c+65,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+50,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+66,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1494,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1495,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1694,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1695,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1496,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1698,"reset", false,-1);
    tracep->declBit(c+1742,"io_interrupt", false,-1);
    tracep->declBit(c+116,"io_master_awready", false,-1);
    tracep->declBit(c+1157,"io_master_awvalid", false,-1);
    tracep->declBus(c+1152,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1745,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1746,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1692,"io_master_wready", false,-1);
    tracep->declBit(c+1158,"io_master_wvalid", false,-1);
    tracep->declBus(c+1154,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"io_master_wlast", false,-1);
    tracep->declBit(c+1159,"io_master_bready", false,-1);
    tracep->declBit(c+1492,"io_master_bvalid", false,-1);
    tracep->declBus(c+1693,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1493,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+117,"io_master_arready", false,-1);
    tracep->declBit(c+65,"io_master_arvalid", false,-1);
    tracep->declBus(c+51,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+50,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+52,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+66,"io_master_rready", false,-1);
    tracep->declBit(c+1494,"io_master_rvalid", false,-1);
    tracep->declBus(c+1695,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1694,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1496,"io_master_rlast", false,-1);
    tracep->declBus(c+1495,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1815,"io_slave_awready", false,-1);
    tracep->declBit(c+1742,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1816,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1745,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1746,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1736,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1817,"io_slave_wready", false,-1);
    tracep->declBit(c+1742,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1816,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1745,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1742,"io_slave_wlast", false,-1);
    tracep->declBit(c+1742,"io_slave_bready", false,-1);
    tracep->declBit(c+1818,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1819,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1820,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1821,"io_slave_arready", false,-1);
    tracep->declBit(c+1742,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1816,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1745,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1746,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1736,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1744,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1742,"io_slave_rready", false,-1);
    tracep->declBit(c+1822,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1823,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1824,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1825,"io_slave_rlast", false,-1);
    tracep->declBus(c+1826,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBit(c+1573,"reset_ifu", false,-1);
    tracep->declBus(c+1574,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1575,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1576,"npc", false,-1, 31,0);
    tracep->declBit(c+1827,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1828,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1574,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1575,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1577,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1578,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1579,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1745,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1746,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1737,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1744,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1580,"ifu_arvalid", false,-1);
    tracep->declBit(c+124,"ifu_arready", false,-1);
    tracep->declBus(c+125,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+126,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+127,"ifu_rlast", false,-1);
    tracep->declBus(c+128,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+129,"ifu_rvalid", false,-1);
    tracep->declBit(c+1581,"ifu_rready", false,-1);
    tracep->declBit(c+1163,"bus_busy", false,-1);
    tracep->declBit(c+1829,"useless1", false,-1);
    tracep->declBit(c+1830,"useless2", false,-1);
    tracep->declBit(c+1831,"useless3", false,-1);
    tracep->declBit(c+1832,"useless4", false,-1);
    tracep->declBit(c+1582,"fencei", false,-1);
    tracep->declBus(c+1164,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1745,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1746,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1165,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1744,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1166,"lsu_arvalid", false,-1);
    tracep->declBit(c+130,"lsu_arready", false,-1);
    tracep->declBus(c+131,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+133,"lsu_rlast", false,-1);
    tracep->declBus(c+134,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+135,"lsu_rvalid", false,-1);
    tracep->declBit(c+1167,"lsu_rready", false,-1);
    tracep->declBus(c+1152,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1745,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1746,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1157,"lsu_awvalid", false,-1);
    tracep->declBit(c+116,"lsu_awready", false,-1);
    tracep->declBus(c+1154,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"lsu_wlast", false,-1);
    tracep->declBit(c+1158,"lsu_wvalid", false,-1);
    tracep->declBit(c+1692,"lsu_wready", false,-1);
    tracep->declBus(c+1693,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1493,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1492,"lsu_bvalid", false,-1);
    tracep->declBit(c+1159,"lsu_bready", false,-1);
    tracep->declBus(c+1583,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1745,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1746,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1584,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1744,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1585,"axi_arvalid", false,-1);
    tracep->declBit(c+136,"axi_arready", false,-1);
    tracep->declBus(c+137,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+138,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+139,"axi_rlast", false,-1);
    tracep->declBus(c+140,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+141,"axi_rvalid", false,-1);
    tracep->declBit(c+1586,"axi_rready", false,-1);
    tracep->declBus(c+1152,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1745,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1746,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1157,"axi_awvalid", false,-1);
    tracep->declBit(c+116,"axi_awready", false,-1);
    tracep->declBus(c+1154,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"axi_wlast", false,-1);
    tracep->declBit(c+1158,"axi_wvalid", false,-1);
    tracep->declBit(c+1692,"axi_wready", false,-1);
    tracep->declBus(c+1693,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1493,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1492,"axi_bvalid", false,-1);
    tracep->declBit(c+1159,"axi_bready", false,-1);
    tracep->declBus(c+78,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+79,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+80,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+81,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+82,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+83,"clint_arvalid", false,-1);
    tracep->declBit(c+1168,"clint_arready", false,-1);
    tracep->declBus(c+1169,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1170,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1171,"clint_rlast", false,-1);
    tracep->declBus(c+1745,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1172,"clint_rvalid", false,-1);
    tracep->declBit(c+84,"clint_rready", false,-1);
    tracep->declBus(c+1833,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1834,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1835,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1836,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1837,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1838,"clint_awvalid", false,-1);
    tracep->declBit(c+1173,"clint_awready", false,-1);
    tracep->declBus(c+1839,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1840,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1841,"clint_wlast", false,-1);
    tracep->declBit(c+1842,"clint_wvalid", false,-1);
    tracep->declBit(c+1174,"clint_wready", false,-1);
    tracep->declBus(c+1175,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1745,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1176,"clint_bvalid", false,-1);
    tracep->declBit(c+1843,"clint_bready", false,-1);
    tracep->declBus(c+1587,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1588,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1700,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1701,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1347,"a5", false,-1, 31,0);
    tracep->declBus(c+1589,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1700,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1701,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1590,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1702,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1591,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1592,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1593,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1594,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1595,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1596,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1597,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1598,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1599,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1600,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1601,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1602,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1603,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1604,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1605,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1606,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1177,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1607,"csr_write", false,-1);
    tracep->declBus(c+1608,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1348+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1178,"wdata", false,-1, 31,0);
    tracep->declBus(c+1179,"waddr", false,-1, 4,0);
    tracep->declBit(c+1180,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1352+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1181,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1182,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1183,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1184,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1844,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1185,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1186,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1187,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1188,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1189,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1190,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1191,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1192,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1193,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1194,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1195,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1196,"npc_valid", false,-1);
    tracep->declBit(c+1197,"rd_exu_valid", false,-1);
    tracep->declBus(c+1198,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1199,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1200,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1201,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1845,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1202,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1203,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1204,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1205,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1206,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1207,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1208,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1209,"ready_lsu_to_wbu", false,-1);
    tracep->declBit(c+1210,"rd_lsu_valid", false,-1);
    tracep->declBit(c+1211,"rd_wbu_valid", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBus(c+1579,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1745,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1746,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1737,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1744,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1580,"arvalid_i_a", false,-1);
    tracep->declBit(c+124,"arready_o_a", false,-1);
    tracep->declBus(c+125,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+126,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+127,"rlast_o_a", false,-1);
    tracep->declBus(c+128,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+129,"rvalid_o_a", false,-1);
    tracep->declBit(c+1581,"rready_i_a", false,-1);
    tracep->declBus(c+1846,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1745,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1746,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1736,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1744,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1742,"awvalid_i_a", false,-1);
    tracep->declBit(c+1847,"awready_o_a", false,-1);
    tracep->declBus(c+1846,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1745,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1742,"wlast_i_a", false,-1);
    tracep->declBit(c+1742,"wvalid_i_a", false,-1);
    tracep->declBit(c+1848,"wready_o_a", false,-1);
    tracep->declBus(c+1849,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1850,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1851,"bvalid_o_a", false,-1);
    tracep->declBit(c+1742,"bready_i_a", false,-1);
    tracep->declBus(c+1164,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1745,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1746,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1165,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1744,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1166,"arvalid_i_b", false,-1);
    tracep->declBit(c+130,"arready_o_b", false,-1);
    tracep->declBus(c+131,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+132,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+133,"rlast_o_b", false,-1);
    tracep->declBus(c+134,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+135,"rvalid_o_b", false,-1);
    tracep->declBit(c+1167,"rready_i_b", false,-1);
    tracep->declBus(c+1152,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1745,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1746,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1153,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1744,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1157,"awvalid_i_b", false,-1);
    tracep->declBit(c+116,"awready_o_b", false,-1);
    tracep->declBus(c+1154,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1155,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1156,"wlast_i_b", false,-1);
    tracep->declBit(c+1158,"wvalid_i_b", false,-1);
    tracep->declBit(c+1692,"wready_o_b", false,-1);
    tracep->declBus(c+1693,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1493,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1492,"bvalid_o_b", false,-1);
    tracep->declBit(c+1159,"bready_i_b", false,-1);
    tracep->declBus(c+1583,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1745,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1746,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1584,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1744,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1585,"arvalid_o", false,-1);
    tracep->declBit(c+136,"arready_i", false,-1);
    tracep->declBus(c+137,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+138,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+139,"rlast_i", false,-1);
    tracep->declBus(c+140,"rid_i", false,-1, 3,0);
    tracep->declBit(c+141,"rvalid_i", false,-1);
    tracep->declBit(c+1586,"rready_o", false,-1);
    tracep->declBus(c+1152,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1745,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1746,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1153,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1744,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1157,"awvalid_o", false,-1);
    tracep->declBit(c+116,"awready_i", false,-1);
    tracep->declBus(c+1154,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1155,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1156,"wlast_o", false,-1);
    tracep->declBit(c+1158,"wvalid_o", false,-1);
    tracep->declBit(c+1692,"wready_i", false,-1);
    tracep->declBus(c+1693,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1493,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1492,"bvalid_i", false,-1);
    tracep->declBit(c+1159,"bready_o", false,-1);
    tracep->declBit(c+1163,"bus_busy", false,-1);
    tracep->declBus(c+1852,"MASTER_A", false,-1, 0,0);
    tracep->declBus(c+1853,"MASTER_B", false,-1, 0,0);
    tracep->declBit(c+1212,"arb_grant", false,-1);
    tracep->declBit(c+1213,"arb_locked", false,-1);
    tracep->declBit(c+1214,"current_master", false,-1);
    tracep->declBit(c+1703,"ar_handshake", false,-1);
    tracep->declBit(c+1704,"r_last_handshake", false,-1);
    tracep->declBit(c+1609,"arb_grant_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBus(c+78,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+79,"arid_i", false,-1, 3,0);
    tracep->declBus(c+80,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+81,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+82,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+83,"arvalid_i", false,-1);
    tracep->declBit(c+1168,"arready_o", false,-1);
    tracep->declBus(c+1169,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1170,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1171,"rlast_o", false,-1);
    tracep->declBus(c+1745,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1172,"rvalid_o", false,-1);
    tracep->declBit(c+84,"rready_i", false,-1);
    tracep->declBus(c+1833,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1834,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1835,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1836,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1837,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1838,"awvalid_i", false,-1);
    tracep->declBit(c+1173,"awready_o", false,-1);
    tracep->declBus(c+1839,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1840,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1841,"wlast_i", false,-1);
    tracep->declBit(c+1842,"wvalid_i", false,-1);
    tracep->declBit(c+1174,"wready_o", false,-1);
    tracep->declBus(c+1175,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1745,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1176,"bvalid_o", false,-1);
    tracep->declBit(c+1843,"bready_i", false,-1);
    tracep->declBit(c+1215,"ar_state", false,-1);
    tracep->declBit(c+1216,"r_state", false,-1);
    tracep->declBit(c+1217,"aw_state", false,-1);
    tracep->declBit(c+1218,"w_state", false,-1);
    tracep->declBit(c+1854,"b_state", false,-1);
    tracep->declBus(c+1219,"araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1221,"wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1855,"wvalid", false,-1);
    tracep->declBit(c+1223,"flag_waddr", false,-1);
    tracep->declBit(c+1224,"flag_wdata", false,-1);
    tracep->declBit(c+1225,"flag_rdata", false,-1);
    tracep->declBit(c+1226,"flag_raddr", false,-1);
    tracep->declBit(c+1856,"flag_write", false,-1);
    tracep->declBus(c+1227,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1228,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1229,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1230,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1231,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1232,"lfsr_in", false,-1);
    tracep->declBus(c+1233,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1234,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBit(c+1573,"reset_ifu", false,-1);
    tracep->declBus(c+1589,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1700,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1701,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1590,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1702,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1591,"a_in_src_i", false,-1);
    tracep->declBus(c+1592,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1593,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1594,"adder_a_src_i", false,-1);
    tracep->declBit(c+1595,"adder_out_src_i", false,-1);
    tracep->declBus(c+1596,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1597,"MemRead_i", false,-1);
    tracep->declBit(c+1598,"MemWrite_i", false,-1);
    tracep->declBus(c+1599,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1600,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1601,"wb_src_i", false,-1);
    tracep->declBit(c+1602,"csr_write_i", false,-1);
    tracep->declBit(c+1603,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1604,"reg_write_i", false,-1);
    tracep->declBus(c+1605,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1606,"exu_valid_i", false,-1);
    tracep->declBit(c+1177,"exu_ready_o", false,-1);
    tracep->declBus(c+1181,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1182,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1183,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1184,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1576,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1185,"MemRead_o", false,-1);
    tracep->declBit(c+1186,"MemWrite_o", false,-1);
    tracep->declBus(c+1187,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1188,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1189,"wb_src_o", false,-1);
    tracep->declBit(c+1190,"csr_write_o", false,-1);
    tracep->declBit(c+1191,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1192,"reg_write_o", false,-1);
    tracep->declBus(c+1193,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1194,"exu_valid_o", false,-1);
    tracep->declBit(c+1195,"exu_ready_i", false,-1);
    tracep->declBit(c+1196,"npc_valid", false,-1);
    tracep->declBit(c+1197,"rd_exu_valid", false,-1);
    tracep->declBus(c+1236,"pc", false,-1, 31,0);
    tracep->declBus(c+1182,"rs1", false,-1, 31,0);
    tracep->declBus(c+1183,"rs2", false,-1, 31,0);
    tracep->declBus(c+1237,"imm", false,-1, 31,0);
    tracep->declBus(c+1238,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1239,"a_in_src", false,-1);
    tracep->declBus(c+1240,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1241,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1242,"adder_a_src", false,-1);
    tracep->declBit(c+1243,"adder_out_src", false,-1);
    tracep->declBus(c+1244,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1245,"npc_flag", false,-1);
    tracep->declBus(c+1246,"a_in", false,-1, 31,0);
    tracep->declBus(c+1247,"b_in", false,-1, 31,0);
    tracep->declBus(c+1248,"a_out", false,-1, 31,0);
    tracep->declBus(c+1249,"add_out", false,-1, 31,0);
    tracep->declBus(c+1250,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1181,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1576,"npc", false,-1, 31,0);
    tracep->declBit(c+1251,"zero", false,-1);
    tracep->declBus(c+1744,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1857,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1858,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1252,"current_state", false,-1, 1,0);
    tracep->declBus(c+1610,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1246,"a", false,-1, 31,0);
    tracep->declBus(c+1247,"b", false,-1, 31,0);
    tracep->declBus(c+1244,"op", false,-1, 3,0);
    tracep->declBus(c+1181,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1251,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1859,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1182,"d0", false,-1, 31,0);
    tracep->declBus(c+1236,"d1", false,-1, 31,0);
    tracep->declBit(c+1239,"sel", false,-1);
    tracep->declBus(c+1246,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1859,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1183,"d0", false,-1, 31,0);
    tracep->declBus(c+1237,"d1", false,-1, 31,0);
    tracep->declBus(c+1860,"d2", false,-1, 31,0);
    tracep->declBus(c+1238,"d3", false,-1, 31,0);
    tracep->declBus(c+1240,"sel", false,-1, 1,0);
    tracep->declBus(c+1247,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1248,"a", false,-1, 31,0);
    tracep->declBus(c+1237,"b", false,-1, 31,0);
    tracep->declBus(c+1249,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1859,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1236,"d0", false,-1, 31,0);
    tracep->declBus(c+1182,"d1", false,-1, 31,0);
    tracep->declBit(c+1242,"sel", false,-1);
    tracep->declBus(c+1248,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1859,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1249,"d0", false,-1, 31,0);
    tracep->declBus(c+1238,"d1", false,-1, 31,0);
    tracep->declBit(c+1243,"sel", false,-1);
    tracep->declBus(c+1250,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1253,"pc4", false,-1, 31,0);
    tracep->declBus(c+1250,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1241,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1251,"zero", false,-1);
    tracep->declBus(c+1181,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1576,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBit(c+1573,"reset_ifu", false,-1);
    tracep->declBus(c+1587,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1588,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1700,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1701,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1347,"a5", false,-1, 31,0);
    tracep->declBus(c+1574,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1575,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1577,"idu_valid_i", false,-1);
    tracep->declBit(c+1578,"idu_ready_o", false,-1);
    tracep->declBus(c+1589,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1700,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1701,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1590,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1702,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1591,"a_in_src_o", false,-1);
    tracep->declBus(c+1592,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1593,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1594,"adder_a_src_o", false,-1);
    tracep->declBit(c+1595,"adder_out_src_o", false,-1);
    tracep->declBus(c+1596,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1597,"MemRead_o", false,-1);
    tracep->declBit(c+1598,"MemWrite_o", false,-1);
    tracep->declBus(c+1599,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1600,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1601,"wb_src_o", false,-1);
    tracep->declBit(c+1602,"csr_write_o", false,-1);
    tracep->declBit(c+1603,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1604,"reg_write_o", false,-1);
    tracep->declBus(c+1605,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1606,"idu_valid_o", false,-1);
    tracep->declBit(c+1177,"idu_ready_i", false,-1);
    tracep->declBit(c+1607,"csr_write_i", false,-1);
    tracep->declBus(c+1608,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1384+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1582,"fencei", false,-1);
    tracep->declBus(c+1254,"exu_rd", false,-1, 4,0);
    tracep->declBus(c+1255,"lsu_rd", false,-1, 4,0);
    tracep->declBus(c+1256,"wbu_rd", false,-1, 4,0);
    tracep->declBus(c+1589,"pc", false,-1, 31,0);
    tracep->declBus(c+1611,"inst", false,-1, 31,0);
    tracep->declBus(c+1612,"opcode", false,-1, 6,0);
    tracep->declBus(c+1613,"wmask_tmp", false,-1, 7,0);
    tracep->declBit(c+1614,"opcode_r", false,-1);
    tracep->declBit(c+1615,"opcode_i", false,-1);
    tracep->declBit(c+1616,"opcode_s", false,-1);
    tracep->declBit(c+1617,"opcode_sb", false,-1);
    tracep->declBit(c+1618,"opcode_u", false,-1);
    tracep->declBit(c+1619,"opcode_uj", false,-1);
    tracep->declBit(c+1705,"isRAW", false,-1);
    tracep->declBit(c+1620,"flag", false,-1);
    tracep->declBit(c+1706,"exu_raw", false,-1);
    tracep->declBit(c+1707,"lsu_raw", false,-1);
    tracep->declBit(c+1708,"wbu_raw", false,-1);
    tracep->declBus(c+1744,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1857,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1858,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1621,"current_state", false,-1, 1,0);
    tracep->declBus(c+1622,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1611,"inst", false,-1, 31,0);
    tracep->declBus(c+1596,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1612,"opcode", false,-1, 6,0);
    tracep->declBus(c+1623,"funct3", false,-1, 2,0);
    tracep->declBus(c+1624,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1607,"wen", false,-1);
    tracep->declBus(c+1611,"inst", false,-1, 31,0);
    tracep->declBus(c+1608,"wdata", false,-1, 31,0);
    tracep->declBus(c+1347,"NO", false,-1, 31,0);
    tracep->declBus(c+1589,"pc", false,-1, 31,0);
    tracep->declBus(c+1702,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1388+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1392,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1393,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1394,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1395,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1861,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1862,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1612,"opcode", false,-1, 6,0);
    tracep->declBus(c+1623,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1611,"inst", false,-1, 31,0);
    tracep->declBit(c+1591,"a_in_src", false,-1);
    tracep->declBus(c+1592,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1604,"reg_write", false,-1);
    tracep->declBus(c+1593,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1594,"adder_a_src", false,-1);
    tracep->declBit(c+1597,"MemRead", false,-1);
    tracep->declBit(c+1598,"MemWrite", false,-1);
    tracep->declBus(c+1613,"wmask", false,-1, 7,0);
    tracep->declBit(c+1601,"wb_src", false,-1);
    tracep->declBus(c+1600,"rmask", false,-1, 2,0);
    tracep->declBit(c+1602,"csr_write", false,-1);
    tracep->declBit(c+1595,"adder_out_src", false,-1);
    tracep->declBit(c+1603,"csr_wdata_src", false,-1);
    tracep->declBus(c+1612,"opcode", false,-1, 6,0);
    tracep->declBus(c+1623,"funct3", false,-1, 2,0);
    tracep->declBus(c+1624,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1859,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1611,"inst", false,-1, 31,0);
    tracep->declBus(c+1590,"data", false,-1, 31,0);
    tracep->declBus(c+1612,"opcode", false,-1, 6,0);
    tracep->declBus(c+1623,"funct3", false,-1, 2,0);
    tracep->declBus(c+1624,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBus(c+1579,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1745,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1746,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1737,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1744,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1580,"arvalid_o", false,-1);
    tracep->declBit(c+124,"arready_i", false,-1);
    tracep->declBus(c+125,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+126,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+127,"rlast_i", false,-1);
    tracep->declBus(c+128,"rid_i", false,-1, 3,0);
    tracep->declBit(c+129,"rvalid_i", false,-1);
    tracep->declBit(c+1581,"rready_o", false,-1);
    tracep->declBus(c+1576,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1196,"npc_valid", false,-1);
    tracep->declBit(c+1573,"reset_o", false,-1);
    tracep->declBus(c+1574,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1575,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1577,"ifu_valid_o", false,-1);
    tracep->declBit(c+1578,"ifu_ready_i", false,-1);
    tracep->declBit(c+1163,"bus_busy", false,-1);
    tracep->declBus(c+1625,"pc_dbg", false,-1, 31,0);
    tracep->declBus(c+1736,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1733,"S_WAIT_R", false,-1, 2,0);
    tracep->declBus(c+1737,"S_OUT", false,-1, 2,0);
    tracep->declBus(c+1738,"S_FLUSH", false,-1, 2,0);
    tracep->declBus(c+1625,"pc_fetch", false,-1, 31,0);
    tracep->declBus(c+1626,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1627,"inst_buf", false,-1, 31,0);
    tracep->declBus(c+1628,"state", false,-1, 2,0);
    tracep->declBit(c+1629,"ctrl_hazard", false,-1);
    tracep->declBit(c+1630,"ar_inflight", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBus(c+1181,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1182,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1183,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1184,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1185,"MemRead_i", false,-1);
    tracep->declBit(c+1186,"MemWrite_i", false,-1);
    tracep->declBus(c+1187,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1188,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1189,"wb_src_i", false,-1);
    tracep->declBit(c+1190,"csr_write_i", false,-1);
    tracep->declBit(c+1191,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1192,"reg_write_i", false,-1);
    tracep->declBus(c+1193,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1194,"lsu_valid_i", false,-1);
    tracep->declBit(c+1195,"lsu_ready_o", false,-1);
    tracep->declBus(c+1198,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1199,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1200,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1201,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1202,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1203,"wb_src_o", false,-1);
    tracep->declBit(c+1204,"csr_write_o", false,-1);
    tracep->declBit(c+1205,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1206,"reg_write_o", false,-1);
    tracep->declBus(c+1207,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1208,"lsu_valid_o", false,-1);
    tracep->declBit(c+1209,"lsu_ready_i", false,-1);
    tracep->declBus(c+1164,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1745,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1746,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1165,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1744,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1166,"arvalid_o", false,-1);
    tracep->declBit(c+130,"arready_i", false,-1);
    tracep->declBus(c+131,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+132,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+133,"rlast_i", false,-1);
    tracep->declBus(c+134,"rid_i", false,-1, 3,0);
    tracep->declBit(c+135,"rvalid_i", false,-1);
    tracep->declBit(c+1167,"rready_o", false,-1);
    tracep->declBus(c+1152,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1745,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1746,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1153,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1744,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1157,"awvalid_o", false,-1);
    tracep->declBit(c+116,"awready_i", false,-1);
    tracep->declBus(c+1154,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1155,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1156,"wlast_o", false,-1);
    tracep->declBit(c+1158,"wvalid_o", false,-1);
    tracep->declBit(c+1692,"wready_i", false,-1);
    tracep->declBus(c+1693,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1493,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1492,"bvalid_i", false,-1);
    tracep->declBit(c+1159,"bready_o", false,-1);
    tracep->declBit(c+1163,"bus_busy", false,-1);
    tracep->declBit(c+1210,"rd_lsu_valid", false,-1);
    tracep->declBus(c+1198,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1199,"rs1", false,-1, 31,0);
    tracep->declBus(c+1863,"rs2", false,-1, 31,0);
    tracep->declBus(c+1864,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1202,"rmask", false,-1, 2,0);
    tracep->declBus(c+1257,"wmask", false,-1, 3,0);
    tracep->declBit(c+1258,"flag", false,-1);
    tracep->declBit(c+1865,"wvalid_tmp", false,-1);
    tracep->declBit(c+1259,"MemRead", false,-1);
    tracep->declBit(c+1260,"MemWrite", false,-1);
    tracep->declBit(c+1166,"arvalid", false,-1);
    tracep->declBus(c+1164,"araddr", false,-1, 31,0);
    tracep->declBit(c+1167,"rready", false,-1);
    tracep->declBus(c+1152,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1157,"awvalid", false,-1);
    tracep->declBus(c+1154,"wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1158,"wvalid", false,-1);
    tracep->declBit(c+1159,"bready", false,-1);
    tracep->declBit(c+1261,"read_mem", false,-1);
    tracep->declBit(c+1262,"write_mem", false,-1);
    tracep->declBus(c+1744,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1857,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1858,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1263,"current_state", false,-1, 1,0);
    tracep->declBus(c+1709,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1866,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1859,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBus(c+1178,"wdata", false,-1, 31,0);
    tracep->declBus(c+1179,"waddr", false,-1, 4,0);
    tracep->declBit(c+1180,"wen", false,-1);
    tracep->declBus(c+1587,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1700,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1588,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1701,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1347,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1396+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1428+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBus(c+1198,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1199,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1200,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1201,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1202,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1203,"wb_src_i", false,-1);
    tracep->declBit(c+1204,"csr_write_i", false,-1);
    tracep->declBit(c+1205,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1206,"reg_write_i", false,-1);
    tracep->declBus(c+1207,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1208,"wbu_valid_i", false,-1);
    tracep->declBit(c+1209,"wbu_ready_o", false,-1);
    tracep->declBus(c+1608,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1178,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1607,"csr_write_o", false,-1);
    tracep->declBit(c+1180,"reg_write_o", false,-1);
    tracep->declBus(c+1179,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1211,"rd_wbu_valid", false,-1);
    tracep->declBus(c+1264,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1265,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1266,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1267,"rs1", false,-1, 31,0);
    tracep->declBus(c+1268,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1269,"rmask", false,-1, 2,0);
    tracep->declBit(c+1270,"wb_src", false,-1);
    tracep->declBit(c+1271,"csr_wdata_src", false,-1);
    tracep->declBit(c+1272,"difftest_check", false,-1);
    tracep->declBit(c+1273,"difftest_check_flag", false,-1);
    tracep->declBus(c+1744,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1857,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1858,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1274,"current_state", false,-1, 1,0);
    tracep->declBus(c+1275,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1859,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1267,"d0", false,-1, 31,0);
    tracep->declBus(c+1268,"d1", false,-1, 31,0);
    tracep->declBit(c+1271,"sel", false,-1);
    tracep->declBus(c+1608,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1265,"read_data", false,-1, 31,0);
    tracep->declBus(c+1276,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1269,"rmask", false,-1, 2,0);
    tracep->declBus(c+1264,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1277,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1278,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1279,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1280,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1281,"byte3", false,-1, 31,0);
    tracep->declBus(c+1282,"byte2", false,-1, 31,0);
    tracep->declBus(c+1283,"byte1", false,-1, 31,0);
    tracep->declBus(c+1284,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1859,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1266,"d0", false,-1, 31,0);
    tracep->declBus(c+1264,"d1", false,-1, 31,0);
    tracep->declBit(c+1270,"sel", false,-1);
    tracep->declBus(c+1178,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1699,"rst_n", false,-1);
    tracep->declBus(c+1583,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1745,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1746,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1584,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1744,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1585,"axi_arvalid_i", false,-1);
    tracep->declBit(c+136,"axi_arready_o", false,-1);
    tracep->declBus(c+137,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+138,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+139,"axi_rlast_o", false,-1);
    tracep->declBus(c+140,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+141,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1586,"axi_rready_i", false,-1);
    tracep->declBus(c+1152,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1745,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1746,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1153,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1744,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1157,"axi_awvalid_i", false,-1);
    tracep->declBit(c+116,"axi_awready_o", false,-1);
    tracep->declBus(c+1154,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1155,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1156,"axi_wlast_i", false,-1);
    tracep->declBit(c+1158,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1692,"axi_wready_o", false,-1);
    tracep->declBus(c+1693,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1493,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1492,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1159,"axi_bready_i", false,-1);
    tracep->declBus(c+51,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+50,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+52,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+53,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+54,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+65,"sram_arvalid_o", false,-1);
    tracep->declBit(c+117,"sram_arready_i", false,-1);
    tracep->declBus(c+1694,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1695,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1496,"sram_rlast_i", false,-1);
    tracep->declBus(c+1495,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1494,"sram_rvalid_i", false,-1);
    tracep->declBit(c+66,"sram_rready_o", false,-1);
    tracep->declBus(c+1152,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1745,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1746,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1153,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1744,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1157,"sram_awvalid_o", false,-1);
    tracep->declBit(c+116,"sram_awready_i", false,-1);
    tracep->declBus(c+1154,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1155,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1156,"sram_wlast_o", false,-1);
    tracep->declBit(c+1158,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1692,"sram_wready_i", false,-1);
    tracep->declBus(c+1693,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1493,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1492,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1159,"sram_bready_o", false,-1);
    tracep->declBus(c+78,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+79,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+80,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+81,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+82,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+83,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1168,"clint_arready_i", false,-1);
    tracep->declBus(c+1169,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1170,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1171,"clint_rlast_i", false,-1);
    tracep->declBus(c+1745,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1172,"clint_rvalid_i", false,-1);
    tracep->declBit(c+84,"clint_rready_o", false,-1);
    tracep->declBus(c+1833,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1834,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1835,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1836,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1837,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1838,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1173,"clint_awready_i", false,-1);
    tracep->declBus(c+1839,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1840,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1841,"clint_wlast_o", false,-1);
    tracep->declBit(c+1842,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1174,"clint_wready_i", false,-1);
    tracep->declBus(c+1175,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1745,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1176,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1843,"clint_bready_o", false,-1);
    tracep->declBit(c+85,"ar_switch", false,-1);
    tracep->declBit(c+86,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"io_d", false,-1);
    tracep->declBit(c+617,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"io_d", false,-1);
    tracep->declBit(c+617,"io_q", false,-1);
    tracep->declBit(c+617,"sync_0", false,-1);
    tracep->declBit(c+618,"sync_1", false,-1);
    tracep->declBit(c+619,"sync_2", false,-1);
    tracep->declBit(c+620,"sync_3", false,-1);
    tracep->declBit(c+621,"sync_4", false,-1);
    tracep->declBit(c+622,"sync_5", false,-1);
    tracep->declBit(c+623,"sync_6", false,-1);
    tracep->declBit(c+624,"sync_7", false,-1);
    tracep->declBit(c+625,"sync_8", false,-1);
    tracep->declBit(c+626,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1310,"auto_in_psel", false,-1);
    tracep->declBit(c+1311,"auto_in_penable", false,-1);
    tracep->declBit(c+1300,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1309,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+844,"auto_in_pready", false,-1);
    tracep->declBit(c+1742,"auto_in_pslverr", false,-1);
    tracep->declBus(c+845,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1656,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1657,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1658,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1659,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1660,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1661,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1662,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1663,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1664,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1665,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1460,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1310,"in_psel", false,-1);
    tracep->declBit(c+1311,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1300,"in_pwrite", false,-1);
    tracep->declBus(c+1301,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+844,"in_pready", false,-1);
    tracep->declBus(c+845,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1742,"in_pslverr", false,-1);
    tracep->declBus(c+1656,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1657,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1658,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1659,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1660,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1661,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1662,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1663,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1664,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1665,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+854,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+845,"rdata", false,-1, 31,0);
    tracep->declBus(c+855,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+844,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+856,"num", false,-1, 3,0);
    tracep->declBus(c+1658,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+857,"num", false,-1, 3,0);
    tracep->declBus(c+1659,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+858,"num", false,-1, 3,0);
    tracep->declBus(c+1660,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+859,"num", false,-1, 3,0);
    tracep->declBus(c+1661,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+860,"num", false,-1, 3,0);
    tracep->declBus(c+1662,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+861,"num", false,-1, 3,0);
    tracep->declBus(c+1663,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+862,"num", false,-1, 3,0);
    tracep->declBus(c+1664,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+863,"num", false,-1, 3,0);
    tracep->declBus(c+1665,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1307,"auto_in_psel", false,-1);
    tracep->declBit(c+1308,"auto_in_penable", false,-1);
    tracep->declBit(c+1300,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1309,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+183,"auto_in_pready", false,-1);
    tracep->declBit(c+1742,"auto_in_pslverr", false,-1);
    tracep->declBus(c+184,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1666,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1667,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1460,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1307,"in_psel", false,-1);
    tracep->declBit(c+1308,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1300,"in_pwrite", false,-1);
    tracep->declBus(c+1301,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+183,"in_pready", false,-1);
    tracep->declBus(c+184,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1742,"in_pslverr", false,-1);
    tracep->declBit(c+1666,"ps2_clk", false,-1);
    tracep->declBit(c+1667,"ps2_data", false,-1);
    tracep->declBus(c+627,"data_r", false,-1, 7,0);
    tracep->declBus(c+628,"old_data", false,-1, 7,0);
    tracep->declBus(c+629,"data_asic", false,-1, 7,0);
    tracep->declBus(c+630,"buffer", false,-1, 7,0);
    tracep->declBit(c+631,"ready", false,-1);
    tracep->declBit(c+632,"nextdata_n", false,-1);
    tracep->declBit(c+633,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1710,"clrn", false,-1);
    tracep->declBit(c+1666,"ps2_clk", false,-1);
    tracep->declBit(c+1667,"ps2_data", false,-1);
    tracep->declBit(c+632,"nextdata_n", false,-1);
    tracep->declBus(c+630,"data", false,-1, 7,0);
    tracep->declBit(c+631,"ready", false,-1);
    tracep->declBit(c+633,"overflow", false,-1);
    tracep->declBus(c+634,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+635+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+643,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+644,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+645,"count", false,-1, 3,0);
    tracep->declBus(c+646,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+647,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1562,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1563,"auto_in_wvalid", false,-1);
    tracep->declBit(c+413,"auto_in_arready", false,-1);
    tracep->declBit(c+72,"auto_in_arvalid", false,-1);
    tracep->declBus(c+42,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+73,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+9,"auto_in_rready", false,-1);
    tracep->declBit(c+414,"auto_in_rvalid", false,-1);
    tracep->declBus(c+415,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+416,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+414,"state", false,-1);
    tracep->declBus(c+416,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+415,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+87,"raddr", false,-1, 31,0);
    tracep->declBit(c+88,"ren", false,-1);
    tracep->declBus(c+89,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1312,"auto_in_psel", false,-1);
    tracep->declBit(c+1313,"auto_in_penable", false,-1);
    tracep->declBit(c+1300,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1296,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1683,"auto_in_pready", false,-1);
    tracep->declBit(c+1742,"auto_in_pslverr", false,-1);
    tracep->declBus(c+185,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1677,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1648,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1678,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1296,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1312,"in_psel", false,-1);
    tracep->declBit(c+1313,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1300,"in_pwrite", false,-1);
    tracep->declBus(c+1301,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1683,"in_pready", false,-1);
    tracep->declBus(c+185,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1742,"in_pslverr", false,-1);
    tracep->declBit(c+1677,"qspi_sck", false,-1);
    tracep->declBit(c+1648,"qspi_ce_n", false,-1);
    tracep->declBus(c+1678,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1678,"din", false,-1, 3,0);
    tracep->declBus(c+1711,"dout", false,-1, 3,0);
    tracep->declBus(c+1649,"douten", false,-1, 3,0);
    tracep->declBit(c+1712,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1654,"clk_i", false,-1);
    tracep->declBit(c+1655,"rst_i", false,-1);
    tracep->declBus(c+1296,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1301,"dat_i", false,-1, 31,0);
    tracep->declBus(c+185,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1302,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1312,"cyc_i", false,-1);
    tracep->declBit(c+1312,"stb_i", false,-1);
    tracep->declBit(c+1712,"ack_o", false,-1);
    tracep->declBit(c+1300,"we_i", false,-1);
    tracep->declBit(c+1677,"sck", false,-1);
    tracep->declBit(c+1648,"ce_n", false,-1);
    tracep->declBus(c+1678,"din", false,-1, 3,0);
    tracep->declBus(c+1711,"dout", false,-1, 3,0);
    tracep->declBus(c+1649,"douten", false,-1, 3,0);
    tracep->declBus(c+1744,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1857,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1858,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+864,"mr_sck", false,-1);
    tracep->declBit(c+865,"mr_ce_n", false,-1);
    tracep->declBus(c+1678,"mr_din", false,-1, 3,0);
    tracep->declBus(c+866,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+867,"mr_doe", false,-1);
    tracep->declBit(c+868,"mw_sck", false,-1);
    tracep->declBit(c+869,"mw_ce_n", false,-1);
    tracep->declBus(c+1678,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1514,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+870,"mw_doe", false,-1);
    tracep->declBit(c+1650,"mr_rd", false,-1);
    tracep->declBit(c+871,"mr_done", false,-1);
    tracep->declBit(c+1651,"mw_wr", false,-1);
    tracep->declBit(c+1515,"mw_done", false,-1);
    tracep->declBit(c+1312,"wb_valid", false,-1);
    tracep->declBit(c+1461,"wb_we", false,-1);
    tracep->declBit(c+1462,"wb_re", false,-1);
    tracep->declBus(c+1525,"state", false,-1, 1,0);
    tracep->declBus(c+1713,"nstate", false,-1, 1,0);
    tracep->declBus(c+1714,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1715,"qpi_sck", false,-1);
    tracep->declBus(c+1463,"size", false,-1, 2,0);
    tracep->declBus(c+1464,"byte0", false,-1, 7,0);
    tracep->declBus(c+1465,"byte1", false,-1, 7,0);
    tracep->declBus(c+1466,"byte2", false,-1, 7,0);
    tracep->declBus(c+1467,"byte3", false,-1, 7,0);
    tracep->declBus(c+1716,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+1468,"addr", false,-1, 23,0);
    tracep->declBit(c+1650,"rd", false,-1);
    tracep->declBus(c+1739,"size", false,-1, 2,0);
    tracep->declBit(c+871,"done", false,-1);
    tracep->declBus(c+185,"line", false,-1, 31,0);
    tracep->declBit(c+864,"sck", false,-1);
    tracep->declBit(c+865,"ce_n", false,-1);
    tracep->declBus(c+1678,"din", false,-1, 3,0);
    tracep->declBus(c+866,"dout", false,-1, 3,0);
    tracep->declBit(c+867,"douten", false,-1);
    tracep->declBus(c+1852,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1853,"READ", false,-1, 0,0);
    tracep->declBus(c+1867,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+872,"state", false,-1);
    tracep->declBit(c+1652,"nstate", false,-1);
    tracep->declBus(c+873,"counter", false,-1, 7,0);
    tracep->declBus(c+874,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+648+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1868,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+875,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+1469,"addr", false,-1, 23,0);
    tracep->declBus(c+1716,"line", false,-1, 31,0);
    tracep->declBus(c+1463,"size", false,-1, 2,0);
    tracep->declBit(c+1651,"wr", false,-1);
    tracep->declBit(c+1515,"done", false,-1);
    tracep->declBit(c+868,"sck", false,-1);
    tracep->declBit(c+869,"ce_n", false,-1);
    tracep->declBus(c+1678,"din", false,-1, 3,0);
    tracep->declBus(c+1514,"dout", false,-1, 3,0);
    tracep->declBit(c+870,"douten", false,-1);
    tracep->declBus(c+1852,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1853,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1470,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+876,"state", false,-1);
    tracep->declBit(c+1653,"nstate", false,-1);
    tracep->declBus(c+877,"counter", false,-1, 7,0);
    tracep->declBus(c+878,"saddr", false,-1, 23,0);
    tracep->declBus(c+1869,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+107,"auto_in_awready", false,-1);
    tracep->declBit(c+1539,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1745,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"auto_in_wready", false,-1);
    tracep->declBit(c+1540,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1154,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_in_wlast", false,-1);
    tracep->declBit(c+1688,"auto_in_bready", false,-1);
    tracep->declBit(c+853,"auto_in_bvalid", false,-1);
    tracep->declBus(c+850,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1744,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+106,"auto_in_arready", false,-1);
    tracep->declBit(c+49,"auto_in_arvalid", false,-1);
    tracep->declBus(c+50,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+52,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1687,"auto_in_rready", false,-1);
    tracep->declBit(c+849,"auto_in_rvalid", false,-1);
    tracep->declBus(c+850,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+851,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1744,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+852,"auto_in_rlast", false,-1);
    tracep->declBit(c+1679,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+836,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+837,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+838,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+839,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+840,"sdram_bundle_we", false,-1);
    tracep->declBus(c+26,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+841,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+842,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1520,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+107,"in_awready", false,-1);
    tracep->declBit(c+1539,"in_awvalid", false,-1);
    tracep->declBus(c+1152,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1745,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1746,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1153,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1744,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+108,"in_wready", false,-1);
    tracep->declBit(c+1540,"in_wvalid", false,-1);
    tracep->declBus(c+1154,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"in_wlast", false,-1);
    tracep->declBit(c+1688,"in_bready", false,-1);
    tracep->declBit(c+853,"in_bvalid", false,-1);
    tracep->declBus(c+1744,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+850,"in_bid", false,-1, 3,0);
    tracep->declBit(c+106,"in_arready", false,-1);
    tracep->declBit(c+49,"in_arvalid", false,-1);
    tracep->declBus(c+51,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+50,"in_arid", false,-1, 3,0);
    tracep->declBus(c+52,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+54,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1687,"in_rready", false,-1);
    tracep->declBit(c+849,"in_rvalid", false,-1);
    tracep->declBus(c+1744,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+851,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+852,"in_rlast", false,-1);
    tracep->declBus(c+850,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1679,"sdram_clk", false,-1);
    tracep->declBit(c+836,"sdram_cke", false,-1);
    tracep->declBit(c+837,"sdram_cs", false,-1);
    tracep->declBit(c+838,"sdram_ras", false,-1);
    tracep->declBit(c+839,"sdram_cas", false,-1);
    tracep->declBit(c+840,"sdram_we", false,-1);
    tracep->declBus(c+26,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+841,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+842,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1520,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+879,"sdram_dout_en", false,-1);
    tracep->declBus(c+880,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1654,"clk_i", false,-1);
    tracep->declBit(c+1655,"rst_i", false,-1);
    tracep->declBit(c+1539,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1152,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1745,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1746,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1744,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1540,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1154,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1155,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1156,"inport_wlast_i", false,-1);
    tracep->declBit(c+1688,"inport_bready_i", false,-1);
    tracep->declBit(c+49,"inport_arvalid_i", false,-1);
    tracep->declBus(c+51,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+50,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+52,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+54,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1687,"inport_rready_i", false,-1);
    tracep->declBus(c+1520,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+107,"inport_awready_o", false,-1);
    tracep->declBit(c+108,"inport_wready_o", false,-1);
    tracep->declBit(c+853,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1744,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+850,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+106,"inport_arready_o", false,-1);
    tracep->declBit(c+849,"inport_rvalid_o", false,-1);
    tracep->declBus(c+851,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1744,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+850,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+852,"inport_rlast_o", false,-1);
    tracep->declBit(c+1679,"sdram_clk_o", false,-1);
    tracep->declBit(c+836,"sdram_cke_o", false,-1);
    tracep->declBit(c+837,"sdram_cs_o", false,-1);
    tracep->declBit(c+838,"sdram_ras_o", false,-1);
    tracep->declBit(c+839,"sdram_cas_o", false,-1);
    tracep->declBit(c+840,"sdram_we_o", false,-1);
    tracep->declBus(c+842,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+26,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+841,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+880,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+879,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1731,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1870,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1747,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1871,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+142,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+143,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+144,"ram_rd_w", false,-1);
    tracep->declBit(c+881,"ram_accept_w", false,-1);
    tracep->declBus(c+1154,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+882,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1717,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+883,"ram_ack_w", false,-1);
    tracep->declBit(c+1742,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1654,"clk_i", false,-1);
    tracep->declBit(c+1655,"rst_i", false,-1);
    tracep->declBit(c+1539,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1152,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1745,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1746,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1744,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1540,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1154,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1155,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1156,"axi_wlast_i", false,-1);
    tracep->declBit(c+1688,"axi_bready_i", false,-1);
    tracep->declBit(c+49,"axi_arvalid_i", false,-1);
    tracep->declBus(c+51,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+50,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+52,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+54,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1687,"axi_rready_i", false,-1);
    tracep->declBit(c+881,"ram_accept_i", false,-1);
    tracep->declBit(c+883,"ram_ack_i", false,-1);
    tracep->declBit(c+1742,"ram_error_i", false,-1);
    tracep->declBus(c+882,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+107,"axi_awready_o", false,-1);
    tracep->declBit(c+108,"axi_wready_o", false,-1);
    tracep->declBit(c+853,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1744,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+850,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+106,"axi_arready_o", false,-1);
    tracep->declBit(c+849,"axi_rvalid_o", false,-1);
    tracep->declBus(c+851,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1744,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+850,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+852,"axi_rlast_o", false,-1);
    tracep->declBus(c+143,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+144,"ram_rd_o", false,-1);
    tracep->declBus(c+1717,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+142,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1154,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+884,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+885,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+886,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+887,"req_rd_q", false,-1);
    tracep->declBit(c+888,"req_wr_q", false,-1);
    tracep->declBus(c+889,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+890,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+891,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+892,"req_prio_q", false,-1);
    tracep->declBit(c+893,"req_hold_rd_q", false,-1);
    tracep->declBit(c+894,"req_hold_wr_q", false,-1);
    tracep->declBit(c+895,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+145,"req_push_w", false,-1);
    tracep->declBus(c+1718,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+896,"req_out_valid_w", false,-1);
    tracep->declBus(c+897,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+146,"resp_accept_w", false,-1);
    tracep->declBit(c+898,"resp_is_write_w", false,-1);
    tracep->declBit(c+899,"resp_is_read_w", false,-1);
    tracep->declBit(c+852,"resp_is_last_w", false,-1);
    tracep->declBus(c+850,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+900,"resp_valid_w", false,-1);
    tracep->declBit(c+901,"write_prio_w", false,-1);
    tracep->declBit(c+902,"read_prio_w", false,-1);
    tracep->declBit(c+147,"write_active_w", false,-1);
    tracep->declBit(c+144,"read_active_w", false,-1);
    tracep->declBus(c+142,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1719,"wr_w", false,-1);
    tracep->declBit(c+144,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1872,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1873,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1871,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1654,"clk_i", false,-1);
    tracep->declBit(c+1655,"rst_i", false,-1);
    tracep->declBus(c+1718,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+145,"push_i", false,-1);
    tracep->declBit(c+146,"pop_i", false,-1);
    tracep->declBus(c+897,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+895,"accept_o", false,-1);
    tracep->declBit(c+896,"valid_o", false,-1);
    tracep->declBus(c+1874,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+903+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+907,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+908,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+909,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1859,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1873,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1871,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1654,"clk_i", false,-1);
    tracep->declBit(c+1655,"rst_i", false,-1);
    tracep->declBus(c+882,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+883,"push_i", false,-1);
    tracep->declBit(c+146,"pop_i", false,-1);
    tracep->declBus(c+851,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+910,"accept_o", false,-1);
    tracep->declBit(c+900,"valid_o", false,-1);
    tracep->declBus(c+1874,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+911+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+915,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+916,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+917,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1654,"clk_i", false,-1);
    tracep->declBit(c+1655,"rst_i", false,-1);
    tracep->declBus(c+143,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+144,"inport_rd_i", false,-1);
    tracep->declBus(c+1717,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+142,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1154,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1520,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+881,"inport_accept_o", false,-1);
    tracep->declBit(c+883,"inport_ack_o", false,-1);
    tracep->declBit(c+1742,"inport_error_o", false,-1);
    tracep->declBus(c+882,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1679,"sdram_clk_o", false,-1);
    tracep->declBit(c+836,"sdram_cke_o", false,-1);
    tracep->declBit(c+837,"sdram_cs_o", false,-1);
    tracep->declBit(c+838,"sdram_ras_o", false,-1);
    tracep->declBit(c+839,"sdram_cas_o", false,-1);
    tracep->declBit(c+840,"sdram_we_o", false,-1);
    tracep->declBus(c+842,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+26,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+841,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+880,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+879,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1731,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1870,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1747,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1871,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1871,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1873,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1873,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1875,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1876,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1877,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1878,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1873,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1879,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1880,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1881,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1882,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1883,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1884,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1885,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1745,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1886,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1873,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1745,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1885,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1884,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1880,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1882,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1881,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1883,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1879,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1887,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1888,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1889,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1889,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1859,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1889,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1871,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1871,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1872,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+142,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+143,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+144,"ram_rd_w", false,-1);
    tracep->declBit(c+881,"ram_accept_w", false,-1);
    tracep->declBus(c+1154,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+882,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+883,"ram_ack_w", false,-1);
    tracep->declBit(c+148,"ram_req_w", false,-1);
    tracep->declBus(c+918,"command_q", false,-1, 3,0);
    tracep->declBus(c+919,"addr_q", false,-1, 12,0);
    tracep->declBus(c+880,"data_q", false,-1, 31,0);
    tracep->declBit(c+920,"data_rd_en_q", false,-1);
    tracep->declBus(c+842,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+836,"cke_q", false,-1);
    tracep->declBus(c+841,"bank_q", false,-1, 1,0);
    tracep->declBus(c+882,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+921,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1520,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+922,"refresh_q", false,-1);
    tracep->declBus(c+923,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+924+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+928,"state_q", false,-1, 3,0);
    tracep->declBus(c+149,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+150,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+929,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+930,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+151,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+152,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+153,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1873,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+931,"delay_q", false,-1, 3,0);
    tracep->declBus(c+154,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1890,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+932,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+933,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+934,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+935,"idx", false,-1, 31,0);
    tracep->declBus(c+936,"rd_q", false,-1, 3,0);
    tracep->declBit(c+883,"ack_q", false,-1);
    tracep->declArray(c+937,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1317,"auto_in_psel", false,-1);
    tracep->declBit(c+1318,"auto_in_penable", false,-1);
    tracep->declBit(c+1300,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1306,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+846,"auto_in_pready", false,-1);
    tracep->declBit(c+847,"auto_in_pslverr", false,-1);
    tracep->declBus(c+848,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+835,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1523,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1524,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1676,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1891,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1892,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1893,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1471,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1317,"in_psel", false,-1);
    tracep->declBit(c+1318,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1300,"in_pwrite", false,-1);
    tracep->declBus(c+1301,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+846,"in_pready", false,-1);
    tracep->declBus(c+848,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+847,"in_pslverr", false,-1);
    tracep->declBit(c+835,"spi_sck", false,-1);
    tracep->declBus(c+1523,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1524,"spi_mosi", false,-1);
    tracep->declBit(c+1676,"spi_miso", false,-1);
    tracep->declBit(c+940,"spi_irq_out", false,-1);
    tracep->declBus(c+1894,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1895,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1894,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1896,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1897,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1898,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1745,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1885,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1884,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1880,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1882,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1881,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1883,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1879,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1887,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1888,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1899,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+941,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1516,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+942,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+943,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+944,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+945,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+946,"wb_we_i", false,-1);
    tracep->declBit(c+947,"wb_stb_i", false,-1);
    tracep->declBit(c+948,"wb_cyc_i", false,-1);
    tracep->declBit(c+949,"wb_ack_o", false,-1);
    tracep->declBit(c+1742,"wb_err_o", false,-1);
    tracep->declBit(c+950,"wb_int_o", false,-1);
    tracep->declBit(c+951,"done", false,-1);
    tracep->declBus(c+952,"paddr", false,-1, 31,0);
    tracep->declQuad(c+953,"data", false,-1, 63,0);
    tracep->declBit(c+955,"is_flash_access", false,-1);
    tracep->declBus(c+956,"tmp", false,-1, 31,0);
    tracep->declQuad(c+957,"tmp64", false,-1, 63,0);
    tracep->declBus(c+959,"counter", false,-1, 7,0);
    tracep->declBit(c+960,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1900,"Tp", false,-1, 31,0);
    tracep->declBit(c+1654,"wb_clk_i", false,-1);
    tracep->declBit(c+1655,"wb_rst_i", false,-1);
    tracep->declBus(c+942,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+943,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+944,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+945,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+946,"wb_we_i", false,-1);
    tracep->declBit(c+947,"wb_stb_i", false,-1);
    tracep->declBit(c+948,"wb_cyc_i", false,-1);
    tracep->declBit(c+949,"wb_ack_o", false,-1);
    tracep->declBit(c+1742,"wb_err_o", false,-1);
    tracep->declBit(c+950,"wb_int_o", false,-1);
    tracep->declBus(c+1523,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+835,"sclk_pad_o", false,-1);
    tracep->declBit(c+1524,"mosi_pad_o", false,-1);
    tracep->declBit(c+1676,"miso_pad_i", false,-1);
    tracep->declBus(c+961,"divider", false,-1, 15,0);
    tracep->declBus(c+962,"ctrl", false,-1, 13,0);
    tracep->declBus(c+963,"ss", false,-1, 7,0);
    tracep->declBus(c+964,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+965,"rx", false,-1, 127,0);
    tracep->declBit(c+969,"rx_negedge", false,-1);
    tracep->declBit(c+970,"tx_negedge", false,-1);
    tracep->declBus(c+971,"char_len", false,-1, 6,0);
    tracep->declBit(c+972,"go", false,-1);
    tracep->declBit(c+973,"lsb", false,-1);
    tracep->declBit(c+974,"ie", false,-1);
    tracep->declBit(c+975,"ass", false,-1);
    tracep->declBit(c+976,"spi_divider_sel", false,-1);
    tracep->declBit(c+977,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+978,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+979,"spi_ss_sel", false,-1);
    tracep->declBit(c+980,"tip", false,-1);
    tracep->declBit(c+981,"pos_edge", false,-1);
    tracep->declBit(c+982,"neg_edge", false,-1);
    tracep->declBit(c+983,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1900,"Tp", false,-1, 31,0);
    tracep->declBit(c+1654,"clk_in", false,-1);
    tracep->declBit(c+1655,"rst", false,-1);
    tracep->declBit(c+980,"enable", false,-1);
    tracep->declBit(c+972,"go", false,-1);
    tracep->declBit(c+983,"last_clk", false,-1);
    tracep->declBus(c+961,"divider", false,-1, 15,0);
    tracep->declBit(c+835,"clk_out", false,-1);
    tracep->declBit(c+981,"pos_edge", false,-1);
    tracep->declBit(c+982,"neg_edge", false,-1);
    tracep->declBus(c+984,"cnt", false,-1, 15,0);
    tracep->declBit(c+985,"cnt_zero", false,-1);
    tracep->declBit(c+986,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1900,"Tp", false,-1, 31,0);
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1655,"rst", false,-1);
    tracep->declBus(c+987,"latch", false,-1, 3,0);
    tracep->declBus(c+945,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+971,"len", false,-1, 6,0);
    tracep->declBit(c+973,"lsb", false,-1);
    tracep->declBit(c+972,"go", false,-1);
    tracep->declBit(c+981,"pos_edge", false,-1);
    tracep->declBit(c+982,"neg_edge", false,-1);
    tracep->declBit(c+969,"rx_negedge", false,-1);
    tracep->declBit(c+970,"tx_negedge", false,-1);
    tracep->declBit(c+980,"tip", false,-1);
    tracep->declBit(c+983,"last", false,-1);
    tracep->declBus(c+943,"p_in", false,-1, 31,0);
    tracep->declArray(c+965,"p_out", false,-1, 127,0);
    tracep->declBit(c+835,"s_clk", false,-1);
    tracep->declBit(c+1676,"s_in", false,-1);
    tracep->declBit(c+1524,"s_out", false,-1);
    tracep->declBus(c+988,"cnt", false,-1, 7,0);
    tracep->declArray(c+965,"data", false,-1, 127,0);
    tracep->declBus(c+989,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+990,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+991,"rx_clk", false,-1);
    tracep->declBit(c+992,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1314,"auto_in_psel", false,-1);
    tracep->declBit(c+1315,"auto_in_penable", false,-1);
    tracep->declBit(c+1300,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1309,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1316,"auto_in_pready", false,-1);
    tracep->declBit(c+1742,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1684,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1674,"uart_rx", false,-1);
    tracep->declBit(c+1675,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1314,"in_psel", false,-1);
    tracep->declBit(c+1315,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1316,"in_pready", false,-1);
    tracep->declBit(c+1742,"in_pslverr", false,-1);
    tracep->declBus(c+1460,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1300,"in_pwrite", false,-1);
    tracep->declBus(c+1684,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1301,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1674,"uart_rx", false,-1);
    tracep->declBit(c+1675,"uart_tx", false,-1);
    tracep->declBit(c+993,"rtsn", false,-1);
    tracep->declBit(c+1742,"ctsn", false,-1);
    tracep->declBit(c+994,"dtr_pad_o", false,-1);
    tracep->declBit(c+1742,"dsr_pad_i", false,-1);
    tracep->declBit(c+1742,"ri_pad_i", false,-1);
    tracep->declBit(c+1742,"dcd_pad_i", false,-1);
    tracep->declBit(c+995,"interrupt", false,-1);
    tracep->declBit(c+1720,"reg_we", false,-1);
    tracep->declBit(c+1721,"reg_re", false,-1);
    tracep->declBus(c+1472,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1473,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+652,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1517,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+996,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1655,"wb_rst_i", false,-1);
    tracep->declBus(c+1472,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1474,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1517,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1720,"wb_we_i", false,-1);
    tracep->declBit(c+1721,"wb_re_i", false,-1);
    tracep->declBit(c+1675,"stx_pad_o", false,-1);
    tracep->declBit(c+1674,"srx_pad_i", false,-1);
    tracep->declBus(c+1887,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+996,"rts_pad_o", false,-1);
    tracep->declBit(c+994,"dtr_pad_o", false,-1);
    tracep->declBit(c+995,"int_o", false,-1);
    tracep->declBit(c+997,"enable", false,-1);
    tracep->declBit(c+998,"srx_pad", false,-1);
    tracep->declBus(c+999,"ier", false,-1, 3,0);
    tracep->declBus(c+1000,"iir", false,-1, 3,0);
    tracep->declBus(c+1001,"fcr", false,-1, 1,0);
    tracep->declBus(c+1002,"mcr", false,-1, 4,0);
    tracep->declBus(c+1003,"lcr", false,-1, 7,0);
    tracep->declBus(c+1004,"msr", false,-1, 7,0);
    tracep->declBus(c+1005,"dl", false,-1, 15,0);
    tracep->declBus(c+1006,"scratch", false,-1, 7,0);
    tracep->declBit(c+1007,"start_dlc", false,-1);
    tracep->declBit(c+1008,"lsr_mask_d", false,-1);
    tracep->declBit(c+1009,"msi_reset", false,-1);
    tracep->declBus(c+1010,"dlc", false,-1, 15,0);
    tracep->declBus(c+1011,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1012,"rx_reset", false,-1);
    tracep->declBit(c+1013,"tx_reset", false,-1);
    tracep->declBit(c+1014,"dlab", false,-1);
    tracep->declBit(c+1743,"cts_pad_i", false,-1);
    tracep->declBit(c+1742,"dsr_pad_i", false,-1);
    tracep->declBit(c+1742,"ri_pad_i", false,-1);
    tracep->declBit(c+1742,"dcd_pad_i", false,-1);
    tracep->declBit(c+1015,"loopback", false,-1);
    tracep->declBit(c+1742,"cts", false,-1);
    tracep->declBit(c+1743,"dsr", false,-1);
    tracep->declBit(c+1743,"ri", false,-1);
    tracep->declBit(c+1743,"dcd", false,-1);
    tracep->declBit(c+1016,"cts_c", false,-1);
    tracep->declBit(c+1017,"dsr_c", false,-1);
    tracep->declBit(c+1018,"ri_c", false,-1);
    tracep->declBit(c+1019,"dcd_c", false,-1);
    tracep->declBus(c+1020,"lsr", false,-1, 7,0);
    tracep->declBit(c+1021,"lsr0", false,-1);
    tracep->declBit(c+1022,"lsr1", false,-1);
    tracep->declBit(c+1023,"lsr2", false,-1);
    tracep->declBit(c+1024,"lsr3", false,-1);
    tracep->declBit(c+1025,"lsr4", false,-1);
    tracep->declBit(c+1026,"lsr5", false,-1);
    tracep->declBit(c+1027,"lsr6", false,-1);
    tracep->declBit(c+1028,"lsr7", false,-1);
    tracep->declBit(c+1029,"lsr0r", false,-1);
    tracep->declBit(c+1030,"lsr1r", false,-1);
    tracep->declBit(c+1031,"lsr2r", false,-1);
    tracep->declBit(c+1032,"lsr3r", false,-1);
    tracep->declBit(c+1033,"lsr4r", false,-1);
    tracep->declBit(c+1034,"lsr5r", false,-1);
    tracep->declBit(c+1035,"lsr6r", false,-1);
    tracep->declBit(c+1036,"lsr7r", false,-1);
    tracep->declBit(c+35,"lsr_mask", false,-1);
    tracep->declBit(c+1037,"rls_int", false,-1);
    tracep->declBit(c+1038,"rda_int", false,-1);
    tracep->declBit(c+1039,"ti_int", false,-1);
    tracep->declBit(c+1040,"thre_int", false,-1);
    tracep->declBit(c+1041,"ms_int", false,-1);
    tracep->declBit(c+1042,"tf_push", false,-1);
    tracep->declBit(c+1043,"rf_pop", false,-1);
    tracep->declBus(c+1722,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1044,"rf_error_bit", false,-1);
    tracep->declBit(c+1022,"rf_overrun", false,-1);
    tracep->declBit(c+1045,"rf_push_pulse", false,-1);
    tracep->declBus(c+1046,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1047,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1048,"tstate", false,-1, 2,0);
    tracep->declBus(c+1049,"rstate", false,-1, 3,0);
    tracep->declBus(c+1050,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1051,"thre_set_en", false,-1);
    tracep->declBus(c+1052,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1053,"block_value", false,-1, 7,0);
    tracep->declBit(c+1054,"serial_out", false,-1);
    tracep->declBit(c+1055,"serial_in", false,-1);
    tracep->declBit(c+36,"lsr_mask_condition", false,-1);
    tracep->declBit(c+37,"iir_read", false,-1);
    tracep->declBit(c+38,"msr_read", false,-1);
    tracep->declBit(c+39,"fifo_read", false,-1);
    tracep->declBit(c+40,"fifo_write", false,-1);
    tracep->declBus(c+1056,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1057,"lsr0_d", false,-1);
    tracep->declBit(c+1058,"lsr1_d", false,-1);
    tracep->declBit(c+1059,"lsr2_d", false,-1);
    tracep->declBit(c+1060,"lsr3_d", false,-1);
    tracep->declBit(c+1061,"lsr4_d", false,-1);
    tracep->declBit(c+1062,"lsr5_d", false,-1);
    tracep->declBit(c+1063,"lsr6_d", false,-1);
    tracep->declBit(c+1064,"lsr7_d", false,-1);
    tracep->declBit(c+1065,"rls_int_d", false,-1);
    tracep->declBit(c+1066,"thre_int_d", false,-1);
    tracep->declBit(c+1067,"ms_int_d", false,-1);
    tracep->declBit(c+1068,"ti_int_d", false,-1);
    tracep->declBit(c+1069,"rda_int_d", false,-1);
    tracep->declBit(c+1070,"rls_int_rise", false,-1);
    tracep->declBit(c+1071,"thre_int_rise", false,-1);
    tracep->declBit(c+1072,"ms_int_rise", false,-1);
    tracep->declBit(c+1073,"ti_int_rise", false,-1);
    tracep->declBit(c+1074,"rda_int_rise", false,-1);
    tracep->declBit(c+1075,"rls_int_pnd", false,-1);
    tracep->declBit(c+1076,"rda_int_pnd", false,-1);
    tracep->declBit(c+1077,"thre_int_pnd", false,-1);
    tracep->declBit(c+1078,"ms_int_pnd", false,-1);
    tracep->declBit(c+1079,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1900,"Tp", false,-1, 31,0);
    tracep->declBus(c+1900,"width", false,-1, 31,0);
    tracep->declBus(c+1853,"init_value", false,-1, 0,0);
    tracep->declBit(c+1655,"rst_i", false,-1);
    tracep->declBit(c+1654,"clk_i", false,-1);
    tracep->declBit(c+1742,"stage1_rst_i", false,-1);
    tracep->declBit(c+1743,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1674,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+998,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1080,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1655,"wb_rst_i", false,-1);
    tracep->declBus(c+1003,"lcr", false,-1, 7,0);
    tracep->declBit(c+1043,"rf_pop", false,-1);
    tracep->declBit(c+1055,"srx_pad_i", false,-1);
    tracep->declBit(c+997,"enable", false,-1);
    tracep->declBit(c+1012,"rx_reset", false,-1);
    tracep->declBit(c+35,"lsr_mask", false,-1);
    tracep->declBus(c+1050,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1046,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1722,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1022,"rf_overrun", false,-1);
    tracep->declBit(c+1044,"rf_error_bit", false,-1);
    tracep->declBus(c+1049,"rstate", false,-1, 3,0);
    tracep->declBit(c+1045,"rf_push_pulse", false,-1);
    tracep->declBus(c+1081,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1082,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1083,"rshift", false,-1, 7,0);
    tracep->declBit(c+1084,"rparity", false,-1);
    tracep->declBit(c+1085,"rparity_error", false,-1);
    tracep->declBit(c+1086,"rframing_error", false,-1);
    tracep->declBit(c+1087,"rbit_in", false,-1);
    tracep->declBit(c+1088,"rparity_xor", false,-1);
    tracep->declBus(c+1089,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1090,"rf_push_q", false,-1);
    tracep->declBus(c+1091,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1092,"rf_push", false,-1);
    tracep->declBit(c+1093,"break_error", false,-1);
    tracep->declBit(c+1094,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1095,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1096,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1097,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1745,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1885,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1884,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1880,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1882,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1881,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1883,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1879,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1887,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1888,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1901,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1098,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1099,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1902,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1903,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1873,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1866,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1655,"wb_rst_i", false,-1);
    tracep->declBit(c+1045,"push", false,-1);
    tracep->declBit(c+1043,"pop", false,-1);
    tracep->declBus(c+1091,"data_in", false,-1, 10,0);
    tracep->declBit(c+1012,"fifo_reset", false,-1);
    tracep->declBit(c+35,"reset_status", false,-1);
    tracep->declBus(c+1722,"data_out", false,-1, 10,0);
    tracep->declBit(c+1022,"overrun", false,-1);
    tracep->declBus(c+1046,"count", false,-1, 4,0);
    tracep->declBit(c+1044,"error_bit", false,-1);
    tracep->declBus(c+1723,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1100+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1116,"top", false,-1, 3,0);
    tracep->declBus(c+1117,"bottom", false,-1, 3,0);
    tracep->declBus(c+1118,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1119,"word0", false,-1, 2,0);
    tracep->declBus(c+1120,"word1", false,-1, 2,0);
    tracep->declBus(c+1121,"word2", false,-1, 2,0);
    tracep->declBus(c+1122,"word3", false,-1, 2,0);
    tracep->declBus(c+1123,"word4", false,-1, 2,0);
    tracep->declBus(c+1124,"word5", false,-1, 2,0);
    tracep->declBus(c+1125,"word6", false,-1, 2,0);
    tracep->declBus(c+1126,"word7", false,-1, 2,0);
    tracep->declBus(c+1127,"word8", false,-1, 2,0);
    tracep->declBus(c+1128,"word9", false,-1, 2,0);
    tracep->declBus(c+1129,"word10", false,-1, 2,0);
    tracep->declBus(c+1130,"word11", false,-1, 2,0);
    tracep->declBus(c+1131,"word12", false,-1, 2,0);
    tracep->declBus(c+1132,"word13", false,-1, 2,0);
    tracep->declBus(c+1133,"word14", false,-1, 2,0);
    tracep->declBus(c+1134,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1873,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1893,"data_width", false,-1, 31,0);
    tracep->declBus(c+1903,"depth", false,-1, 31,0);
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1045,"we", false,-1);
    tracep->declBus(c+1116,"a", false,-1, 3,0);
    tracep->declBus(c+1117,"dpra", false,-1, 3,0);
    tracep->declBus(c+1135,"di", false,-1, 7,0);
    tracep->declBus(c+1723,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+653+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1655,"wb_rst_i", false,-1);
    tracep->declBus(c+1003,"lcr", false,-1, 7,0);
    tracep->declBit(c+1042,"tf_push", false,-1);
    tracep->declBus(c+1474,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+997,"enable", false,-1);
    tracep->declBit(c+1013,"tx_reset", false,-1);
    tracep->declBit(c+35,"lsr_mask", false,-1);
    tracep->declBit(c+1054,"stx_pad_o", false,-1);
    tracep->declBus(c+1048,"tstate", false,-1, 2,0);
    tracep->declBus(c+1047,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1136,"counter", false,-1, 4,0);
    tracep->declBus(c+1137,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1138,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1139,"stx_o_tmp", false,-1);
    tracep->declBit(c+1140,"parity_xor", false,-1);
    tracep->declBit(c+1141,"tf_pop", false,-1);
    tracep->declBit(c+1142,"bit_out", false,-1);
    tracep->declBus(c+1474,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1518,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1143,"tf_overrun", false,-1);
    tracep->declBus(c+1736,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1733,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1737,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1738,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1739,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1748,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1893,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1903,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1873,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1866,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1655,"wb_rst_i", false,-1);
    tracep->declBit(c+1042,"push", false,-1);
    tracep->declBit(c+1141,"pop", false,-1);
    tracep->declBus(c+1474,"data_in", false,-1, 7,0);
    tracep->declBit(c+1013,"fifo_reset", false,-1);
    tracep->declBit(c+35,"reset_status", false,-1);
    tracep->declBus(c+1518,"data_out", false,-1, 7,0);
    tracep->declBit(c+1143,"overrun", false,-1);
    tracep->declBus(c+1047,"count", false,-1, 4,0);
    tracep->declBus(c+1144,"top", false,-1, 3,0);
    tracep->declBus(c+1145,"bottom", false,-1, 3,0);
    tracep->declBus(c+1146,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1873,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1893,"data_width", false,-1, 31,0);
    tracep->declBus(c+1903,"depth", false,-1, 31,0);
    tracep->declBit(c+1654,"clk", false,-1);
    tracep->declBit(c+1042,"we", false,-1);
    tracep->declBus(c+1144,"a", false,-1, 3,0);
    tracep->declBus(c+1145,"dpra", false,-1, 3,0);
    tracep->declBus(c+1474,"di", false,-1, 7,0);
    tracep->declBus(c+1518,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+669+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBit(c+1304,"auto_in_psel", false,-1);
    tracep->declBit(c+1305,"auto_in_penable", false,-1);
    tracep->declBit(c+1300,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1306,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+843,"auto_in_pready", false,-1);
    tracep->declBit(c+1740,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1741,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1668,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1669,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1670,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1671,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1672,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1673,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1654,"clock", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1471,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1304,"in_psel", false,-1);
    tracep->declBit(c+1305,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1300,"in_pwrite", false,-1);
    tracep->declBus(c+1301,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1302,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+843,"in_pready", false,-1);
    tracep->declBus(c+1741,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1740,"in_pslverr", false,-1);
    tracep->declBus(c+1668,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1669,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1670,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1671,"vga_hsync", false,-1);
    tracep->declBit(c+1672,"vga_vsync", false,-1);
    tracep->declBit(c+1673,"vga_valid", false,-1);
    tracep->declBus(c+1147,"h_addr", false,-1, 9,0);
    tracep->declBus(c+685,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1519,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1475,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+843,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1654,"pclk", false,-1);
    tracep->declBit(c+1655,"reset", false,-1);
    tracep->declBus(c+1519,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1147,"h_addr", false,-1, 9,0);
    tracep->declBus(c+685,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1671,"hsync", false,-1);
    tracep->declBit(c+1672,"vsync", false,-1);
    tracep->declBit(c+1673,"valid", false,-1);
    tracep->declBus(c+1668,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1669,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1670,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1904,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1905,"h_active", false,-1, 31,0);
    tracep->declBus(c+1906,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1907,"h_total", false,-1, 31,0);
    tracep->declBus(c+1871,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1908,"v_active", false,-1, 31,0);
    tracep->declBus(c+1909,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1910,"v_total", false,-1, 31,0);
    tracep->declBus(c+1148,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+686,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1149,"h_valid", false,-1);
    tracep->declBit(c+687,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+835,"sck", false,-1);
    tracep->declBit(c+1526,"ss", false,-1);
    tracep->declBit(c+1524,"mosi", false,-1);
    tracep->declBit(c+1291,"miso", false,-1);
    tracep->declBus(c+1292,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1293,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1724,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+835,"sck", false,-1);
    tracep->declBit(c+1527,"ss", false,-1);
    tracep->declBit(c+1524,"mosi", false,-1);
    tracep->declBit(c+1725,"miso", false,-1);
    tracep->declBit(c+1527,"reset", false,-1);
    tracep->declBus(c+1285,"state", false,-1, 2,0);
    tracep->declBus(c+1286,"counter", false,-1, 7,0);
    tracep->declBus(c+1287,"cmd", false,-1, 7,0);
    tracep->declBus(c+1288,"addr", false,-1, 23,0);
    tracep->declBus(c+1289,"data", false,-1, 31,0);
    tracep->declBit(c+1290,"ren", false,-1);
    tracep->declBus(c+1726,"rdata", false,-1, 31,0);
    tracep->declBus(c+1727,"raddr", false,-1, 31,0);
    tracep->declBus(c+1294,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+835,"clock", false,-1);
    tracep->declBit(c+1290,"valid", false,-1);
    tracep->declBus(c+1287,"cmd", false,-1, 7,0);
    tracep->declBus(c+1727,"addr", false,-1, 31,0);
    tracep->declBus(c+1726,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1677,"sck", false,-1);
    tracep->declBit(c+1648,"ce_n", false,-1);
    tracep->declBus(c+1678,"dio", false,-1, 3,0);
    tracep->declBus(c+705,"dio_out", false,-1, 3,0);
    tracep->declBus(c+706,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1678,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1846,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1900,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1871,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1874,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1873,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1866,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+707,"state", false,-1, 2,0);
    tracep->declBus(c+1728,"next_state", false,-1, 2,0);
    tracep->declBus(c+708,"counter", false,-1, 7,0);
    tracep->declBus(c+709,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+710,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+711,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+712,"is_read_op", false,-1);
    tracep->declBit(c+713,"is_write_op", false,-1);
    tracep->declBus(c+714,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1729,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+836,"cke", false,-1);
    tracep->declBit(c+837,"cs", false,-1);
    tracep->declBit(c+838,"ras", false,-1);
    tracep->declBit(c+839,"cas", false,-1);
    tracep->declBit(c+840,"we", false,-1);
    tracep->declBus(c+26,"a", false,-1, 13,0);
    tracep->declBus(c+841,"ba", false,-1, 1,0);
    tracep->declBus(c+842,"dqm", false,-1, 3,0);
    tracep->declBus(c+1520,"dq", false,-1, 31,0);
    tracep->declBit(c+27,"cs_0", false,-1);
    tracep->declBit(c+28,"ras_0", false,-1);
    tracep->declBit(c+29,"cas_0", false,-1);
    tracep->declBit(c+30,"we_0", false,-1);
    tracep->declBit(c+31,"cs_1", false,-1);
    tracep->declBit(c+32,"ras_1", false,-1);
    tracep->declBit(c+33,"cas_1", false,-1);
    tracep->declBit(c+34,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+836,"cke", false,-1);
    tracep->declBit(c+31,"cs", false,-1);
    tracep->declBit(c+32,"ras", false,-1);
    tracep->declBit(c+33,"cas", false,-1);
    tracep->declBit(c+34,"we", false,-1);
    tracep->declBus(c+919,"a", false,-1, 12,0);
    tracep->declBus(c+841,"ba", false,-1, 1,0);
    tracep->declBus(c+842,"dqm", false,-1, 3,0);
    tracep->declBus(c+1520,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+836,"cke", false,-1);
    tracep->declBit(c+31,"cs", false,-1);
    tracep->declBit(c+32,"ras", false,-1);
    tracep->declBit(c+33,"cas", false,-1);
    tracep->declBit(c+34,"we", false,-1);
    tracep->declBus(c+919,"a", false,-1, 12,0);
    tracep->declBus(c+841,"ba", false,-1, 1,0);
    tracep->declBus(c+1150,"dqm", false,-1, 1,0);
    tracep->declBus(c+1521,"dq", false,-1, 15,0);
    tracep->declBus(c+1745,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1885,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1884,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1880,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1882,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1881,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1883,"CMD_BURST_TERM", false,-1, 3,0);
    tracep->declBus(c+1879,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+155,"cmd", false,-1, 3,0);
    tracep->declBus(c+1911,"BANK_DEPTH", false,-1, 31,0);
    tracep->declBus(c+715,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+716,"cas_latency", false,-1, 2,0);
    tracep->declBus(c+717,"burst_len_code", false,-1, 2,0);
    tracep->declBus(c+718,"burst_len", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+719+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBit(c+723,"wr_active", false,-1);
    tracep->declBus(c+724,"wr_ba", false,-1, 1,0);
    tracep->declBus(c+725,"wr_col", false,-1, 8,0);
    tracep->declBus(c+726,"wr_cnt", false,-1, 3,0);
    tracep->declBus(c+727,"wr_row", false,-1, 12,0);
    tracep->declBus(c+728,"wr_full_addr", false,-1, 21,0);
    tracep->declBit(c+729,"rd_active", false,-1);
    tracep->declBus(c+730,"rd_ba", false,-1, 1,0);
    tracep->declBus(c+731,"rd_col", false,-1, 8,0);
    tracep->declBus(c+732,"rd_cnt", false,-1, 3,0);
    tracep->declBus(c+733,"rd_row", false,-1, 12,0);
    tracep->declBit(c+157,"fetch_valid", false,-1);
    tracep->declBus(c+158,"fetch_data", false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+734+i*1,"pipe_valid", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+738+i*1,"pipe_data", true,(i+0), 15,0);
    }
    tracep->declBus(c+742,"i", false,-1, 31,0);
    tracep->declBit(c+743,"out_valid", false,-1);
    tracep->declBus(c+744,"out_data", false,-1, 15,0);
    tracep->declBus(c+4,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+836,"cke", false,-1);
    tracep->declBit(c+31,"cs", false,-1);
    tracep->declBit(c+32,"ras", false,-1);
    tracep->declBit(c+33,"cas", false,-1);
    tracep->declBit(c+34,"we", false,-1);
    tracep->declBus(c+919,"a", false,-1, 12,0);
    tracep->declBus(c+841,"ba", false,-1, 1,0);
    tracep->declBus(c+1151,"dqm", false,-1, 1,0);
    tracep->declBus(c+1522,"dq", false,-1, 15,0);
    tracep->declBus(c+1745,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1885,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1884,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1880,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1882,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1881,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1883,"CMD_BURST_TERM", false,-1, 3,0);
    tracep->declBus(c+1879,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+155,"cmd", false,-1, 3,0);
    tracep->declBus(c+1911,"BANK_DEPTH", false,-1, 31,0);
    tracep->declBus(c+745,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+746,"cas_latency", false,-1, 2,0);
    tracep->declBus(c+747,"burst_len_code", false,-1, 2,0);
    tracep->declBus(c+748,"burst_len", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+749+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBit(c+753,"wr_active", false,-1);
    tracep->declBus(c+754,"wr_ba", false,-1, 1,0);
    tracep->declBus(c+755,"wr_col", false,-1, 8,0);
    tracep->declBus(c+756,"wr_cnt", false,-1, 3,0);
    tracep->declBus(c+757,"wr_row", false,-1, 12,0);
    tracep->declBus(c+758,"wr_full_addr", false,-1, 21,0);
    tracep->declBit(c+759,"rd_active", false,-1);
    tracep->declBus(c+760,"rd_ba", false,-1, 1,0);
    tracep->declBus(c+761,"rd_col", false,-1, 8,0);
    tracep->declBus(c+762,"rd_cnt", false,-1, 3,0);
    tracep->declBus(c+763,"rd_row", false,-1, 12,0);
    tracep->declBit(c+159,"fetch_valid", false,-1);
    tracep->declBus(c+160,"fetch_data", false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+764+i*1,"pipe_valid", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+768+i*1,"pipe_data", true,(i+0), 15,0);
    }
    tracep->declBus(c+772,"i", false,-1, 31,0);
    tracep->declBit(c+773,"out_valid", false,-1);
    tracep->declBus(c+774,"out_data", false,-1, 15,0);
    tracep->declBus(c+5,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+836,"cke", false,-1);
    tracep->declBit(c+27,"cs", false,-1);
    tracep->declBit(c+28,"ras", false,-1);
    tracep->declBit(c+29,"cas", false,-1);
    tracep->declBit(c+30,"we", false,-1);
    tracep->declBus(c+919,"a", false,-1, 12,0);
    tracep->declBus(c+841,"ba", false,-1, 1,0);
    tracep->declBus(c+842,"dqm", false,-1, 3,0);
    tracep->declBus(c+1520,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+836,"cke", false,-1);
    tracep->declBit(c+27,"cs", false,-1);
    tracep->declBit(c+28,"ras", false,-1);
    tracep->declBit(c+29,"cas", false,-1);
    tracep->declBit(c+30,"we", false,-1);
    tracep->declBus(c+919,"a", false,-1, 12,0);
    tracep->declBus(c+841,"ba", false,-1, 1,0);
    tracep->declBus(c+1150,"dqm", false,-1, 1,0);
    tracep->declBus(c+1521,"dq", false,-1, 15,0);
    tracep->declBus(c+1745,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1885,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1884,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1880,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1882,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1881,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1883,"CMD_BURST_TERM", false,-1, 3,0);
    tracep->declBus(c+1879,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+156,"cmd", false,-1, 3,0);
    tracep->declBus(c+1911,"BANK_DEPTH", false,-1, 31,0);
    tracep->declBus(c+775,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+776,"cas_latency", false,-1, 2,0);
    tracep->declBus(c+777,"burst_len_code", false,-1, 2,0);
    tracep->declBus(c+778,"burst_len", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+779+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBit(c+783,"wr_active", false,-1);
    tracep->declBus(c+784,"wr_ba", false,-1, 1,0);
    tracep->declBus(c+785,"wr_col", false,-1, 8,0);
    tracep->declBus(c+786,"wr_cnt", false,-1, 3,0);
    tracep->declBus(c+787,"wr_row", false,-1, 12,0);
    tracep->declBus(c+788,"wr_full_addr", false,-1, 21,0);
    tracep->declBit(c+789,"rd_active", false,-1);
    tracep->declBus(c+790,"rd_ba", false,-1, 1,0);
    tracep->declBus(c+791,"rd_col", false,-1, 8,0);
    tracep->declBus(c+792,"rd_cnt", false,-1, 3,0);
    tracep->declBus(c+793,"rd_row", false,-1, 12,0);
    tracep->declBit(c+161,"fetch_valid", false,-1);
    tracep->declBus(c+162,"fetch_data", false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+794+i*1,"pipe_valid", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+798+i*1,"pipe_data", true,(i+0), 15,0);
    }
    tracep->declBus(c+802,"i", false,-1, 31,0);
    tracep->declBit(c+803,"out_valid", false,-1);
    tracep->declBus(c+804,"out_data", false,-1, 15,0);
    tracep->declBus(c+6,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+836,"cke", false,-1);
    tracep->declBit(c+27,"cs", false,-1);
    tracep->declBit(c+28,"ras", false,-1);
    tracep->declBit(c+29,"cas", false,-1);
    tracep->declBit(c+30,"we", false,-1);
    tracep->declBus(c+919,"a", false,-1, 12,0);
    tracep->declBus(c+841,"ba", false,-1, 1,0);
    tracep->declBus(c+1151,"dqm", false,-1, 1,0);
    tracep->declBus(c+1522,"dq", false,-1, 15,0);
    tracep->declBus(c+1745,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1885,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1884,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1880,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1882,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1881,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1883,"CMD_BURST_TERM", false,-1, 3,0);
    tracep->declBus(c+1879,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+156,"cmd", false,-1, 3,0);
    tracep->declBus(c+1911,"BANK_DEPTH", false,-1, 31,0);
    tracep->declBus(c+805,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+806,"cas_latency", false,-1, 2,0);
    tracep->declBus(c+807,"burst_len_code", false,-1, 2,0);
    tracep->declBus(c+808,"burst_len", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+809+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->declBit(c+813,"wr_active", false,-1);
    tracep->declBus(c+814,"wr_ba", false,-1, 1,0);
    tracep->declBus(c+815,"wr_col", false,-1, 8,0);
    tracep->declBus(c+816,"wr_cnt", false,-1, 3,0);
    tracep->declBus(c+817,"wr_row", false,-1, 12,0);
    tracep->declBus(c+818,"wr_full_addr", false,-1, 21,0);
    tracep->declBit(c+819,"rd_active", false,-1);
    tracep->declBus(c+820,"rd_ba", false,-1, 1,0);
    tracep->declBus(c+821,"rd_col", false,-1, 8,0);
    tracep->declBus(c+822,"rd_cnt", false,-1, 3,0);
    tracep->declBus(c+823,"rd_row", false,-1, 12,0);
    tracep->declBit(c+163,"fetch_valid", false,-1);
    tracep->declBus(c+164,"fetch_data", false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+824+i*1,"pipe_valid", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+828+i*1,"pipe_data", true,(i+0), 15,0);
    }
    tracep->declBus(c+832,"i", false,-1, 31,0);
    tracep->declBit(c+833,"out_valid", false,-1);
    tracep->declBus(c+834,"out_data", false,-1, 15,0);
    tracep->declBus(c+7,"j", false,-1, 31,0);
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
    bufp->fullIData(oldp+4,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__j),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__j),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__j),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__j),32);
    bufp->fullBit(oldp+8,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+10,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+11,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+12,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+13,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+14,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+15,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+16,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+17,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+18,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+19,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+20,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+21,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+22,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+23,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+24,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+25,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullSData(oldp+26,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xdU)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+27,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 3U)))));
    bufp->fullBit(oldp+28,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 2U)))));
    bufp->fullBit(oldp+29,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 1U)))));
    bufp->fullBit(oldp+30,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+31,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U)))));
    bufp->fullBit(oldp+32,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U)))));
    bufp->fullBit(oldp+33,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U)))));
    bufp->fullBit(oldp+34,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+41,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+47,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+57,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+62,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+63,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullSData(oldp+64,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+69,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+73,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+77,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullIData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+87,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+90,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+91,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+92,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+93,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+94,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+95,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+96,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+98,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+99,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+100,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+101,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+102,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+103,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+104,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+105,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+151,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 2U))),13);
    bufp->fullSData(oldp+152,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+153,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cmd),4);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cmd),4);
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__fetch_valid));
    bufp->fullSData(oldp+158,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__fetch_data),16);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__fetch_valid));
    bufp->fullSData(oldp+160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__fetch_data),16);
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__fetch_valid));
    bufp->fullSData(oldp+162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__fetch_data),16);
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__fetch_valid));
    bufp->fullSData(oldp+164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__fetch_data),16);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+166,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+169,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? (IData)(vlSelf->__VdfgTmp_h7fb30c92__0)
                                : 0U)),4);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullIData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum),32);
    bufp->fullSData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles),16);
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_prdata),32);
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_pslverr));
    bufp->fullIData(oldp+179,(((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum)),32);
    bufp->fullIData(oldp+180,((((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum) 
                               >> 9U)),32);
    bufp->fullIData(oldp+181,(((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles))),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_delay),32);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+185,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+188,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+189,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+190,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+191,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+193,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+194,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+201,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+202,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+203,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+204,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+205,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullIData(oldp+208,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+215,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+218,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+221,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+223,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+224,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+226,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+227,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+228,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+229,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+230,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+239,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+252,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+298,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+303,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+304,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+305,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+306,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+308,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+310,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+332,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+335,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+413,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+417,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+418,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+479,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+497,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+509,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+513,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+517,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+525,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+529,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+533,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+537,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+541,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+545,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+549,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+553,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+557,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+561,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+565,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+569,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+573,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+577,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+581,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+585,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+589,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+593,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+597,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+601,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+605,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+609,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+613,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+647,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+685,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+690,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+691,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+692,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+693,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+694,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+695,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+696,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+697,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+698,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+699,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+700,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+701,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+702,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+703,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullSData(oldp+715,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_reg),13);
    bufp->fullCData(oldp+716,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+717,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_reg))),3);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__burst_len),4);
    bufp->fullSData(oldp+719,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__active_row[0]),13);
    bufp->fullSData(oldp+720,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__active_row[1]),13);
    bufp->fullSData(oldp+721,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__active_row[2]),13);
    bufp->fullSData(oldp+722,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__active_row[3]),13);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__wr_active));
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__wr_ba),2);
    bufp->fullSData(oldp+725,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__wr_col),9);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__wr_cnt),4);
    bufp->fullSData(oldp+727,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__wr_row),13);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__wr_full_addr),22);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__rd_active));
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__rd_ba),2);
    bufp->fullSData(oldp+731,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__rd_col),9);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__rd_cnt),4);
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__rd_row),13);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_valid[0]));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_valid[1]));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_valid[2]));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_valid[3]));
    bufp->fullSData(oldp+738,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_data[0]),16);
    bufp->fullSData(oldp+739,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_data[1]),16);
    bufp->fullSData(oldp+740,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_data[2]),16);
    bufp->fullSData(oldp+741,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_data[3]),16);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__i),32);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__out_valid));
    bufp->fullSData(oldp+744,(((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_reg) 
                                             >> 4U)))
                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_data
                               [0U] : ((2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_reg) 
                                                >> 4U)))
                                        ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_data
                                       [1U] : ((3U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_reg) 
                                                    >> 4U)))
                                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__pipe_data
                                               [2U]
                                                : 0U)))),16);
    bufp->fullSData(oldp+745,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_reg),13);
    bufp->fullCData(oldp+746,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+747,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_reg))),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__burst_len),4);
    bufp->fullSData(oldp+749,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__active_row[0]),13);
    bufp->fullSData(oldp+750,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__active_row[1]),13);
    bufp->fullSData(oldp+751,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__active_row[2]),13);
    bufp->fullSData(oldp+752,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__active_row[3]),13);
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__wr_active));
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__wr_ba),2);
    bufp->fullSData(oldp+755,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__wr_col),9);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__wr_cnt),4);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__wr_row),13);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__wr_full_addr),22);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__rd_active));
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__rd_ba),2);
    bufp->fullSData(oldp+761,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__rd_col),9);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__rd_cnt),4);
    bufp->fullSData(oldp+763,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__rd_row),13);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_valid[0]));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_valid[1]));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_valid[2]));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_valid[3]));
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_data[0]),16);
    bufp->fullSData(oldp+769,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_data[1]),16);
    bufp->fullSData(oldp+770,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_data[2]),16);
    bufp->fullSData(oldp+771,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_data[3]),16);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__i),32);
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__out_valid));
    bufp->fullSData(oldp+774,(((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_reg) 
                                             >> 4U)))
                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_data
                               [0U] : ((2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_reg) 
                                                >> 4U)))
                                        ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_data
                                       [1U] : ((3U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_reg) 
                                                    >> 4U)))
                                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__pipe_data
                                               [2U]
                                                : 0U)))),16);
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_reg),13);
    bufp->fullCData(oldp+776,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+777,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_reg))),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__burst_len),4);
    bufp->fullSData(oldp+779,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__active_row[0]),13);
    bufp->fullSData(oldp+780,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__active_row[1]),13);
    bufp->fullSData(oldp+781,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__active_row[2]),13);
    bufp->fullSData(oldp+782,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__active_row[3]),13);
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__wr_active));
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__wr_ba),2);
    bufp->fullSData(oldp+785,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__wr_col),9);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__wr_cnt),4);
    bufp->fullSData(oldp+787,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__wr_row),13);
    bufp->fullIData(oldp+788,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__wr_full_addr),22);
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__rd_active));
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__rd_ba),2);
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__rd_col),9);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__rd_cnt),4);
    bufp->fullSData(oldp+793,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__rd_row),13);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_valid[0]));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_valid[1]));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_valid[2]));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_valid[3]));
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_data[0]),16);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_data[1]),16);
    bufp->fullSData(oldp+800,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_data[2]),16);
    bufp->fullSData(oldp+801,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_data[3]),16);
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__i),32);
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__out_valid));
    bufp->fullSData(oldp+804,(((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_reg) 
                                             >> 4U)))
                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_data
                               [0U] : ((2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_reg) 
                                                >> 4U)))
                                        ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_data
                                       [1U] : ((3U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_reg) 
                                                    >> 4U)))
                                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__pipe_data
                                               [2U]
                                                : 0U)))),16);
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_reg),13);
    bufp->fullCData(oldp+806,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullCData(oldp+807,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_reg))),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__burst_len),4);
    bufp->fullSData(oldp+809,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__active_row[0]),13);
    bufp->fullSData(oldp+810,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__active_row[1]),13);
    bufp->fullSData(oldp+811,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__active_row[2]),13);
    bufp->fullSData(oldp+812,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__active_row[3]),13);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__wr_active));
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__wr_ba),2);
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__wr_col),9);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__wr_cnt),4);
    bufp->fullSData(oldp+817,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__wr_row),13);
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__wr_full_addr),22);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__rd_active));
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__rd_ba),2);
    bufp->fullSData(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__rd_col),9);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__rd_cnt),4);
    bufp->fullSData(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__rd_row),13);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_valid[0]));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_valid[1]));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_valid[2]));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_valid[3]));
    bufp->fullSData(oldp+828,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_data[0]),16);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_data[1]),16);
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_data[2]),16);
    bufp->fullSData(oldp+831,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_data[3]),16);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__i),32);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__out_valid));
    bufp->fullSData(oldp+834,(((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_reg) 
                                             >> 4U)))
                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_data
                               [0U] : ((2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_reg) 
                                                >> 4U)))
                                        ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_data
                                       [1U] : ((3U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_reg) 
                                                    >> 4U)))
                                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__pipe_data
                                               [2U]
                                                : 0U)))),16);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullBit(oldp+837,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+838,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+839,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+840,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+850,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+852,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullSData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+856,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+857,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+858,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+859,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+860,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+861,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+862,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+863,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+866,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+867,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+870,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+871,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+875,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+879,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullIData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+895,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+896,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+898,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+899,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+900,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+901,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+902,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+910,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullSData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullWData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+956,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+957,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+969,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+970,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+971,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+972,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+973,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+974,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+975,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+977,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+983,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+985,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+986,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+989,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+993,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+994,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+996,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1014,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1015,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1016,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1017,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1018,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1019,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1020,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
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
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1023,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1024,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1025,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1044,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1051,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1070,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1071,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1072,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1073,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1074,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1093,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1094,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1095,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1096,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1097,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1099,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1118,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1135,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1146,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullCData(oldp+1150,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1151,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_busy));
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1178,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1184,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu_valid));
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_lsu_valid));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu_valid));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_locked));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__current_master));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1232,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc_flag));
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1248,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1249,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1251,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullIData(oldp+1253,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd),5);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd),5);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd),5);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemWrite));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1272,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1275,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state)))),2);
    bufp->fullCData(oldp+1276,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1277,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1278,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1279,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1280,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1281,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1282,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1283,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1284,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1290,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1299,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1307,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1308,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),29);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1313,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1316,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1321,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1324,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1327,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullSData(oldp+1346,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),32);
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullIData(oldp+1468,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1469,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1470,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1475,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1477,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1478,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1479,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1480,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1481,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1482,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1483,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1484,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1485,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1486,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1487,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1488,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1489,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1490,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1497,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1498,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1521,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1522,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1526,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+1528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1534,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1537,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1552,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1553,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1554,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1555,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1565,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc),32);
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullCData(oldp+1587,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1588,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1599,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1605,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant_next));
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1612,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullBit(oldp+1614,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1615,(((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))))));
    bufp->fullBit(oldp+1616,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1617,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1618,(((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)))));
    bufp->fullBit(oldp+1619,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__flag));
    bufp->fullCData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1623,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1624,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_fetch),32);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_out),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_buf),32);
    bufp->fullCData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),3);
    bufp->fullBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ctrl_hazard));
    bufp->fullBit(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ar_inflight));
    bufp->fullBit(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1654,(vlSelf->clock));
    bufp->fullBit(oldp+1655,(vlSelf->reset));
    bufp->fullSData(oldp+1656,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1657,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1658,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1659,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1660,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1661,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1662,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1663,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1664,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1665,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1666,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1667,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1668,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1669,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1670,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1671,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1672,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1673,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1674,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1675,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1676,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1679,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1680,((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
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
    bufp->fullIData(oldp+1681,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1682,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+1683,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullQData(oldp+1685,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1690,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullBit(oldp+1691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1692,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                 ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                    << 1U)))))
                                 : 0U)),2);
    bufp->fullIData(oldp+1694,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1695,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1696,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1697,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+1698,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1702,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullBit(oldp+1704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast)))));
    bufp->fullBit(oldp+1705,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1706,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1707,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1708,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullCData(oldp+1709,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
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
    bufp->fullBit(oldp+1710,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1711,((0xfU & vlSelf->__VdfgTmp_h9aa666fe__0)),4);
    bufp->fullBit(oldp+1712,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1713,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullIData(oldp+1716,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                          : 0U))),8);
    bufp->fullCData(oldp+1718,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1722,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1725,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1726,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1727,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1728,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1729,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1730,(0x226U),32);
    bufp->fullIData(oldp+1731,(0x64U),32);
    bufp->fullIData(oldp+1732,(0x200U),32);
    bufp->fullCData(oldp+1733,(1U),3);
    bufp->fullIData(oldp+1734,(0xb00U),32);
    bufp->fullIData(oldp+1735,(9U),32);
    bufp->fullCData(oldp+1736,(0U),3);
    bufp->fullCData(oldp+1737,(2U),3);
    bufp->fullCData(oldp+1738,(3U),3);
    bufp->fullCData(oldp+1739,(4U),3);
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1742,(0U));
    bufp->fullBit(oldp+1743,(1U));
    bufp->fullCData(oldp+1744,(0U),2);
    bufp->fullCData(oldp+1745,(0U),4);
    bufp->fullCData(oldp+1746,(0U),8);
    bufp->fullIData(oldp+1747,(9U),32);
    bufp->fullCData(oldp+1748,(5U),3);
    bufp->fullCData(oldp+1749,(6U),3);
    bufp->fullCData(oldp+1750,(7U),3);
    bufp->fullSData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_rd),10);
    bufp->fullIData(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[0]),32);
    bufp->fullIData(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[1]),32);
    bufp->fullIData(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[2]),32);
    bufp->fullIData(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[3]),32);
    bufp->fullIData(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[4]),32);
    bufp->fullIData(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[5]),32);
    bufp->fullIData(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[6]),32);
    bufp->fullIData(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[7]),32);
    bufp->fullCData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[0]),4);
    bufp->fullCData(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[1]),4);
    bufp->fullCData(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[2]),4);
    bufp->fullCData(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[3]),4);
    bufp->fullCData(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[4]),4);
    bufp->fullCData(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[5]),4);
    bufp->fullCData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[6]),4);
    bufp->fullCData(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[7]),4);
    bufp->fullIData(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[0]),32);
    bufp->fullIData(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[1]),32);
    bufp->fullIData(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[2]),32);
    bufp->fullIData(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[3]),32);
    bufp->fullIData(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[4]),32);
    bufp->fullIData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[5]),32);
    bufp->fullIData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[6]),32);
    bufp->fullIData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[7]),32);
    bufp->fullCData(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[0]),2);
    bufp->fullCData(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[1]),2);
    bufp->fullCData(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[2]),2);
    bufp->fullCData(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[3]),2);
    bufp->fullCData(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[4]),2);
    bufp->fullCData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[5]),2);
    bufp->fullCData(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[6]),2);
    bufp->fullCData(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[7]),2);
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[0]));
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[1]));
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[2]));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[3]));
    bufp->fullBit(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[4]));
    bufp->fullBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[5]));
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[6]));
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[7]));
    bufp->fullCData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen),8);
    bufp->fullCData(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize),3);
    bufp->fullCData(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst),2);
    bufp->fullCData(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_counter),3);
    bufp->fullCData(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen),3);
    bufp->fullCData(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd),3);
    bufp->fullCData(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__next_state_rd),3);
    bufp->fullSData(oldp+1799,(1U),16);
    bufp->fullBit(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1816,(0U),32);
    bufp->fullBit(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1846,(0U),32);
    bufp->fullBit(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1852,(0U));
    bufp->fullBit(oldp+1853,(1U));
    bufp->fullBit(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1857,(1U),2);
    bufp->fullCData(oldp+1858,(2U),2);
    bufp->fullIData(oldp+1859,(0x20U),32);
    bufp->fullIData(oldp+1860,(4U),32);
    bufp->fullIData(oldp+1861,(0x79737978U),32);
    bufp->fullIData(oldp+1862,(0x17e3c19U),32);
    bufp->fullIData(oldp+1863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1866,(5U),32);
    bufp->fullCData(oldp+1867,(0x1bU),8);
    bufp->fullCData(oldp+1868,(0xebU),8);
    bufp->fullCData(oldp+1869,(0x38U),8);
    bufp->fullIData(oldp+1870,(0x18U),32);
    bufp->fullIData(oldp+1871,(2U),32);
    bufp->fullIData(oldp+1872,(6U),32);
    bufp->fullIData(oldp+1873,(4U),32);
    bufp->fullIData(oldp+1874,(3U),32);
    bufp->fullIData(oldp+1875,(0xdU),32);
    bufp->fullIData(oldp+1876,(0x2000U),32);
    bufp->fullIData(oldp+1877,(0x2710U),32);
    bufp->fullIData(oldp+1878,(0x30cU),32);
    bufp->fullCData(oldp+1879,(7U),4);
    bufp->fullCData(oldp+1880,(3U),4);
    bufp->fullCData(oldp+1881,(5U),4);
    bufp->fullCData(oldp+1882,(4U),4);
    bufp->fullCData(oldp+1883,(6U),4);
    bufp->fullCData(oldp+1884,(2U),4);
    bufp->fullCData(oldp+1885,(1U),4);
    bufp->fullSData(oldp+1886,(0x20U),13);
    bufp->fullCData(oldp+1887,(8U),4);
    bufp->fullCData(oldp+1888,(9U),4);
    bufp->fullIData(oldp+1889,(0xaU),32);
    bufp->fullIData(oldp+1890,(0x11U),32);
    bufp->fullIData(oldp+1891,(0x30000000U),32);
    bufp->fullIData(oldp+1892,(0x3fffffffU),32);
    bufp->fullIData(oldp+1893,(8U),32);
    bufp->fullCData(oldp+1894,(4U),5);
    bufp->fullCData(oldp+1895,(0U),5);
    bufp->fullCData(oldp+1896,(0x10U),5);
    bufp->fullCData(oldp+1897,(0x14U),5);
    bufp->fullCData(oldp+1898,(0x18U),5);
    bufp->fullIData(oldp+1899,(0x3000000U),32);
    bufp->fullIData(oldp+1900,(1U),32);
    bufp->fullCData(oldp+1901,(0xaU),4);
    bufp->fullIData(oldp+1902,(0xbU),32);
    bufp->fullIData(oldp+1903,(0x10U),32);
    bufp->fullIData(oldp+1904,(0x60U),32);
    bufp->fullIData(oldp+1905,(0x90U),32);
    bufp->fullIData(oldp+1906,(0x310U),32);
    bufp->fullIData(oldp+1907,(0x320U),32);
    bufp->fullIData(oldp+1908,(0x23U),32);
    bufp->fullIData(oldp+1909,(0x203U),32);
    bufp->fullIData(oldp+1910,(0x20dU),32);
    bufp->fullIData(oldp+1911,(0x400000U),32);
}
