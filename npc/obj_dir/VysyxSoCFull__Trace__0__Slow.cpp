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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1576,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1577,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1578,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1586,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1587,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1588,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1591,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1592,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1593,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1594,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1595,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1576,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1577,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1578,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1586,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1587,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1588,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1591,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1592,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1593,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1594,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1595,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+673,"spi_sck", false,-1);
    tracep->declBus(c+1433,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1434,"spi_mosi", false,-1);
    tracep->declBit(c+1596,"spi_miso", false,-1);
    tracep->declBit(c+1594,"uart_rx", false,-1);
    tracep->declBit(c+1595,"uart_tx", false,-1);
    tracep->declBit(c+1597,"psram_sck", false,-1);
    tracep->declBit(c+1536,"psram_ce_n", false,-1);
    tracep->declBus(c+1598,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1599,"sdram_clk", false,-1);
    tracep->declBit(c+1435,"sdram_cke", false,-1);
    tracep->declBit(c+674,"sdram_cs", false,-1);
    tracep->declBit(c+675,"sdram_ras", false,-1);
    tracep->declBit(c+676,"sdram_cas", false,-1);
    tracep->declBit(c+677,"sdram_we", false,-1);
    tracep->declBus(c+1600,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1436,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1437,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1496,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1576,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1577,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1578,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1586,"ps2_clk", false,-1);
    tracep->declBit(c+1587,"ps2_data", false,-1);
    tracep->declBus(c+1588,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1591,"vga_hsync", false,-1);
    tracep->declBit(c+1592,"vga_vsync", false,-1);
    tracep->declBit(c+1593,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1649,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1650,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1651,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1215,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1216,"in_psel", false,-1);
    tracep->declBit(c+1217,"in_penable", false,-1);
    tracep->declBus(c+1652,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1218,"in_pwrite", false,-1);
    tracep->declBus(c+1219,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1220,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1221,"in_pready", false,-1);
    tracep->declBus(c+1222,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1223,"in_pslverr", false,-1);
    tracep->declBus(c+1224,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1225,"out_psel", false,-1);
    tracep->declBit(c+1226,"out_penable", false,-1);
    tracep->declBus(c+1227,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1228,"out_pwrite", false,-1);
    tracep->declBus(c+1229,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1537,"out_pready", false,-1);
    tracep->declBus(c+1601,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1602,"out_pslverr", false,-1);
    tracep->declBus(c+1653,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1654,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1655,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1652,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1656,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1657,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1231,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1232,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1233,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1234,"state", false,-1, 2,0);
    tracep->declBus(c+1603,"next_state", false,-1, 2,0);
    tracep->declBit(c+1658,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1225,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1226,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1228,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1537,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1602,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1601,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1235,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1236,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1237,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1227,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+678,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1659,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1660,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1238,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1239,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1240,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1661,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+155,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1241,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1242,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1240,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+679,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1661,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+680,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1243,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1244,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1604,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1661,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+156,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1245,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1246,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1240,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1247,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1661,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1605,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1248,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1249,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1237,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1227,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+682,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+683,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1250,"sel_0", false,-1);
    tracep->declBit(c+1251,"sel_1", false,-1);
    tracep->declBit(c+1252,"sel_2", false,-1);
    tracep->declBit(c+1253,"sel_3", false,-1);
    tracep->declBit(c+1254,"sel_4", false,-1);
    tracep->declBit(c+1255,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1256,"auto_in_awready", false,-1);
    tracep->declBit(c+157,"auto_in_awvalid", false,-1);
    tracep->declBus(c+158,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+159,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+161,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1256,"auto_in_wready", false,-1);
    tracep->declBit(c+162,"auto_in_wvalid", false,-1);
    tracep->declBus(c+163,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+164,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+165,"auto_in_bready", false,-1);
    tracep->declBit(c+1257,"auto_in_bvalid", false,-1);
    tracep->declBus(c+166,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1258,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1259,"auto_in_arready", false,-1);
    tracep->declBit(c+167,"auto_in_arvalid", false,-1);
    tracep->declBus(c+168,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+169,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+170,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+171,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+172,"auto_in_rready", false,-1);
    tracep->declBit(c+1260,"auto_in_rvalid", false,-1);
    tracep->declBus(c+173,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1258,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1216,"auto_out_psel", false,-1);
    tracep->declBit(c+1217,"auto_out_penable", false,-1);
    tracep->declBit(c+1218,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1215,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1219,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1221,"auto_out_pready", false,-1);
    tracep->declBit(c+1223,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1222,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1217,"nodeOut_penable", false,-1);
    tracep->declBus(c+1261,"state", false,-1, 1,0);
    tracep->declBit(c+1259,"accept_read", false,-1);
    tracep->declBit(c+1256,"accept_write", false,-1);
    tracep->declBit(c+174,"is_write_r", false,-1);
    tracep->declBit(c+1218,"is_write", false,-1);
    tracep->declBus(c+173,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+166,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+175,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+176,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+177,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+178,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1262,"resp", false,-1, 1,0);
    tracep->declBus(c+179,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1258,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1260,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+180,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1257,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+181,"auto_in_awready", false,-1);
    tracep->declBit(c+1451,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1452,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1453,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_in_wready", false,-1);
    tracep->declBit(c+1454,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1455,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1456,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"auto_in_wlast", false,-1);
    tracep->declBit(c+646,"auto_in_bready", false,-1);
    tracep->declBit(c+185,"auto_in_bvalid", false,-1);
    tracep->declBus(c+186,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_in_arready", false,-1);
    tracep->declBit(c+30,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+189,"auto_in_rvalid", false,-1);
    tracep->declBus(c+190,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+191,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+192,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+193,"auto_in_rlast", false,-1);
    tracep->declBit(c+1256,"auto_out_awready", false,-1);
    tracep->declBit(c+157,"auto_out_awvalid", false,-1);
    tracep->declBus(c+158,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+159,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+161,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1256,"auto_out_wready", false,-1);
    tracep->declBit(c+162,"auto_out_wvalid", false,-1);
    tracep->declBus(c+163,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+164,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+165,"auto_out_bready", false,-1);
    tracep->declBit(c+1257,"auto_out_bvalid", false,-1);
    tracep->declBus(c+166,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1258,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1259,"auto_out_arready", false,-1);
    tracep->declBit(c+167,"auto_out_arvalid", false,-1);
    tracep->declBus(c+168,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+169,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+170,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+171,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+172,"auto_out_rready", false,-1);
    tracep->declBit(c+1260,"auto_out_rvalid", false,-1);
    tracep->declBus(c+173,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1258,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+165,"io_enq_ready", false,-1);
    tracep->declBit(c+1257,"io_enq_valid", false,-1);
    tracep->declBus(c+166,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1258,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+646,"io_deq_ready", false,-1);
    tracep->declBit(c+185,"io_deq_valid", false,-1);
    tracep->declBus(c+186,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+187,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+194,"wrap", false,-1);
    tracep->declBit(c+195,"wrap_1", false,-1);
    tracep->declBit(c+196,"maybe_full", false,-1);
    tracep->declBit(c+197,"ptr_match", false,-1);
    tracep->declBit(c+198,"empty", false,-1);
    tracep->declBit(c+199,"full", false,-1);
    tracep->declBit(c+1263,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+195,"R0_addr", false,-1);
    tracep->declBit(c+1662,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declBus(c+200,"R0_data", false,-1, 5,0);
    tracep->declBit(c+194,"W0_addr", false,-1);
    tracep->declBit(c+1263,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declBus(c+1607,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+201+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+203,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+1260,"io_enq_valid", false,-1);
    tracep->declBus(c+173,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1606,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1258,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+189,"io_deq_valid", false,-1);
    tracep->declBus(c+190,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+191,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+192,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+193,"io_deq_bits_last", false,-1);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1264,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1662,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declQuad(c+210,"R0_data", false,-1, 38,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1264,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declQuad(c+1608,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+212+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+216,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+30,"io_enq_valid", false,-1);
    tracep->declBus(c+31,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+32,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+33,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+34,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1259,"io_deq_ready", false,-1);
    tracep->declBit(c+167,"io_deq_valid", false,-1);
    tracep->declBus(c+168,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+169,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+170,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+171,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+217,"wrap", false,-1);
    tracep->declBit(c+218,"wrap_1", false,-1);
    tracep->declBit(c+219,"maybe_full", false,-1);
    tracep->declBit(c+220,"ptr_match", false,-1);
    tracep->declBit(c+221,"empty", false,-1);
    tracep->declBit(c+222,"full", false,-1);
    tracep->declBit(c+35,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+218,"R0_addr", false,-1);
    tracep->declBit(c+1662,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declQuad(c+223,"R0_data", false,-1, 46,0);
    tracep->declBit(c+217,"W0_addr", false,-1);
    tracep->declBit(c+35,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declQuad(c+36,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+225+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+229,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+181,"io_enq_ready", false,-1);
    tracep->declBit(c+1451,"io_enq_valid", false,-1);
    tracep->declBus(c+182,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1452,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1453,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+183,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1256,"io_deq_ready", false,-1);
    tracep->declBit(c+157,"io_deq_valid", false,-1);
    tracep->declBus(c+158,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+159,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+160,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+161,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+230,"wrap", false,-1);
    tracep->declBit(c+231,"wrap_1", false,-1);
    tracep->declBit(c+232,"maybe_full", false,-1);
    tracep->declBit(c+233,"ptr_match", false,-1);
    tracep->declBit(c+234,"empty", false,-1);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+1458,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+231,"R0_addr", false,-1);
    tracep->declBit(c+1662,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declQuad(c+236,"R0_data", false,-1, 46,0);
    tracep->declBit(c+230,"W0_addr", false,-1);
    tracep->declBit(c+1458,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declQuad(c+1610,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+238+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1454,"io_enq_valid", false,-1);
    tracep->declBus(c+1455,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1456,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1457,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1256,"io_deq_ready", false,-1);
    tracep->declBit(c+162,"io_deq_valid", false,-1);
    tracep->declBus(c+163,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+164,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+243,"wrap", false,-1);
    tracep->declBit(c+244,"wrap_1", false,-1);
    tracep->declBit(c+245,"maybe_full", false,-1);
    tracep->declBit(c+246,"ptr_match", false,-1);
    tracep->declBit(c+247,"empty", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+1459,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+244,"R0_addr", false,-1);
    tracep->declBit(c+1662,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declQuad(c+249,"R0_data", false,-1, 35,0);
    tracep->declBit(c+243,"W0_addr", false,-1);
    tracep->declBit(c+1459,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declQuad(c+1460,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+251+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+255,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1649,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1650,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1651,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+104,"in_arready", false,-1);
    tracep->declBit(c+38,"in_arvalid", false,-1);
    tracep->declBus(c+39,"in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1612,"in_rready", false,-1);
    tracep->declBit(c+684,"in_rvalid", false,-1);
    tracep->declBus(c+685,"in_rid", false,-1, 3,0);
    tracep->declBus(c+686,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1663,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+687,"in_rlast", false,-1);
    tracep->declBit(c+105,"in_awready", false,-1);
    tracep->declBit(c+1462,"in_awvalid", false,-1);
    tracep->declBus(c+1664,"in_awid", false,-1, 3,0);
    tracep->declBus(c+978,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1665,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+106,"in_wready", false,-1);
    tracep->declBit(c+1463,"in_wvalid", false,-1);
    tracep->declBus(c+980,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"in_wlast", false,-1);
    tracep->declBit(c+1613,"in_bready", false,-1);
    tracep->declBit(c+688,"in_bvalid", false,-1);
    tracep->declBus(c+685,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1663,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+104,"out_arready", false,-1);
    tracep->declBit(c+38,"out_arvalid", false,-1);
    tracep->declBus(c+39,"out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1612,"out_rready", false,-1);
    tracep->declBit(c+684,"out_rvalid", false,-1);
    tracep->declBus(c+685,"out_rid", false,-1, 3,0);
    tracep->declBus(c+686,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1663,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+687,"out_rlast", false,-1);
    tracep->declBit(c+105,"out_awready", false,-1);
    tracep->declBit(c+1462,"out_awvalid", false,-1);
    tracep->declBus(c+1664,"out_awid", false,-1, 3,0);
    tracep->declBus(c+978,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1665,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+106,"out_wready", false,-1);
    tracep->declBit(c+1463,"out_wvalid", false,-1);
    tracep->declBus(c+980,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"out_wlast", false,-1);
    tracep->declBit(c+1613,"out_bready", false,-1);
    tracep->declBit(c+688,"out_bvalid", false,-1);
    tracep->declBus(c+685,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1663,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1653,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1654,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1655,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1652,"RD_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1656,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1657,"RD_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1666,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1667,"WT_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1668,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1669,"WT_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1670,"request_counter_rd", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1671+i*1,"wait_counter_rd", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1679+i*1,"rid", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1687+i*1,"rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1695+i*1,"rresp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1703+i*1,"rlast", true,(i+0));
    }
    tracep->declBus(c+1711,"arlen", false,-1, 7,0);
    tracep->declBus(c+1712,"arsize", false,-1, 2,0);
    tracep->declBus(c+1713,"arburst", false,-1, 1,0);
    tracep->declBus(c+1714,"r_counter", false,-1, 2,0);
    tracep->declBus(c+1715,"rlen", false,-1, 2,0);
    tracep->declBus(c+1716,"state_rd", false,-1, 2,0);
    tracep->declBus(c+1717,"next_state_rd", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+256,"auto_in_awready", false,-1);
    tracep->declBit(c+1464,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1664,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1665,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+257,"auto_in_wready", false,-1);
    tracep->declBit(c+1465,"auto_in_wvalid", false,-1);
    tracep->declBus(c+980,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"auto_in_wlast", false,-1);
    tracep->declBit(c+1614,"auto_in_bready", false,-1);
    tracep->declBit(c+1265,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1266,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1267,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+258,"auto_in_arready", false,-1);
    tracep->declBit(c+44,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+107,"auto_in_rready", false,-1);
    tracep->declBit(c+259,"auto_in_rvalid", false,-1);
    tracep->declBus(c+260,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+263,"auto_in_rlast", false,-1);
    tracep->declBit(c+1557,"auto_out_awready", false,-1);
    tracep->declBit(c+1466,"auto_out_awvalid", false,-1);
    tracep->declBus(c+182,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1452,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1453,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+264,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1558,"auto_out_wready", false,-1);
    tracep->declBit(c+1467,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1455,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1456,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"auto_out_wlast", false,-1);
    tracep->declBit(c+1559,"auto_out_bready", false,-1);
    tracep->declBit(c+265,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1266,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1268,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1269,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+108,"auto_out_arready", false,-1);
    tracep->declBit(c+45,"auto_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+107,"auto_out_rready", false,-1);
    tracep->declBit(c+259,"auto_out_rvalid", false,-1);
    tracep->declBus(c+260,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+266,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+267,"auto_out_rlast", false,-1);
    tracep->declBit(c+1467,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+268,"w_idle", false,-1);
    tracep->declBit(c+1560,"in_awready", false,-1);
    tracep->declBit(c+269,"busy", false,-1);
    tracep->declBus(c+270,"r_addr", false,-1, 31,0);
    tracep->declBus(c+271,"r_len", false,-1, 7,0);
    tracep->declBus(c+47,"len", false,-1, 7,0);
    tracep->declBus(c+48,"addr", false,-1, 31,0);
    tracep->declBit(c+272,"busy_1", false,-1);
    tracep->declBus(c+273,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+274,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+275,"len_1", false,-1, 7,0);
    tracep->declBus(c+1468,"addr_1", false,-1, 31,0);
    tracep->declBit(c+276,"wbeats_latched", false,-1);
    tracep->declBit(c+1466,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1469,"wbeats_valid", false,-1);
    tracep->declBus(c+277,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1470,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1457,"w_last", false,-1);
    tracep->declBit(c+1559,"nodeOut_bready", false,-1);
    tracep->declBus(c+1270,"error_0", false,-1, 1,0);
    tracep->declBus(c+1271,"error_1", false,-1, 1,0);
    tracep->declBus(c+1272,"error_2", false,-1, 1,0);
    tracep->declBus(c+1273,"error_3", false,-1, 1,0);
    tracep->declBus(c+1274,"error_4", false,-1, 1,0);
    tracep->declBus(c+1275,"error_5", false,-1, 1,0);
    tracep->declBus(c+1276,"error_6", false,-1, 1,0);
    tracep->declBus(c+1277,"error_7", false,-1, 1,0);
    tracep->declBus(c+1278,"error_8", false,-1, 1,0);
    tracep->declBus(c+1279,"error_9", false,-1, 1,0);
    tracep->declBus(c+1280,"error_10", false,-1, 1,0);
    tracep->declBus(c+1281,"error_11", false,-1, 1,0);
    tracep->declBus(c+1282,"error_12", false,-1, 1,0);
    tracep->declBus(c+1283,"error_13", false,-1, 1,0);
    tracep->declBus(c+1284,"error_14", false,-1, 1,0);
    tracep->declBus(c+1285,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+44,"io_enq_valid", false,-1);
    tracep->declBus(c+39,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+40,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+41,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+42,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+43,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+109,"io_deq_ready", false,-1);
    tracep->declBit(c+45,"io_deq_valid", false,-1);
    tracep->declBus(c+31,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+49,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+50,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+33,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+34,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+278,"ram", false,-1, 48,0);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+45,"io_deq_valid_0", false,-1);
    tracep->declBit(c+110,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+1464,"io_enq_valid", false,-1);
    tracep->declBus(c+1664,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+978,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1665,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+979,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1663,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1561,"io_deq_ready", false,-1);
    tracep->declBit(c+1471,"io_deq_valid", false,-1);
    tracep->declBus(c+182,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1472,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+281,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1453,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+183,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+282,"ram", false,-1, 48,0);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+1471,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1562,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1465,"io_enq_valid", false,-1);
    tracep->declBus(c+980,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+981,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+982,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1563,"io_deq_ready", false,-1);
    tracep->declBit(c+1473,"io_deq_valid", false,-1);
    tracep->declBus(c+1455,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1456,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1615,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+285,"ram", false,-1, 36,0);
    tracep->declBit(c+287,"full", false,-1);
    tracep->declBit(c+1473,"io_deq_valid_0", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1565,"auto_in_awready", false,-1);
    tracep->declBit(c+1474,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1475,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1616,"auto_in_wready", false,-1);
    tracep->declBit(c+1476,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1455,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1456,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1566,"auto_in_bready", false,-1);
    tracep->declBit(c+288,"auto_in_bvalid", false,-1);
    tracep->declBus(c+289,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+111,"auto_in_arready", false,-1);
    tracep->declBit(c+51,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+52,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+112,"auto_in_rready", false,-1);
    tracep->declBit(c+291,"auto_in_rvalid", false,-1);
    tracep->declBus(c+292,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+293,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+294,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+111,"nodeIn_arready", false,-1);
    tracep->declBit(c+1565,"nodeIn_awready", false,-1);
    tracep->declBit(c+1477,"w_sel0", false,-1);
    tracep->declBit(c+288,"w_full", false,-1);
    tracep->declBus(c+289,"w_id", false,-1, 3,0);
    tracep->declBit(c+295,"r_sel1", false,-1);
    tracep->declBit(c+296,"w_sel1", false,-1);
    tracep->declBit(c+291,"r_full", false,-1);
    tracep->declBus(c+292,"r_id", false,-1, 3,0);
    tracep->declBit(c+113,"ren", false,-1);
    tracep->declBit(c+297,"rdata_REG", false,-1);
    tracep->declBus(c+298,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+299,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+300,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+301,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+53,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+113,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declBus(c+302,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1478,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1567,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declBus(c+1455,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1456,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+114,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+983,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1664,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1665,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+80,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+984,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+980,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+985,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1538,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1539,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1617,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+115,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1201,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1202,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1619,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1203,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+105,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1462,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1664,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1665,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+106,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1463,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+980,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1613,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+688,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+685,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+38,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1612,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+684,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+685,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+686,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1663,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+687,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+256,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1464,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1664,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1665,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+257,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1465,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+980,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1614,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1265,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1266,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1267,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+258,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+107,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+259,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+260,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+263,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1538,"in_0_bvalid", false,-1);
    tracep->declBit(c+1201,"in_0_rvalid", false,-1);
    tracep->declBit(c+116,"in_0_wready", false,-1);
    tracep->declBit(c+117,"in_0_awready", false,-1);
    tracep->declBit(c+1620,"in_0_arready", false,-1);
    tracep->declBit(c+114,"anonIn_awready", false,-1);
    tracep->declBit(c+115,"anonIn_arready", false,-1);
    tracep->declBit(c+56,"requestARIO_0_0", false,-1);
    tracep->declBit(c+57,"requestARIO_0_1", false,-1);
    tracep->declBit(c+986,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+987,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+58,"arSel", false,-1, 15,0);
    tracep->declBus(c+1718,"awSel", false,-1, 15,0);
    tracep->declBus(c+1204,"rSel", false,-1, 15,0);
    tracep->declBus(c+1540,"bSel", false,-1, 15,0);
    tracep->declBus(c+303,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+304,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+305,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+306,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+307,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+308,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+309,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1719,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+310,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+311,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+312,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1720,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+313,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+314,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+315,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1721,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+316,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+317,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+318,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1722,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+319,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+320,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+321,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1723,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+322,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+323,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+324,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1724,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+325,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+326,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+327,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1725,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+328,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+329,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+330,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1726,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+331,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+332,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+333,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1727,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+334,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+335,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+336,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1728,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+337,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+338,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+339,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1729,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+340,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+341,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+342,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1730,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+343,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+344,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+345,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1731,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+346,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+347,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+348,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1732,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+349,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+350,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1733,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+59,"in_0_arvalid", false,-1);
    tracep->declBit(c+352,"latched", false,-1);
    tracep->declBit(c+1479,"in_0_awvalid", false,-1);
    tracep->declBit(c+1480,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1481,"in_0_wvalid", false,-1);
    tracep->declBit(c+353,"idle_2", false,-1);
    tracep->declBit(c+1205,"anyValid", false,-1);
    tracep->declBus(c+1206,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+354,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1207,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1208,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1209,"prefixOR_1", false,-1);
    tracep->declBit(c+1210,"winner_2_1", false,-1);
    tracep->declBit(c+355,"state_2_0", false,-1);
    tracep->declBit(c+356,"state_2_1", false,-1);
    tracep->declBit(c+1211,"muxState_2_0", false,-1);
    tracep->declBit(c+1212,"muxState_2_1", false,-1);
    tracep->declBit(c+357,"idle_3", false,-1);
    tracep->declBit(c+1541,"anyValid_1", false,-1);
    tracep->declBus(c+1542,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+358,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1543,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1544,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1545,"winner_3_0", false,-1);
    tracep->declBit(c+1546,"winner_3_1", false,-1);
    tracep->declBit(c+359,"state_3_0", false,-1);
    tracep->declBit(c+360,"state_3_1", false,-1);
    tracep->declBit(c+1547,"muxState_3_0", false,-1);
    tracep->declBit(c+1621,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+361,"io_enq_ready", false,-1);
    tracep->declBit(c+1480,"io_enq_valid", false,-1);
    tracep->declBus(c+988,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+118,"io_deq_ready", false,-1);
    tracep->declBit(c+1482,"io_deq_valid", false,-1);
    tracep->declBus(c+1483,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+362,"wrap", false,-1);
    tracep->declBit(c+363,"wrap_1", false,-1);
    tracep->declBit(c+364,"maybe_full", false,-1);
    tracep->declBit(c+365,"ptr_match", false,-1);
    tracep->declBit(c+366,"empty", false,-1);
    tracep->declBit(c+367,"full", false,-1);
    tracep->declBit(c+1482,"io_deq_valid_0", false,-1);
    tracep->declBit(c+119,"do_deq", false,-1);
    tracep->declBit(c+120,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+363,"R0_addr", false,-1);
    tracep->declBit(c+1662,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declBus(c+368,"R0_data", false,-1, 1,0);
    tracep->declBit(c+362,"W0_addr", false,-1);
    tracep->declBit(c+120,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declBus(c+988,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1568,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1484,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1452,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1453,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1558,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1467,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1455,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1456,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1559,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+265,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1266,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1268,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+121,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+107,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+259,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+260,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1565,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1474,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1475,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1616,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1476,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1455,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1456,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1566,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+288,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+111,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+51,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+52,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+112,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+291,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+292,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+293,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+294,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1485,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1486,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+371,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+61,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+372,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+373,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+181,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1451,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1452,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1453,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1454,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1455,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1456,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+646,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+185,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+186,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+189,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+190,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+191,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+192,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+193,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+265,"in_0_bvalid", false,-1);
    tracep->declBit(c+259,"in_0_rvalid", false,-1);
    tracep->declBit(c+1569,"in_0_wready", false,-1);
    tracep->declBit(c+1570,"in_0_awready", false,-1);
    tracep->declBit(c+121,"in_0_arready", false,-1);
    tracep->declBit(c+1568,"anonIn_awready", false,-1);
    tracep->declBit(c+63,"requestARIO_0_0", false,-1);
    tracep->declBit(c+64,"requestARIO_0_1", false,-1);
    tracep->declBit(c+65,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1487,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1488,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1489,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+66,"arSel", false,-1, 15,0);
    tracep->declBus(c+375,"awSel", false,-1, 15,0);
    tracep->declBus(c+376,"rSel", false,-1, 15,0);
    tracep->declBus(c+1286,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1490,"in_0_awvalid", false,-1);
    tracep->declBit(c+1491,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1492,"in_0_wvalid", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+437,"io_enq_ready", false,-1);
    tracep->declBit(c+1491,"io_enq_valid", false,-1);
    tracep->declBus(c+1493,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1571,"io_deq_ready", false,-1);
    tracep->declBit(c+1494,"io_deq_valid", false,-1);
    tracep->declBus(c+1495,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+438,"wrap", false,-1);
    tracep->declBit(c+439,"wrap_1", false,-1);
    tracep->declBit(c+440,"maybe_full", false,-1);
    tracep->declBit(c+441,"ptr_match", false,-1);
    tracep->declBit(c+442,"empty", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->declBit(c+1494,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1572,"do_deq", false,-1);
    tracep->declBit(c+1573,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+439,"R0_addr", false,-1);
    tracep->declBit(c+1662,"R0_en", false,-1);
    tracep->declBit(c+1574,"R0_clk", false,-1);
    tracep->declBus(c+444,"R0_data", false,-1, 2,0);
    tracep->declBit(c+438,"W0_addr", false,-1);
    tracep->declBit(c+1573,"W0_en", false,-1);
    tracep->declBit(c+1574,"W0_clk", false,-1);
    tracep->declBus(c+1493,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1557,"auto_in_awready", false,-1);
    tracep->declBit(c+1466,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1452,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1453,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+264,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1558,"auto_in_wready", false,-1);
    tracep->declBit(c+1467,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1455,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1456,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"auto_in_wlast", false,-1);
    tracep->declBit(c+1559,"auto_in_bready", false,-1);
    tracep->declBit(c+265,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1266,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1268,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1269,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+108,"auto_in_arready", false,-1);
    tracep->declBit(c+45,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+107,"auto_in_rready", false,-1);
    tracep->declBit(c+259,"auto_in_rvalid", false,-1);
    tracep->declBus(c+260,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+266,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+267,"auto_in_rlast", false,-1);
    tracep->declBit(c+1568,"auto_out_awready", false,-1);
    tracep->declBit(c+1484,"auto_out_awvalid", false,-1);
    tracep->declBus(c+182,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1452,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1453,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1558,"auto_out_wready", false,-1);
    tracep->declBit(c+1467,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1455,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1456,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"auto_out_wlast", false,-1);
    tracep->declBit(c+1559,"auto_out_bready", false,-1);
    tracep->declBit(c+265,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1266,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1268,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+121,"auto_out_arready", false,-1);
    tracep->declBit(c+60,"auto_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+34,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+107,"auto_out_rready", false,-1);
    tracep->declBit(c+259,"auto_out_rvalid", false,-1);
    tracep->declBus(c+260,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+447,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+451,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+455,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+459,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+463,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+467,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+471,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+475,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+479,"io_enq_ready", false,-1);
    tracep->declBit(c+647,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1417,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+483,"io_enq_ready", false,-1);
    tracep->declBit(c+648,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1418,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+487,"io_enq_ready", false,-1);
    tracep->declBit(c+649,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1419,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+491,"io_enq_ready", false,-1);
    tracep->declBit(c+650,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1420,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+495,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+499,"io_enq_ready", false,-1);
    tracep->declBit(c+651,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1421,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+503,"io_enq_ready", false,-1);
    tracep->declBit(c+652,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1422,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+507,"io_enq_ready", false,-1);
    tracep->declBit(c+653,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1423,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+511,"io_enq_ready", false,-1);
    tracep->declBit(c+654,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1424,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+515,"io_enq_ready", false,-1);
    tracep->declBit(c+655,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1425,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+519,"io_enq_ready", false,-1);
    tracep->declBit(c+656,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1426,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+523,"io_enq_ready", false,-1);
    tracep->declBit(c+657,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1427,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+527,"io_enq_ready", false,-1);
    tracep->declBit(c+658,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1428,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+531,"io_enq_ready", false,-1);
    tracep->declBit(c+659,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1429,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+535,"io_enq_ready", false,-1);
    tracep->declBit(c+660,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1430,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+539,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+543,"io_enq_ready", false,-1);
    tracep->declBit(c+661,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1431,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+547,"io_enq_ready", false,-1);
    tracep->declBit(c+662,"io_enq_valid", false,-1);
    tracep->declBit(c+264,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1432,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+551,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+555,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+559,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+563,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+567,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+571,"io_enq_ready", false,-1);
    tracep->declBit(c+96,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1622,"reset", false,-1);
    tracep->declBit(c+114,"auto_master_out_awready", false,-1);
    tracep->declBit(c+983,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1664,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1665,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+80,"auto_master_out_wready", false,-1);
    tracep->declBit(c+984,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+980,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+985,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1538,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1539,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1617,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+115,"auto_master_out_arready", false,-1);
    tracep->declBit(c+54,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+39,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1201,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1202,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1619,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1203,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1622,"reset", false,-1);
    tracep->declBit(c+1661,"io_interrupt", false,-1);
    tracep->declBit(c+114,"io_master_awready", false,-1);
    tracep->declBit(c+983,"io_master_awvalid", false,-1);
    tracep->declBus(c+978,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1665,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+80,"io_master_wready", false,-1);
    tracep->declBit(c+984,"io_master_wvalid", false,-1);
    tracep->declBus(c+980,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"io_master_wlast", false,-1);
    tracep->declBit(c+985,"io_master_bready", false,-1);
    tracep->declBit(c+1538,"io_master_bvalid", false,-1);
    tracep->declBus(c+1617,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1539,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+115,"io_master_arready", false,-1);
    tracep->declBit(c+54,"io_master_arvalid", false,-1);
    tracep->declBus(c+40,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+41,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+55,"io_master_rready", false,-1);
    tracep->declBit(c+1201,"io_master_rvalid", false,-1);
    tracep->declBus(c+1619,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1618,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1203,"io_master_rlast", false,-1);
    tracep->declBus(c+1202,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1734,"io_slave_awready", false,-1);
    tracep->declBit(c+1661,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1735,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1665,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1655,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1736,"io_slave_wready", false,-1);
    tracep->declBit(c+1661,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1735,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1664,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1661,"io_slave_wlast", false,-1);
    tracep->declBit(c+1661,"io_slave_bready", false,-1);
    tracep->declBit(c+1737,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1738,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1739,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1740,"io_slave_arready", false,-1);
    tracep->declBit(c+1661,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1735,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1664,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1665,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1663,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1661,"io_slave_rready", false,-1);
    tracep->declBit(c+1741,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1742,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1743,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1744,"io_slave_rlast", false,-1);
    tracep->declBus(c+1745,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBit(c+989,"reset_ifu", false,-1);
    tracep->declBus(c+990,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+991,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+992,"npc", false,-1, 31,0);
    tracep->declBit(c+1746,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1747,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+990,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+991,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+993,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+994,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+995,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1664,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1665,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1656,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1663,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+996,"ifu_arvalid", false,-1);
    tracep->declBit(c+997,"ifu_arready", false,-1);
    tracep->declBus(c+122,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+123,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"ifu_rlast", false,-1);
    tracep->declBus(c+125,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+126,"ifu_rvalid", false,-1);
    tracep->declBit(c+998,"ifu_rready", false,-1);
    tracep->declBit(c+999,"bus_busy", false,-1);
    tracep->declBit(c+1748,"useless1", false,-1);
    tracep->declBit(c+1749,"useless2", false,-1);
    tracep->declBit(c+1750,"useless3", false,-1);
    tracep->declBit(c+1751,"useless4", false,-1);
    tracep->declBit(c+1000,"fencei", false,-1);
    tracep->declBus(c+1001,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1664,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1665,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1002,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1663,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1003,"lsu_arvalid", false,-1);
    tracep->declBit(c+1004,"lsu_arready", false,-1);
    tracep->declBus(c+127,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+128,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+129,"lsu_rlast", false,-1);
    tracep->declBus(c+130,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+131,"lsu_rvalid", false,-1);
    tracep->declBit(c+1005,"lsu_rready", false,-1);
    tracep->declBus(c+978,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1665,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+983,"lsu_awvalid", false,-1);
    tracep->declBit(c+114,"lsu_awready", false,-1);
    tracep->declBus(c+980,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"lsu_wlast", false,-1);
    tracep->declBit(c+984,"lsu_wvalid", false,-1);
    tracep->declBit(c+80,"lsu_wready", false,-1);
    tracep->declBus(c+1617,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1539,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1538,"lsu_bvalid", false,-1);
    tracep->declBit(c+985,"lsu_bready", false,-1);
    tracep->declBus(c+1006,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1664,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1665,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1007,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1663,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1008,"axi_arvalid", false,-1);
    tracep->declBit(c+132,"axi_arready", false,-1);
    tracep->declBus(c+133,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+134,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+135,"axi_rlast", false,-1);
    tracep->declBus(c+136,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+137,"axi_rvalid", false,-1);
    tracep->declBit(c+1009,"axi_rready", false,-1);
    tracep->declBus(c+978,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1665,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+983,"axi_awvalid", false,-1);
    tracep->declBit(c+114,"axi_awready", false,-1);
    tracep->declBus(c+980,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"axi_wlast", false,-1);
    tracep->declBit(c+984,"axi_wvalid", false,-1);
    tracep->declBit(c+80,"axi_wready", false,-1);
    tracep->declBus(c+1617,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1539,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1538,"axi_bvalid", false,-1);
    tracep->declBit(c+985,"axi_bready", false,-1);
    tracep->declBus(c+67,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+68,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+69,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+70,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+71,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+72,"clint_arvalid", false,-1);
    tracep->declBit(c+1010,"clint_arready", false,-1);
    tracep->declBus(c+1011,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1012,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1013,"clint_rlast", false,-1);
    tracep->declBus(c+1664,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1014,"clint_rvalid", false,-1);
    tracep->declBit(c+73,"clint_rready", false,-1);
    tracep->declBus(c+1752,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1753,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1754,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1755,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1756,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1757,"clint_awvalid", false,-1);
    tracep->declBit(c+1015,"clint_awready", false,-1);
    tracep->declBus(c+1758,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1759,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1760,"clint_wlast", false,-1);
    tracep->declBit(c+1761,"clint_wvalid", false,-1);
    tracep->declBit(c+1016,"clint_wready", false,-1);
    tracep->declBus(c+1017,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1664,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1018,"clint_bvalid", false,-1);
    tracep->declBit(c+1762,"clint_bready", false,-1);
    tracep->declBus(c+1503,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1504,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1624,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1625,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1287,"a5", false,-1, 31,0);
    tracep->declBus(c+1505,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1624,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1625,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1506,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1626,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1507,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1508,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1509,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1510,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1511,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1512,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1513,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1514,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1515,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1516,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1517,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1518,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1519,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1520,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1521,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1019,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1020,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1522,"csr_write", false,-1);
    tracep->declBus(c+1523,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1288+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1021,"wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"waddr", false,-1, 4,0);
    tracep->declBit(c+1023,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1292+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1024,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1025,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1026,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1027,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1763,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1028,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1029,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1030,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1031,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1032,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1033,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1034,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1035,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1036,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1037,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1038,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1039,"npc_valid", false,-1);
    tracep->declBit(c+1040,"rd_exu_valid", false,-1);
    tracep->declBus(c+1041,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1042,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1044,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1764,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1045,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1046,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1047,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1048,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1049,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1050,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1051,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1052,"ready_lsu_to_wbu", false,-1);
    tracep->declBit(c+1053,"rd_lsu_valid", false,-1);
    tracep->declBit(c+1054,"rd_wbu_valid", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBus(c+995,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1664,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1665,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1656,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1663,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+996,"arvalid_i_a", false,-1);
    tracep->declBit(c+997,"arready_o_a", false,-1);
    tracep->declBus(c+122,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+123,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+124,"rlast_o_a", false,-1);
    tracep->declBus(c+125,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+126,"rvalid_o_a", false,-1);
    tracep->declBit(c+998,"rready_i_a", false,-1);
    tracep->declBus(c+1765,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1664,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1665,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1655,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1663,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1661,"awvalid_i_a", false,-1);
    tracep->declBit(c+1766,"awready_o_a", false,-1);
    tracep->declBus(c+1765,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1664,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1661,"wlast_i_a", false,-1);
    tracep->declBit(c+1661,"wvalid_i_a", false,-1);
    tracep->declBit(c+1767,"wready_o_a", false,-1);
    tracep->declBus(c+1768,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1769,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1770,"bvalid_o_a", false,-1);
    tracep->declBit(c+1661,"bready_i_a", false,-1);
    tracep->declBus(c+1001,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1664,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1665,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1002,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1663,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1003,"arvalid_i_b", false,-1);
    tracep->declBit(c+1004,"arready_o_b", false,-1);
    tracep->declBus(c+127,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+128,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+129,"rlast_o_b", false,-1);
    tracep->declBus(c+130,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+131,"rvalid_o_b", false,-1);
    tracep->declBit(c+1005,"rready_i_b", false,-1);
    tracep->declBus(c+978,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1664,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1665,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+979,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1663,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+983,"awvalid_i_b", false,-1);
    tracep->declBit(c+114,"awready_o_b", false,-1);
    tracep->declBus(c+980,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+981,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+982,"wlast_i_b", false,-1);
    tracep->declBit(c+984,"wvalid_i_b", false,-1);
    tracep->declBit(c+80,"wready_o_b", false,-1);
    tracep->declBus(c+1617,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1539,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1538,"bvalid_o_b", false,-1);
    tracep->declBit(c+985,"bready_i_b", false,-1);
    tracep->declBus(c+1006,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1664,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1665,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1007,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1663,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1008,"arvalid_o", false,-1);
    tracep->declBit(c+132,"arready_i", false,-1);
    tracep->declBus(c+133,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+134,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+135,"rlast_i", false,-1);
    tracep->declBus(c+136,"rid_i", false,-1, 3,0);
    tracep->declBit(c+137,"rvalid_i", false,-1);
    tracep->declBit(c+1009,"rready_o", false,-1);
    tracep->declBus(c+978,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1664,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1665,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+979,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1663,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+983,"awvalid_o", false,-1);
    tracep->declBit(c+114,"awready_i", false,-1);
    tracep->declBus(c+980,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+981,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+982,"wlast_o", false,-1);
    tracep->declBit(c+984,"wvalid_o", false,-1);
    tracep->declBit(c+80,"wready_i", false,-1);
    tracep->declBus(c+1617,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1539,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1538,"bvalid_i", false,-1);
    tracep->declBit(c+985,"bready_o", false,-1);
    tracep->declBit(c+999,"bus_busy", false,-1);
    tracep->declBit(c+1055,"ar_switch", false,-1);
    tracep->declBit(c+1056,"r_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBus(c+67,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+68,"arid_i", false,-1, 3,0);
    tracep->declBus(c+69,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+70,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+71,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+72,"arvalid_i", false,-1);
    tracep->declBit(c+1010,"arready_o", false,-1);
    tracep->declBus(c+1011,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1012,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1013,"rlast_o", false,-1);
    tracep->declBus(c+1664,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1014,"rvalid_o", false,-1);
    tracep->declBit(c+73,"rready_i", false,-1);
    tracep->declBus(c+1752,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1753,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1754,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1755,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1756,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1757,"awvalid_i", false,-1);
    tracep->declBit(c+1015,"awready_o", false,-1);
    tracep->declBus(c+1758,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1759,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1760,"wlast_i", false,-1);
    tracep->declBit(c+1761,"wvalid_i", false,-1);
    tracep->declBit(c+1016,"wready_o", false,-1);
    tracep->declBus(c+1017,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1664,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1018,"bvalid_o", false,-1);
    tracep->declBit(c+1762,"bready_i", false,-1);
    tracep->declBit(c+1057,"ar_state", false,-1);
    tracep->declBit(c+1058,"r_state", false,-1);
    tracep->declBit(c+1059,"aw_state", false,-1);
    tracep->declBit(c+1060,"w_state", false,-1);
    tracep->declBit(c+1771,"b_state", false,-1);
    tracep->declBus(c+1061,"araddr", false,-1, 31,0);
    tracep->declBus(c+1062,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1063,"wdata", false,-1, 31,0);
    tracep->declBus(c+1064,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1772,"wvalid", false,-1);
    tracep->declBit(c+1065,"flag_waddr", false,-1);
    tracep->declBit(c+1066,"flag_wdata", false,-1);
    tracep->declBit(c+1067,"flag_rdata", false,-1);
    tracep->declBit(c+1068,"flag_raddr", false,-1);
    tracep->declBit(c+1773,"flag_write", false,-1);
    tracep->declBus(c+1069,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1070,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1071,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1072,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1073,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1074,"lfsr_in", false,-1);
    tracep->declBus(c+1075,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1076,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBit(c+989,"reset_ifu", false,-1);
    tracep->declBus(c+1505,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1624,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1625,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1506,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1626,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1507,"a_in_src_i", false,-1);
    tracep->declBus(c+1508,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1509,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1510,"adder_a_src_i", false,-1);
    tracep->declBit(c+1511,"adder_out_src_i", false,-1);
    tracep->declBus(c+1512,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1513,"MemRead_i", false,-1);
    tracep->declBit(c+1514,"MemWrite_i", false,-1);
    tracep->declBus(c+1515,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1516,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1517,"wb_src_i", false,-1);
    tracep->declBit(c+1518,"csr_write_i", false,-1);
    tracep->declBit(c+1519,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1520,"reg_write_i", false,-1);
    tracep->declBus(c+1521,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1019,"exu_valid_i", false,-1);
    tracep->declBit(c+1020,"exu_ready_o", false,-1);
    tracep->declBus(c+1024,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1025,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1026,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1027,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+992,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1028,"MemRead_o", false,-1);
    tracep->declBit(c+1029,"MemWrite_o", false,-1);
    tracep->declBus(c+1030,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1031,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1032,"wb_src_o", false,-1);
    tracep->declBit(c+1033,"csr_write_o", false,-1);
    tracep->declBit(c+1034,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1035,"reg_write_o", false,-1);
    tracep->declBus(c+1036,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1037,"exu_valid_o", false,-1);
    tracep->declBit(c+1038,"exu_ready_i", false,-1);
    tracep->declBit(c+1039,"npc_valid", false,-1);
    tracep->declBit(c+1040,"rd_exu_valid", false,-1);
    tracep->declBus(c+1078,"pc", false,-1, 31,0);
    tracep->declBus(c+1025,"rs1", false,-1, 31,0);
    tracep->declBus(c+1026,"rs2", false,-1, 31,0);
    tracep->declBus(c+1079,"imm", false,-1, 31,0);
    tracep->declBus(c+1080,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1081,"a_in_src", false,-1);
    tracep->declBus(c+1082,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1083,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1084,"adder_a_src", false,-1);
    tracep->declBit(c+1085,"adder_out_src", false,-1);
    tracep->declBus(c+1086,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1087,"a_in", false,-1, 31,0);
    tracep->declBus(c+1088,"b_in", false,-1, 31,0);
    tracep->declBus(c+1089,"a_out", false,-1, 31,0);
    tracep->declBus(c+1090,"add_out", false,-1, 31,0);
    tracep->declBus(c+1091,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1024,"alu_result", false,-1, 31,0);
    tracep->declBus(c+992,"npc", false,-1, 31,0);
    tracep->declBit(c+1092,"zero", false,-1);
    tracep->declBus(c+1663,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1774,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1775,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1093,"current_state", false,-1, 1,0);
    tracep->declBus(c+1094,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1087,"a", false,-1, 31,0);
    tracep->declBus(c+1088,"b", false,-1, 31,0);
    tracep->declBus(c+1086,"op", false,-1, 3,0);
    tracep->declBus(c+1024,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1092,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1776,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1025,"d0", false,-1, 31,0);
    tracep->declBus(c+1078,"d1", false,-1, 31,0);
    tracep->declBit(c+1081,"sel", false,-1);
    tracep->declBus(c+1087,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1776,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1026,"d0", false,-1, 31,0);
    tracep->declBus(c+1079,"d1", false,-1, 31,0);
    tracep->declBus(c+1777,"d2", false,-1, 31,0);
    tracep->declBus(c+1080,"d3", false,-1, 31,0);
    tracep->declBus(c+1082,"sel", false,-1, 1,0);
    tracep->declBus(c+1088,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1089,"a", false,-1, 31,0);
    tracep->declBus(c+1079,"b", false,-1, 31,0);
    tracep->declBus(c+1090,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1776,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1078,"d0", false,-1, 31,0);
    tracep->declBus(c+1025,"d1", false,-1, 31,0);
    tracep->declBit(c+1084,"sel", false,-1);
    tracep->declBus(c+1089,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1776,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1090,"d0", false,-1, 31,0);
    tracep->declBus(c+1080,"d1", false,-1, 31,0);
    tracep->declBit(c+1085,"sel", false,-1);
    tracep->declBus(c+1091,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1095,"pc4", false,-1, 31,0);
    tracep->declBus(c+1091,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1083,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1092,"zero", false,-1);
    tracep->declBus(c+1024,"alu_result", false,-1, 31,0);
    tracep->declBus(c+992,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBit(c+989,"reset_ifu", false,-1);
    tracep->declBus(c+1503,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1504,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1624,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1625,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1287,"a5", false,-1, 31,0);
    tracep->declBus(c+990,"pc_i", false,-1, 31,0);
    tracep->declBus(c+991,"inst_i", false,-1, 31,0);
    tracep->declBit(c+993,"idu_valid_i", false,-1);
    tracep->declBit(c+994,"idu_ready_o", false,-1);
    tracep->declBus(c+1505,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1624,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1625,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1506,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1626,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1507,"a_in_src_o", false,-1);
    tracep->declBus(c+1508,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1509,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1510,"adder_a_src_o", false,-1);
    tracep->declBit(c+1511,"adder_out_src_o", false,-1);
    tracep->declBus(c+1512,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1513,"MemRead_o", false,-1);
    tracep->declBit(c+1514,"MemWrite_o", false,-1);
    tracep->declBus(c+1515,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1516,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1517,"wb_src_o", false,-1);
    tracep->declBit(c+1518,"csr_write_o", false,-1);
    tracep->declBit(c+1519,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1520,"reg_write_o", false,-1);
    tracep->declBus(c+1521,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1019,"idu_valid_o", false,-1);
    tracep->declBit(c+1020,"idu_ready_i", false,-1);
    tracep->declBit(c+1522,"csr_write_i", false,-1);
    tracep->declBus(c+1523,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1324+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1000,"fencei", false,-1);
    tracep->declBus(c+1096,"exu_rd", false,-1, 4,0);
    tracep->declBus(c+1097,"lsu_rd", false,-1, 4,0);
    tracep->declBus(c+1098,"wbu_rd", false,-1, 4,0);
    tracep->declBus(c+1505,"pc", false,-1, 31,0);
    tracep->declBus(c+1524,"inst", false,-1, 31,0);
    tracep->declBus(c+1525,"opcode", false,-1, 6,0);
    tracep->declBus(c+1526,"wmask_tmp", false,-1, 7,0);
    tracep->declBit(c+1527,"opcode_r", false,-1);
    tracep->declBit(c+1528,"opcode_i", false,-1);
    tracep->declBit(c+1529,"opcode_s", false,-1);
    tracep->declBit(c+1530,"opcode_sb", false,-1);
    tracep->declBit(c+1531,"opcode_u", false,-1);
    tracep->declBit(c+1532,"opcode_uj", false,-1);
    tracep->declBit(c+1627,"isRAW", false,-1);
    tracep->declBit(c+1628,"exu_raw", false,-1);
    tracep->declBit(c+1629,"lsu_raw", false,-1);
    tracep->declBit(c+1630,"wbu_raw", false,-1);
    tracep->declBus(c+1663,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1774,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1775,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1099,"current_state", false,-1, 1,0);
    tracep->declBus(c+1533,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1524,"inst", false,-1, 31,0);
    tracep->declBus(c+1512,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1525,"opcode", false,-1, 6,0);
    tracep->declBus(c+1534,"funct3", false,-1, 2,0);
    tracep->declBus(c+1535,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1522,"wen", false,-1);
    tracep->declBus(c+1524,"inst", false,-1, 31,0);
    tracep->declBus(c+1523,"wdata", false,-1, 31,0);
    tracep->declBus(c+1287,"NO", false,-1, 31,0);
    tracep->declBus(c+1505,"pc", false,-1, 31,0);
    tracep->declBus(c+1626,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1328+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1332,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1333,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1334,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1335,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1778,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1779,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1525,"opcode", false,-1, 6,0);
    tracep->declBus(c+1534,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1524,"inst", false,-1, 31,0);
    tracep->declBit(c+1507,"a_in_src", false,-1);
    tracep->declBus(c+1508,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1520,"reg_write", false,-1);
    tracep->declBus(c+1509,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1510,"adder_a_src", false,-1);
    tracep->declBit(c+1513,"MemRead", false,-1);
    tracep->declBit(c+1514,"MemWrite", false,-1);
    tracep->declBus(c+1526,"wmask", false,-1, 7,0);
    tracep->declBit(c+1517,"wb_src", false,-1);
    tracep->declBus(c+1516,"rmask", false,-1, 2,0);
    tracep->declBit(c+1518,"csr_write", false,-1);
    tracep->declBit(c+1511,"adder_out_src", false,-1);
    tracep->declBit(c+1519,"csr_wdata_src", false,-1);
    tracep->declBus(c+1525,"opcode", false,-1, 6,0);
    tracep->declBus(c+1534,"funct3", false,-1, 2,0);
    tracep->declBus(c+1535,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1776,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1524,"inst", false,-1, 31,0);
    tracep->declBus(c+1506,"data", false,-1, 31,0);
    tracep->declBus(c+1525,"opcode", false,-1, 6,0);
    tracep->declBus(c+1534,"funct3", false,-1, 2,0);
    tracep->declBus(c+1535,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBus(c+995,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1664,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1665,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1656,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1663,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+996,"arvalid_o", false,-1);
    tracep->declBit(c+997,"arready_i", false,-1);
    tracep->declBus(c+122,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+123,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+124,"rlast_i", false,-1);
    tracep->declBus(c+125,"rid_i", false,-1, 3,0);
    tracep->declBit(c+126,"rvalid_i", false,-1);
    tracep->declBit(c+998,"rready_o", false,-1);
    tracep->declBus(c+992,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1039,"npc_valid", false,-1);
    tracep->declBit(c+989,"reset_o", false,-1);
    tracep->declBus(c+990,"pc_o", false,-1, 31,0);
    tracep->declBus(c+991,"inst_o", false,-1, 31,0);
    tracep->declBit(c+993,"ifu_valid_o", false,-1);
    tracep->declBit(c+994,"ifu_ready_i", false,-1);
    tracep->declBit(c+999,"bus_busy", false,-1);
    tracep->declBus(c+1100,"pc_dbg", false,-1, 31,0);
    tracep->declBus(c+1100,"pc", false,-1, 31,0);
    tracep->declBus(c+1780,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1781,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1782,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1783,"lfsr_in", false,-1);
    tracep->declBit(c+996,"arvalid", false,-1);
    tracep->declBus(c+995,"araddr", false,-1, 31,0);
    tracep->declBus(c+1101,"inst", false,-1, 31,0);
    tracep->declBit(c+998,"rready", false,-1);
    tracep->declBit(c+1102,"skip", false,-1);
    tracep->declBus(c+1663,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1774,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1775,"S_ADD", false,-1, 1,0);
    tracep->declBus(c+1103,"current_state", false,-1, 1,0);
    tracep->declBus(c+138,"next_state", false,-1, 1,0);
    tracep->declBit(c+1784,"ready_flag", false,-1);
    tracep->declBit(c+1104,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBus(c+1024,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1025,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1026,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1027,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1028,"MemRead_i", false,-1);
    tracep->declBit(c+1029,"MemWrite_i", false,-1);
    tracep->declBus(c+1030,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1031,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1032,"wb_src_i", false,-1);
    tracep->declBit(c+1033,"csr_write_i", false,-1);
    tracep->declBit(c+1034,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1035,"reg_write_i", false,-1);
    tracep->declBus(c+1036,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1037,"lsu_valid_i", false,-1);
    tracep->declBit(c+1038,"lsu_ready_o", false,-1);
    tracep->declBus(c+1041,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1042,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1044,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1045,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1046,"wb_src_o", false,-1);
    tracep->declBit(c+1047,"csr_write_o", false,-1);
    tracep->declBit(c+1048,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1049,"reg_write_o", false,-1);
    tracep->declBus(c+1050,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1051,"lsu_valid_o", false,-1);
    tracep->declBit(c+1052,"lsu_ready_i", false,-1);
    tracep->declBus(c+1001,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1664,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1665,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1002,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1663,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1003,"arvalid_o", false,-1);
    tracep->declBit(c+1004,"arready_i", false,-1);
    tracep->declBus(c+127,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+128,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+129,"rlast_i", false,-1);
    tracep->declBus(c+130,"rid_i", false,-1, 3,0);
    tracep->declBit(c+131,"rvalid_i", false,-1);
    tracep->declBit(c+1005,"rready_o", false,-1);
    tracep->declBus(c+978,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1664,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1665,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+979,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1663,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+983,"awvalid_o", false,-1);
    tracep->declBit(c+114,"awready_i", false,-1);
    tracep->declBus(c+980,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+981,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+982,"wlast_o", false,-1);
    tracep->declBit(c+984,"wvalid_o", false,-1);
    tracep->declBit(c+80,"wready_i", false,-1);
    tracep->declBus(c+1617,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1539,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1538,"bvalid_i", false,-1);
    tracep->declBit(c+985,"bready_o", false,-1);
    tracep->declBit(c+999,"bus_busy", false,-1);
    tracep->declBit(c+1053,"rd_lsu_valid", false,-1);
    tracep->declBus(c+1041,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1042,"rs1", false,-1, 31,0);
    tracep->declBus(c+1785,"rs2", false,-1, 31,0);
    tracep->declBus(c+1786,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1045,"rmask", false,-1, 2,0);
    tracep->declBus(c+1105,"wmask", false,-1, 3,0);
    tracep->declBit(c+1106,"flag", false,-1);
    tracep->declBit(c+1787,"wvalid_tmp", false,-1);
    tracep->declBit(c+1003,"arvalid", false,-1);
    tracep->declBus(c+1001,"araddr", false,-1, 31,0);
    tracep->declBit(c+1005,"rready", false,-1);
    tracep->declBus(c+978,"awaddr", false,-1, 31,0);
    tracep->declBit(c+983,"awvalid", false,-1);
    tracep->declBus(c+980,"wdata", false,-1, 31,0);
    tracep->declBus(c+981,"wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"wvalid", false,-1);
    tracep->declBit(c+985,"bready", false,-1);
    tracep->declBit(c+1107,"read_mem", false,-1);
    tracep->declBit(c+1108,"write_mem", false,-1);
    tracep->declBus(c+1663,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1774,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1775,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1109,"current_state", false,-1, 1,0);
    tracep->declBus(c+1631,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1788,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1776,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBus(c+1021,"wdata", false,-1, 31,0);
    tracep->declBus(c+1022,"waddr", false,-1, 4,0);
    tracep->declBit(c+1023,"wen", false,-1);
    tracep->declBus(c+1503,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1624,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1504,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1625,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1287,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1336+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1368+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBus(c+1041,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1042,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1044,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1045,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1046,"wb_src_i", false,-1);
    tracep->declBit(c+1047,"csr_write_i", false,-1);
    tracep->declBit(c+1048,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1049,"reg_write_i", false,-1);
    tracep->declBus(c+1050,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1051,"wbu_valid_i", false,-1);
    tracep->declBit(c+1052,"wbu_ready_o", false,-1);
    tracep->declBus(c+1523,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1021,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1522,"csr_write_o", false,-1);
    tracep->declBit(c+1023,"reg_write_o", false,-1);
    tracep->declBus(c+1022,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1054,"rd_wbu_valid", false,-1);
    tracep->declBus(c+1110,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1111,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1112,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1113,"rs1", false,-1, 31,0);
    tracep->declBus(c+1114,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1115,"rmask", false,-1, 2,0);
    tracep->declBit(c+1116,"wb_src", false,-1);
    tracep->declBit(c+1117,"csr_wdata_src", false,-1);
    tracep->declBit(c+1118,"difftest_check", false,-1);
    tracep->declBit(c+1119,"difftest_check_flag", false,-1);
    tracep->declBus(c+1663,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1774,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1775,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1120,"current_state", false,-1, 1,0);
    tracep->declBus(c+1121,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1776,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1113,"d0", false,-1, 31,0);
    tracep->declBus(c+1114,"d1", false,-1, 31,0);
    tracep->declBit(c+1117,"sel", false,-1);
    tracep->declBus(c+1523,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1111,"read_data", false,-1, 31,0);
    tracep->declBus(c+1122,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1115,"rmask", false,-1, 2,0);
    tracep->declBus(c+1110,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1123,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1124,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1125,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1126,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1127,"byte3", false,-1, 31,0);
    tracep->declBus(c+1128,"byte2", false,-1, 31,0);
    tracep->declBus(c+1129,"byte1", false,-1, 31,0);
    tracep->declBus(c+1130,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1776,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1112,"d0", false,-1, 31,0);
    tracep->declBus(c+1110,"d1", false,-1, 31,0);
    tracep->declBit(c+1116,"sel", false,-1);
    tracep->declBus(c+1021,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBus(c+1006,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1664,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1665,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1007,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1663,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1008,"axi_arvalid_i", false,-1);
    tracep->declBit(c+132,"axi_arready_o", false,-1);
    tracep->declBus(c+133,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+134,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+135,"axi_rlast_o", false,-1);
    tracep->declBus(c+136,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+137,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1009,"axi_rready_i", false,-1);
    tracep->declBus(c+978,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1664,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1665,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+979,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1663,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+983,"axi_awvalid_i", false,-1);
    tracep->declBit(c+114,"axi_awready_o", false,-1);
    tracep->declBus(c+980,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+981,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+982,"axi_wlast_i", false,-1);
    tracep->declBit(c+984,"axi_wvalid_i", false,-1);
    tracep->declBit(c+80,"axi_wready_o", false,-1);
    tracep->declBus(c+1617,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1539,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1538,"axi_bvalid_o", false,-1);
    tracep->declBit(c+985,"axi_bready_i", false,-1);
    tracep->declBus(c+40,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+39,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+41,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+42,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+43,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+54,"sram_arvalid_o", false,-1);
    tracep->declBit(c+115,"sram_arready_i", false,-1);
    tracep->declBus(c+1618,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1619,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1203,"sram_rlast_i", false,-1);
    tracep->declBus(c+1202,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1201,"sram_rvalid_i", false,-1);
    tracep->declBit(c+55,"sram_rready_o", false,-1);
    tracep->declBus(c+978,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1664,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1665,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+979,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1663,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+983,"sram_awvalid_o", false,-1);
    tracep->declBit(c+114,"sram_awready_i", false,-1);
    tracep->declBus(c+980,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+981,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+982,"sram_wlast_o", false,-1);
    tracep->declBit(c+984,"sram_wvalid_o", false,-1);
    tracep->declBit(c+80,"sram_wready_i", false,-1);
    tracep->declBus(c+1617,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1539,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1538,"sram_bvalid_i", false,-1);
    tracep->declBit(c+985,"sram_bready_o", false,-1);
    tracep->declBus(c+67,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+68,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+69,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+70,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+71,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+72,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1010,"clint_arready_i", false,-1);
    tracep->declBus(c+1011,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1012,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1013,"clint_rlast_i", false,-1);
    tracep->declBus(c+1664,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1014,"clint_rvalid_i", false,-1);
    tracep->declBit(c+73,"clint_rready_o", false,-1);
    tracep->declBus(c+1752,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1753,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1754,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1755,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1756,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1757,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1015,"clint_awready_i", false,-1);
    tracep->declBus(c+1758,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1759,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1760,"clint_wlast_o", false,-1);
    tracep->declBit(c+1761,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1016,"clint_wready_i", false,-1);
    tracep->declBus(c+1017,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1664,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1018,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1762,"clint_bready_o", false,-1);
    tracep->declBit(c+74,"ar_switch", false,-1);
    tracep->declBit(c+75,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"io_d", false,-1);
    tracep->declBit(c+575,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"io_d", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1241,"auto_in_psel", false,-1);
    tracep->declBit(c+1242,"auto_in_penable", false,-1);
    tracep->declBit(c+1228,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1240,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+679,"auto_in_pready", false,-1);
    tracep->declBit(c+1661,"auto_in_pslverr", false,-1);
    tracep->declBus(c+680,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1576,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1577,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1578,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1400,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1241,"in_psel", false,-1);
    tracep->declBit(c+1242,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1228,"in_pwrite", false,-1);
    tracep->declBus(c+1229,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+679,"in_pready", false,-1);
    tracep->declBus(c+680,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1661,"in_pslverr", false,-1);
    tracep->declBus(c+1576,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1577,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1578,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1579,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1580,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+689,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+680,"rdata", false,-1, 31,0);
    tracep->declBus(c+690,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+679,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+691,"num", false,-1, 3,0);
    tracep->declBus(c+1578,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+692,"num", false,-1, 3,0);
    tracep->declBus(c+1579,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+693,"num", false,-1, 3,0);
    tracep->declBus(c+1580,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+694,"num", false,-1, 3,0);
    tracep->declBus(c+1581,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+695,"num", false,-1, 3,0);
    tracep->declBus(c+1582,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+696,"num", false,-1, 3,0);
    tracep->declBus(c+1583,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+697,"num", false,-1, 3,0);
    tracep->declBus(c+1584,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+698,"num", false,-1, 3,0);
    tracep->declBus(c+1585,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1238,"auto_in_psel", false,-1);
    tracep->declBit(c+1239,"auto_in_penable", false,-1);
    tracep->declBit(c+1228,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1240,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"auto_in_pready", false,-1);
    tracep->declBit(c+1661,"auto_in_pslverr", false,-1);
    tracep->declBus(c+155,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1586,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1587,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1400,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1238,"in_psel", false,-1);
    tracep->declBit(c+1239,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1228,"in_pwrite", false,-1);
    tracep->declBus(c+1229,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"in_pready", false,-1);
    tracep->declBus(c+155,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1661,"in_pslverr", false,-1);
    tracep->declBit(c+1586,"ps2_clk", false,-1);
    tracep->declBit(c+1587,"ps2_data", false,-1);
    tracep->declBus(c+585,"data_r", false,-1, 7,0);
    tracep->declBus(c+586,"old_data", false,-1, 7,0);
    tracep->declBus(c+587,"data_asic", false,-1, 7,0);
    tracep->declBus(c+588,"buffer", false,-1, 7,0);
    tracep->declBit(c+589,"ready", false,-1);
    tracep->declBit(c+590,"nextdata_n", false,-1);
    tracep->declBit(c+591,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1632,"clrn", false,-1);
    tracep->declBit(c+1586,"ps2_clk", false,-1);
    tracep->declBit(c+1587,"ps2_data", false,-1);
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
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1485,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1486,"auto_in_wvalid", false,-1);
    tracep->declBit(c+371,"auto_in_arready", false,-1);
    tracep->declBit(c+61,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+372,"auto_in_rvalid", false,-1);
    tracep->declBus(c+373,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+374,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+372,"state", false,-1);
    tracep->declBus(c+374,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+373,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+76,"raddr", false,-1, 31,0);
    tracep->declBit(c+77,"ren", false,-1);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1243,"auto_in_psel", false,-1);
    tracep->declBit(c+1244,"auto_in_penable", false,-1);
    tracep->declBit(c+1228,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1604,"auto_in_pready", false,-1);
    tracep->declBit(c+1661,"auto_in_pslverr", false,-1);
    tracep->declBus(c+156,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1597,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1536,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1598,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1224,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1243,"in_psel", false,-1);
    tracep->declBit(c+1244,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1228,"in_pwrite", false,-1);
    tracep->declBus(c+1229,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1604,"in_pready", false,-1);
    tracep->declBus(c+156,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1661,"in_pslverr", false,-1);
    tracep->declBit(c+1597,"qspi_sck", false,-1);
    tracep->declBit(c+1536,"qspi_ce_n", false,-1);
    tracep->declBus(c+1598,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBus(c+1633,"dout", false,-1, 3,0);
    tracep->declBus(c+1548,"douten", false,-1, 3,0);
    tracep->declBit(c+1634,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBus(c+1224,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1229,"dat_i", false,-1, 31,0);
    tracep->declBus(c+156,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1230,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1243,"cyc_i", false,-1);
    tracep->declBit(c+1243,"stb_i", false,-1);
    tracep->declBit(c+1634,"ack_o", false,-1);
    tracep->declBit(c+1228,"we_i", false,-1);
    tracep->declBit(c+1597,"sck", false,-1);
    tracep->declBit(c+1536,"ce_n", false,-1);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBus(c+1633,"dout", false,-1, 3,0);
    tracep->declBus(c+1548,"douten", false,-1, 3,0);
    tracep->declBus(c+1663,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1774,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1775,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+699,"mr_sck", false,-1);
    tracep->declBit(c+700,"mr_ce_n", false,-1);
    tracep->declBus(c+1598,"mr_din", false,-1, 3,0);
    tracep->declBus(c+701,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+702,"mr_doe", false,-1);
    tracep->declBit(c+703,"mw_sck", false,-1);
    tracep->declBit(c+704,"mw_ce_n", false,-1);
    tracep->declBus(c+1598,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1549,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+705,"mw_doe", false,-1);
    tracep->declBit(c+1550,"mr_rd", false,-1);
    tracep->declBit(c+706,"mr_done", false,-1);
    tracep->declBit(c+1551,"mw_wr", false,-1);
    tracep->declBit(c+1552,"mw_done", false,-1);
    tracep->declBit(c+1243,"wb_valid", false,-1);
    tracep->declBit(c+1401,"wb_we", false,-1);
    tracep->declBit(c+1402,"wb_re", false,-1);
    tracep->declBus(c+1438,"state", false,-1, 1,0);
    tracep->declBus(c+1635,"nstate", false,-1, 1,0);
    tracep->declBus(c+1636,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1637,"qpi_sck", false,-1);
    tracep->declBus(c+1403,"size", false,-1, 2,0);
    tracep->declBus(c+1404,"byte0", false,-1, 7,0);
    tracep->declBus(c+1405,"byte1", false,-1, 7,0);
    tracep->declBus(c+1406,"byte2", false,-1, 7,0);
    tracep->declBus(c+1407,"byte3", false,-1, 7,0);
    tracep->declBus(c+1408,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBus(c+1409,"addr", false,-1, 23,0);
    tracep->declBit(c+1550,"rd", false,-1);
    tracep->declBus(c+1666,"size", false,-1, 2,0);
    tracep->declBit(c+706,"done", false,-1);
    tracep->declBus(c+156,"line", false,-1, 31,0);
    tracep->declBit(c+699,"sck", false,-1);
    tracep->declBit(c+700,"ce_n", false,-1);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBus(c+701,"dout", false,-1, 3,0);
    tracep->declBit(c+702,"douten", false,-1);
    tracep->declBus(c+1789,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1790,"READ", false,-1, 0,0);
    tracep->declBus(c+1791,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+707,"state", false,-1);
    tracep->declBit(c+1553,"nstate", false,-1);
    tracep->declBus(c+708,"counter", false,-1, 7,0);
    tracep->declBus(c+709,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+606+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1792,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+710,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBus(c+1410,"addr", false,-1, 23,0);
    tracep->declBus(c+1408,"line", false,-1, 31,0);
    tracep->declBus(c+1403,"size", false,-1, 2,0);
    tracep->declBit(c+1551,"wr", false,-1);
    tracep->declBit(c+1552,"done", false,-1);
    tracep->declBit(c+703,"sck", false,-1);
    tracep->declBit(c+704,"ce_n", false,-1);
    tracep->declBus(c+1598,"din", false,-1, 3,0);
    tracep->declBus(c+1549,"dout", false,-1, 3,0);
    tracep->declBit(c+705,"douten", false,-1);
    tracep->declBus(c+1789,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1790,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1411,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+711,"state", false,-1);
    tracep->declBit(c+1554,"nstate", false,-1);
    tracep->declBus(c+712,"counter", false,-1, 7,0);
    tracep->declBus(c+713,"saddr", false,-1, 23,0);
    tracep->declBus(c+1793,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+105,"auto_in_awready", false,-1);
    tracep->declBit(c+1462,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1664,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1665,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+106,"auto_in_wready", false,-1);
    tracep->declBit(c+1463,"auto_in_wvalid", false,-1);
    tracep->declBus(c+980,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"auto_in_wlast", false,-1);
    tracep->declBit(c+1613,"auto_in_bready", false,-1);
    tracep->declBit(c+688,"auto_in_bvalid", false,-1);
    tracep->declBus(c+685,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+104,"auto_in_arready", false,-1);
    tracep->declBit(c+38,"auto_in_arvalid", false,-1);
    tracep->declBus(c+39,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1612,"auto_in_rready", false,-1);
    tracep->declBit(c+684,"auto_in_rvalid", false,-1);
    tracep->declBus(c+685,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+686,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1663,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+687,"auto_in_rlast", false,-1);
    tracep->declBit(c+1599,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1435,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+674,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+675,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+676,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+677,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1600,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1436,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1437,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1496,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+105,"in_awready", false,-1);
    tracep->declBit(c+1462,"in_awvalid", false,-1);
    tracep->declBus(c+978,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1665,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1663,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+106,"in_wready", false,-1);
    tracep->declBit(c+1463,"in_wvalid", false,-1);
    tracep->declBus(c+980,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+981,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+982,"in_wlast", false,-1);
    tracep->declBit(c+1613,"in_bready", false,-1);
    tracep->declBit(c+688,"in_bvalid", false,-1);
    tracep->declBus(c+1663,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+685,"in_bid", false,-1, 3,0);
    tracep->declBit(c+104,"in_arready", false,-1);
    tracep->declBit(c+38,"in_arvalid", false,-1);
    tracep->declBus(c+40,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"in_arid", false,-1, 3,0);
    tracep->declBus(c+41,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+42,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+43,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1612,"in_rready", false,-1);
    tracep->declBit(c+684,"in_rvalid", false,-1);
    tracep->declBus(c+1663,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+686,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+687,"in_rlast", false,-1);
    tracep->declBus(c+685,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1599,"sdram_clk", false,-1);
    tracep->declBit(c+1435,"sdram_cke", false,-1);
    tracep->declBit(c+674,"sdram_cs", false,-1);
    tracep->declBit(c+675,"sdram_ras", false,-1);
    tracep->declBit(c+676,"sdram_cas", false,-1);
    tracep->declBit(c+677,"sdram_we", false,-1);
    tracep->declBus(c+1600,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1436,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1437,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1496,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+714,"sdram_dout_en", false,-1);
    tracep->declBus(c+715,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBit(c+1462,"inport_awvalid_i", false,-1);
    tracep->declBus(c+978,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1664,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1665,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1663,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1463,"inport_wvalid_i", false,-1);
    tracep->declBus(c+980,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+981,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+982,"inport_wlast_i", false,-1);
    tracep->declBit(c+1613,"inport_bready_i", false,-1);
    tracep->declBit(c+38,"inport_arvalid_i", false,-1);
    tracep->declBus(c+40,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+39,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+41,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+43,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1612,"inport_rready_i", false,-1);
    tracep->declBus(c+1496,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+105,"inport_awready_o", false,-1);
    tracep->declBit(c+106,"inport_wready_o", false,-1);
    tracep->declBit(c+688,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1663,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+685,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+104,"inport_arready_o", false,-1);
    tracep->declBit(c+684,"inport_rvalid_o", false,-1);
    tracep->declBus(c+686,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1663,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+685,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+687,"inport_rlast_o", false,-1);
    tracep->declBit(c+1599,"sdram_clk_o", false,-1);
    tracep->declBit(c+1435,"sdram_cke_o", false,-1);
    tracep->declBit(c+674,"sdram_cs_o", false,-1);
    tracep->declBit(c+675,"sdram_ras_o", false,-1);
    tracep->declBit(c+676,"sdram_cas_o", false,-1);
    tracep->declBit(c+677,"sdram_we_o", false,-1);
    tracep->declBus(c+1437,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1600,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1436,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+715,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+714,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1650,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1794,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1654,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1795,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+139,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+140,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+141,"ram_rd_w", false,-1);
    tracep->declBit(c+1439,"ram_accept_w", false,-1);
    tracep->declBus(c+980,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+716,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+79,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+717,"ram_ack_w", false,-1);
    tracep->declBit(c+1661,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBit(c+1462,"axi_awvalid_i", false,-1);
    tracep->declBus(c+978,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1664,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1665,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1663,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1463,"axi_wvalid_i", false,-1);
    tracep->declBus(c+980,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+981,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+982,"axi_wlast_i", false,-1);
    tracep->declBit(c+1613,"axi_bready_i", false,-1);
    tracep->declBit(c+38,"axi_arvalid_i", false,-1);
    tracep->declBus(c+40,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+39,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+41,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+43,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1612,"axi_rready_i", false,-1);
    tracep->declBit(c+1439,"ram_accept_i", false,-1);
    tracep->declBit(c+717,"ram_ack_i", false,-1);
    tracep->declBit(c+1661,"ram_error_i", false,-1);
    tracep->declBus(c+716,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+105,"axi_awready_o", false,-1);
    tracep->declBit(c+106,"axi_wready_o", false,-1);
    tracep->declBit(c+688,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1663,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+685,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+104,"axi_arready_o", false,-1);
    tracep->declBit(c+684,"axi_rvalid_o", false,-1);
    tracep->declBus(c+686,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1663,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+685,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+687,"axi_rlast_o", false,-1);
    tracep->declBus(c+140,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+141,"ram_rd_o", false,-1);
    tracep->declBus(c+79,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+139,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+980,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+718,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+719,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+720,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+721,"req_rd_q", false,-1);
    tracep->declBit(c+722,"req_wr_q", false,-1);
    tracep->declBus(c+723,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+724,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+725,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+726,"req_prio_q", false,-1);
    tracep->declBit(c+727,"req_hold_rd_q", false,-1);
    tracep->declBit(c+728,"req_hold_wr_q", false,-1);
    tracep->declBit(c+729,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+142,"req_push_w", false,-1);
    tracep->declBus(c+1638,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+730,"req_out_valid_w", false,-1);
    tracep->declBus(c+731,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+143,"resp_accept_w", false,-1);
    tracep->declBit(c+732,"resp_is_write_w", false,-1);
    tracep->declBit(c+733,"resp_is_read_w", false,-1);
    tracep->declBit(c+687,"resp_is_last_w", false,-1);
    tracep->declBus(c+685,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+734,"resp_valid_w", false,-1);
    tracep->declBit(c+735,"write_prio_w", false,-1);
    tracep->declBit(c+736,"read_prio_w", false,-1);
    tracep->declBit(c+144,"write_active_w", false,-1);
    tracep->declBit(c+141,"read_active_w", false,-1);
    tracep->declBus(c+139,"addr_w", false,-1, 31,0);
    tracep->declBit(c+97,"wr_w", false,-1);
    tracep->declBit(c+141,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1796,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1797,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1795,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBus(c+1638,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+142,"push_i", false,-1);
    tracep->declBit(c+143,"pop_i", false,-1);
    tracep->declBus(c+731,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+729,"accept_o", false,-1);
    tracep->declBit(c+730,"valid_o", false,-1);
    tracep->declBus(c+1798,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+737+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+741,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+742,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+743,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1776,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1797,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1795,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBus(c+716,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+717,"push_i", false,-1);
    tracep->declBit(c+143,"pop_i", false,-1);
    tracep->declBus(c+686,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+744,"accept_o", false,-1);
    tracep->declBit(c+734,"valid_o", false,-1);
    tracep->declBus(c+1798,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+745+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+749,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+750,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+751,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBus(c+140,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+141,"inport_rd_i", false,-1);
    tracep->declBus(c+79,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+139,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+980,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1496,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1439,"inport_accept_o", false,-1);
    tracep->declBit(c+717,"inport_ack_o", false,-1);
    tracep->declBit(c+1661,"inport_error_o", false,-1);
    tracep->declBus(c+716,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1599,"sdram_clk_o", false,-1);
    tracep->declBit(c+1435,"sdram_cke_o", false,-1);
    tracep->declBit(c+674,"sdram_cs_o", false,-1);
    tracep->declBit(c+675,"sdram_ras_o", false,-1);
    tracep->declBit(c+676,"sdram_cas_o", false,-1);
    tracep->declBit(c+677,"sdram_we_o", false,-1);
    tracep->declBus(c+1437,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1600,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1436,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+715,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+714,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1650,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1794,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1654,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1795,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1795,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1797,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1797,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1799,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1800,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1801,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1802,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1797,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1803,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1804,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1805,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1807,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1808,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1809,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1664,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1810,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1797,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1664,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1809,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1808,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1804,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1806,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1805,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1807,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1803,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1811,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1812,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1813,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1813,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1776,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1813,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1795,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1795,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1796,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+139,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+140,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+141,"ram_rd_w", false,-1);
    tracep->declBit(c+1439,"ram_accept_w", false,-1);
    tracep->declBus(c+980,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+716,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+717,"ram_ack_w", false,-1);
    tracep->declBit(c+145,"ram_req_w", false,-1);
    tracep->declBus(c+752,"command_q", false,-1, 3,0);
    tracep->declBus(c+1440,"addr_q", false,-1, 12,0);
    tracep->declBus(c+715,"data_q", false,-1, 31,0);
    tracep->declBit(c+753,"data_rd_en_q", false,-1);
    tracep->declBus(c+1437,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1435,"cke_q", false,-1);
    tracep->declBus(c+1436,"bank_q", false,-1, 1,0);
    tracep->declBus(c+716,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+754,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1496,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+755,"refresh_q", false,-1);
    tracep->declBus(c+756,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+757+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1441,"state_q", false,-1, 3,0);
    tracep->declBus(c+146,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+147,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+761,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+762,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+148,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+149,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+150,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1797,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+763,"delay_q", false,-1, 3,0);
    tracep->declBus(c+151,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1814,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1442,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+764,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+765,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+766,"idx", false,-1, 31,0);
    tracep->declBus(c+767,"rd_q", false,-1, 3,0);
    tracep->declBit(c+717,"ack_q", false,-1);
    tracep->declArray(c+1443,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1248,"auto_in_psel", false,-1);
    tracep->declBit(c+1249,"auto_in_penable", false,-1);
    tracep->declBit(c+1228,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1237,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"auto_in_pready", false,-1);
    tracep->declBit(c+682,"auto_in_pslverr", false,-1);
    tracep->declBus(c+683,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+673,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1433,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1434,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1596,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1815,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1816,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1817,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1412,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1248,"in_psel", false,-1);
    tracep->declBit(c+1249,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1228,"in_pwrite", false,-1);
    tracep->declBus(c+1229,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"in_pready", false,-1);
    tracep->declBus(c+683,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+682,"in_pslverr", false,-1);
    tracep->declBit(c+673,"spi_sck", false,-1);
    tracep->declBus(c+1433,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1434,"spi_mosi", false,-1);
    tracep->declBit(c+1596,"spi_miso", false,-1);
    tracep->declBit(c+768,"spi_irq_out", false,-1);
    tracep->declBus(c+1818,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1819,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1818,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1820,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1821,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1822,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1664,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1809,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1808,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1804,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1806,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1805,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1807,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1803,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1811,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1812,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1823,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+769,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1555,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+770,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+771,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+772,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+773,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+774,"wb_we_i", false,-1);
    tracep->declBit(c+775,"wb_stb_i", false,-1);
    tracep->declBit(c+776,"wb_cyc_i", false,-1);
    tracep->declBit(c+777,"wb_ack_o", false,-1);
    tracep->declBit(c+1661,"wb_err_o", false,-1);
    tracep->declBit(c+778,"wb_int_o", false,-1);
    tracep->declBit(c+779,"done", false,-1);
    tracep->declBus(c+780,"paddr", false,-1, 31,0);
    tracep->declQuad(c+781,"data", false,-1, 63,0);
    tracep->declBit(c+783,"is_flash_access", false,-1);
    tracep->declBus(c+784,"tmp", false,-1, 31,0);
    tracep->declQuad(c+785,"tmp64", false,-1, 63,0);
    tracep->declBus(c+787,"counter", false,-1, 7,0);
    tracep->declBit(c+788,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1824,"Tp", false,-1, 31,0);
    tracep->declBit(c+1574,"wb_clk_i", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBus(c+770,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+771,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+772,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+773,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+774,"wb_we_i", false,-1);
    tracep->declBit(c+775,"wb_stb_i", false,-1);
    tracep->declBit(c+776,"wb_cyc_i", false,-1);
    tracep->declBit(c+777,"wb_ack_o", false,-1);
    tracep->declBit(c+1661,"wb_err_o", false,-1);
    tracep->declBit(c+778,"wb_int_o", false,-1);
    tracep->declBus(c+1433,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+673,"sclk_pad_o", false,-1);
    tracep->declBit(c+1434,"mosi_pad_o", false,-1);
    tracep->declBit(c+1596,"miso_pad_i", false,-1);
    tracep->declBus(c+789,"divider", false,-1, 15,0);
    tracep->declBus(c+790,"ctrl", false,-1, 13,0);
    tracep->declBus(c+791,"ss", false,-1, 7,0);
    tracep->declBus(c+792,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+793,"rx", false,-1, 127,0);
    tracep->declBit(c+797,"rx_negedge", false,-1);
    tracep->declBit(c+798,"tx_negedge", false,-1);
    tracep->declBus(c+799,"char_len", false,-1, 6,0);
    tracep->declBit(c+800,"go", false,-1);
    tracep->declBit(c+801,"lsb", false,-1);
    tracep->declBit(c+802,"ie", false,-1);
    tracep->declBit(c+803,"ass", false,-1);
    tracep->declBit(c+804,"spi_divider_sel", false,-1);
    tracep->declBit(c+805,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+806,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+807,"spi_ss_sel", false,-1);
    tracep->declBit(c+808,"tip", false,-1);
    tracep->declBit(c+809,"pos_edge", false,-1);
    tracep->declBit(c+810,"neg_edge", false,-1);
    tracep->declBit(c+811,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1824,"Tp", false,-1, 31,0);
    tracep->declBit(c+1574,"clk_in", false,-1);
    tracep->declBit(c+1575,"rst", false,-1);
    tracep->declBit(c+808,"enable", false,-1);
    tracep->declBit(c+800,"go", false,-1);
    tracep->declBit(c+811,"last_clk", false,-1);
    tracep->declBus(c+789,"divider", false,-1, 15,0);
    tracep->declBit(c+673,"clk_out", false,-1);
    tracep->declBit(c+809,"pos_edge", false,-1);
    tracep->declBit(c+810,"neg_edge", false,-1);
    tracep->declBus(c+812,"cnt", false,-1, 15,0);
    tracep->declBit(c+813,"cnt_zero", false,-1);
    tracep->declBit(c+814,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1824,"Tp", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"rst", false,-1);
    tracep->declBus(c+815,"latch", false,-1, 3,0);
    tracep->declBus(c+773,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+799,"len", false,-1, 6,0);
    tracep->declBit(c+801,"lsb", false,-1);
    tracep->declBit(c+800,"go", false,-1);
    tracep->declBit(c+809,"pos_edge", false,-1);
    tracep->declBit(c+810,"neg_edge", false,-1);
    tracep->declBit(c+797,"rx_negedge", false,-1);
    tracep->declBit(c+798,"tx_negedge", false,-1);
    tracep->declBit(c+808,"tip", false,-1);
    tracep->declBit(c+811,"last", false,-1);
    tracep->declBus(c+771,"p_in", false,-1, 31,0);
    tracep->declArray(c+793,"p_out", false,-1, 127,0);
    tracep->declBit(c+673,"s_clk", false,-1);
    tracep->declBit(c+1596,"s_in", false,-1);
    tracep->declBit(c+1434,"s_out", false,-1);
    tracep->declBus(c+816,"cnt", false,-1, 7,0);
    tracep->declArray(c+793,"data", false,-1, 127,0);
    tracep->declBus(c+817,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+818,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+819,"rx_clk", false,-1);
    tracep->declBit(c+820,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1245,"auto_in_psel", false,-1);
    tracep->declBit(c+1246,"auto_in_penable", false,-1);
    tracep->declBit(c+1228,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1240,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1247,"auto_in_pready", false,-1);
    tracep->declBit(c+1661,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1605,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1594,"uart_rx", false,-1);
    tracep->declBit(c+1595,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1245,"in_psel", false,-1);
    tracep->declBit(c+1246,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1247,"in_pready", false,-1);
    tracep->declBit(c+1661,"in_pslverr", false,-1);
    tracep->declBus(c+1400,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1228,"in_pwrite", false,-1);
    tracep->declBus(c+1605,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1229,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1594,"uart_rx", false,-1);
    tracep->declBit(c+1595,"uart_tx", false,-1);
    tracep->declBit(c+821,"rtsn", false,-1);
    tracep->declBit(c+1661,"ctsn", false,-1);
    tracep->declBit(c+822,"dtr_pad_o", false,-1);
    tracep->declBit(c+1661,"dsr_pad_i", false,-1);
    tracep->declBit(c+1661,"ri_pad_i", false,-1);
    tracep->declBit(c+1661,"dcd_pad_i", false,-1);
    tracep->declBit(c+823,"interrupt", false,-1);
    tracep->declBit(c+1639,"reg_we", false,-1);
    tracep->declBit(c+1640,"reg_re", false,-1);
    tracep->declBus(c+1413,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1414,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+610,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1556,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+824,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBus(c+1413,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1415,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1556,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1639,"wb_we_i", false,-1);
    tracep->declBit(c+1640,"wb_re_i", false,-1);
    tracep->declBit(c+1595,"stx_pad_o", false,-1);
    tracep->declBit(c+1594,"srx_pad_i", false,-1);
    tracep->declBus(c+1811,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+824,"rts_pad_o", false,-1);
    tracep->declBit(c+822,"dtr_pad_o", false,-1);
    tracep->declBit(c+823,"int_o", false,-1);
    tracep->declBit(c+825,"enable", false,-1);
    tracep->declBit(c+826,"srx_pad", false,-1);
    tracep->declBus(c+827,"ier", false,-1, 3,0);
    tracep->declBus(c+828,"iir", false,-1, 3,0);
    tracep->declBus(c+829,"fcr", false,-1, 1,0);
    tracep->declBus(c+830,"mcr", false,-1, 4,0);
    tracep->declBus(c+831,"lcr", false,-1, 7,0);
    tracep->declBus(c+832,"msr", false,-1, 7,0);
    tracep->declBus(c+833,"dl", false,-1, 15,0);
    tracep->declBus(c+834,"scratch", false,-1, 7,0);
    tracep->declBit(c+835,"start_dlc", false,-1);
    tracep->declBit(c+836,"lsr_mask_d", false,-1);
    tracep->declBit(c+837,"msi_reset", false,-1);
    tracep->declBus(c+838,"dlc", false,-1, 15,0);
    tracep->declBus(c+839,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+840,"rx_reset", false,-1);
    tracep->declBit(c+841,"tx_reset", false,-1);
    tracep->declBit(c+842,"dlab", false,-1);
    tracep->declBit(c+1662,"cts_pad_i", false,-1);
    tracep->declBit(c+1661,"dsr_pad_i", false,-1);
    tracep->declBit(c+1661,"ri_pad_i", false,-1);
    tracep->declBit(c+1661,"dcd_pad_i", false,-1);
    tracep->declBit(c+843,"loopback", false,-1);
    tracep->declBit(c+1661,"cts", false,-1);
    tracep->declBit(c+1662,"dsr", false,-1);
    tracep->declBit(c+1662,"ri", false,-1);
    tracep->declBit(c+1662,"dcd", false,-1);
    tracep->declBit(c+844,"cts_c", false,-1);
    tracep->declBit(c+845,"dsr_c", false,-1);
    tracep->declBit(c+846,"ri_c", false,-1);
    tracep->declBit(c+847,"dcd_c", false,-1);
    tracep->declBus(c+848,"lsr", false,-1, 7,0);
    tracep->declBit(c+849,"lsr0", false,-1);
    tracep->declBit(c+850,"lsr1", false,-1);
    tracep->declBit(c+851,"lsr2", false,-1);
    tracep->declBit(c+852,"lsr3", false,-1);
    tracep->declBit(c+853,"lsr4", false,-1);
    tracep->declBit(c+854,"lsr5", false,-1);
    tracep->declBit(c+855,"lsr6", false,-1);
    tracep->declBit(c+856,"lsr7", false,-1);
    tracep->declBit(c+857,"lsr0r", false,-1);
    tracep->declBit(c+858,"lsr1r", false,-1);
    tracep->declBit(c+859,"lsr2r", false,-1);
    tracep->declBit(c+860,"lsr3r", false,-1);
    tracep->declBit(c+861,"lsr4r", false,-1);
    tracep->declBit(c+862,"lsr5r", false,-1);
    tracep->declBit(c+863,"lsr6r", false,-1);
    tracep->declBit(c+864,"lsr7r", false,-1);
    tracep->declBit(c+98,"lsr_mask", false,-1);
    tracep->declBit(c+865,"rls_int", false,-1);
    tracep->declBit(c+866,"rda_int", false,-1);
    tracep->declBit(c+867,"ti_int", false,-1);
    tracep->declBit(c+868,"thre_int", false,-1);
    tracep->declBit(c+869,"ms_int", false,-1);
    tracep->declBit(c+870,"tf_push", false,-1);
    tracep->declBit(c+871,"rf_pop", false,-1);
    tracep->declBus(c+1641,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+872,"rf_error_bit", false,-1);
    tracep->declBit(c+850,"rf_overrun", false,-1);
    tracep->declBit(c+873,"rf_push_pulse", false,-1);
    tracep->declBus(c+874,"rf_count", false,-1, 4,0);
    tracep->declBus(c+875,"tf_count", false,-1, 4,0);
    tracep->declBus(c+876,"tstate", false,-1, 2,0);
    tracep->declBus(c+877,"rstate", false,-1, 3,0);
    tracep->declBus(c+878,"counter_t", false,-1, 9,0);
    tracep->declBit(c+879,"thre_set_en", false,-1);
    tracep->declBus(c+880,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+881,"block_value", false,-1, 7,0);
    tracep->declBit(c+882,"serial_out", false,-1);
    tracep->declBit(c+883,"serial_in", false,-1);
    tracep->declBit(c+99,"lsr_mask_condition", false,-1);
    tracep->declBit(c+100,"iir_read", false,-1);
    tracep->declBit(c+101,"msr_read", false,-1);
    tracep->declBit(c+102,"fifo_read", false,-1);
    tracep->declBit(c+103,"fifo_write", false,-1);
    tracep->declBus(c+884,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+885,"lsr0_d", false,-1);
    tracep->declBit(c+886,"lsr1_d", false,-1);
    tracep->declBit(c+887,"lsr2_d", false,-1);
    tracep->declBit(c+888,"lsr3_d", false,-1);
    tracep->declBit(c+889,"lsr4_d", false,-1);
    tracep->declBit(c+890,"lsr5_d", false,-1);
    tracep->declBit(c+891,"lsr6_d", false,-1);
    tracep->declBit(c+892,"lsr7_d", false,-1);
    tracep->declBit(c+893,"rls_int_d", false,-1);
    tracep->declBit(c+894,"thre_int_d", false,-1);
    tracep->declBit(c+895,"ms_int_d", false,-1);
    tracep->declBit(c+896,"ti_int_d", false,-1);
    tracep->declBit(c+897,"rda_int_d", false,-1);
    tracep->declBit(c+898,"rls_int_rise", false,-1);
    tracep->declBit(c+899,"thre_int_rise", false,-1);
    tracep->declBit(c+900,"ms_int_rise", false,-1);
    tracep->declBit(c+901,"ti_int_rise", false,-1);
    tracep->declBit(c+902,"rda_int_rise", false,-1);
    tracep->declBit(c+903,"rls_int_pnd", false,-1);
    tracep->declBit(c+904,"rda_int_pnd", false,-1);
    tracep->declBit(c+905,"thre_int_pnd", false,-1);
    tracep->declBit(c+906,"ms_int_pnd", false,-1);
    tracep->declBit(c+907,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1824,"Tp", false,-1, 31,0);
    tracep->declBus(c+1824,"width", false,-1, 31,0);
    tracep->declBus(c+1790,"init_value", false,-1, 0,0);
    tracep->declBit(c+1575,"rst_i", false,-1);
    tracep->declBit(c+1574,"clk_i", false,-1);
    tracep->declBit(c+1661,"stage1_rst_i", false,-1);
    tracep->declBit(c+1662,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1594,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+826,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+908,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBus(c+831,"lcr", false,-1, 7,0);
    tracep->declBit(c+871,"rf_pop", false,-1);
    tracep->declBit(c+883,"srx_pad_i", false,-1);
    tracep->declBit(c+825,"enable", false,-1);
    tracep->declBit(c+840,"rx_reset", false,-1);
    tracep->declBit(c+98,"lsr_mask", false,-1);
    tracep->declBus(c+878,"counter_t", false,-1, 9,0);
    tracep->declBus(c+874,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1641,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+850,"rf_overrun", false,-1);
    tracep->declBit(c+872,"rf_error_bit", false,-1);
    tracep->declBus(c+877,"rstate", false,-1, 3,0);
    tracep->declBit(c+873,"rf_push_pulse", false,-1);
    tracep->declBus(c+909,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+910,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+911,"rshift", false,-1, 7,0);
    tracep->declBit(c+912,"rparity", false,-1);
    tracep->declBit(c+913,"rparity_error", false,-1);
    tracep->declBit(c+914,"rframing_error", false,-1);
    tracep->declBit(c+915,"rbit_in", false,-1);
    tracep->declBit(c+916,"rparity_xor", false,-1);
    tracep->declBus(c+917,"counter_b", false,-1, 7,0);
    tracep->declBit(c+918,"rf_push_q", false,-1);
    tracep->declBus(c+919,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+920,"rf_push", false,-1);
    tracep->declBit(c+921,"break_error", false,-1);
    tracep->declBit(c+922,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+923,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+924,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+925,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1664,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1809,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1808,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1804,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1806,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1805,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1807,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1803,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1811,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1812,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1825,"sr_push", false,-1, 3,0);
    tracep->declBus(c+926,"toc_value", false,-1, 9,0);
    tracep->declBus(c+927,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1826,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1827,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1797,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1788,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBit(c+873,"push", false,-1);
    tracep->declBit(c+871,"pop", false,-1);
    tracep->declBus(c+919,"data_in", false,-1, 10,0);
    tracep->declBit(c+840,"fifo_reset", false,-1);
    tracep->declBit(c+98,"reset_status", false,-1);
    tracep->declBus(c+1641,"data_out", false,-1, 10,0);
    tracep->declBit(c+850,"overrun", false,-1);
    tracep->declBus(c+874,"count", false,-1, 4,0);
    tracep->declBit(c+872,"error_bit", false,-1);
    tracep->declBus(c+1642,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+928+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+944,"top", false,-1, 3,0);
    tracep->declBus(c+945,"bottom", false,-1, 3,0);
    tracep->declBus(c+946,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+947,"word0", false,-1, 2,0);
    tracep->declBus(c+948,"word1", false,-1, 2,0);
    tracep->declBus(c+949,"word2", false,-1, 2,0);
    tracep->declBus(c+950,"word3", false,-1, 2,0);
    tracep->declBus(c+951,"word4", false,-1, 2,0);
    tracep->declBus(c+952,"word5", false,-1, 2,0);
    tracep->declBus(c+953,"word6", false,-1, 2,0);
    tracep->declBus(c+954,"word7", false,-1, 2,0);
    tracep->declBus(c+955,"word8", false,-1, 2,0);
    tracep->declBus(c+956,"word9", false,-1, 2,0);
    tracep->declBus(c+957,"word10", false,-1, 2,0);
    tracep->declBus(c+958,"word11", false,-1, 2,0);
    tracep->declBus(c+959,"word12", false,-1, 2,0);
    tracep->declBus(c+960,"word13", false,-1, 2,0);
    tracep->declBus(c+961,"word14", false,-1, 2,0);
    tracep->declBus(c+962,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1797,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1817,"data_width", false,-1, 31,0);
    tracep->declBus(c+1827,"depth", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+873,"we", false,-1);
    tracep->declBus(c+944,"a", false,-1, 3,0);
    tracep->declBus(c+945,"dpra", false,-1, 3,0);
    tracep->declBus(c+963,"di", false,-1, 7,0);
    tracep->declBus(c+1642,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+611+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBus(c+831,"lcr", false,-1, 7,0);
    tracep->declBit(c+870,"tf_push", false,-1);
    tracep->declBus(c+1415,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+825,"enable", false,-1);
    tracep->declBit(c+841,"tx_reset", false,-1);
    tracep->declBit(c+98,"lsr_mask", false,-1);
    tracep->declBit(c+882,"stx_pad_o", false,-1);
    tracep->declBus(c+876,"tstate", false,-1, 2,0);
    tracep->declBus(c+875,"tf_count", false,-1, 4,0);
    tracep->declBus(c+964,"counter", false,-1, 4,0);
    tracep->declBus(c+965,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+966,"shift_out", false,-1, 6,0);
    tracep->declBit(c+967,"stx_o_tmp", false,-1);
    tracep->declBit(c+968,"parity_xor", false,-1);
    tracep->declBit(c+969,"tf_pop", false,-1);
    tracep->declBit(c+970,"bit_out", false,-1);
    tracep->declBus(c+1415,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1213,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+971,"tf_overrun", false,-1);
    tracep->declBus(c+1655,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1652,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1656,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1657,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1666,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1667,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1817,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1827,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1797,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1788,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+1575,"wb_rst_i", false,-1);
    tracep->declBit(c+870,"push", false,-1);
    tracep->declBit(c+969,"pop", false,-1);
    tracep->declBus(c+1415,"data_in", false,-1, 7,0);
    tracep->declBit(c+841,"fifo_reset", false,-1);
    tracep->declBit(c+98,"reset_status", false,-1);
    tracep->declBus(c+1213,"data_out", false,-1, 7,0);
    tracep->declBit(c+971,"overrun", false,-1);
    tracep->declBus(c+875,"count", false,-1, 4,0);
    tracep->declBus(c+972,"top", false,-1, 3,0);
    tracep->declBus(c+973,"bottom", false,-1, 3,0);
    tracep->declBus(c+974,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1797,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1817,"data_width", false,-1, 31,0);
    tracep->declBus(c+1827,"depth", false,-1, 31,0);
    tracep->declBit(c+1574,"clk", false,-1);
    tracep->declBit(c+870,"we", false,-1);
    tracep->declBus(c+972,"a", false,-1, 3,0);
    tracep->declBus(c+973,"dpra", false,-1, 3,0);
    tracep->declBus(c+1415,"di", false,-1, 7,0);
    tracep->declBus(c+1213,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+627+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBit(c+1235,"auto_in_psel", false,-1);
    tracep->declBit(c+1236,"auto_in_penable", false,-1);
    tracep->declBit(c+1228,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1237,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1229,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+678,"auto_in_pready", false,-1);
    tracep->declBit(c+1659,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1660,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1588,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1589,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1590,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1591,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1592,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1593,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1574,"clock", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1412,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1235,"in_psel", false,-1);
    tracep->declBit(c+1236,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1228,"in_pwrite", false,-1);
    tracep->declBus(c+1229,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1230,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+678,"in_pready", false,-1);
    tracep->declBus(c+1660,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1659,"in_pslverr", false,-1);
    tracep->declBus(c+1588,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1591,"vga_hsync", false,-1);
    tracep->declBit(c+1592,"vga_vsync", false,-1);
    tracep->declBit(c+1593,"vga_valid", false,-1);
    tracep->declBus(c+975,"h_addr", false,-1, 9,0);
    tracep->declBus(c+643,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1214,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1416,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+678,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1574,"pclk", false,-1);
    tracep->declBit(c+1575,"reset", false,-1);
    tracep->declBus(c+1214,"vga_data", false,-1, 23,0);
    tracep->declBus(c+975,"h_addr", false,-1, 9,0);
    tracep->declBus(c+643,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1591,"hsync", false,-1);
    tracep->declBit(c+1592,"vsync", false,-1);
    tracep->declBit(c+1593,"valid", false,-1);
    tracep->declBus(c+1588,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1589,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1590,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1828,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1829,"h_active", false,-1, 31,0);
    tracep->declBus(c+1830,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1831,"h_total", false,-1, 31,0);
    tracep->declBus(c+1795,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1832,"v_active", false,-1, 31,0);
    tracep->declBus(c+1833,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1834,"v_total", false,-1, 31,0);
    tracep->declBus(c+976,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+644,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+977,"h_valid", false,-1);
    tracep->declBit(c+645,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+673,"sck", false,-1);
    tracep->declBit(c+1446,"ss", false,-1);
    tracep->declBit(c+1434,"mosi", false,-1);
    tracep->declBit(c+1197,"miso", false,-1);
    tracep->declBus(c+1198,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1199,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1643,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+673,"sck", false,-1);
    tracep->declBit(c+1447,"ss", false,-1);
    tracep->declBit(c+1434,"mosi", false,-1);
    tracep->declBit(c+1644,"miso", false,-1);
    tracep->declBit(c+1447,"reset", false,-1);
    tracep->declBus(c+1191,"state", false,-1, 2,0);
    tracep->declBus(c+1192,"counter", false,-1, 7,0);
    tracep->declBus(c+1193,"cmd", false,-1, 7,0);
    tracep->declBus(c+1194,"addr", false,-1, 23,0);
    tracep->declBus(c+1195,"data", false,-1, 31,0);
    tracep->declBit(c+1196,"ren", false,-1);
    tracep->declBus(c+1645,"rdata", false,-1, 31,0);
    tracep->declBus(c+1646,"raddr", false,-1, 31,0);
    tracep->declBus(c+1200,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+673,"clock", false,-1);
    tracep->declBit(c+1196,"valid", false,-1);
    tracep->declBus(c+1193,"cmd", false,-1, 7,0);
    tracep->declBus(c+1646,"addr", false,-1, 31,0);
    tracep->declBus(c+1645,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1597,"sck", false,-1);
    tracep->declBit(c+1536,"ce_n", false,-1);
    tracep->declBus(c+1598,"dio", false,-1, 3,0);
    tracep->declBus(c+663,"dio_out", false,-1, 3,0);
    tracep->declBus(c+664,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1598,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1765,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1824,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1795,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1798,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1797,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1788,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+665,"state", false,-1, 2,0);
    tracep->declBus(c+1647,"next_state", false,-1, 2,0);
    tracep->declBus(c+666,"counter", false,-1, 7,0);
    tracep->declBus(c+667,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+668,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+669,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+670,"is_read_op", false,-1);
    tracep->declBit(c+671,"is_write_op", false,-1);
    tracep->declBus(c+672,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1648,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1435,"cke", false,-1);
    tracep->declBit(c+674,"cs", false,-1);
    tracep->declBit(c+675,"ras", false,-1);
    tracep->declBit(c+676,"cas", false,-1);
    tracep->declBit(c+677,"we", false,-1);
    tracep->declBus(c+1600,"a", false,-1, 13,0);
    tracep->declBus(c+1436,"ba", false,-1, 1,0);
    tracep->declBus(c+1437,"dqm", false,-1, 3,0);
    tracep->declBus(c+1496,"dq", false,-1, 31,0);
    tracep->declBit(c+22,"cs_0", false,-1);
    tracep->declBit(c+23,"ras_0", false,-1);
    tracep->declBit(c+24,"cas_0", false,-1);
    tracep->declBit(c+25,"we_0", false,-1);
    tracep->declBit(c+26,"cs_1", false,-1);
    tracep->declBit(c+27,"ras_1", false,-1);
    tracep->declBit(c+28,"cas_1", false,-1);
    tracep->declBit(c+29,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1435,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1440,"a", false,-1, 12,0);
    tracep->declBus(c+1436,"ba", false,-1, 1,0);
    tracep->declBus(c+1437,"dqm", false,-1, 3,0);
    tracep->declBus(c+1496,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1435,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1440,"a", false,-1, 12,0);
    tracep->declBus(c+1436,"ba", false,-1, 1,0);
    tracep->declBus(c+1448,"dqm", false,-1, 1,0);
    tracep->declBus(c+1497,"dq", false,-1, 15,0);
    tracep->declBus(c+1808,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1809,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1803,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1835,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1804,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1805,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1664,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1131,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1132,"bl", false,-1, 2,0);
    tracep->declBus(c+152,"command", false,-1, 3,0);
    tracep->declBus(c+1133,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1134,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1449,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1135,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1498,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1136,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1137+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1836,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1141,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1837,"state", false,-1, 2,0);
    tracep->declBit(c+1142,"write_brust", false,-1);
    tracep->declBus(c+1143,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1144,"read_burst", false,-1);
    tracep->declBit(c+1838,"flag", false,-1);
    tracep->declBus(c+1145,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1435,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1440,"a", false,-1, 12,0);
    tracep->declBus(c+1436,"ba", false,-1, 1,0);
    tracep->declBus(c+1450,"dqm", false,-1, 1,0);
    tracep->declBus(c+1499,"dq", false,-1, 15,0);
    tracep->declBus(c+1808,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1809,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1803,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1835,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1804,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1805,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1664,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1146,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1147,"bl", false,-1, 2,0);
    tracep->declBus(c+152,"command", false,-1, 3,0);
    tracep->declBus(c+1148,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1149,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1449,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1150,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1500,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1151,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1152+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1839,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1156,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1840,"state", false,-1, 2,0);
    tracep->declBit(c+1157,"write_brust", false,-1);
    tracep->declBus(c+1158,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1159,"read_burst", false,-1);
    tracep->declBit(c+1841,"flag", false,-1);
    tracep->declBus(c+1160,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1435,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1440,"a", false,-1, 12,0);
    tracep->declBus(c+1436,"ba", false,-1, 1,0);
    tracep->declBus(c+1437,"dqm", false,-1, 3,0);
    tracep->declBus(c+1496,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1435,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1440,"a", false,-1, 12,0);
    tracep->declBus(c+1436,"ba", false,-1, 1,0);
    tracep->declBus(c+1448,"dqm", false,-1, 1,0);
    tracep->declBus(c+1497,"dq", false,-1, 15,0);
    tracep->declBus(c+1808,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1809,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1803,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1835,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1804,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1805,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1664,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1161,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1162,"bl", false,-1, 2,0);
    tracep->declBus(c+153,"command", false,-1, 3,0);
    tracep->declBus(c+1163,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1164,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1449,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1165,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1501,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1166,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1167+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1842,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1171,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1843,"state", false,-1, 2,0);
    tracep->declBit(c+1172,"write_brust", false,-1);
    tracep->declBus(c+1173,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1174,"read_burst", false,-1);
    tracep->declBit(c+1844,"flag", false,-1);
    tracep->declBus(c+1175,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1599,"clk", false,-1);
    tracep->declBit(c+1435,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1440,"a", false,-1, 12,0);
    tracep->declBus(c+1436,"ba", false,-1, 1,0);
    tracep->declBus(c+1450,"dqm", false,-1, 1,0);
    tracep->declBus(c+1499,"dq", false,-1, 15,0);
    tracep->declBus(c+1808,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1809,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1803,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1835,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1804,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1805,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1664,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1176,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1177,"bl", false,-1, 2,0);
    tracep->declBus(c+153,"command", false,-1, 3,0);
    tracep->declBus(c+1178,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1179,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1449,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1180,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1502,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1181,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1182+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1845,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1186,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1846,"state", false,-1, 2,0);
    tracep->declBit(c+1187,"write_brust", false,-1);
    tracep->declBus(c+1188,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1189,"read_burst", false,-1);
    tracep->declBit(c+1847,"flag", false,-1);
    tracep->declBus(c+1190,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+82,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+83,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+84,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+85,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+86,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+87,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+89,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+90,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+91,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+92,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+93,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+94,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+95,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+96,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullIData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullIData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
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
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+156,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+157,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+158,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+159,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+160,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+161,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+162,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+163,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+164,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+168,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+169,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+170,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+171,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+185,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+186,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+187,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+189,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+190,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+191,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+192,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+193,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
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
    bufp->fullBit(oldp+647,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+648,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+649,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+650,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+651,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+652,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+653,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+654,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+655,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+656,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+657,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+658,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+659,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+660,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+661,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+662,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+668,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+669,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+674,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+675,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+676,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+677,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+685,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+687,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullSData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+691,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+692,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+693,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+694,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+695,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+696,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+697,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+698,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+701,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+702,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+705,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+706,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+710,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+714,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+729,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+730,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+732,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+733,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+734,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+735,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+736,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+744,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+784,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+785,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+797,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+799,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+800,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+801,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+802,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+803,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+805,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+807,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+811,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+813,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+814,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+817,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+821,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+822,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+824,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+842,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+843,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+844,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+845,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+846,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+847,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+848,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+851,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+852,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+853,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+872,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+879,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+898,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+899,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+900,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+901,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+902,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+921,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+922,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+923,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+924,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+925,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+927,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+946,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+963,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+974,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullIData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+992,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_busy));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1021,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1027,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu_valid));
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_lsu_valid));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu_valid));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1074,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1089,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1090,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1092,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1095,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd),5);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd),5);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd),5);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__skip));
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1118,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1121,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state)))),2);
    bufp->fullCData(oldp+1122,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1123,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1124,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1125,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1126,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1127,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1128,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1129,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1130,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1131,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1132,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1146,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1147,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1161,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1162,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1176,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1177,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1196,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1204,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1217,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1237,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1240,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1244,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1247,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1252,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1255,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1267,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullSData(oldp+1286,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1400,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1406,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1407,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1408,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1409,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullIData(oldp+1410,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1411,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1412,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1413,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1416,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1418,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1419,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1420,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1421,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1422,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1423,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1424,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1425,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1426,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1427,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1428,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1429,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1430,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1431,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1432,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullCData(oldp+1433,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullSData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1446,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1448,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1449,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1450,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1451,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1454,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1457,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1460,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1475,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1477,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1478,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1485,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1486,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1488,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1497,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1499,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullCData(oldp+1503,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1504,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1515,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1521,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1525,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullBit(oldp+1527,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1528,(((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))))));
    bufp->fullBit(oldp+1529,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1530,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1531,(((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)))));
    bufp->fullBit(oldp+1532,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1534,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1535,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullSData(oldp+1540,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1574,(vlSelf->clock));
    bufp->fullBit(oldp+1575,(vlSelf->reset));
    bufp->fullSData(oldp+1576,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1577,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1578,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1579,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1580,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1581,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1582,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1583,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1584,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1585,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1586,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1587,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1588,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1589,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1590,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1591,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1592,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1593,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1594,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1595,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1596,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1599,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1600,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1601,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1602,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | (IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+1603,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
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
    bufp->fullBit(oldp+1604,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1606,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1607,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1608,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+1610,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1615,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullBit(oldp+1616,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullCData(oldp+1617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1618,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1619,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1620,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1621,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+1622,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1626,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1627,(((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
                               | (((0x33U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
                                  | ((0x33U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1628,((1U & ((0x33U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1629,((1U & ((0x33U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1630,((1U & ((0x33U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1631,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
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
    bufp->fullBit(oldp+1632,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1633,((0xfU & vlSelf->__VdfgTmp_h81912a5e__0)),4);
    bufp->fullBit(oldp+1634,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1635,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1638,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1641,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1644,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1646,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1649,(0x226U),32);
    bufp->fullIData(oldp+1650,(0x64U),32);
    bufp->fullIData(oldp+1651,(0x200U),32);
    bufp->fullCData(oldp+1652,(1U),3);
    bufp->fullIData(oldp+1653,(0xb00U),32);
    bufp->fullIData(oldp+1654,(9U),32);
    bufp->fullCData(oldp+1655,(0U),3);
    bufp->fullCData(oldp+1656,(2U),3);
    bufp->fullCData(oldp+1657,(3U),3);
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1661,(0U));
    bufp->fullBit(oldp+1662,(1U));
    bufp->fullCData(oldp+1663,(0U),2);
    bufp->fullCData(oldp+1664,(0U),4);
    bufp->fullCData(oldp+1665,(0U),8);
    bufp->fullCData(oldp+1666,(4U),3);
    bufp->fullCData(oldp+1667,(5U),3);
    bufp->fullCData(oldp+1668,(6U),3);
    bufp->fullCData(oldp+1669,(7U),3);
    bufp->fullSData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_rd),10);
    bufp->fullIData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[0]),32);
    bufp->fullIData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[1]),32);
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[2]),32);
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[3]),32);
    bufp->fullIData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[4]),32);
    bufp->fullIData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[5]),32);
    bufp->fullIData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[6]),32);
    bufp->fullIData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[7]),32);
    bufp->fullCData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[0]),4);
    bufp->fullCData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[1]),4);
    bufp->fullCData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[2]),4);
    bufp->fullCData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[3]),4);
    bufp->fullCData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[4]),4);
    bufp->fullCData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[5]),4);
    bufp->fullCData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[6]),4);
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[7]),4);
    bufp->fullIData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[0]),32);
    bufp->fullIData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[1]),32);
    bufp->fullIData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[2]),32);
    bufp->fullIData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[3]),32);
    bufp->fullIData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[4]),32);
    bufp->fullIData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[5]),32);
    bufp->fullIData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[6]),32);
    bufp->fullIData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[7]),32);
    bufp->fullCData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[0]),2);
    bufp->fullCData(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[1]),2);
    bufp->fullCData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[2]),2);
    bufp->fullCData(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[3]),2);
    bufp->fullCData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[4]),2);
    bufp->fullCData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[5]),2);
    bufp->fullCData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[6]),2);
    bufp->fullCData(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[7]),2);
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[0]));
    bufp->fullBit(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[1]));
    bufp->fullBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[2]));
    bufp->fullBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[3]));
    bufp->fullBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[4]));
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[5]));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[6]));
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[7]));
    bufp->fullCData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen),8);
    bufp->fullCData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize),3);
    bufp->fullCData(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst),2);
    bufp->fullCData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_counter),3);
    bufp->fullCData(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen),3);
    bufp->fullCData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd),3);
    bufp->fullCData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__next_state_rd),3);
    bufp->fullSData(oldp+1718,(1U),16);
    bufp->fullBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1735,(0U),32);
    bufp->fullBit(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1765,(0U),32);
    bufp->fullBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1774,(1U),2);
    bufp->fullCData(oldp+1775,(2U),2);
    bufp->fullIData(oldp+1776,(0x20U),32);
    bufp->fullIData(oldp+1777,(4U),32);
    bufp->fullIData(oldp+1778,(0x79737978U),32);
    bufp->fullIData(oldp+1779,(0x17e3c19U),32);
    bufp->fullCData(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullIData(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1788,(5U),32);
    bufp->fullBit(oldp+1789,(0U));
    bufp->fullBit(oldp+1790,(1U));
    bufp->fullCData(oldp+1791,(0x1bU),8);
    bufp->fullCData(oldp+1792,(0xebU),8);
    bufp->fullCData(oldp+1793,(0x38U),8);
    bufp->fullIData(oldp+1794,(0x18U),32);
    bufp->fullIData(oldp+1795,(2U),32);
    bufp->fullIData(oldp+1796,(6U),32);
    bufp->fullIData(oldp+1797,(4U),32);
    bufp->fullIData(oldp+1798,(3U),32);
    bufp->fullIData(oldp+1799,(0xdU),32);
    bufp->fullIData(oldp+1800,(0x2000U),32);
    bufp->fullIData(oldp+1801,(0x2710U),32);
    bufp->fullIData(oldp+1802,(0x30cU),32);
    bufp->fullCData(oldp+1803,(7U),4);
    bufp->fullCData(oldp+1804,(3U),4);
    bufp->fullCData(oldp+1805,(5U),4);
    bufp->fullCData(oldp+1806,(4U),4);
    bufp->fullCData(oldp+1807,(6U),4);
    bufp->fullCData(oldp+1808,(2U),4);
    bufp->fullCData(oldp+1809,(1U),4);
    bufp->fullSData(oldp+1810,(0x20U),13);
    bufp->fullCData(oldp+1811,(8U),4);
    bufp->fullCData(oldp+1812,(9U),4);
    bufp->fullIData(oldp+1813,(0xaU),32);
    bufp->fullIData(oldp+1814,(0x11U),32);
    bufp->fullIData(oldp+1815,(0x30000000U),32);
    bufp->fullIData(oldp+1816,(0x3fffffffU),32);
    bufp->fullIData(oldp+1817,(8U),32);
    bufp->fullCData(oldp+1818,(4U),5);
    bufp->fullCData(oldp+1819,(0U),5);
    bufp->fullCData(oldp+1820,(0x10U),5);
    bufp->fullCData(oldp+1821,(0x14U),5);
    bufp->fullCData(oldp+1822,(0x18U),5);
    bufp->fullIData(oldp+1823,(0x3000000U),32);
    bufp->fullIData(oldp+1824,(1U),32);
    bufp->fullCData(oldp+1825,(0xaU),4);
    bufp->fullIData(oldp+1826,(0xbU),32);
    bufp->fullIData(oldp+1827,(0x10U),32);
    bufp->fullIData(oldp+1828,(0x60U),32);
    bufp->fullIData(oldp+1829,(0x90U),32);
    bufp->fullIData(oldp+1830,(0x310U),32);
    bufp->fullIData(oldp+1831,(0x320U),32);
    bufp->fullIData(oldp+1832,(0x23U),32);
    bufp->fullIData(oldp+1833,(0x203U),32);
    bufp->fullIData(oldp+1834,(0x20dU),32);
    bufp->fullIData(oldp+1835,(0x400000U),32);
    bufp->fullCData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1838,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1839,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1840,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1841,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+1842,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1843,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1844,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1846,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1847,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
