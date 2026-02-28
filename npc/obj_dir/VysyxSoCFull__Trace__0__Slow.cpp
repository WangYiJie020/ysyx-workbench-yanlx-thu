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
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1681,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1682,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1683,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1684,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1685,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1686,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1687,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1688,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1689,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1690,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1691,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1692,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1693,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1694,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1695,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1696,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1697,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1698,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1699,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1700,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1681,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1682,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1683,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1684,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1685,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1686,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1687,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1688,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1689,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1690,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1691,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1692,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1693,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1694,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1695,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1696,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1697,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1698,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1699,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1700,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+675,"spi_sck", false,-1);
    tracep->declBus(c+1254,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1255,"spi_mosi", false,-1);
    tracep->declBit(c+1701,"spi_miso", false,-1);
    tracep->declBit(c+1699,"uart_rx", false,-1);
    tracep->declBit(c+1700,"uart_tx", false,-1);
    tracep->declBit(c+1702,"psram_sck", false,-1);
    tracep->declBit(c+1363,"psram_ce_n", false,-1);
    tracep->declBus(c+1703,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1704,"sdram_clk", false,-1);
    tracep->declBit(c+1256,"sdram_cke", false,-1);
    tracep->declBit(c+676,"sdram_cs", false,-1);
    tracep->declBit(c+677,"sdram_ras", false,-1);
    tracep->declBit(c+678,"sdram_cas", false,-1);
    tracep->declBit(c+679,"sdram_we", false,-1);
    tracep->declBus(c+1705,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1257,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1258,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1283,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1681,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1682,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1683,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1684,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1685,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1686,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1687,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1688,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1689,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1690,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1691,"ps2_clk", false,-1);
    tracep->declBit(c+1692,"ps2_data", false,-1);
    tracep->declBus(c+1693,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1694,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1695,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1696,"vga_hsync", false,-1);
    tracep->declBit(c+1697,"vga_vsync", false,-1);
    tracep->declBit(c+1698,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1750,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1751,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1752,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1104,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+122,"in_psel", false,-1);
    tracep->declBit(c+123,"in_penable", false,-1);
    tracep->declBus(c+1753,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+124,"in_pwrite", false,-1);
    tracep->declBus(c+125,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+126,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+127,"in_pready", false,-1);
    tracep->declBus(c+128,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+129,"in_pslverr", false,-1);
    tracep->declBus(c+1105,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1106,"out_psel", false,-1);
    tracep->declBit(c+1107,"out_penable", false,-1);
    tracep->declBus(c+1108,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"out_pwrite", false,-1);
    tracep->declBus(c+1110,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1706,"out_pready", false,-1);
    tracep->declBus(c+1707,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1708,"out_pslverr", false,-1);
    tracep->declBus(c+1754,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1755,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1756,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1753,"ST_FORWARD", false,-1, 2,0);
    tracep->declBus(c+1757,"ST_WAIT", false,-1, 2,0);
    tracep->declBus(c+1758,"ST_SKIP", false,-1, 2,0);
    tracep->declBus(c+1759,"ST_DONE", false,-1, 2,0);
    tracep->declBus(c+130,"state", false,-1, 2,0);
    tracep->declBus(c+131,"accum", false,-1, 31,0);
    tracep->declBus(c+132,"dev_cycles", false,-1, 15,0);
    tracep->declBus(c+133,"wait_cnt", false,-1, 31,0);
    tracep->declBus(c+134,"saved_prdata", false,-1, 31,0);
    tracep->declBit(c+135,"saved_pslverr", false,-1);
    tracep->declBit(c+1112,"fwd_active", false,-1);
    tracep->declBus(c+136,"accum_final", false,-1, 31,0);
    tracep->declBus(c+137,"total_cpu", false,-1, 31,0);
    tracep->declBus(c+138,"k_plus1", false,-1, 31,0);
    tracep->declBus(c+139,"extra_delay", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1106,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1107,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1105,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1706,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1708,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1707,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1113,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1114,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1115,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1108,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+680,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1761,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1116,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1117,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1118,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1108,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+140,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1762,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+141,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1119,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1120,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1118,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1108,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1762,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+682,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1121,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1122,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1105,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1709,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1762,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+142,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1123,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1124,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1118,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1108,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1125,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1762,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1710,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1126,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1127,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1115,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1108,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+683,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+684,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+685,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1128,"sel_0", false,-1);
    tracep->declBit(c+1129,"sel_1", false,-1);
    tracep->declBit(c+1130,"sel_2", false,-1);
    tracep->declBit(c+1131,"sel_3", false,-1);
    tracep->declBit(c+1132,"sel_4", false,-1);
    tracep->declBit(c+1133,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+143,"auto_in_awready", false,-1);
    tracep->declBit(c+144,"auto_in_awvalid", false,-1);
    tracep->declBus(c+145,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+146,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+147,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+148,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+143,"auto_in_wready", false,-1);
    tracep->declBit(c+149,"auto_in_wvalid", false,-1);
    tracep->declBus(c+150,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+151,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+152,"auto_in_bready", false,-1);
    tracep->declBit(c+153,"auto_in_bvalid", false,-1);
    tracep->declBus(c+154,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+156,"auto_in_arready", false,-1);
    tracep->declBit(c+157,"auto_in_arvalid", false,-1);
    tracep->declBus(c+158,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+159,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+161,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+162,"auto_in_rready", false,-1);
    tracep->declBit(c+163,"auto_in_rvalid", false,-1);
    tracep->declBus(c+164,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+165,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+155,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+122,"auto_out_psel", false,-1);
    tracep->declBit(c+123,"auto_out_penable", false,-1);
    tracep->declBit(c+124,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1104,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+125,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+126,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+127,"auto_out_pready", false,-1);
    tracep->declBit(c+129,"auto_out_pslverr", false,-1);
    tracep->declBus(c+128,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+123,"nodeOut_penable", false,-1);
    tracep->declBus(c+166,"state", false,-1, 1,0);
    tracep->declBit(c+156,"accept_read", false,-1);
    tracep->declBit(c+143,"accept_write", false,-1);
    tracep->declBit(c+167,"is_write_r", false,-1);
    tracep->declBit(c+124,"is_write", false,-1);
    tracep->declBus(c+164,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+154,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+168,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+169,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+170,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+171,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+172,"resp", false,-1, 1,0);
    tracep->declBus(c+173,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+155,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+163,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+174,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+153,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+175,"auto_in_awready", false,-1);
    tracep->declBit(c+1549,"auto_in_awvalid", false,-1);
    tracep->declBus(c+176,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+177,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+178,"auto_in_wready", false,-1);
    tracep->declBit(c+1552,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1553,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1554,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_in_wlast", false,-1);
    tracep->declBit(c+646,"auto_in_bready", false,-1);
    tracep->declBit(c+179,"auto_in_bvalid", false,-1);
    tracep->declBus(c+180,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+181,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+182,"auto_in_arready", false,-1);
    tracep->declBit(c+28,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+183,"auto_in_rvalid", false,-1);
    tracep->declBus(c+184,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+185,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+186,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_in_rlast", false,-1);
    tracep->declBit(c+143,"auto_out_awready", false,-1);
    tracep->declBit(c+144,"auto_out_awvalid", false,-1);
    tracep->declBus(c+145,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+146,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+147,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+148,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+143,"auto_out_wready", false,-1);
    tracep->declBit(c+149,"auto_out_wvalid", false,-1);
    tracep->declBus(c+150,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+151,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+152,"auto_out_bready", false,-1);
    tracep->declBit(c+153,"auto_out_bvalid", false,-1);
    tracep->declBus(c+154,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+156,"auto_out_arready", false,-1);
    tracep->declBit(c+157,"auto_out_arvalid", false,-1);
    tracep->declBus(c+158,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+159,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+161,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+162,"auto_out_rready", false,-1);
    tracep->declBit(c+163,"auto_out_rvalid", false,-1);
    tracep->declBus(c+164,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+165,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+155,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+153,"io_enq_valid", false,-1);
    tracep->declBus(c+154,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+155,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+646,"io_deq_ready", false,-1);
    tracep->declBit(c+179,"io_deq_valid", false,-1);
    tracep->declBus(c+180,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+181,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+188,"wrap", false,-1);
    tracep->declBit(c+189,"wrap_1", false,-1);
    tracep->declBit(c+190,"maybe_full", false,-1);
    tracep->declBit(c+191,"ptr_match", false,-1);
    tracep->declBit(c+192,"empty", false,-1);
    tracep->declBit(c+193,"full", false,-1);
    tracep->declBit(c+194,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+189,"R0_addr", false,-1);
    tracep->declBit(c+1763,"R0_en", false,-1);
    tracep->declBit(c+1679,"R0_clk", false,-1);
    tracep->declBus(c+195,"R0_data", false,-1, 5,0);
    tracep->declBit(c+188,"W0_addr", false,-1);
    tracep->declBit(c+194,"W0_en", false,-1);
    tracep->declBit(c+1679,"W0_clk", false,-1);
    tracep->declBus(c+196,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+197+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+199,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+162,"io_enq_ready", false,-1);
    tracep->declBit(c+163,"io_enq_valid", false,-1);
    tracep->declBus(c+164,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+165,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+155,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+183,"io_deq_valid", false,-1);
    tracep->declBus(c+184,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+185,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+186,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+187,"io_deq_bits_last", false,-1);
    tracep->declBit(c+200,"wrap", false,-1);
    tracep->declBit(c+201,"wrap_1", false,-1);
    tracep->declBit(c+202,"maybe_full", false,-1);
    tracep->declBit(c+203,"ptr_match", false,-1);
    tracep->declBit(c+204,"empty", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBit(c+206,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+201,"R0_addr", false,-1);
    tracep->declBit(c+1763,"R0_en", false,-1);
    tracep->declBit(c+1679,"R0_clk", false,-1);
    tracep->declQuad(c+207,"R0_data", false,-1, 38,0);
    tracep->declBit(c+200,"W0_addr", false,-1);
    tracep->declBit(c+206,"W0_en", false,-1);
    tracep->declBit(c+1679,"W0_clk", false,-1);
    tracep->declQuad(c+209,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+211+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+215,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+182,"io_enq_ready", false,-1);
    tracep->declBit(c+28,"io_enq_valid", false,-1);
    tracep->declBus(c+29,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+30,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+31,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+156,"io_deq_ready", false,-1);
    tracep->declBit(c+157,"io_deq_valid", false,-1);
    tracep->declBus(c+158,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+159,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+160,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+161,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+216,"wrap", false,-1);
    tracep->declBit(c+217,"wrap_1", false,-1);
    tracep->declBit(c+218,"maybe_full", false,-1);
    tracep->declBit(c+219,"ptr_match", false,-1);
    tracep->declBit(c+220,"empty", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->declBit(c+33,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+217,"R0_addr", false,-1);
    tracep->declBit(c+1763,"R0_en", false,-1);
    tracep->declBit(c+1679,"R0_clk", false,-1);
    tracep->declQuad(c+222,"R0_data", false,-1, 46,0);
    tracep->declBit(c+216,"W0_addr", false,-1);
    tracep->declBit(c+33,"W0_en", false,-1);
    tracep->declBit(c+1679,"W0_clk", false,-1);
    tracep->declQuad(c+34,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+224+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+228,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+1549,"io_enq_valid", false,-1);
    tracep->declBus(c+176,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1550,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1551,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+177,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+143,"io_deq_ready", false,-1);
    tracep->declBit(c+144,"io_deq_valid", false,-1);
    tracep->declBus(c+145,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+146,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+147,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+148,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+229,"wrap", false,-1);
    tracep->declBit(c+230,"wrap_1", false,-1);
    tracep->declBit(c+231,"maybe_full", false,-1);
    tracep->declBit(c+232,"ptr_match", false,-1);
    tracep->declBit(c+233,"empty", false,-1);
    tracep->declBit(c+234,"full", false,-1);
    tracep->declBit(c+1556,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+230,"R0_addr", false,-1);
    tracep->declBit(c+1763,"R0_en", false,-1);
    tracep->declBit(c+1679,"R0_clk", false,-1);
    tracep->declQuad(c+235,"R0_data", false,-1, 46,0);
    tracep->declBit(c+229,"W0_addr", false,-1);
    tracep->declBit(c+1556,"W0_en", false,-1);
    tracep->declBit(c+1679,"W0_clk", false,-1);
    tracep->declQuad(c+647,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+237+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+241,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+178,"io_enq_ready", false,-1);
    tracep->declBit(c+1552,"io_enq_valid", false,-1);
    tracep->declBus(c+1553,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1554,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1555,"io_enq_bits_last", false,-1);
    tracep->declBit(c+143,"io_deq_ready", false,-1);
    tracep->declBit(c+149,"io_deq_valid", false,-1);
    tracep->declBus(c+150,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+151,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+242,"wrap", false,-1);
    tracep->declBit(c+243,"wrap_1", false,-1);
    tracep->declBit(c+244,"maybe_full", false,-1);
    tracep->declBit(c+245,"ptr_match", false,-1);
    tracep->declBit(c+246,"empty", false,-1);
    tracep->declBit(c+247,"full", false,-1);
    tracep->declBit(c+1557,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+243,"R0_addr", false,-1);
    tracep->declBit(c+1763,"R0_en", false,-1);
    tracep->declBit(c+1679,"R0_clk", false,-1);
    tracep->declQuad(c+248,"R0_data", false,-1, 35,0);
    tracep->declBit(c+242,"W0_addr", false,-1);
    tracep->declBit(c+1557,"W0_en", false,-1);
    tracep->declBit(c+1679,"W0_clk", false,-1);
    tracep->declQuad(c+1558,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+250+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1750,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1751,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1752,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1134,"in_arready", false,-1);
    tracep->declBit(c+36,"in_arvalid", false,-1);
    tracep->declBus(c+37,"in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"in_rready", false,-1);
    tracep->declBit(c+1135,"in_rvalid", false,-1);
    tracep->declBus(c+1136,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1137,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1138,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1139,"in_rlast", false,-1);
    tracep->declBit(c+1140,"in_awready", false,-1);
    tracep->declBit(c+1560,"in_awvalid", false,-1);
    tracep->declBus(c+1764,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1290,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1765,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1141,"in_wready", false,-1);
    tracep->declBit(c+1561,"in_wvalid", false,-1);
    tracep->declBus(c+1292,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"in_wlast", false,-1);
    tracep->declBit(c+1562,"in_bready", false,-1);
    tracep->declBit(c+1142,"in_bvalid", false,-1);
    tracep->declBus(c+1143,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1385,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1364,"out_arready", false,-1);
    tracep->declBit(c+1144,"out_arvalid", false,-1);
    tracep->declBus(c+1145,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1146,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1147,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1148,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1149,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1150,"out_rready", false,-1);
    tracep->declBit(c+1259,"out_rvalid", false,-1);
    tracep->declBus(c+1260,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1261,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1766,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1262,"out_rlast", false,-1);
    tracep->declBit(c+1365,"out_awready", false,-1);
    tracep->declBit(c+1151,"out_awvalid", false,-1);
    tracep->declBus(c+1152,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1153,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1154,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1155,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1156,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1366,"out_wready", false,-1);
    tracep->declBit(c+1157,"out_wvalid", false,-1);
    tracep->declBus(c+1158,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1159,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"out_wlast", false,-1);
    tracep->declBit(c+1161,"out_bready", false,-1);
    tracep->declBit(c+1263,"out_bvalid", false,-1);
    tracep->declBus(c+1260,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1766,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1754,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1755,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1767,"MAX_BEATS", false,-1, 31,0);
    tracep->declBus(c+1756,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1753,"RD_WAIT", false,-1, 2,0);
    tracep->declBus(c+1757,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1758,"RD_SEND", false,-1, 2,0);
    tracep->declBus(c+1162,"rd_state", false,-1, 2,0);
    tracep->declBus(c+43,"rd_state_next", false,-1, 2,0);
    tracep->declBus(c+1163,"rd_cycle_cnt", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1164+i*1,"rd_buf_id", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1172+i*1,"rd_buf_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1180+i*1,"rd_buf_resp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1188+i*1,"rd_buf_last", true,(i+0));
    }
    tracep->declBus(c+1196,"rd_delay_cnt", false,-1, 31,0);
    tracep->declBus(c+1197,"rd_recv_cnt", false,-1, 2,0);
    tracep->declBus(c+1198,"rd_send_idx", false,-1, 2,0);
    tracep->declBus(c+1199,"rd_arlen_saved", false,-1, 2,0);
    tracep->declBit(c+1200,"rd_ar_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1201+i*1,"rd_beat_cycle", true,(i+0), 31,0);
    }
    tracep->declBus(c+255,"i", false,-1, 31,0);
    tracep->declBus(c+1756,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1753,"WT_WAIT", false,-1, 2,0);
    tracep->declBus(c+1757,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1758,"WT_SEND", false,-1, 2,0);
    tracep->declBus(c+1209,"wt_state", false,-1, 2,0);
    tracep->declBus(c+1563,"wt_state_next", false,-1, 2,0);
    tracep->declBus(c+1210,"wt_cycle_cnt", false,-1, 31,0);
    tracep->declBus(c+1211,"wt_delay_cnt", false,-1, 31,0);
    tracep->declBus(c+1212,"wt_buf_bid", false,-1, 3,0);
    tracep->declBus(c+1213,"wt_buf_bresp", false,-1, 1,0);
    tracep->declBit(c+1214,"wt_aw_done", false,-1);
    tracep->declBit(c+1215,"wt_w_done", false,-1);
    tracep->declBit(c+1216,"wt_b_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+256,"auto_in_awready", false,-1);
    tracep->declBit(c+1564,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1764,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1290,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+257,"auto_in_wready", false,-1);
    tracep->declBit(c+1565,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1292,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_in_wlast", false,-1);
    tracep->declBit(c+1711,"auto_in_bready", false,-1);
    tracep->declBit(c+1386,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1387,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1388,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+258,"auto_in_arready", false,-1);
    tracep->declBit(c+44,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+45,"auto_in_rready", false,-1);
    tracep->declBit(c+259,"auto_in_rvalid", false,-1);
    tracep->declBus(c+260,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+263,"auto_in_rlast", false,-1);
    tracep->declBit(c+1566,"auto_out_awready", false,-1);
    tracep->declBit(c+1567,"auto_out_awvalid", false,-1);
    tracep->declBus(c+176,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+177,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+264,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1568,"auto_out_wready", false,-1);
    tracep->declBit(c+1569,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1553,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1554,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_out_wlast", false,-1);
    tracep->declBit(c+1570,"auto_out_bready", false,-1);
    tracep->declBit(c+265,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1387,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1389,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1390,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+46,"auto_out_arready", false,-1);
    tracep->declBit(c+47,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+48,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+45,"auto_out_rready", false,-1);
    tracep->declBit(c+259,"auto_out_rvalid", false,-1);
    tracep->declBus(c+260,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+266,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+267,"auto_out_rlast", false,-1);
    tracep->declBit(c+1569,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+268,"w_idle", false,-1);
    tracep->declBit(c+1571,"in_awready", false,-1);
    tracep->declBit(c+269,"busy", false,-1);
    tracep->declBus(c+270,"r_addr", false,-1, 31,0);
    tracep->declBus(c+271,"r_len", false,-1, 7,0);
    tracep->declBus(c+49,"len", false,-1, 7,0);
    tracep->declBus(c+50,"addr", false,-1, 31,0);
    tracep->declBit(c+272,"busy_1", false,-1);
    tracep->declBus(c+273,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+274,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+275,"len_1", false,-1, 7,0);
    tracep->declBus(c+1572,"addr_1", false,-1, 31,0);
    tracep->declBit(c+276,"wbeats_latched", false,-1);
    tracep->declBit(c+1567,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1573,"wbeats_valid", false,-1);
    tracep->declBus(c+277,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1574,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1555,"w_last", false,-1);
    tracep->declBit(c+1570,"nodeOut_bready", false,-1);
    tracep->declBus(c+1391,"error_0", false,-1, 1,0);
    tracep->declBus(c+1392,"error_1", false,-1, 1,0);
    tracep->declBus(c+1393,"error_2", false,-1, 1,0);
    tracep->declBus(c+1394,"error_3", false,-1, 1,0);
    tracep->declBus(c+1395,"error_4", false,-1, 1,0);
    tracep->declBus(c+1396,"error_5", false,-1, 1,0);
    tracep->declBus(c+1397,"error_6", false,-1, 1,0);
    tracep->declBus(c+1398,"error_7", false,-1, 1,0);
    tracep->declBus(c+1399,"error_8", false,-1, 1,0);
    tracep->declBus(c+1400,"error_9", false,-1, 1,0);
    tracep->declBus(c+1401,"error_10", false,-1, 1,0);
    tracep->declBus(c+1402,"error_11", false,-1, 1,0);
    tracep->declBus(c+1403,"error_12", false,-1, 1,0);
    tracep->declBus(c+1404,"error_13", false,-1, 1,0);
    tracep->declBus(c+1405,"error_14", false,-1, 1,0);
    tracep->declBus(c+1406,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+44,"io_enq_valid", false,-1);
    tracep->declBus(c+37,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+39,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+40,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+51,"io_deq_ready", false,-1);
    tracep->declBit(c+47,"io_deq_valid", false,-1);
    tracep->declBus(c+29,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+52,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+53,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+31,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+278,"ram", false,-1, 48,0);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+47,"io_deq_valid_0", false,-1);
    tracep->declBit(c+54,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+1564,"io_enq_valid", false,-1);
    tracep->declBus(c+1764,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1290,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1765,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1291,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1766,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1575,"io_deq_ready", false,-1);
    tracep->declBit(c+1576,"io_deq_valid", false,-1);
    tracep->declBus(c+176,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1577,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+281,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1551,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+177,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+282,"ram", false,-1, 48,0);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+1576,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1578,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1565,"io_enq_valid", false,-1);
    tracep->declBus(c+1292,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1293,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1294,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1579,"io_deq_ready", false,-1);
    tracep->declBit(c+1580,"io_deq_valid", false,-1);
    tracep->declBus(c+1553,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1554,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1712,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+285,"ram", false,-1, 36,0);
    tracep->declBit(c+287,"full", false,-1);
    tracep->declBit(c+1580,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1581,"do_enq", false,-1);
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
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1582,"auto_in_awready", false,-1);
    tracep->declBit(c+1583,"auto_in_awvalid", false,-1);
    tracep->declBus(c+176,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1584,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1585,"auto_in_wready", false,-1);
    tracep->declBit(c+1586,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1553,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1554,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1587,"auto_in_bready", false,-1);
    tracep->declBit(c+288,"auto_in_bvalid", false,-1);
    tracep->declBus(c+289,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+55,"auto_in_arready", false,-1);
    tracep->declBit(c+56,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+57,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+58,"auto_in_rready", false,-1);
    tracep->declBit(c+291,"auto_in_rvalid", false,-1);
    tracep->declBus(c+292,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+293,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+294,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+55,"nodeIn_arready", false,-1);
    tracep->declBit(c+1582,"nodeIn_awready", false,-1);
    tracep->declBit(c+1588,"w_sel0", false,-1);
    tracep->declBit(c+288,"w_full", false,-1);
    tracep->declBus(c+289,"w_id", false,-1, 3,0);
    tracep->declBit(c+295,"r_sel1", false,-1);
    tracep->declBit(c+296,"w_sel1", false,-1);
    tracep->declBit(c+291,"r_full", false,-1);
    tracep->declBus(c+292,"r_id", false,-1, 3,0);
    tracep->declBit(c+59,"ren", false,-1);
    tracep->declBit(c+297,"rdata_REG", false,-1);
    tracep->declBus(c+298,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+299,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+300,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+301,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+60,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+59,"R0_en", false,-1);
    tracep->declBit(c+1679,"R0_clk", false,-1);
    tracep->declBus(c+302,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1589,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1590,"W0_en", false,-1);
    tracep->declBit(c+1679,"W0_clk", false,-1);
    tracep->declBus(c+1553,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1554,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1591,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1295,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1764,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1290,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1592,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1296,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1292,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1297,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1407,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1408,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1409,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+62,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1217,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1713,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1714,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1219,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1140,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1560,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1764,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1290,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1141,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1561,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1292,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1562,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1142,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1143,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1385,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1134,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1135,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1136,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1137,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1138,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1139,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+256,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1564,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1764,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1290,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+257,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1565,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1292,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1711,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1386,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1387,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1388,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+258,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+45,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+259,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+260,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+263,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1407,"in_0_bvalid", false,-1);
    tracep->declBit(c+1217,"in_0_rvalid", false,-1);
    tracep->declBit(c+1593,"in_0_wready", false,-1);
    tracep->declBit(c+1594,"in_0_awready", false,-1);
    tracep->declBit(c+1715,"in_0_arready", false,-1);
    tracep->declBit(c+1591,"anonIn_awready", false,-1);
    tracep->declBit(c+61,"anonIn_arready", false,-1);
    tracep->declBit(c+64,"requestARIO_0_0", false,-1);
    tracep->declBit(c+65,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1298,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1299,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+66,"arSel", false,-1, 15,0);
    tracep->declBus(c+1768,"awSel", false,-1, 15,0);
    tracep->declBus(c+1220,"rSel", false,-1, 15,0);
    tracep->declBus(c+1410,"bSel", false,-1, 15,0);
    tracep->declBus(c+303,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+304,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+305,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+306,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+307,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+308,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+309,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1769,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+310,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+311,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+312,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1770,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+313,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+314,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+315,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1771,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+316,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+317,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+318,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1772,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+319,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+320,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+321,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1773,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+322,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+323,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+324,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1774,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+325,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+326,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+327,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1775,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+328,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+329,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+330,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1776,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+331,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+332,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+333,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1777,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+334,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+335,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+336,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1778,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+337,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+338,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+339,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1779,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+340,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+341,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+342,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1780,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+343,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+344,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+345,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1781,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+346,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+347,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+348,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1782,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+349,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+350,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1783,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+67,"in_0_arvalid", false,-1);
    tracep->declBit(c+352,"latched", false,-1);
    tracep->declBit(c+1595,"in_0_awvalid", false,-1);
    tracep->declBit(c+1596,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1597,"in_0_wvalid", false,-1);
    tracep->declBit(c+353,"idle_2", false,-1);
    tracep->declBit(c+1221,"anyValid", false,-1);
    tracep->declBus(c+1222,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+354,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1223,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1224,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1225,"prefixOR_1", false,-1);
    tracep->declBit(c+1226,"winner_2_1", false,-1);
    tracep->declBit(c+355,"state_2_0", false,-1);
    tracep->declBit(c+356,"state_2_1", false,-1);
    tracep->declBit(c+1227,"muxState_2_0", false,-1);
    tracep->declBit(c+1228,"muxState_2_1", false,-1);
    tracep->declBit(c+357,"idle_3", false,-1);
    tracep->declBit(c+1411,"anyValid_1", false,-1);
    tracep->declBus(c+1412,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+358,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1413,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1414,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1415,"winner_3_0", false,-1);
    tracep->declBit(c+1416,"winner_3_1", false,-1);
    tracep->declBit(c+359,"state_3_0", false,-1);
    tracep->declBit(c+360,"state_3_1", false,-1);
    tracep->declBit(c+1417,"muxState_3_0", false,-1);
    tracep->declBit(c+1418,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+361,"io_enq_ready", false,-1);
    tracep->declBit(c+1596,"io_enq_valid", false,-1);
    tracep->declBus(c+1300,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1598,"io_deq_ready", false,-1);
    tracep->declBit(c+1599,"io_deq_valid", false,-1);
    tracep->declBus(c+1600,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+362,"wrap", false,-1);
    tracep->declBit(c+363,"wrap_1", false,-1);
    tracep->declBit(c+364,"maybe_full", false,-1);
    tracep->declBit(c+365,"ptr_match", false,-1);
    tracep->declBit(c+366,"empty", false,-1);
    tracep->declBit(c+367,"full", false,-1);
    tracep->declBit(c+1599,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1601,"do_deq", false,-1);
    tracep->declBit(c+1602,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+363,"R0_addr", false,-1);
    tracep->declBit(c+1763,"R0_en", false,-1);
    tracep->declBit(c+1679,"R0_clk", false,-1);
    tracep->declBus(c+368,"R0_data", false,-1, 1,0);
    tracep->declBit(c+362,"W0_addr", false,-1);
    tracep->declBit(c+1602,"W0_en", false,-1);
    tracep->declBit(c+1679,"W0_clk", false,-1);
    tracep->declBus(c+1300,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+369+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1603,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1604,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+176,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+177,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1568,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1569,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1553,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1554,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1570,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+265,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1387,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1389,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+68,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+69,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+45,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+259,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+260,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1582,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1583,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+176,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1584,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1585,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1586,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1553,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1554,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1587,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+288,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+56,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+57,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+58,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+291,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+292,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+293,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+294,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1605,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1606,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+371,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+70,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+372,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+373,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+175,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1549,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+176,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+177,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+178,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1552,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1553,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1554,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+646,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+179,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+180,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+181,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+182,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+28,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+183,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+184,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+185,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+186,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+265,"in_0_bvalid", false,-1);
    tracep->declBit(c+259,"in_0_rvalid", false,-1);
    tracep->declBit(c+1607,"in_0_wready", false,-1);
    tracep->declBit(c+1608,"in_0_awready", false,-1);
    tracep->declBit(c+68,"in_0_arready", false,-1);
    tracep->declBit(c+1603,"anonIn_awready", false,-1);
    tracep->declBit(c+72,"requestARIO_0_0", false,-1);
    tracep->declBit(c+73,"requestARIO_0_1", false,-1);
    tracep->declBit(c+74,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1609,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1610,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1611,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+75,"arSel", false,-1, 15,0);
    tracep->declBus(c+375,"awSel", false,-1, 15,0);
    tracep->declBus(c+376,"rSel", false,-1, 15,0);
    tracep->declBus(c+1419,"bSel", false,-1, 15,0);
    tracep->declBit(c+377,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+378,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+379,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+380,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+381,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+382,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+383,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+384,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+385,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+386,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+387,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+388,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+389,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+390,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+391,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+392,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+393,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+394,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+395,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+396,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+397,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+398,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+399,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+400,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+401,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+402,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+403,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+404,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+405,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+406,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+407,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+408,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+409,"latched", false,-1);
    tracep->declBit(c+1612,"in_0_awvalid", false,-1);
    tracep->declBit(c+1613,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1614,"in_0_wvalid", false,-1);
    tracep->declBit(c+410,"idle_3", false,-1);
    tracep->declBit(c+411,"anyValid", false,-1);
    tracep->declBus(c+412,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+413,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+414,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+415,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+416,"prefixOR_1", false,-1);
    tracep->declBit(c+417,"winner_3_1", false,-1);
    tracep->declBit(c+418,"winner_3_2", false,-1);
    tracep->declBit(c+419,"state_3_0", false,-1);
    tracep->declBit(c+420,"state_3_1", false,-1);
    tracep->declBit(c+421,"state_3_2", false,-1);
    tracep->declBit(c+422,"muxState_3_0", false,-1);
    tracep->declBit(c+423,"muxState_3_1", false,-1);
    tracep->declBit(c+424,"muxState_3_2", false,-1);
    tracep->declBit(c+425,"idle_4", false,-1);
    tracep->declBit(c+426,"anyValid_1", false,-1);
    tracep->declBus(c+427,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+428,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+429,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+430,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+431,"winner_4_0", false,-1);
    tracep->declBit(c+432,"winner_4_2", false,-1);
    tracep->declBit(c+433,"state_4_0", false,-1);
    tracep->declBit(c+434,"state_4_2", false,-1);
    tracep->declBit(c+435,"muxState_4_0", false,-1);
    tracep->declBit(c+436,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+437,"io_enq_ready", false,-1);
    tracep->declBit(c+1613,"io_enq_valid", false,-1);
    tracep->declBus(c+1615,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1616,"io_deq_ready", false,-1);
    tracep->declBit(c+1617,"io_deq_valid", false,-1);
    tracep->declBus(c+1618,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+438,"wrap", false,-1);
    tracep->declBit(c+439,"wrap_1", false,-1);
    tracep->declBit(c+440,"maybe_full", false,-1);
    tracep->declBit(c+441,"ptr_match", false,-1);
    tracep->declBit(c+442,"empty", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->declBit(c+1617,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1619,"do_deq", false,-1);
    tracep->declBit(c+1620,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+439,"R0_addr", false,-1);
    tracep->declBit(c+1763,"R0_en", false,-1);
    tracep->declBit(c+1679,"R0_clk", false,-1);
    tracep->declBus(c+444,"R0_data", false,-1, 2,0);
    tracep->declBit(c+438,"W0_addr", false,-1);
    tracep->declBit(c+1620,"W0_en", false,-1);
    tracep->declBit(c+1679,"W0_clk", false,-1);
    tracep->declBus(c+1615,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+445+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1566,"auto_in_awready", false,-1);
    tracep->declBit(c+1567,"auto_in_awvalid", false,-1);
    tracep->declBus(c+176,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+177,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+264,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1568,"auto_in_wready", false,-1);
    tracep->declBit(c+1569,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1553,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1554,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_in_wlast", false,-1);
    tracep->declBit(c+1570,"auto_in_bready", false,-1);
    tracep->declBit(c+265,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1387,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1389,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1390,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+46,"auto_in_arready", false,-1);
    tracep->declBit(c+47,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+48,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+45,"auto_in_rready", false,-1);
    tracep->declBit(c+259,"auto_in_rvalid", false,-1);
    tracep->declBus(c+260,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+266,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+267,"auto_in_rlast", false,-1);
    tracep->declBit(c+1603,"auto_out_awready", false,-1);
    tracep->declBit(c+1604,"auto_out_awvalid", false,-1);
    tracep->declBus(c+176,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+177,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1568,"auto_out_wready", false,-1);
    tracep->declBit(c+1569,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1553,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1554,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_out_wlast", false,-1);
    tracep->declBit(c+1570,"auto_out_bready", false,-1);
    tracep->declBit(c+265,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1387,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1389,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+68,"auto_out_arready", false,-1);
    tracep->declBit(c+69,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+45,"auto_out_rready", false,-1);
    tracep->declBit(c+259,"auto_out_rvalid", false,-1);
    tracep->declBus(c+260,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+447,"io_enq_ready", false,-1);
    tracep->declBit(c+76,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+448,"io_deq_valid", false,-1);
    tracep->declBit(c+449,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+448,"full", false,-1);
    tracep->declBit(c+449,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+450,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+451,"io_enq_ready", false,-1);
    tracep->declBit(c+77,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+452,"io_deq_valid", false,-1);
    tracep->declBit(c+453,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+452,"full", false,-1);
    tracep->declBit(c+453,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+454,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+455,"io_enq_ready", false,-1);
    tracep->declBit(c+78,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+456,"io_deq_valid", false,-1);
    tracep->declBit(c+457,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+456,"full", false,-1);
    tracep->declBit(c+457,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+458,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+459,"io_enq_ready", false,-1);
    tracep->declBit(c+79,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+460,"io_deq_valid", false,-1);
    tracep->declBit(c+461,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+460,"full", false,-1);
    tracep->declBit(c+461,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+462,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+463,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+464,"io_deq_valid", false,-1);
    tracep->declBit(c+465,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+464,"full", false,-1);
    tracep->declBit(c+465,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+466,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+467,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+468,"io_deq_valid", false,-1);
    tracep->declBit(c+469,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+468,"full", false,-1);
    tracep->declBit(c+469,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+470,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+471,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+472,"io_deq_valid", false,-1);
    tracep->declBit(c+473,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+472,"full", false,-1);
    tracep->declBit(c+473,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+474,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+475,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+476,"io_deq_valid", false,-1);
    tracep->declBit(c+477,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+476,"full", false,-1);
    tracep->declBit(c+477,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+478,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+479,"io_enq_ready", false,-1);
    tracep->declBit(c+649,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1533,"io_deq_ready", false,-1);
    tracep->declBit(c+480,"io_deq_valid", false,-1);
    tracep->declBit(c+481,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+480,"full", false,-1);
    tracep->declBit(c+481,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+482,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+483,"io_enq_ready", false,-1);
    tracep->declBit(c+650,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1534,"io_deq_ready", false,-1);
    tracep->declBit(c+484,"io_deq_valid", false,-1);
    tracep->declBit(c+485,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+484,"full", false,-1);
    tracep->declBit(c+485,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+486,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+487,"io_enq_ready", false,-1);
    tracep->declBit(c+651,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1535,"io_deq_ready", false,-1);
    tracep->declBit(c+488,"io_deq_valid", false,-1);
    tracep->declBit(c+489,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+488,"full", false,-1);
    tracep->declBit(c+489,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+490,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+491,"io_enq_ready", false,-1);
    tracep->declBit(c+652,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1536,"io_deq_ready", false,-1);
    tracep->declBit(c+492,"io_deq_valid", false,-1);
    tracep->declBit(c+493,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+492,"full", false,-1);
    tracep->declBit(c+493,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+494,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+495,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+496,"io_deq_valid", false,-1);
    tracep->declBit(c+497,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+496,"full", false,-1);
    tracep->declBit(c+497,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+498,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+499,"io_enq_ready", false,-1);
    tracep->declBit(c+653,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1537,"io_deq_ready", false,-1);
    tracep->declBit(c+500,"io_deq_valid", false,-1);
    tracep->declBit(c+501,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+500,"full", false,-1);
    tracep->declBit(c+501,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+502,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+503,"io_enq_ready", false,-1);
    tracep->declBit(c+654,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1538,"io_deq_ready", false,-1);
    tracep->declBit(c+504,"io_deq_valid", false,-1);
    tracep->declBit(c+505,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+504,"full", false,-1);
    tracep->declBit(c+505,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+506,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+507,"io_enq_ready", false,-1);
    tracep->declBit(c+655,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1539,"io_deq_ready", false,-1);
    tracep->declBit(c+508,"io_deq_valid", false,-1);
    tracep->declBit(c+509,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+508,"full", false,-1);
    tracep->declBit(c+509,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+510,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+511,"io_enq_ready", false,-1);
    tracep->declBit(c+656,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1540,"io_deq_ready", false,-1);
    tracep->declBit(c+512,"io_deq_valid", false,-1);
    tracep->declBit(c+513,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+512,"full", false,-1);
    tracep->declBit(c+513,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+514,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+515,"io_enq_ready", false,-1);
    tracep->declBit(c+657,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1541,"io_deq_ready", false,-1);
    tracep->declBit(c+516,"io_deq_valid", false,-1);
    tracep->declBit(c+517,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+516,"full", false,-1);
    tracep->declBit(c+517,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+518,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+519,"io_enq_ready", false,-1);
    tracep->declBit(c+658,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1542,"io_deq_ready", false,-1);
    tracep->declBit(c+520,"io_deq_valid", false,-1);
    tracep->declBit(c+521,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+520,"full", false,-1);
    tracep->declBit(c+521,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+522,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+523,"io_enq_ready", false,-1);
    tracep->declBit(c+659,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1543,"io_deq_ready", false,-1);
    tracep->declBit(c+524,"io_deq_valid", false,-1);
    tracep->declBit(c+525,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+524,"full", false,-1);
    tracep->declBit(c+525,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+526,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+527,"io_enq_ready", false,-1);
    tracep->declBit(c+660,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1544,"io_deq_ready", false,-1);
    tracep->declBit(c+528,"io_deq_valid", false,-1);
    tracep->declBit(c+529,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+528,"full", false,-1);
    tracep->declBit(c+529,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+530,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+531,"io_enq_ready", false,-1);
    tracep->declBit(c+661,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1545,"io_deq_ready", false,-1);
    tracep->declBit(c+532,"io_deq_valid", false,-1);
    tracep->declBit(c+533,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+532,"full", false,-1);
    tracep->declBit(c+533,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+534,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+535,"io_enq_ready", false,-1);
    tracep->declBit(c+662,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1546,"io_deq_ready", false,-1);
    tracep->declBit(c+536,"io_deq_valid", false,-1);
    tracep->declBit(c+537,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+536,"full", false,-1);
    tracep->declBit(c+537,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+538,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+539,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+540,"io_deq_valid", false,-1);
    tracep->declBit(c+541,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+540,"full", false,-1);
    tracep->declBit(c+541,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+542,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+543,"io_enq_ready", false,-1);
    tracep->declBit(c+663,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1547,"io_deq_ready", false,-1);
    tracep->declBit(c+544,"io_deq_valid", false,-1);
    tracep->declBit(c+545,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+544,"full", false,-1);
    tracep->declBit(c+545,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+546,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+547,"io_enq_ready", false,-1);
    tracep->declBit(c+664,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1548,"io_deq_ready", false,-1);
    tracep->declBit(c+548,"io_deq_valid", false,-1);
    tracep->declBit(c+549,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+548,"full", false,-1);
    tracep->declBit(c+549,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+550,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+551,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+552,"io_deq_valid", false,-1);
    tracep->declBit(c+553,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+552,"full", false,-1);
    tracep->declBit(c+553,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+554,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+555,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+556,"io_deq_valid", false,-1);
    tracep->declBit(c+557,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+556,"full", false,-1);
    tracep->declBit(c+557,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+558,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+559,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+560,"io_deq_valid", false,-1);
    tracep->declBit(c+561,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+560,"full", false,-1);
    tracep->declBit(c+561,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+562,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+563,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+564,"io_deq_valid", false,-1);
    tracep->declBit(c+565,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+564,"full", false,-1);
    tracep->declBit(c+565,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+566,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+567,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+568,"io_deq_valid", false,-1);
    tracep->declBit(c+569,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+568,"full", false,-1);
    tracep->declBit(c+569,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+570,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+571,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+48,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+572,"io_deq_valid", false,-1);
    tracep->declBit(c+573,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+572,"full", false,-1);
    tracep->declBit(c+573,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+574,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1716,"reset", false,-1);
    tracep->declBit(c+1591,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1295,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1764,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1290,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1592,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1296,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1292,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1297,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1407,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1408,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1409,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+61,"auto_master_out_arready", false,-1);
    tracep->declBit(c+62,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1217,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1218,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1713,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1714,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1219,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1716,"reset", false,-1);
    tracep->declBit(c+1762,"io_interrupt", false,-1);
    tracep->declBit(c+1591,"io_master_awready", false,-1);
    tracep->declBit(c+1295,"io_master_awvalid", false,-1);
    tracep->declBus(c+1290,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1764,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1765,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1592,"io_master_wready", false,-1);
    tracep->declBit(c+1296,"io_master_wvalid", false,-1);
    tracep->declBus(c+1292,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"io_master_wlast", false,-1);
    tracep->declBit(c+1297,"io_master_bready", false,-1);
    tracep->declBit(c+1407,"io_master_bvalid", false,-1);
    tracep->declBus(c+1409,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1408,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+61,"io_master_arready", false,-1);
    tracep->declBit(c+62,"io_master_arvalid", false,-1);
    tracep->declBus(c+38,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+37,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+39,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"io_master_rready", false,-1);
    tracep->declBit(c+1217,"io_master_rvalid", false,-1);
    tracep->declBus(c+1714,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1713,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1219,"io_master_rlast", false,-1);
    tracep->declBus(c+1218,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1784,"io_slave_awready", false,-1);
    tracep->declBit(c+1762,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1785,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1764,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1765,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1756,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1786,"io_slave_wready", false,-1);
    tracep->declBit(c+1762,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1785,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1764,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1762,"io_slave_wlast", false,-1);
    tracep->declBit(c+1762,"io_slave_bready", false,-1);
    tracep->declBit(c+1787,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1788,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1789,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1790,"io_slave_arready", false,-1);
    tracep->declBit(c+1762,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1785,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1764,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1765,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1756,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1762,"io_slave_rready", false,-1);
    tracep->declBit(c+1791,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1792,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1793,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1794,"io_slave_rlast", false,-1);
    tracep->declBus(c+1795,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBit(c+1621,"reset_ifu", false,-1);
    tracep->declBus(c+1622,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1623,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1624,"npc", false,-1, 31,0);
    tracep->declBit(c+1796,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1797,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1622,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1623,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1625,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1626,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1627,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1764,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1765,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1757,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1628,"ifu_arvalid", false,-1);
    tracep->declBit(c+92,"ifu_arready", false,-1);
    tracep->declBus(c+93,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+94,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+95,"ifu_rlast", false,-1);
    tracep->declBus(c+96,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+97,"ifu_rvalid", false,-1);
    tracep->declBit(c+1629,"ifu_rready", false,-1);
    tracep->declBit(c+975,"bus_busy", false,-1);
    tracep->declBit(c+1798,"useless1", false,-1);
    tracep->declBit(c+1799,"useless2", false,-1);
    tracep->declBit(c+1800,"useless3", false,-1);
    tracep->declBit(c+1801,"useless4", false,-1);
    tracep->declBit(c+1630,"fencei", false,-1);
    tracep->declBus(c+1301,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1764,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1765,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1302,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1303,"lsu_arvalid", false,-1);
    tracep->declBit(c+98,"lsu_arready", false,-1);
    tracep->declBus(c+99,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+100,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+101,"lsu_rlast", false,-1);
    tracep->declBus(c+102,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+103,"lsu_rvalid", false,-1);
    tracep->declBit(c+1304,"lsu_rready", false,-1);
    tracep->declBus(c+1290,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1764,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1765,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1295,"lsu_awvalid", false,-1);
    tracep->declBit(c+1591,"lsu_awready", false,-1);
    tracep->declBus(c+1292,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"lsu_wlast", false,-1);
    tracep->declBit(c+1296,"lsu_wvalid", false,-1);
    tracep->declBit(c+1592,"lsu_wready", false,-1);
    tracep->declBus(c+1409,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1408,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1407,"lsu_bvalid", false,-1);
    tracep->declBit(c+1297,"lsu_bready", false,-1);
    tracep->declBus(c+1631,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1764,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1765,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1632,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1633,"axi_arvalid", false,-1);
    tracep->declBit(c+104,"axi_arready", false,-1);
    tracep->declBus(c+105,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+106,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+107,"axi_rlast", false,-1);
    tracep->declBus(c+108,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+109,"axi_rvalid", false,-1);
    tracep->declBit(c+1634,"axi_rready", false,-1);
    tracep->declBus(c+1290,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1764,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1765,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1766,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1295,"axi_awvalid", false,-1);
    tracep->declBit(c+1591,"axi_awready", false,-1);
    tracep->declBus(c+1292,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"axi_wlast", false,-1);
    tracep->declBit(c+1296,"axi_wvalid", false,-1);
    tracep->declBit(c+1592,"axi_wready", false,-1);
    tracep->declBus(c+1409,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1408,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1407,"axi_bvalid", false,-1);
    tracep->declBit(c+1297,"axi_bready", false,-1);
    tracep->declBus(c+110,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+111,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+112,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+113,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+114,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+115,"clint_arvalid", false,-1);
    tracep->declBit(c+976,"clint_arready", false,-1);
    tracep->declBus(c+977,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+978,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+979,"clint_rlast", false,-1);
    tracep->declBus(c+1764,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+980,"clint_rvalid", false,-1);
    tracep->declBit(c+116,"clint_rready", false,-1);
    tracep->declBus(c+1802,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1803,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1804,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1805,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1806,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1807,"clint_awvalid", false,-1);
    tracep->declBit(c+981,"clint_awready", false,-1);
    tracep->declBus(c+1808,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1809,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1810,"clint_wlast", false,-1);
    tracep->declBit(c+1811,"clint_wvalid", false,-1);
    tracep->declBit(c+982,"clint_wready", false,-1);
    tracep->declBus(c+983,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1764,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+984,"clint_bvalid", false,-1);
    tracep->declBit(c+1812,"clint_bready", false,-1);
    tracep->declBus(c+1635,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1636,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1718,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1719,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1420,"a5", false,-1, 31,0);
    tracep->declBus(c+1637,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1718,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1719,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1638,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1720,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1639,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1640,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1641,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1642,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1643,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1644,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1645,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1646,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1647,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1648,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1649,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1650,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1651,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1652,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1653,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1654,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1305,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1655,"csr_write", false,-1);
    tracep->declBus(c+1656,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1421+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+985,"wdata", false,-1, 31,0);
    tracep->declBus(c+986,"waddr", false,-1, 4,0);
    tracep->declBit(c+987,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1425+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1306,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1307,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1308,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1309,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1813,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1310,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1311,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1312,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1313,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1314,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1315,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1316,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1317,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1318,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1319,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1320,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1321,"npc_valid", false,-1);
    tracep->declBit(c+1322,"rd_exu_valid", false,-1);
    tracep->declBus(c+1323,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1324,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1325,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1326,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1814,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1327,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1328,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1329,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1330,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1331,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1332,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1333,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1334,"ready_lsu_to_wbu", false,-1);
    tracep->declBit(c+1335,"rd_lsu_valid", false,-1);
    tracep->declBit(c+988,"rd_wbu_valid", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBus(c+1627,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1764,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1765,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1757,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1766,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1628,"arvalid_i_a", false,-1);
    tracep->declBit(c+92,"arready_o_a", false,-1);
    tracep->declBus(c+93,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+94,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+95,"rlast_o_a", false,-1);
    tracep->declBus(c+96,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+97,"rvalid_o_a", false,-1);
    tracep->declBit(c+1629,"rready_i_a", false,-1);
    tracep->declBus(c+1815,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1764,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1765,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1756,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1766,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1762,"awvalid_i_a", false,-1);
    tracep->declBit(c+1816,"awready_o_a", false,-1);
    tracep->declBus(c+1815,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1764,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1762,"wlast_i_a", false,-1);
    tracep->declBit(c+1762,"wvalid_i_a", false,-1);
    tracep->declBit(c+1817,"wready_o_a", false,-1);
    tracep->declBus(c+1818,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1819,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1820,"bvalid_o_a", false,-1);
    tracep->declBit(c+1762,"bready_i_a", false,-1);
    tracep->declBus(c+1301,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1764,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1765,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1302,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1766,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1303,"arvalid_i_b", false,-1);
    tracep->declBit(c+98,"arready_o_b", false,-1);
    tracep->declBus(c+99,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+100,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+101,"rlast_o_b", false,-1);
    tracep->declBus(c+102,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+103,"rvalid_o_b", false,-1);
    tracep->declBit(c+1304,"rready_i_b", false,-1);
    tracep->declBus(c+1290,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1764,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1765,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1291,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1766,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1295,"awvalid_i_b", false,-1);
    tracep->declBit(c+1591,"awready_o_b", false,-1);
    tracep->declBus(c+1292,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1293,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1294,"wlast_i_b", false,-1);
    tracep->declBit(c+1296,"wvalid_i_b", false,-1);
    tracep->declBit(c+1592,"wready_o_b", false,-1);
    tracep->declBus(c+1409,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1408,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1407,"bvalid_o_b", false,-1);
    tracep->declBit(c+1297,"bready_i_b", false,-1);
    tracep->declBus(c+1631,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1764,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1765,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1632,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1766,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1633,"arvalid_o", false,-1);
    tracep->declBit(c+104,"arready_i", false,-1);
    tracep->declBus(c+105,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+106,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+107,"rlast_i", false,-1);
    tracep->declBus(c+108,"rid_i", false,-1, 3,0);
    tracep->declBit(c+109,"rvalid_i", false,-1);
    tracep->declBit(c+1634,"rready_o", false,-1);
    tracep->declBus(c+1290,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1764,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1765,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1291,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1766,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1295,"awvalid_o", false,-1);
    tracep->declBit(c+1591,"awready_i", false,-1);
    tracep->declBus(c+1292,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1293,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1294,"wlast_o", false,-1);
    tracep->declBit(c+1296,"wvalid_o", false,-1);
    tracep->declBit(c+1592,"wready_i", false,-1);
    tracep->declBus(c+1409,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1408,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1407,"bvalid_i", false,-1);
    tracep->declBit(c+1297,"bready_o", false,-1);
    tracep->declBit(c+975,"bus_busy", false,-1);
    tracep->declBus(c+1821,"MASTER_A", false,-1, 0,0);
    tracep->declBus(c+1822,"MASTER_B", false,-1, 0,0);
    tracep->declBit(c+989,"arb_grant", false,-1);
    tracep->declBit(c+990,"arb_locked", false,-1);
    tracep->declBit(c+991,"current_master", false,-1);
    tracep->declBit(c+1721,"ar_handshake", false,-1);
    tracep->declBit(c+1722,"r_last_handshake", false,-1);
    tracep->declBit(c+1657,"arb_grant_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBus(c+110,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+111,"arid_i", false,-1, 3,0);
    tracep->declBus(c+112,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+113,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+114,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+115,"arvalid_i", false,-1);
    tracep->declBit(c+976,"arready_o", false,-1);
    tracep->declBus(c+977,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+978,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+979,"rlast_o", false,-1);
    tracep->declBus(c+1764,"rid_o", false,-1, 3,0);
    tracep->declBit(c+980,"rvalid_o", false,-1);
    tracep->declBit(c+116,"rready_i", false,-1);
    tracep->declBus(c+1802,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1803,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1804,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1805,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1806,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1807,"awvalid_i", false,-1);
    tracep->declBit(c+981,"awready_o", false,-1);
    tracep->declBus(c+1808,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1809,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1810,"wlast_i", false,-1);
    tracep->declBit(c+1811,"wvalid_i", false,-1);
    tracep->declBit(c+982,"wready_o", false,-1);
    tracep->declBus(c+983,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1764,"bid_o", false,-1, 3,0);
    tracep->declBit(c+984,"bvalid_o", false,-1);
    tracep->declBit(c+1812,"bready_i", false,-1);
    tracep->declBit(c+992,"ar_state", false,-1);
    tracep->declBit(c+993,"r_state", false,-1);
    tracep->declBit(c+994,"aw_state", false,-1);
    tracep->declBit(c+995,"w_state", false,-1);
    tracep->declBit(c+1823,"b_state", false,-1);
    tracep->declBus(c+996,"araddr", false,-1, 31,0);
    tracep->declBus(c+997,"awaddr", false,-1, 31,0);
    tracep->declBus(c+998,"wdata", false,-1, 31,0);
    tracep->declBus(c+999,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1824,"wvalid", false,-1);
    tracep->declBit(c+1000,"flag_waddr", false,-1);
    tracep->declBit(c+1001,"flag_wdata", false,-1);
    tracep->declBit(c+1002,"flag_rdata", false,-1);
    tracep->declBit(c+1003,"flag_raddr", false,-1);
    tracep->declBit(c+1825,"flag_write", false,-1);
    tracep->declBus(c+1004,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1005,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1006,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1007,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1008,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1009,"lfsr_in", false,-1);
    tracep->declBus(c+1010,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1011,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBit(c+1621,"reset_ifu", false,-1);
    tracep->declBus(c+1637,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1718,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1719,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1638,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1720,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1639,"a_in_src_i", false,-1);
    tracep->declBus(c+1640,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1641,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1642,"adder_a_src_i", false,-1);
    tracep->declBit(c+1643,"adder_out_src_i", false,-1);
    tracep->declBus(c+1644,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1645,"MemRead_i", false,-1);
    tracep->declBit(c+1646,"MemWrite_i", false,-1);
    tracep->declBus(c+1647,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1648,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1649,"wb_src_i", false,-1);
    tracep->declBit(c+1650,"csr_write_i", false,-1);
    tracep->declBit(c+1651,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1652,"reg_write_i", false,-1);
    tracep->declBus(c+1653,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1654,"exu_valid_i", false,-1);
    tracep->declBit(c+1305,"exu_ready_o", false,-1);
    tracep->declBus(c+1306,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1307,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1308,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1309,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1624,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1310,"MemRead_o", false,-1);
    tracep->declBit(c+1311,"MemWrite_o", false,-1);
    tracep->declBus(c+1312,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1313,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1314,"wb_src_o", false,-1);
    tracep->declBit(c+1315,"csr_write_o", false,-1);
    tracep->declBit(c+1316,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1317,"reg_write_o", false,-1);
    tracep->declBus(c+1318,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1319,"exu_valid_o", false,-1);
    tracep->declBit(c+1320,"exu_ready_i", false,-1);
    tracep->declBit(c+1321,"npc_valid", false,-1);
    tracep->declBit(c+1322,"rd_exu_valid", false,-1);
    tracep->declBus(c+1336,"pc", false,-1, 31,0);
    tracep->declBus(c+1307,"rs1", false,-1, 31,0);
    tracep->declBus(c+1308,"rs2", false,-1, 31,0);
    tracep->declBus(c+1337,"imm", false,-1, 31,0);
    tracep->declBus(c+1338,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1339,"a_in_src", false,-1);
    tracep->declBus(c+1340,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1341,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1342,"adder_a_src", false,-1);
    tracep->declBit(c+1343,"adder_out_src", false,-1);
    tracep->declBus(c+1344,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1345,"npc_flag", false,-1);
    tracep->declBus(c+1346,"a_in", false,-1, 31,0);
    tracep->declBus(c+1347,"b_in", false,-1, 31,0);
    tracep->declBus(c+1348,"a_out", false,-1, 31,0);
    tracep->declBus(c+1349,"add_out", false,-1, 31,0);
    tracep->declBus(c+1350,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1306,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1624,"npc", false,-1, 31,0);
    tracep->declBit(c+1351,"zero", false,-1);
    tracep->declBus(c+1766,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1826,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1827,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1352,"current_state", false,-1, 1,0);
    tracep->declBus(c+1658,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1346,"a", false,-1, 31,0);
    tracep->declBus(c+1347,"b", false,-1, 31,0);
    tracep->declBus(c+1344,"op", false,-1, 3,0);
    tracep->declBus(c+1306,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1351,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1828,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1307,"d0", false,-1, 31,0);
    tracep->declBus(c+1336,"d1", false,-1, 31,0);
    tracep->declBit(c+1339,"sel", false,-1);
    tracep->declBus(c+1346,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1828,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1308,"d0", false,-1, 31,0);
    tracep->declBus(c+1337,"d1", false,-1, 31,0);
    tracep->declBus(c+1829,"d2", false,-1, 31,0);
    tracep->declBus(c+1338,"d3", false,-1, 31,0);
    tracep->declBus(c+1340,"sel", false,-1, 1,0);
    tracep->declBus(c+1347,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1348,"a", false,-1, 31,0);
    tracep->declBus(c+1337,"b", false,-1, 31,0);
    tracep->declBus(c+1349,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1828,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1336,"d0", false,-1, 31,0);
    tracep->declBus(c+1307,"d1", false,-1, 31,0);
    tracep->declBit(c+1342,"sel", false,-1);
    tracep->declBus(c+1348,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1828,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1349,"d0", false,-1, 31,0);
    tracep->declBus(c+1338,"d1", false,-1, 31,0);
    tracep->declBit(c+1343,"sel", false,-1);
    tracep->declBus(c+1350,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1353,"pc4", false,-1, 31,0);
    tracep->declBus(c+1350,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1341,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1351,"zero", false,-1);
    tracep->declBus(c+1306,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1624,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBit(c+1621,"reset_ifu", false,-1);
    tracep->declBus(c+1635,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1636,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1718,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1719,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1420,"a5", false,-1, 31,0);
    tracep->declBus(c+1622,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1623,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1625,"idu_valid_i", false,-1);
    tracep->declBit(c+1626,"idu_ready_o", false,-1);
    tracep->declBus(c+1637,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1718,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1719,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1638,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1720,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1639,"a_in_src_o", false,-1);
    tracep->declBus(c+1640,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1641,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1642,"adder_a_src_o", false,-1);
    tracep->declBit(c+1643,"adder_out_src_o", false,-1);
    tracep->declBus(c+1644,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1645,"MemRead_o", false,-1);
    tracep->declBit(c+1646,"MemWrite_o", false,-1);
    tracep->declBus(c+1647,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1648,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1649,"wb_src_o", false,-1);
    tracep->declBit(c+1650,"csr_write_o", false,-1);
    tracep->declBit(c+1651,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1652,"reg_write_o", false,-1);
    tracep->declBus(c+1653,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1654,"idu_valid_o", false,-1);
    tracep->declBit(c+1305,"idu_ready_i", false,-1);
    tracep->declBit(c+1655,"csr_write_i", false,-1);
    tracep->declBus(c+1656,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1457+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1630,"fencei", false,-1);
    tracep->declBus(c+1354,"exu_rd", false,-1, 4,0);
    tracep->declBus(c+1355,"lsu_rd", false,-1, 4,0);
    tracep->declBus(c+1013,"wbu_rd", false,-1, 4,0);
    tracep->declBus(c+1637,"pc", false,-1, 31,0);
    tracep->declBus(c+1659,"inst", false,-1, 31,0);
    tracep->declBus(c+1660,"opcode", false,-1, 6,0);
    tracep->declBus(c+1661,"wmask_tmp", false,-1, 7,0);
    tracep->declBit(c+1662,"opcode_r", false,-1);
    tracep->declBit(c+1663,"opcode_i", false,-1);
    tracep->declBit(c+1664,"opcode_s", false,-1);
    tracep->declBit(c+1665,"opcode_sb", false,-1);
    tracep->declBit(c+1666,"opcode_u", false,-1);
    tracep->declBit(c+1667,"opcode_uj", false,-1);
    tracep->declBit(c+1723,"isRAW", false,-1);
    tracep->declBit(c+1668,"flag", false,-1);
    tracep->declBit(c+1724,"exu_raw", false,-1);
    tracep->declBit(c+1725,"lsu_raw", false,-1);
    tracep->declBit(c+1726,"wbu_raw", false,-1);
    tracep->declBus(c+1766,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1826,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1827,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1669,"current_state", false,-1, 1,0);
    tracep->declBus(c+1670,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1659,"inst", false,-1, 31,0);
    tracep->declBus(c+1644,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1660,"opcode", false,-1, 6,0);
    tracep->declBus(c+1671,"funct3", false,-1, 2,0);
    tracep->declBus(c+1672,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1655,"wen", false,-1);
    tracep->declBus(c+1659,"inst", false,-1, 31,0);
    tracep->declBus(c+1656,"wdata", false,-1, 31,0);
    tracep->declBus(c+1420,"NO", false,-1, 31,0);
    tracep->declBus(c+1637,"pc", false,-1, 31,0);
    tracep->declBus(c+1720,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1461+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1465,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1466,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1467,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1468,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1830,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1831,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1660,"opcode", false,-1, 6,0);
    tracep->declBus(c+1671,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1659,"inst", false,-1, 31,0);
    tracep->declBit(c+1639,"a_in_src", false,-1);
    tracep->declBus(c+1640,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1652,"reg_write", false,-1);
    tracep->declBus(c+1641,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1642,"adder_a_src", false,-1);
    tracep->declBit(c+1645,"MemRead", false,-1);
    tracep->declBit(c+1646,"MemWrite", false,-1);
    tracep->declBus(c+1661,"wmask", false,-1, 7,0);
    tracep->declBit(c+1649,"wb_src", false,-1);
    tracep->declBus(c+1648,"rmask", false,-1, 2,0);
    tracep->declBit(c+1650,"csr_write", false,-1);
    tracep->declBit(c+1643,"adder_out_src", false,-1);
    tracep->declBit(c+1651,"csr_wdata_src", false,-1);
    tracep->declBus(c+1660,"opcode", false,-1, 6,0);
    tracep->declBus(c+1671,"funct3", false,-1, 2,0);
    tracep->declBus(c+1672,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1828,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1659,"inst", false,-1, 31,0);
    tracep->declBus(c+1638,"data", false,-1, 31,0);
    tracep->declBus(c+1660,"opcode", false,-1, 6,0);
    tracep->declBus(c+1671,"funct3", false,-1, 2,0);
    tracep->declBus(c+1672,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBus(c+1627,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1764,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1765,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1757,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1766,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1628,"arvalid_o", false,-1);
    tracep->declBit(c+92,"arready_i", false,-1);
    tracep->declBus(c+93,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+94,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+95,"rlast_i", false,-1);
    tracep->declBus(c+96,"rid_i", false,-1, 3,0);
    tracep->declBit(c+97,"rvalid_i", false,-1);
    tracep->declBit(c+1629,"rready_o", false,-1);
    tracep->declBus(c+1624,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1321,"npc_valid", false,-1);
    tracep->declBit(c+1621,"reset_o", false,-1);
    tracep->declBus(c+1622,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1623,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1625,"ifu_valid_o", false,-1);
    tracep->declBit(c+1626,"ifu_ready_i", false,-1);
    tracep->declBit(c+975,"bus_busy", false,-1);
    tracep->declBus(c+1673,"pc_dbg", false,-1, 31,0);
    tracep->declBus(c+1756,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1753,"S_WAIT_R", false,-1, 2,0);
    tracep->declBus(c+1757,"S_OUT", false,-1, 2,0);
    tracep->declBus(c+1758,"S_FLUSH", false,-1, 2,0);
    tracep->declBus(c+1673,"pc_fetch", false,-1, 31,0);
    tracep->declBus(c+1674,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1675,"inst_buf", false,-1, 31,0);
    tracep->declBus(c+1676,"state", false,-1, 2,0);
    tracep->declBit(c+1677,"ctrl_hazard", false,-1);
    tracep->declBit(c+1678,"ar_inflight", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBus(c+1306,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1307,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1308,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1309,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1310,"MemRead_i", false,-1);
    tracep->declBit(c+1311,"MemWrite_i", false,-1);
    tracep->declBus(c+1312,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1313,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1314,"wb_src_i", false,-1);
    tracep->declBit(c+1315,"csr_write_i", false,-1);
    tracep->declBit(c+1316,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1317,"reg_write_i", false,-1);
    tracep->declBus(c+1318,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1319,"lsu_valid_i", false,-1);
    tracep->declBit(c+1320,"lsu_ready_o", false,-1);
    tracep->declBus(c+1323,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1324,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1325,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1326,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1327,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1328,"wb_src_o", false,-1);
    tracep->declBit(c+1329,"csr_write_o", false,-1);
    tracep->declBit(c+1330,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1331,"reg_write_o", false,-1);
    tracep->declBus(c+1332,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1333,"lsu_valid_o", false,-1);
    tracep->declBit(c+1334,"lsu_ready_i", false,-1);
    tracep->declBus(c+1301,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1764,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1765,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1302,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1766,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1303,"arvalid_o", false,-1);
    tracep->declBit(c+98,"arready_i", false,-1);
    tracep->declBus(c+99,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+100,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+101,"rlast_i", false,-1);
    tracep->declBus(c+102,"rid_i", false,-1, 3,0);
    tracep->declBit(c+103,"rvalid_i", false,-1);
    tracep->declBit(c+1304,"rready_o", false,-1);
    tracep->declBus(c+1290,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1764,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1765,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1291,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1766,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1295,"awvalid_o", false,-1);
    tracep->declBit(c+1591,"awready_i", false,-1);
    tracep->declBus(c+1292,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1293,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1294,"wlast_o", false,-1);
    tracep->declBit(c+1296,"wvalid_o", false,-1);
    tracep->declBit(c+1592,"wready_i", false,-1);
    tracep->declBus(c+1409,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1408,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1407,"bvalid_i", false,-1);
    tracep->declBit(c+1297,"bready_o", false,-1);
    tracep->declBit(c+975,"bus_busy", false,-1);
    tracep->declBit(c+1335,"rd_lsu_valid", false,-1);
    tracep->declBus(c+1323,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1324,"rs1", false,-1, 31,0);
    tracep->declBus(c+1832,"rs2", false,-1, 31,0);
    tracep->declBus(c+1833,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1327,"rmask", false,-1, 2,0);
    tracep->declBus(c+1356,"wmask", false,-1, 3,0);
    tracep->declBit(c+1357,"flag", false,-1);
    tracep->declBit(c+1834,"wvalid_tmp", false,-1);
    tracep->declBit(c+1358,"MemRead", false,-1);
    tracep->declBit(c+1359,"MemWrite", false,-1);
    tracep->declBit(c+1303,"arvalid", false,-1);
    tracep->declBus(c+1301,"araddr", false,-1, 31,0);
    tracep->declBit(c+1304,"rready", false,-1);
    tracep->declBus(c+1290,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1295,"awvalid", false,-1);
    tracep->declBus(c+1292,"wdata", false,-1, 31,0);
    tracep->declBus(c+1293,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1296,"wvalid", false,-1);
    tracep->declBit(c+1297,"bready", false,-1);
    tracep->declBit(c+1360,"read_mem", false,-1);
    tracep->declBit(c+1361,"write_mem", false,-1);
    tracep->declBus(c+1766,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1826,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1827,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1362,"current_state", false,-1, 1,0);
    tracep->declBus(c+1727,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1835,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1828,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBus(c+985,"wdata", false,-1, 31,0);
    tracep->declBus(c+986,"waddr", false,-1, 4,0);
    tracep->declBit(c+987,"wen", false,-1);
    tracep->declBus(c+1635,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1718,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1636,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1719,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1420,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1469+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1501+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBus(c+1323,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1324,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1325,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1326,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1327,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1328,"wb_src_i", false,-1);
    tracep->declBit(c+1329,"csr_write_i", false,-1);
    tracep->declBit(c+1330,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1331,"reg_write_i", false,-1);
    tracep->declBus(c+1332,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1333,"wbu_valid_i", false,-1);
    tracep->declBit(c+1334,"wbu_ready_o", false,-1);
    tracep->declBus(c+1656,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+985,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1655,"csr_write_o", false,-1);
    tracep->declBit(c+987,"reg_write_o", false,-1);
    tracep->declBus(c+986,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+988,"rd_wbu_valid", false,-1);
    tracep->declBus(c+1014,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1015,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1016,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1017,"rs1", false,-1, 31,0);
    tracep->declBus(c+1018,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1019,"rmask", false,-1, 2,0);
    tracep->declBit(c+1020,"wb_src", false,-1);
    tracep->declBit(c+1021,"csr_wdata_src", false,-1);
    tracep->declBit(c+1022,"difftest_check", false,-1);
    tracep->declBit(c+1023,"difftest_check_flag", false,-1);
    tracep->declBus(c+1766,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1826,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1827,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1024,"current_state", false,-1, 1,0);
    tracep->declBus(c+1728,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1828,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1017,"d0", false,-1, 31,0);
    tracep->declBus(c+1018,"d1", false,-1, 31,0);
    tracep->declBit(c+1021,"sel", false,-1);
    tracep->declBus(c+1656,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1015,"read_data", false,-1, 31,0);
    tracep->declBus(c+1025,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1019,"rmask", false,-1, 2,0);
    tracep->declBus(c+1014,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1026,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1027,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1028,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1029,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1030,"byte3", false,-1, 31,0);
    tracep->declBus(c+1031,"byte2", false,-1, 31,0);
    tracep->declBus(c+1032,"byte1", false,-1, 31,0);
    tracep->declBus(c+1033,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1828,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1016,"d0", false,-1, 31,0);
    tracep->declBus(c+1014,"d1", false,-1, 31,0);
    tracep->declBit(c+1020,"sel", false,-1);
    tracep->declBus(c+985,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1717,"rst_n", false,-1);
    tracep->declBus(c+1631,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1764,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1765,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1632,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1766,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1633,"axi_arvalid_i", false,-1);
    tracep->declBit(c+104,"axi_arready_o", false,-1);
    tracep->declBus(c+105,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+106,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+107,"axi_rlast_o", false,-1);
    tracep->declBus(c+108,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+109,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1634,"axi_rready_i", false,-1);
    tracep->declBus(c+1290,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1764,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1765,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1291,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1766,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1295,"axi_awvalid_i", false,-1);
    tracep->declBit(c+1591,"axi_awready_o", false,-1);
    tracep->declBus(c+1292,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1293,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1294,"axi_wlast_i", false,-1);
    tracep->declBit(c+1296,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1592,"axi_wready_o", false,-1);
    tracep->declBus(c+1409,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1408,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1407,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1297,"axi_bready_i", false,-1);
    tracep->declBus(c+38,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+37,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+39,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+40,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+41,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+62,"sram_arvalid_o", false,-1);
    tracep->declBit(c+61,"sram_arready_i", false,-1);
    tracep->declBus(c+1713,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1714,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1219,"sram_rlast_i", false,-1);
    tracep->declBus(c+1218,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1217,"sram_rvalid_i", false,-1);
    tracep->declBit(c+63,"sram_rready_o", false,-1);
    tracep->declBus(c+1290,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1764,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1765,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1291,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1766,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1295,"sram_awvalid_o", false,-1);
    tracep->declBit(c+1591,"sram_awready_i", false,-1);
    tracep->declBus(c+1292,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1293,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1294,"sram_wlast_o", false,-1);
    tracep->declBit(c+1296,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1592,"sram_wready_i", false,-1);
    tracep->declBus(c+1409,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1408,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1407,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1297,"sram_bready_o", false,-1);
    tracep->declBus(c+110,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+111,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+112,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+113,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+114,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+115,"clint_arvalid_o", false,-1);
    tracep->declBit(c+976,"clint_arready_i", false,-1);
    tracep->declBus(c+977,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+978,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+979,"clint_rlast_i", false,-1);
    tracep->declBus(c+1764,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+980,"clint_rvalid_i", false,-1);
    tracep->declBit(c+116,"clint_rready_o", false,-1);
    tracep->declBus(c+1802,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1803,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1804,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1805,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1806,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1807,"clint_awvalid_o", false,-1);
    tracep->declBit(c+981,"clint_awready_i", false,-1);
    tracep->declBus(c+1808,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1809,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1810,"clint_wlast_o", false,-1);
    tracep->declBit(c+1811,"clint_wvalid_o", false,-1);
    tracep->declBit(c+982,"clint_wready_i", false,-1);
    tracep->declBus(c+983,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1764,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+984,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1812,"clint_bready_o", false,-1);
    tracep->declBit(c+117,"ar_switch", false,-1);
    tracep->declBit(c+118,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"io_d", false,-1);
    tracep->declBit(c+575,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"io_d", false,-1);
    tracep->declBit(c+575,"io_q", false,-1);
    tracep->declBit(c+575,"sync_0", false,-1);
    tracep->declBit(c+576,"sync_1", false,-1);
    tracep->declBit(c+577,"sync_2", false,-1);
    tracep->declBit(c+578,"sync_3", false,-1);
    tracep->declBit(c+579,"sync_4", false,-1);
    tracep->declBit(c+580,"sync_5", false,-1);
    tracep->declBit(c+581,"sync_6", false,-1);
    tracep->declBit(c+582,"sync_7", false,-1);
    tracep->declBit(c+583,"sync_8", false,-1);
    tracep->declBit(c+584,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1119,"auto_in_psel", false,-1);
    tracep->declBit(c+1120,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1118,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1108,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"auto_in_pready", false,-1);
    tracep->declBit(c+1762,"auto_in_pslverr", false,-1);
    tracep->declBus(c+682,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1681,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1682,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1683,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1684,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1685,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1686,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1687,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1688,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1689,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1690,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1229,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1119,"in_psel", false,-1);
    tracep->declBit(c+1120,"in_penable", false,-1);
    tracep->declBus(c+1108,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"in_pready", false,-1);
    tracep->declBus(c+682,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1762,"in_pslverr", false,-1);
    tracep->declBus(c+1681,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1682,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1683,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1684,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1685,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1686,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1687,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1688,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1689,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1690,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+686,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+682,"rdata", false,-1, 31,0);
    tracep->declBus(c+687,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+681,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+688,"num", false,-1, 3,0);
    tracep->declBus(c+1683,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+689,"num", false,-1, 3,0);
    tracep->declBus(c+1684,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+690,"num", false,-1, 3,0);
    tracep->declBus(c+1685,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+691,"num", false,-1, 3,0);
    tracep->declBus(c+1686,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+692,"num", false,-1, 3,0);
    tracep->declBus(c+1687,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+693,"num", false,-1, 3,0);
    tracep->declBus(c+1688,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+694,"num", false,-1, 3,0);
    tracep->declBus(c+1689,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+695,"num", false,-1, 3,0);
    tracep->declBus(c+1690,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1116,"auto_in_psel", false,-1);
    tracep->declBit(c+1117,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1118,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1108,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+140,"auto_in_pready", false,-1);
    tracep->declBit(c+1762,"auto_in_pslverr", false,-1);
    tracep->declBus(c+141,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1691,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1692,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1229,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1116,"in_psel", false,-1);
    tracep->declBit(c+1117,"in_penable", false,-1);
    tracep->declBus(c+1108,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+140,"in_pready", false,-1);
    tracep->declBus(c+141,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1762,"in_pslverr", false,-1);
    tracep->declBit(c+1691,"ps2_clk", false,-1);
    tracep->declBit(c+1692,"ps2_data", false,-1);
    tracep->declBus(c+585,"data_r", false,-1, 7,0);
    tracep->declBus(c+586,"old_data", false,-1, 7,0);
    tracep->declBus(c+587,"data_asic", false,-1, 7,0);
    tracep->declBus(c+588,"buffer", false,-1, 7,0);
    tracep->declBit(c+589,"ready", false,-1);
    tracep->declBit(c+590,"nextdata_n", false,-1);
    tracep->declBit(c+591,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1729,"clrn", false,-1);
    tracep->declBit(c+1691,"ps2_clk", false,-1);
    tracep->declBit(c+1692,"ps2_data", false,-1);
    tracep->declBit(c+590,"nextdata_n", false,-1);
    tracep->declBus(c+588,"data", false,-1, 7,0);
    tracep->declBit(c+589,"ready", false,-1);
    tracep->declBit(c+591,"overflow", false,-1);
    tracep->declBus(c+592,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+593+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+601,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+602,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+603,"count", false,-1, 3,0);
    tracep->declBus(c+604,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+605,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1605,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1606,"auto_in_wvalid", false,-1);
    tracep->declBit(c+371,"auto_in_arready", false,-1);
    tracep->declBit(c+70,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+372,"auto_in_rvalid", false,-1);
    tracep->declBus(c+373,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+372,"state", false,-1);
    tracep->declBus(c+374,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+373,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+119,"raddr", false,-1, 31,0);
    tracep->declBit(c+120,"ren", false,-1);
    tracep->declBus(c+121,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1121,"auto_in_psel", false,-1);
    tracep->declBit(c+1122,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1105,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1709,"auto_in_pready", false,-1);
    tracep->declBit(c+1762,"auto_in_pslverr", false,-1);
    tracep->declBus(c+142,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1702,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1363,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1703,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1105,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1121,"in_psel", false,-1);
    tracep->declBit(c+1122,"in_penable", false,-1);
    tracep->declBus(c+1108,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1709,"in_pready", false,-1);
    tracep->declBus(c+142,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1762,"in_pslverr", false,-1);
    tracep->declBit(c+1702,"qspi_sck", false,-1);
    tracep->declBit(c+1363,"qspi_ce_n", false,-1);
    tracep->declBus(c+1703,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1703,"din", false,-1, 3,0);
    tracep->declBus(c+1730,"dout", false,-1, 3,0);
    tracep->declBus(c+1367,"douten", false,-1, 3,0);
    tracep->declBit(c+1731,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1679,"clk_i", false,-1);
    tracep->declBit(c+1680,"rst_i", false,-1);
    tracep->declBus(c+1105,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1110,"dat_i", false,-1, 31,0);
    tracep->declBus(c+142,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1111,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1121,"cyc_i", false,-1);
    tracep->declBit(c+1121,"stb_i", false,-1);
    tracep->declBit(c+1731,"ack_o", false,-1);
    tracep->declBit(c+1109,"we_i", false,-1);
    tracep->declBit(c+1702,"sck", false,-1);
    tracep->declBit(c+1363,"ce_n", false,-1);
    tracep->declBus(c+1703,"din", false,-1, 3,0);
    tracep->declBus(c+1730,"dout", false,-1, 3,0);
    tracep->declBus(c+1367,"douten", false,-1, 3,0);
    tracep->declBus(c+1766,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1826,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1827,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+696,"mr_sck", false,-1);
    tracep->declBit(c+697,"mr_ce_n", false,-1);
    tracep->declBus(c+1703,"mr_din", false,-1, 3,0);
    tracep->declBus(c+698,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+699,"mr_doe", false,-1);
    tracep->declBit(c+700,"mw_sck", false,-1);
    tracep->declBit(c+701,"mw_ce_n", false,-1);
    tracep->declBus(c+1703,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1246,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+702,"mw_doe", false,-1);
    tracep->declBit(c+1368,"mr_rd", false,-1);
    tracep->declBit(c+703,"mr_done", false,-1);
    tracep->declBit(c+1369,"mw_wr", false,-1);
    tracep->declBit(c+1247,"mw_done", false,-1);
    tracep->declBit(c+1121,"wb_valid", false,-1);
    tracep->declBit(c+1230,"wb_we", false,-1);
    tracep->declBit(c+1231,"wb_re", false,-1);
    tracep->declBus(c+1264,"state", false,-1, 1,0);
    tracep->declBus(c+1732,"nstate", false,-1, 1,0);
    tracep->declBus(c+1733,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1734,"qpi_sck", false,-1);
    tracep->declBus(c+1232,"size", false,-1, 2,0);
    tracep->declBus(c+1233,"byte0", false,-1, 7,0);
    tracep->declBus(c+1234,"byte1", false,-1, 7,0);
    tracep->declBus(c+1235,"byte2", false,-1, 7,0);
    tracep->declBus(c+1236,"byte3", false,-1, 7,0);
    tracep->declBus(c+1735,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1729,"rst_n", false,-1);
    tracep->declBus(c+1237,"addr", false,-1, 23,0);
    tracep->declBit(c+1368,"rd", false,-1);
    tracep->declBus(c+1759,"size", false,-1, 2,0);
    tracep->declBit(c+703,"done", false,-1);
    tracep->declBus(c+142,"line", false,-1, 31,0);
    tracep->declBit(c+696,"sck", false,-1);
    tracep->declBit(c+697,"ce_n", false,-1);
    tracep->declBus(c+1703,"din", false,-1, 3,0);
    tracep->declBus(c+698,"dout", false,-1, 3,0);
    tracep->declBit(c+699,"douten", false,-1);
    tracep->declBus(c+1821,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1822,"READ", false,-1, 0,0);
    tracep->declBus(c+1836,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+704,"state", false,-1);
    tracep->declBit(c+1370,"nstate", false,-1);
    tracep->declBus(c+705,"counter", false,-1, 7,0);
    tracep->declBus(c+706,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+606+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1837,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+707,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1729,"rst_n", false,-1);
    tracep->declBus(c+1238,"addr", false,-1, 23,0);
    tracep->declBus(c+1735,"line", false,-1, 31,0);
    tracep->declBus(c+1232,"size", false,-1, 2,0);
    tracep->declBit(c+1369,"wr", false,-1);
    tracep->declBit(c+1247,"done", false,-1);
    tracep->declBit(c+700,"sck", false,-1);
    tracep->declBit(c+701,"ce_n", false,-1);
    tracep->declBus(c+1703,"din", false,-1, 3,0);
    tracep->declBus(c+1246,"dout", false,-1, 3,0);
    tracep->declBit(c+702,"douten", false,-1);
    tracep->declBus(c+1821,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1822,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1239,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+708,"state", false,-1);
    tracep->declBit(c+1371,"nstate", false,-1);
    tracep->declBus(c+709,"counter", false,-1, 7,0);
    tracep->declBus(c+710,"saddr", false,-1, 23,0);
    tracep->declBus(c+1838,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1365,"auto_in_awready", false,-1);
    tracep->declBit(c+1151,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1152,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1153,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1155,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1156,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1366,"auto_in_wready", false,-1);
    tracep->declBit(c+1157,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1158,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"auto_in_wlast", false,-1);
    tracep->declBit(c+1161,"auto_in_bready", false,-1);
    tracep->declBit(c+1263,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1260,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1766,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1364,"auto_in_arready", false,-1);
    tracep->declBit(c+1144,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1145,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1146,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1147,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1148,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1149,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1150,"auto_in_rready", false,-1);
    tracep->declBit(c+1259,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1260,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1261,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1766,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1262,"auto_in_rlast", false,-1);
    tracep->declBit(c+1704,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1256,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+676,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+677,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+678,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+679,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1705,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1257,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1258,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1283,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1365,"in_awready", false,-1);
    tracep->declBit(c+1151,"in_awvalid", false,-1);
    tracep->declBus(c+1153,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1152,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1154,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1155,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1156,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1366,"in_wready", false,-1);
    tracep->declBit(c+1157,"in_wvalid", false,-1);
    tracep->declBus(c+1158,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1159,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"in_wlast", false,-1);
    tracep->declBit(c+1161,"in_bready", false,-1);
    tracep->declBit(c+1263,"in_bvalid", false,-1);
    tracep->declBus(c+1766,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1260,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1364,"in_arready", false,-1);
    tracep->declBit(c+1144,"in_arvalid", false,-1);
    tracep->declBus(c+1146,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1145,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1147,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1148,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1149,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1150,"in_rready", false,-1);
    tracep->declBit(c+1259,"in_rvalid", false,-1);
    tracep->declBus(c+1766,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1261,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1262,"in_rlast", false,-1);
    tracep->declBus(c+1260,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1704,"sdram_clk", false,-1);
    tracep->declBit(c+1256,"sdram_cke", false,-1);
    tracep->declBit(c+676,"sdram_cs", false,-1);
    tracep->declBit(c+677,"sdram_ras", false,-1);
    tracep->declBit(c+678,"sdram_cas", false,-1);
    tracep->declBit(c+679,"sdram_we", false,-1);
    tracep->declBus(c+1705,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1257,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1258,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1283,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+711,"sdram_dout_en", false,-1);
    tracep->declBus(c+712,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1679,"clk_i", false,-1);
    tracep->declBit(c+1680,"rst_i", false,-1);
    tracep->declBit(c+1151,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1153,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1152,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1154,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1156,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1157,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1158,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1159,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1160,"inport_wlast_i", false,-1);
    tracep->declBit(c+1161,"inport_bready_i", false,-1);
    tracep->declBit(c+1144,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1146,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1145,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1147,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1149,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1150,"inport_rready_i", false,-1);
    tracep->declBus(c+1283,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1365,"inport_awready_o", false,-1);
    tracep->declBit(c+1366,"inport_wready_o", false,-1);
    tracep->declBit(c+1263,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1766,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1260,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1364,"inport_arready_o", false,-1);
    tracep->declBit(c+1259,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1261,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1766,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1260,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1262,"inport_rlast_o", false,-1);
    tracep->declBit(c+1704,"sdram_clk_o", false,-1);
    tracep->declBit(c+1256,"sdram_cke_o", false,-1);
    tracep->declBit(c+676,"sdram_cs_o", false,-1);
    tracep->declBit(c+677,"sdram_ras_o", false,-1);
    tracep->declBit(c+678,"sdram_cas_o", false,-1);
    tracep->declBit(c+679,"sdram_we_o", false,-1);
    tracep->declBus(c+1258,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1705,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1257,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+712,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+711,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1751,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1839,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1841,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1372,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1373,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1248,"ram_rd_w", false,-1);
    tracep->declBit(c+1265,"ram_accept_w", false,-1);
    tracep->declBus(c+1158,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+713,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1240,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+714,"ram_ack_w", false,-1);
    tracep->declBit(c+1762,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1679,"clk_i", false,-1);
    tracep->declBit(c+1680,"rst_i", false,-1);
    tracep->declBit(c+1151,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1153,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1152,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1154,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1156,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1157,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1158,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1159,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1160,"axi_wlast_i", false,-1);
    tracep->declBit(c+1161,"axi_bready_i", false,-1);
    tracep->declBit(c+1144,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1146,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1145,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1147,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1149,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1150,"axi_rready_i", false,-1);
    tracep->declBit(c+1265,"ram_accept_i", false,-1);
    tracep->declBit(c+714,"ram_ack_i", false,-1);
    tracep->declBit(c+1762,"ram_error_i", false,-1);
    tracep->declBus(c+713,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1365,"axi_awready_o", false,-1);
    tracep->declBit(c+1366,"axi_wready_o", false,-1);
    tracep->declBit(c+1263,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1766,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1260,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1364,"axi_arready_o", false,-1);
    tracep->declBit(c+1259,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1261,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1766,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1260,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1262,"axi_rlast_o", false,-1);
    tracep->declBus(c+1373,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1248,"ram_rd_o", false,-1);
    tracep->declBus(c+1240,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1372,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1158,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+715,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+716,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+717,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+718,"req_rd_q", false,-1);
    tracep->declBit(c+719,"req_wr_q", false,-1);
    tracep->declBus(c+720,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+721,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+722,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+723,"req_prio_q", false,-1);
    tracep->declBit(c+724,"req_hold_rd_q", false,-1);
    tracep->declBit(c+725,"req_hold_wr_q", false,-1);
    tracep->declBit(c+726,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1374,"req_push_w", false,-1);
    tracep->declBus(c+1736,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+727,"req_out_valid_w", false,-1);
    tracep->declBus(c+1266,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1375,"resp_accept_w", false,-1);
    tracep->declBit(c+1737,"resp_is_write_w", false,-1);
    tracep->declBit(c+1738,"resp_is_read_w", false,-1);
    tracep->declBit(c+1262,"resp_is_last_w", false,-1);
    tracep->declBus(c+1260,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+728,"resp_valid_w", false,-1);
    tracep->declBit(c+729,"write_prio_w", false,-1);
    tracep->declBit(c+730,"read_prio_w", false,-1);
    tracep->declBit(c+1249,"write_active_w", false,-1);
    tracep->declBit(c+1248,"read_active_w", false,-1);
    tracep->declBus(c+1372,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1739,"wr_w", false,-1);
    tracep->declBit(c+1248,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1842,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1843,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1841,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1679,"clk_i", false,-1);
    tracep->declBit(c+1680,"rst_i", false,-1);
    tracep->declBus(c+1736,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1374,"push_i", false,-1);
    tracep->declBit(c+1375,"pop_i", false,-1);
    tracep->declBus(c+1266,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+726,"accept_o", false,-1);
    tracep->declBit(c+727,"valid_o", false,-1);
    tracep->declBus(c+1844,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+731+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+735,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+736,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+737,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1828,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1843,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1841,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1679,"clk_i", false,-1);
    tracep->declBit(c+1680,"rst_i", false,-1);
    tracep->declBus(c+713,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+714,"push_i", false,-1);
    tracep->declBit(c+1375,"pop_i", false,-1);
    tracep->declBus(c+1261,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+738,"accept_o", false,-1);
    tracep->declBit(c+728,"valid_o", false,-1);
    tracep->declBus(c+1844,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1267+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1271,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+739,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+740,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1679,"clk_i", false,-1);
    tracep->declBit(c+1680,"rst_i", false,-1);
    tracep->declBus(c+1373,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1248,"inport_rd_i", false,-1);
    tracep->declBus(c+1240,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1372,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1158,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1283,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1265,"inport_accept_o", false,-1);
    tracep->declBit(c+714,"inport_ack_o", false,-1);
    tracep->declBit(c+1762,"inport_error_o", false,-1);
    tracep->declBus(c+713,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1704,"sdram_clk_o", false,-1);
    tracep->declBit(c+1256,"sdram_cke_o", false,-1);
    tracep->declBit(c+676,"sdram_cs_o", false,-1);
    tracep->declBit(c+677,"sdram_ras_o", false,-1);
    tracep->declBit(c+678,"sdram_cas_o", false,-1);
    tracep->declBit(c+679,"sdram_we_o", false,-1);
    tracep->declBus(c+1258,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1705,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1257,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+712,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+711,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1751,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1839,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1841,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1841,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1843,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1843,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1845,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1846,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1847,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1848,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1843,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1849,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1850,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1852,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1853,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1854,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1855,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1856,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1843,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1764,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1855,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1854,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1850,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1852,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1851,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1853,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1849,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1857,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1858,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1859,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1859,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1828,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1859,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1841,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1841,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1842,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1372,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1373,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1248,"ram_rd_w", false,-1);
    tracep->declBit(c+1265,"ram_accept_w", false,-1);
    tracep->declBus(c+1158,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+713,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+714,"ram_ack_w", false,-1);
    tracep->declBit(c+1376,"ram_req_w", false,-1);
    tracep->declBus(c+741,"command_q", false,-1, 3,0);
    tracep->declBus(c+1272,"addr_q", false,-1, 12,0);
    tracep->declBus(c+712,"data_q", false,-1, 31,0);
    tracep->declBit(c+742,"data_rd_en_q", false,-1);
    tracep->declBus(c+1258,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1256,"cke_q", false,-1);
    tracep->declBus(c+1257,"bank_q", false,-1, 1,0);
    tracep->declBus(c+713,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+743,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1283,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+744,"refresh_q", false,-1);
    tracep->declBus(c+745,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+746+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1273,"state_q", false,-1, 3,0);
    tracep->declBus(c+1377,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1378,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+750,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+751,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1379,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1380,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1381,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1843,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+752,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1382,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1860,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1274,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+753,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+754,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+755,"idx", false,-1, 31,0);
    tracep->declBus(c+756,"rd_q", false,-1, 3,0);
    tracep->declBit(c+714,"ack_q", false,-1);
    tracep->declArray(c+1275,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1126,"auto_in_psel", false,-1);
    tracep->declBit(c+1127,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1115,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1108,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+683,"auto_in_pready", false,-1);
    tracep->declBit(c+684,"auto_in_pslverr", false,-1);
    tracep->declBus(c+685,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+675,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1254,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1255,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1701,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1861,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1862,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1767,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1241,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1126,"in_psel", false,-1);
    tracep->declBit(c+1127,"in_penable", false,-1);
    tracep->declBus(c+1108,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+683,"in_pready", false,-1);
    tracep->declBus(c+685,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+684,"in_pslverr", false,-1);
    tracep->declBit(c+675,"spi_sck", false,-1);
    tracep->declBus(c+1254,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1255,"spi_mosi", false,-1);
    tracep->declBit(c+1701,"spi_miso", false,-1);
    tracep->declBit(c+757,"spi_irq_out", false,-1);
    tracep->declBus(c+1863,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1864,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1863,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1865,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1866,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1867,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1764,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1855,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1854,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1850,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1852,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1851,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1853,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1849,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1857,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1858,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1868,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+758,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1250,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+759,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+760,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+761,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+762,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+763,"wb_we_i", false,-1);
    tracep->declBit(c+764,"wb_stb_i", false,-1);
    tracep->declBit(c+765,"wb_cyc_i", false,-1);
    tracep->declBit(c+766,"wb_ack_o", false,-1);
    tracep->declBit(c+1762,"wb_err_o", false,-1);
    tracep->declBit(c+767,"wb_int_o", false,-1);
    tracep->declBit(c+768,"done", false,-1);
    tracep->declBus(c+769,"paddr", false,-1, 31,0);
    tracep->declQuad(c+770,"data", false,-1, 63,0);
    tracep->declBit(c+772,"is_flash_access", false,-1);
    tracep->declBus(c+773,"tmp", false,-1, 31,0);
    tracep->declQuad(c+774,"tmp64", false,-1, 63,0);
    tracep->declBus(c+776,"counter", false,-1, 7,0);
    tracep->declBit(c+777,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1869,"Tp", false,-1, 31,0);
    tracep->declBit(c+1679,"wb_clk_i", false,-1);
    tracep->declBit(c+1680,"wb_rst_i", false,-1);
    tracep->declBus(c+759,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+760,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+761,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+762,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+763,"wb_we_i", false,-1);
    tracep->declBit(c+764,"wb_stb_i", false,-1);
    tracep->declBit(c+765,"wb_cyc_i", false,-1);
    tracep->declBit(c+766,"wb_ack_o", false,-1);
    tracep->declBit(c+1762,"wb_err_o", false,-1);
    tracep->declBit(c+767,"wb_int_o", false,-1);
    tracep->declBus(c+1254,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+675,"sclk_pad_o", false,-1);
    tracep->declBit(c+1255,"mosi_pad_o", false,-1);
    tracep->declBit(c+1701,"miso_pad_i", false,-1);
    tracep->declBus(c+778,"divider", false,-1, 15,0);
    tracep->declBus(c+779,"ctrl", false,-1, 13,0);
    tracep->declBus(c+780,"ss", false,-1, 7,0);
    tracep->declBus(c+781,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+782,"rx", false,-1, 127,0);
    tracep->declBit(c+786,"rx_negedge", false,-1);
    tracep->declBit(c+787,"tx_negedge", false,-1);
    tracep->declBus(c+788,"char_len", false,-1, 6,0);
    tracep->declBit(c+789,"go", false,-1);
    tracep->declBit(c+790,"lsb", false,-1);
    tracep->declBit(c+791,"ie", false,-1);
    tracep->declBit(c+792,"ass", false,-1);
    tracep->declBit(c+793,"spi_divider_sel", false,-1);
    tracep->declBit(c+794,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+795,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+796,"spi_ss_sel", false,-1);
    tracep->declBit(c+797,"tip", false,-1);
    tracep->declBit(c+798,"pos_edge", false,-1);
    tracep->declBit(c+799,"neg_edge", false,-1);
    tracep->declBit(c+800,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1869,"Tp", false,-1, 31,0);
    tracep->declBit(c+1679,"clk_in", false,-1);
    tracep->declBit(c+1680,"rst", false,-1);
    tracep->declBit(c+797,"enable", false,-1);
    tracep->declBit(c+789,"go", false,-1);
    tracep->declBit(c+800,"last_clk", false,-1);
    tracep->declBus(c+778,"divider", false,-1, 15,0);
    tracep->declBit(c+675,"clk_out", false,-1);
    tracep->declBit(c+798,"pos_edge", false,-1);
    tracep->declBit(c+799,"neg_edge", false,-1);
    tracep->declBus(c+801,"cnt", false,-1, 15,0);
    tracep->declBit(c+802,"cnt_zero", false,-1);
    tracep->declBit(c+803,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1869,"Tp", false,-1, 31,0);
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1680,"rst", false,-1);
    tracep->declBus(c+804,"latch", false,-1, 3,0);
    tracep->declBus(c+762,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+788,"len", false,-1, 6,0);
    tracep->declBit(c+790,"lsb", false,-1);
    tracep->declBit(c+789,"go", false,-1);
    tracep->declBit(c+798,"pos_edge", false,-1);
    tracep->declBit(c+799,"neg_edge", false,-1);
    tracep->declBit(c+786,"rx_negedge", false,-1);
    tracep->declBit(c+787,"tx_negedge", false,-1);
    tracep->declBit(c+797,"tip", false,-1);
    tracep->declBit(c+800,"last", false,-1);
    tracep->declBus(c+760,"p_in", false,-1, 31,0);
    tracep->declArray(c+782,"p_out", false,-1, 127,0);
    tracep->declBit(c+675,"s_clk", false,-1);
    tracep->declBit(c+1701,"s_in", false,-1);
    tracep->declBit(c+1255,"s_out", false,-1);
    tracep->declBus(c+805,"cnt", false,-1, 7,0);
    tracep->declArray(c+782,"data", false,-1, 127,0);
    tracep->declBus(c+806,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+807,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+808,"rx_clk", false,-1);
    tracep->declBit(c+809,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1123,"auto_in_psel", false,-1);
    tracep->declBit(c+1124,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1118,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1108,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1125,"auto_in_pready", false,-1);
    tracep->declBit(c+1762,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1710,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1699,"uart_rx", false,-1);
    tracep->declBit(c+1700,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1123,"in_psel", false,-1);
    tracep->declBit(c+1124,"in_penable", false,-1);
    tracep->declBus(c+1108,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1125,"in_pready", false,-1);
    tracep->declBit(c+1762,"in_pslverr", false,-1);
    tracep->declBus(c+1229,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1710,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1699,"uart_rx", false,-1);
    tracep->declBit(c+1700,"uart_tx", false,-1);
    tracep->declBit(c+810,"rtsn", false,-1);
    tracep->declBit(c+1762,"ctsn", false,-1);
    tracep->declBit(c+811,"dtr_pad_o", false,-1);
    tracep->declBit(c+1762,"dsr_pad_i", false,-1);
    tracep->declBit(c+1762,"ri_pad_i", false,-1);
    tracep->declBit(c+1762,"dcd_pad_i", false,-1);
    tracep->declBit(c+812,"interrupt", false,-1);
    tracep->declBit(c+1740,"reg_we", false,-1);
    tracep->declBit(c+1741,"reg_re", false,-1);
    tracep->declBus(c+1242,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1243,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+610,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1251,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+813,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1680,"wb_rst_i", false,-1);
    tracep->declBus(c+1242,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1244,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1251,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1740,"wb_we_i", false,-1);
    tracep->declBit(c+1741,"wb_re_i", false,-1);
    tracep->declBit(c+1700,"stx_pad_o", false,-1);
    tracep->declBit(c+1699,"srx_pad_i", false,-1);
    tracep->declBus(c+1857,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+813,"rts_pad_o", false,-1);
    tracep->declBit(c+811,"dtr_pad_o", false,-1);
    tracep->declBit(c+812,"int_o", false,-1);
    tracep->declBit(c+814,"enable", false,-1);
    tracep->declBit(c+815,"srx_pad", false,-1);
    tracep->declBus(c+816,"ier", false,-1, 3,0);
    tracep->declBus(c+817,"iir", false,-1, 3,0);
    tracep->declBus(c+818,"fcr", false,-1, 1,0);
    tracep->declBus(c+819,"mcr", false,-1, 4,0);
    tracep->declBus(c+820,"lcr", false,-1, 7,0);
    tracep->declBus(c+821,"msr", false,-1, 7,0);
    tracep->declBus(c+822,"dl", false,-1, 15,0);
    tracep->declBus(c+823,"scratch", false,-1, 7,0);
    tracep->declBit(c+824,"start_dlc", false,-1);
    tracep->declBit(c+825,"lsr_mask_d", false,-1);
    tracep->declBit(c+826,"msi_reset", false,-1);
    tracep->declBus(c+827,"dlc", false,-1, 15,0);
    tracep->declBus(c+828,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+829,"rx_reset", false,-1);
    tracep->declBit(c+830,"tx_reset", false,-1);
    tracep->declBit(c+831,"dlab", false,-1);
    tracep->declBit(c+1763,"cts_pad_i", false,-1);
    tracep->declBit(c+1762,"dsr_pad_i", false,-1);
    tracep->declBit(c+1762,"ri_pad_i", false,-1);
    tracep->declBit(c+1762,"dcd_pad_i", false,-1);
    tracep->declBit(c+832,"loopback", false,-1);
    tracep->declBit(c+1762,"cts", false,-1);
    tracep->declBit(c+1763,"dsr", false,-1);
    tracep->declBit(c+1763,"ri", false,-1);
    tracep->declBit(c+1763,"dcd", false,-1);
    tracep->declBit(c+833,"cts_c", false,-1);
    tracep->declBit(c+834,"dsr_c", false,-1);
    tracep->declBit(c+835,"ri_c", false,-1);
    tracep->declBit(c+836,"dcd_c", false,-1);
    tracep->declBus(c+837,"lsr", false,-1, 7,0);
    tracep->declBit(c+838,"lsr0", false,-1);
    tracep->declBit(c+839,"lsr1", false,-1);
    tracep->declBit(c+840,"lsr2", false,-1);
    tracep->declBit(c+841,"lsr3", false,-1);
    tracep->declBit(c+842,"lsr4", false,-1);
    tracep->declBit(c+843,"lsr5", false,-1);
    tracep->declBit(c+844,"lsr6", false,-1);
    tracep->declBit(c+845,"lsr7", false,-1);
    tracep->declBit(c+846,"lsr0r", false,-1);
    tracep->declBit(c+847,"lsr1r", false,-1);
    tracep->declBit(c+848,"lsr2r", false,-1);
    tracep->declBit(c+849,"lsr3r", false,-1);
    tracep->declBit(c+850,"lsr4r", false,-1);
    tracep->declBit(c+851,"lsr5r", false,-1);
    tracep->declBit(c+852,"lsr6r", false,-1);
    tracep->declBit(c+853,"lsr7r", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+854,"rls_int", false,-1);
    tracep->declBit(c+855,"rda_int", false,-1);
    tracep->declBit(c+856,"ti_int", false,-1);
    tracep->declBit(c+857,"thre_int", false,-1);
    tracep->declBit(c+858,"ms_int", false,-1);
    tracep->declBit(c+859,"tf_push", false,-1);
    tracep->declBit(c+860,"rf_pop", false,-1);
    tracep->declBus(c+1742,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+861,"rf_error_bit", false,-1);
    tracep->declBit(c+839,"rf_overrun", false,-1);
    tracep->declBit(c+862,"rf_push_pulse", false,-1);
    tracep->declBus(c+863,"rf_count", false,-1, 4,0);
    tracep->declBus(c+864,"tf_count", false,-1, 4,0);
    tracep->declBus(c+865,"tstate", false,-1, 2,0);
    tracep->declBus(c+866,"rstate", false,-1, 3,0);
    tracep->declBus(c+867,"counter_t", false,-1, 9,0);
    tracep->declBit(c+868,"thre_set_en", false,-1);
    tracep->declBus(c+869,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+870,"block_value", false,-1, 7,0);
    tracep->declBit(c+871,"serial_out", false,-1);
    tracep->declBit(c+872,"serial_in", false,-1);
    tracep->declBit(c+23,"lsr_mask_condition", false,-1);
    tracep->declBit(c+24,"iir_read", false,-1);
    tracep->declBit(c+25,"msr_read", false,-1);
    tracep->declBit(c+26,"fifo_read", false,-1);
    tracep->declBit(c+27,"fifo_write", false,-1);
    tracep->declBus(c+873,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+874,"lsr0_d", false,-1);
    tracep->declBit(c+875,"lsr1_d", false,-1);
    tracep->declBit(c+876,"lsr2_d", false,-1);
    tracep->declBit(c+877,"lsr3_d", false,-1);
    tracep->declBit(c+878,"lsr4_d", false,-1);
    tracep->declBit(c+879,"lsr5_d", false,-1);
    tracep->declBit(c+880,"lsr6_d", false,-1);
    tracep->declBit(c+881,"lsr7_d", false,-1);
    tracep->declBit(c+882,"rls_int_d", false,-1);
    tracep->declBit(c+883,"thre_int_d", false,-1);
    tracep->declBit(c+884,"ms_int_d", false,-1);
    tracep->declBit(c+885,"ti_int_d", false,-1);
    tracep->declBit(c+886,"rda_int_d", false,-1);
    tracep->declBit(c+887,"rls_int_rise", false,-1);
    tracep->declBit(c+888,"thre_int_rise", false,-1);
    tracep->declBit(c+889,"ms_int_rise", false,-1);
    tracep->declBit(c+890,"ti_int_rise", false,-1);
    tracep->declBit(c+891,"rda_int_rise", false,-1);
    tracep->declBit(c+892,"rls_int_pnd", false,-1);
    tracep->declBit(c+893,"rda_int_pnd", false,-1);
    tracep->declBit(c+894,"thre_int_pnd", false,-1);
    tracep->declBit(c+895,"ms_int_pnd", false,-1);
    tracep->declBit(c+896,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1869,"Tp", false,-1, 31,0);
    tracep->declBus(c+1869,"width", false,-1, 31,0);
    tracep->declBus(c+1822,"init_value", false,-1, 0,0);
    tracep->declBit(c+1680,"rst_i", false,-1);
    tracep->declBit(c+1679,"clk_i", false,-1);
    tracep->declBit(c+1762,"stage1_rst_i", false,-1);
    tracep->declBit(c+1763,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1699,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+815,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+897,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1680,"wb_rst_i", false,-1);
    tracep->declBus(c+820,"lcr", false,-1, 7,0);
    tracep->declBit(c+860,"rf_pop", false,-1);
    tracep->declBit(c+872,"srx_pad_i", false,-1);
    tracep->declBit(c+814,"enable", false,-1);
    tracep->declBit(c+829,"rx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBus(c+867,"counter_t", false,-1, 9,0);
    tracep->declBus(c+863,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1742,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+839,"rf_overrun", false,-1);
    tracep->declBit(c+861,"rf_error_bit", false,-1);
    tracep->declBus(c+866,"rstate", false,-1, 3,0);
    tracep->declBit(c+862,"rf_push_pulse", false,-1);
    tracep->declBus(c+898,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+899,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+900,"rshift", false,-1, 7,0);
    tracep->declBit(c+901,"rparity", false,-1);
    tracep->declBit(c+902,"rparity_error", false,-1);
    tracep->declBit(c+903,"rframing_error", false,-1);
    tracep->declBit(c+904,"rbit_in", false,-1);
    tracep->declBit(c+905,"rparity_xor", false,-1);
    tracep->declBus(c+906,"counter_b", false,-1, 7,0);
    tracep->declBit(c+907,"rf_push_q", false,-1);
    tracep->declBus(c+908,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+909,"rf_push", false,-1);
    tracep->declBit(c+910,"break_error", false,-1);
    tracep->declBit(c+911,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+912,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+913,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+914,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1764,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1855,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1854,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1850,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1852,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1851,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1853,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1849,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1857,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1858,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1870,"sr_push", false,-1, 3,0);
    tracep->declBus(c+915,"toc_value", false,-1, 9,0);
    tracep->declBus(c+916,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1871,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1872,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1843,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1835,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1680,"wb_rst_i", false,-1);
    tracep->declBit(c+862,"push", false,-1);
    tracep->declBit(c+860,"pop", false,-1);
    tracep->declBus(c+908,"data_in", false,-1, 10,0);
    tracep->declBit(c+829,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1742,"data_out", false,-1, 10,0);
    tracep->declBit(c+839,"overrun", false,-1);
    tracep->declBus(c+863,"count", false,-1, 4,0);
    tracep->declBit(c+861,"error_bit", false,-1);
    tracep->declBus(c+1743,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+917+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+933,"top", false,-1, 3,0);
    tracep->declBus(c+934,"bottom", false,-1, 3,0);
    tracep->declBus(c+935,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+936,"word0", false,-1, 2,0);
    tracep->declBus(c+937,"word1", false,-1, 2,0);
    tracep->declBus(c+938,"word2", false,-1, 2,0);
    tracep->declBus(c+939,"word3", false,-1, 2,0);
    tracep->declBus(c+940,"word4", false,-1, 2,0);
    tracep->declBus(c+941,"word5", false,-1, 2,0);
    tracep->declBus(c+942,"word6", false,-1, 2,0);
    tracep->declBus(c+943,"word7", false,-1, 2,0);
    tracep->declBus(c+944,"word8", false,-1, 2,0);
    tracep->declBus(c+945,"word9", false,-1, 2,0);
    tracep->declBus(c+946,"word10", false,-1, 2,0);
    tracep->declBus(c+947,"word11", false,-1, 2,0);
    tracep->declBus(c+948,"word12", false,-1, 2,0);
    tracep->declBus(c+949,"word13", false,-1, 2,0);
    tracep->declBus(c+950,"word14", false,-1, 2,0);
    tracep->declBus(c+951,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1843,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1767,"data_width", false,-1, 31,0);
    tracep->declBus(c+1872,"depth", false,-1, 31,0);
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+862,"we", false,-1);
    tracep->declBus(c+933,"a", false,-1, 3,0);
    tracep->declBus(c+934,"dpra", false,-1, 3,0);
    tracep->declBus(c+952,"di", false,-1, 7,0);
    tracep->declBus(c+1743,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+611+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1680,"wb_rst_i", false,-1);
    tracep->declBus(c+820,"lcr", false,-1, 7,0);
    tracep->declBit(c+859,"tf_push", false,-1);
    tracep->declBus(c+1244,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+814,"enable", false,-1);
    tracep->declBit(c+830,"tx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+871,"stx_pad_o", false,-1);
    tracep->declBus(c+865,"tstate", false,-1, 2,0);
    tracep->declBus(c+864,"tf_count", false,-1, 4,0);
    tracep->declBus(c+953,"counter", false,-1, 4,0);
    tracep->declBus(c+954,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+955,"shift_out", false,-1, 6,0);
    tracep->declBit(c+956,"stx_o_tmp", false,-1);
    tracep->declBit(c+957,"parity_xor", false,-1);
    tracep->declBit(c+958,"tf_pop", false,-1);
    tracep->declBit(c+959,"bit_out", false,-1);
    tracep->declBus(c+1244,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1252,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+960,"tf_overrun", false,-1);
    tracep->declBus(c+1756,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1753,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1757,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1758,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1759,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1873,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1767,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1872,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1843,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1835,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+1680,"wb_rst_i", false,-1);
    tracep->declBit(c+859,"push", false,-1);
    tracep->declBit(c+958,"pop", false,-1);
    tracep->declBus(c+1244,"data_in", false,-1, 7,0);
    tracep->declBit(c+830,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1252,"data_out", false,-1, 7,0);
    tracep->declBit(c+960,"overrun", false,-1);
    tracep->declBus(c+864,"count", false,-1, 4,0);
    tracep->declBus(c+961,"top", false,-1, 3,0);
    tracep->declBus(c+962,"bottom", false,-1, 3,0);
    tracep->declBus(c+963,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1843,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1767,"data_width", false,-1, 31,0);
    tracep->declBus(c+1872,"depth", false,-1, 31,0);
    tracep->declBit(c+1679,"clk", false,-1);
    tracep->declBit(c+859,"we", false,-1);
    tracep->declBus(c+961,"a", false,-1, 3,0);
    tracep->declBus(c+962,"dpra", false,-1, 3,0);
    tracep->declBus(c+1244,"di", false,-1, 7,0);
    tracep->declBus(c+1252,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+627+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBit(c+1113,"auto_in_psel", false,-1);
    tracep->declBit(c+1114,"auto_in_penable", false,-1);
    tracep->declBit(c+1109,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1115,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1108,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+680,"auto_in_pready", false,-1);
    tracep->declBit(c+1760,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1761,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1693,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1694,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1695,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1696,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1697,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1698,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1679,"clock", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1241,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1113,"in_psel", false,-1);
    tracep->declBit(c+1114,"in_penable", false,-1);
    tracep->declBus(c+1108,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1109,"in_pwrite", false,-1);
    tracep->declBus(c+1110,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+680,"in_pready", false,-1);
    tracep->declBus(c+1761,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1760,"in_pslverr", false,-1);
    tracep->declBus(c+1693,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1694,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1695,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1696,"vga_hsync", false,-1);
    tracep->declBit(c+1697,"vga_vsync", false,-1);
    tracep->declBit(c+1698,"vga_valid", false,-1);
    tracep->declBus(c+964,"h_addr", false,-1, 9,0);
    tracep->declBus(c+643,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1253,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1245,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+680,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1679,"pclk", false,-1);
    tracep->declBit(c+1680,"reset", false,-1);
    tracep->declBus(c+1253,"vga_data", false,-1, 23,0);
    tracep->declBus(c+964,"h_addr", false,-1, 9,0);
    tracep->declBus(c+643,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1696,"hsync", false,-1);
    tracep->declBit(c+1697,"vsync", false,-1);
    tracep->declBit(c+1698,"valid", false,-1);
    tracep->declBus(c+1693,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1694,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1695,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1874,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1875,"h_active", false,-1, 31,0);
    tracep->declBus(c+1876,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1877,"h_total", false,-1, 31,0);
    tracep->declBus(c+1841,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1878,"v_active", false,-1, 31,0);
    tracep->declBus(c+1879,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1880,"v_total", false,-1, 31,0);
    tracep->declBus(c+965,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+644,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+966,"h_valid", false,-1);
    tracep->declBit(c+645,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+675,"sck", false,-1);
    tracep->declBit(c+1278,"ss", false,-1);
    tracep->declBit(c+1255,"mosi", false,-1);
    tracep->declBit(c+1100,"miso", false,-1);
    tracep->declBus(c+1101,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1102,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1744,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+675,"sck", false,-1);
    tracep->declBit(c+1279,"ss", false,-1);
    tracep->declBit(c+1255,"mosi", false,-1);
    tracep->declBit(c+1745,"miso", false,-1);
    tracep->declBit(c+1279,"reset", false,-1);
    tracep->declBus(c+1094,"state", false,-1, 2,0);
    tracep->declBus(c+1095,"counter", false,-1, 7,0);
    tracep->declBus(c+1096,"cmd", false,-1, 7,0);
    tracep->declBus(c+1097,"addr", false,-1, 23,0);
    tracep->declBus(c+1098,"data", false,-1, 31,0);
    tracep->declBit(c+1099,"ren", false,-1);
    tracep->declBus(c+1746,"rdata", false,-1, 31,0);
    tracep->declBus(c+1747,"raddr", false,-1, 31,0);
    tracep->declBus(c+1103,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+675,"clock", false,-1);
    tracep->declBit(c+1099,"valid", false,-1);
    tracep->declBus(c+1096,"cmd", false,-1, 7,0);
    tracep->declBus(c+1747,"addr", false,-1, 31,0);
    tracep->declBus(c+1746,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1702,"sck", false,-1);
    tracep->declBit(c+1363,"ce_n", false,-1);
    tracep->declBus(c+1703,"dio", false,-1, 3,0);
    tracep->declBus(c+665,"dio_out", false,-1, 3,0);
    tracep->declBus(c+666,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1703,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1815,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1869,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1841,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1844,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1843,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1835,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+667,"state", false,-1, 2,0);
    tracep->declBus(c+1748,"next_state", false,-1, 2,0);
    tracep->declBus(c+668,"counter", false,-1, 7,0);
    tracep->declBus(c+669,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+670,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+671,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+672,"is_read_op", false,-1);
    tracep->declBit(c+673,"is_write_op", false,-1);
    tracep->declBus(c+674,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1749,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1704,"clk", false,-1);
    tracep->declBit(c+1256,"cke", false,-1);
    tracep->declBit(c+676,"cs", false,-1);
    tracep->declBit(c+677,"ras", false,-1);
    tracep->declBit(c+678,"cas", false,-1);
    tracep->declBit(c+679,"we", false,-1);
    tracep->declBus(c+1705,"a", false,-1, 13,0);
    tracep->declBus(c+1257,"ba", false,-1, 1,0);
    tracep->declBus(c+1258,"dqm", false,-1, 3,0);
    tracep->declBus(c+1283,"dq", false,-1, 31,0);
    tracep->declBit(c+967,"cs_0", false,-1);
    tracep->declBit(c+968,"ras_0", false,-1);
    tracep->declBit(c+969,"cas_0", false,-1);
    tracep->declBit(c+970,"we_0", false,-1);
    tracep->declBit(c+971,"cs_1", false,-1);
    tracep->declBit(c+972,"ras_1", false,-1);
    tracep->declBit(c+973,"cas_1", false,-1);
    tracep->declBit(c+974,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1704,"clk", false,-1);
    tracep->declBit(c+1256,"cke", false,-1);
    tracep->declBit(c+971,"cs", false,-1);
    tracep->declBit(c+972,"ras", false,-1);
    tracep->declBit(c+973,"cas", false,-1);
    tracep->declBit(c+974,"we", false,-1);
    tracep->declBus(c+1272,"a", false,-1, 12,0);
    tracep->declBus(c+1257,"ba", false,-1, 1,0);
    tracep->declBus(c+1258,"dqm", false,-1, 3,0);
    tracep->declBus(c+1283,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1704,"clk", false,-1);
    tracep->declBit(c+1256,"cke", false,-1);
    tracep->declBit(c+971,"cs", false,-1);
    tracep->declBit(c+972,"ras", false,-1);
    tracep->declBit(c+973,"cas", false,-1);
    tracep->declBit(c+974,"we", false,-1);
    tracep->declBus(c+1272,"a", false,-1, 12,0);
    tracep->declBus(c+1257,"ba", false,-1, 1,0);
    tracep->declBus(c+1280,"dqm", false,-1, 1,0);
    tracep->declBus(c+1284,"dq", false,-1, 15,0);
    tracep->declBus(c+1854,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1855,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1849,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1881,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1850,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1852,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1034,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1035,"bl", false,-1, 2,0);
    tracep->declBus(c+1383,"command", false,-1, 3,0);
    tracep->declBus(c+1036,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1037,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1281,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1038,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1285,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1039,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1040+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1882,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1044,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1883,"state", false,-1, 2,0);
    tracep->declBit(c+1045,"write_brust", false,-1);
    tracep->declBus(c+1046,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1047,"read_burst", false,-1);
    tracep->declBit(c+1884,"flag", false,-1);
    tracep->declBus(c+1048,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1704,"clk", false,-1);
    tracep->declBit(c+1256,"cke", false,-1);
    tracep->declBit(c+971,"cs", false,-1);
    tracep->declBit(c+972,"ras", false,-1);
    tracep->declBit(c+973,"cas", false,-1);
    tracep->declBit(c+974,"we", false,-1);
    tracep->declBus(c+1272,"a", false,-1, 12,0);
    tracep->declBus(c+1257,"ba", false,-1, 1,0);
    tracep->declBus(c+1282,"dqm", false,-1, 1,0);
    tracep->declBus(c+1286,"dq", false,-1, 15,0);
    tracep->declBus(c+1854,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1855,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1849,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1881,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1850,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1852,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1049,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1050,"bl", false,-1, 2,0);
    tracep->declBus(c+1383,"command", false,-1, 3,0);
    tracep->declBus(c+1051,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1052,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1281,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1053,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1287,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1054,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1055+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1885,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1059,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1886,"state", false,-1, 2,0);
    tracep->declBit(c+1060,"write_brust", false,-1);
    tracep->declBus(c+1061,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1062,"read_burst", false,-1);
    tracep->declBit(c+1887,"flag", false,-1);
    tracep->declBus(c+1063,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1704,"clk", false,-1);
    tracep->declBit(c+1256,"cke", false,-1);
    tracep->declBit(c+967,"cs", false,-1);
    tracep->declBit(c+968,"ras", false,-1);
    tracep->declBit(c+969,"cas", false,-1);
    tracep->declBit(c+970,"we", false,-1);
    tracep->declBus(c+1272,"a", false,-1, 12,0);
    tracep->declBus(c+1257,"ba", false,-1, 1,0);
    tracep->declBus(c+1258,"dqm", false,-1, 3,0);
    tracep->declBus(c+1283,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1704,"clk", false,-1);
    tracep->declBit(c+1256,"cke", false,-1);
    tracep->declBit(c+967,"cs", false,-1);
    tracep->declBit(c+968,"ras", false,-1);
    tracep->declBit(c+969,"cas", false,-1);
    tracep->declBit(c+970,"we", false,-1);
    tracep->declBus(c+1272,"a", false,-1, 12,0);
    tracep->declBus(c+1257,"ba", false,-1, 1,0);
    tracep->declBus(c+1280,"dqm", false,-1, 1,0);
    tracep->declBus(c+1284,"dq", false,-1, 15,0);
    tracep->declBus(c+1854,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1855,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1849,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1881,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1850,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1852,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1064,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1065,"bl", false,-1, 2,0);
    tracep->declBus(c+1384,"command", false,-1, 3,0);
    tracep->declBus(c+1066,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1067,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1281,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1068,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1288,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1069,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1070+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1888,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1074,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1889,"state", false,-1, 2,0);
    tracep->declBit(c+1075,"write_brust", false,-1);
    tracep->declBus(c+1076,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1077,"read_burst", false,-1);
    tracep->declBit(c+1890,"flag", false,-1);
    tracep->declBus(c+1078,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1704,"clk", false,-1);
    tracep->declBit(c+1256,"cke", false,-1);
    tracep->declBit(c+967,"cs", false,-1);
    tracep->declBit(c+968,"ras", false,-1);
    tracep->declBit(c+969,"cas", false,-1);
    tracep->declBit(c+970,"we", false,-1);
    tracep->declBus(c+1272,"a", false,-1, 12,0);
    tracep->declBus(c+1257,"ba", false,-1, 1,0);
    tracep->declBus(c+1282,"dqm", false,-1, 1,0);
    tracep->declBus(c+1286,"dq", false,-1, 15,0);
    tracep->declBus(c+1854,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1855,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1849,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1881,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1850,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1852,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1079,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1080,"bl", false,-1, 2,0);
    tracep->declBus(c+1384,"command", false,-1, 3,0);
    tracep->declBus(c+1081,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1082,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1281,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1083,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1289,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1084,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1085+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1891,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1089,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1892,"state", false,-1, 2,0);
    tracep->declBit(c+1090,"write_brust", false,-1);
    tracep->declBus(c+1091,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1092,"read_burst", false,-1);
    tracep->declBit(c+1893,"flag", false,-1);
    tracep->declBus(c+1093,"dout", false,-1, 15,0);
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
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_state_next),3);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+48,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+57,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+60,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+66,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+71,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+75,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+77,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+78,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+79,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+80,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+81,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+82,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+84,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+85,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+86,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+87,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+88,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+89,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+90,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+91,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+119,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+123,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? (IData)(vlSelf->__VdfgTmp_h7fb30c92__0)
                                : 0U)),4);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullIData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum),32);
    bufp->fullSData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles),16);
    bufp->fullIData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_prdata),32);
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_pslverr));
    bufp->fullIData(oldp+136,(((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum)),32);
    bufp->fullIData(oldp+137,((((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum) 
                               >> 9U)),32);
    bufp->fullIData(oldp+138,(((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles))),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_delay),32);
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+142,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+144,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+145,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+146,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+147,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+148,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+149,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+150,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+151,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+157,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+158,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+159,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+160,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+161,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+162,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullIData(oldp+165,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+172,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+180,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+181,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+182,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+184,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+185,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+186,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+187,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+196,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+209,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullIData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__i),32);
    bufp->fullBit(oldp+256,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+261,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+262,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+263,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+264,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+266,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+268,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+290,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+293,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+361,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+375,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+376,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+437,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+447,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+451,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+455,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+459,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+463,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+467,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+471,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+479,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+483,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+487,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+491,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+495,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+499,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+503,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+507,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+511,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+515,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+519,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+523,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+527,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+535,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+539,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+543,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+547,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+555,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+559,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+563,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+567,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+605,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+643,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+646,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+647,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+649,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+650,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+651,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+652,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+653,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+654,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+655,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+656,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+657,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+658,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+659,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+660,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+661,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+662,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+663,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+664,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+676,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+677,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+678,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+679,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+688,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+689,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+690,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+691,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+692,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+693,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+694,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+695,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+698,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+699,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+702,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+703,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+707,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+711,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+726,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+727,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+728,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+729,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+730,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+738,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+773,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+774,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+786,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+787,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+788,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+789,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+790,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+791,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+792,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+793,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+794,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+796,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+800,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+802,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+803,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+806,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+810,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+811,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+813,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+831,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+832,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+833,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+834,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+835,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+836,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+837,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+840,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+841,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+842,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+861,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+868,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+887,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+888,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+889,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+890,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+891,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+910,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+911,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+912,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+913,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+914,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+916,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+935,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+952,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+963,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+964,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+967,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+968,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+969,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+970,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+971,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+972,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+973,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+974,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_busy));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullIData(oldp+985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu_valid));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_locked));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__current_master));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1009,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd),5);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1022,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1025,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1026,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1027,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1028,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1029,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1030,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1031,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1032,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1033,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1034,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1035,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1049,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1050,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1064,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1065,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1079,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1080,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1099,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1108,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),29);
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1122,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1130,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1133,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize),3);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata),32);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb),4);
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_state),3);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cycle_cnt),32);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[0]),4);
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[1]),4);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[2]),4);
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[3]),4);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[4]),4);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[5]),4);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[6]),4);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[7]),4);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[0]),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[1]),32);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[2]),32);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[3]),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[4]),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[5]),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[6]),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[7]),32);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[0]),2);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[1]),2);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[2]),2);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[3]),2);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[4]),2);
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[5]),2);
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[6]),2);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[7]),2);
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[0]));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[1]));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[2]));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[3]));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[4]));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[5]));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[6]));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[7]));
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_delay_cnt),32);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_recv_cnt),3);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_send_idx),3);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arlen_saved),3);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_done));
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[0]),32);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[1]),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[2]),32);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[3]),32);
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[4]),32);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[5]),32);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[6]),32);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[7]),32);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_state),3);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_cycle_cnt),32);
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_delay_cnt),32);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_buf_bid),4);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_buf_bresp),2);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_aw_done));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_w_done));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_b_done));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1220,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),32);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullIData(oldp+1237,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1239,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullCData(oldp+1240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullIData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1245,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1260,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+1262,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullSData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1278,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1280,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1281,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1282,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1284,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1286,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1309,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu_valid));
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_lsu_valid));
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc_flag));
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1348,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1349,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1351,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullIData(oldp+1353,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd),5);
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd),5);
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemWrite));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1379,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1380,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1381,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1388,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullCData(oldp+1409,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                  : 0U)))),2);
    bufp->fullSData(oldp+1410,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullSData(oldp+1419,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
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
    bufp->fullBit(oldp+1533,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1534,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1535,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1536,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1537,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1538,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1539,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1540,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1541,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1542,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1543,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1544,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1545,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1546,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1547,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1548,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1555,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1558,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullCData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_state_next),3);
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1584,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1585,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1586,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1588,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1589,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1592,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1610,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc),32);
    bufp->fullBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullCData(oldp+1635,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1636,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1647,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1653,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant_next));
    bufp->fullCData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1660,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullBit(oldp+1662,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1663,(((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))))));
    bufp->fullBit(oldp+1664,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1665,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1666,(((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)))));
    bufp->fullBit(oldp+1667,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__flag));
    bufp->fullCData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1671,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1672,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_fetch),32);
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_out),32);
    bufp->fullIData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_buf),32);
    bufp->fullCData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),3);
    bufp->fullBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ctrl_hazard));
    bufp->fullBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ar_inflight));
    bufp->fullBit(oldp+1679,(vlSelf->clock));
    bufp->fullBit(oldp+1680,(vlSelf->reset));
    bufp->fullSData(oldp+1681,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1682,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1683,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1684,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1685,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1686,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1687,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1688,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1689,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1690,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1691,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1692,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1693,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1694,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1695,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1696,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1697,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1698,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1699,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1700,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1701,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1704,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1705,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1706,((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
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
    bufp->fullIData(oldp+1707,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1708,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+1709,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1710,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1712,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullIData(oldp+1713,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1714,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                        ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                             ? (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                        >> 1U))
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U))
                                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                                  : 0U)))),2);
    bufp->fullBit(oldp+1715,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1716,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1720,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullBit(oldp+1722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast)))));
    bufp->fullBit(oldp+1723,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1724,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1725,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1726,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullCData(oldp+1727,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
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
    bufp->fullCData(oldp+1728,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state)))),2);
    bufp->fullBit(oldp+1729,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1730,((0xfU & vlSelf->__VdfgTmp_h9aa666fe__0)),4);
    bufp->fullBit(oldp+1731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1732,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullIData(oldp+1735,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1736,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1737,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1738,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1742,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1745,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1747,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1750,(0x226U),32);
    bufp->fullIData(oldp+1751,(0x64U),32);
    bufp->fullIData(oldp+1752,(0x200U),32);
    bufp->fullCData(oldp+1753,(1U),3);
    bufp->fullIData(oldp+1754,(0xb00U),32);
    bufp->fullIData(oldp+1755,(9U),32);
    bufp->fullCData(oldp+1756,(0U),3);
    bufp->fullCData(oldp+1757,(2U),3);
    bufp->fullCData(oldp+1758,(3U),3);
    bufp->fullCData(oldp+1759,(4U),3);
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1762,(0U));
    bufp->fullBit(oldp+1763,(1U));
    bufp->fullCData(oldp+1764,(0U),4);
    bufp->fullCData(oldp+1765,(0U),8);
    bufp->fullCData(oldp+1766,(0U),2);
    bufp->fullIData(oldp+1767,(8U),32);
    bufp->fullSData(oldp+1768,(1U),16);
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1785,(0U),32);
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1815,(0U),32);
    bufp->fullBit(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1821,(0U));
    bufp->fullBit(oldp+1822,(1U));
    bufp->fullBit(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1826,(1U),2);
    bufp->fullCData(oldp+1827,(2U),2);
    bufp->fullIData(oldp+1828,(0x20U),32);
    bufp->fullIData(oldp+1829,(4U),32);
    bufp->fullIData(oldp+1830,(0x79737978U),32);
    bufp->fullIData(oldp+1831,(0x17e3c19U),32);
    bufp->fullIData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1835,(5U),32);
    bufp->fullCData(oldp+1836,(0x1bU),8);
    bufp->fullCData(oldp+1837,(0xebU),8);
    bufp->fullCData(oldp+1838,(0x38U),8);
    bufp->fullIData(oldp+1839,(0x18U),32);
    bufp->fullIData(oldp+1840,(9U),32);
    bufp->fullIData(oldp+1841,(2U),32);
    bufp->fullIData(oldp+1842,(6U),32);
    bufp->fullIData(oldp+1843,(4U),32);
    bufp->fullIData(oldp+1844,(3U),32);
    bufp->fullIData(oldp+1845,(0xdU),32);
    bufp->fullIData(oldp+1846,(0x2000U),32);
    bufp->fullIData(oldp+1847,(0x2710U),32);
    bufp->fullIData(oldp+1848,(0x30cU),32);
    bufp->fullCData(oldp+1849,(7U),4);
    bufp->fullCData(oldp+1850,(3U),4);
    bufp->fullCData(oldp+1851,(5U),4);
    bufp->fullCData(oldp+1852,(4U),4);
    bufp->fullCData(oldp+1853,(6U),4);
    bufp->fullCData(oldp+1854,(2U),4);
    bufp->fullCData(oldp+1855,(1U),4);
    bufp->fullSData(oldp+1856,(0x20U),13);
    bufp->fullCData(oldp+1857,(8U),4);
    bufp->fullCData(oldp+1858,(9U),4);
    bufp->fullIData(oldp+1859,(0xaU),32);
    bufp->fullIData(oldp+1860,(0x11U),32);
    bufp->fullIData(oldp+1861,(0x30000000U),32);
    bufp->fullIData(oldp+1862,(0x3fffffffU),32);
    bufp->fullCData(oldp+1863,(4U),5);
    bufp->fullCData(oldp+1864,(0U),5);
    bufp->fullCData(oldp+1865,(0x10U),5);
    bufp->fullCData(oldp+1866,(0x14U),5);
    bufp->fullCData(oldp+1867,(0x18U),5);
    bufp->fullIData(oldp+1868,(0x3000000U),32);
    bufp->fullIData(oldp+1869,(1U),32);
    bufp->fullCData(oldp+1870,(0xaU),4);
    bufp->fullIData(oldp+1871,(0xbU),32);
    bufp->fullIData(oldp+1872,(0x10U),32);
    bufp->fullCData(oldp+1873,(5U),3);
    bufp->fullIData(oldp+1874,(0x60U),32);
    bufp->fullIData(oldp+1875,(0x90U),32);
    bufp->fullIData(oldp+1876,(0x310U),32);
    bufp->fullIData(oldp+1877,(0x320U),32);
    bufp->fullIData(oldp+1878,(0x23U),32);
    bufp->fullIData(oldp+1879,(0x203U),32);
    bufp->fullIData(oldp+1880,(0x20dU),32);
    bufp->fullIData(oldp+1881,(0x400000U),32);
    bufp->fullCData(oldp+1882,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1883,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1884,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1885,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1886,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1887,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+1888,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1890,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1891,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1892,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1893,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
