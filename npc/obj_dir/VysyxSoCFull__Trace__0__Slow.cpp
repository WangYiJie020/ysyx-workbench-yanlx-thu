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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1564,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1565,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1566,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1574,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1575,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1576,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1579,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1580,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1581,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1582,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1583,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1564,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1565,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1566,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1574,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1575,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1576,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1579,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1580,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1581,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1582,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1583,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+676,"spi_sck", false,-1);
    tracep->declBus(c+1388,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1389,"spi_mosi", false,-1);
    tracep->declBit(c+1584,"spi_miso", false,-1);
    tracep->declBit(c+1582,"uart_rx", false,-1);
    tracep->declBit(c+1583,"uart_tx", false,-1);
    tracep->declBit(c+1585,"psram_sck", false,-1);
    tracep->declBit(c+1458,"psram_ce_n", false,-1);
    tracep->declBus(c+1586,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1587,"sdram_clk", false,-1);
    tracep->declBit(c+1390,"sdram_cke", false,-1);
    tracep->declBit(c+677,"sdram_cs", false,-1);
    tracep->declBit(c+678,"sdram_ras", false,-1);
    tracep->declBit(c+679,"sdram_cas", false,-1);
    tracep->declBit(c+680,"sdram_we", false,-1);
    tracep->declBus(c+1588,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1391,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1392,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1451,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1564,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1565,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1566,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1574,"ps2_clk", false,-1);
    tracep->declBit(c+1575,"ps2_data", false,-1);
    tracep->declBus(c+1576,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1579,"vga_hsync", false,-1);
    tracep->declBit(c+1580,"vga_vsync", false,-1);
    tracep->declBit(c+1581,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1642,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1643,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1644,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1198,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+152,"in_psel", false,-1);
    tracep->declBit(c+153,"in_penable", false,-1);
    tracep->declBus(c+1645,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1199,"in_pwrite", false,-1);
    tracep->declBus(c+1200,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"in_pready", false,-1);
    tracep->declBus(c+1460,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1461,"in_pslverr", false,-1);
    tracep->declBus(c+1198,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+152,"out_psel", false,-1);
    tracep->declBit(c+153,"out_penable", false,-1);
    tracep->declBus(c+1645,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1199,"out_pwrite", false,-1);
    tracep->declBus(c+1200,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"out_pready", false,-1);
    tracep->declBus(c+1460,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1461,"out_pslverr", false,-1);
    tracep->declBus(c+1646,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1647,"SCALE_SHIFT", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+152,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+153,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1199,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1198,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1645,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1461,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1460,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1202,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1203,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1204,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1645,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1648,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1649,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1589,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1590,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1205,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1645,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1650,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+155,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1206,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1207,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1205,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1645,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+682,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1650,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+683,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1208,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1591,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1198,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1645,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1592,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1650,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+156,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1209,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1210,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1205,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1645,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1211,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1650,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1593,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1212,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1213,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1204,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1645,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+684,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+685,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+686,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1214,"sel_0", false,-1);
    tracep->declBit(c+1215,"sel_1", false,-1);
    tracep->declBit(c+1216,"sel_2", false,-1);
    tracep->declBit(c+1217,"sel_3", false,-1);
    tracep->declBit(c+1218,"sel_4", false,-1);
    tracep->declBit(c+1219,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+157,"auto_in_awready", false,-1);
    tracep->declBit(c+158,"auto_in_awvalid", false,-1);
    tracep->declBus(c+159,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+161,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+162,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+157,"auto_in_wready", false,-1);
    tracep->declBit(c+163,"auto_in_wvalid", false,-1);
    tracep->declBus(c+164,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+166,"auto_in_bready", false,-1);
    tracep->declBit(c+1462,"auto_in_bvalid", false,-1);
    tracep->declBus(c+167,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1463,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+168,"auto_in_arready", false,-1);
    tracep->declBit(c+169,"auto_in_arvalid", false,-1);
    tracep->declBus(c+170,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+171,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+172,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+173,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+174,"auto_in_rready", false,-1);
    tracep->declBit(c+1464,"auto_in_rvalid", false,-1);
    tracep->declBus(c+175,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1594,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1463,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+152,"auto_out_psel", false,-1);
    tracep->declBit(c+153,"auto_out_penable", false,-1);
    tracep->declBit(c+1199,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1198,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1200,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_out_pready", false,-1);
    tracep->declBit(c+1461,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1460,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+153,"nodeOut_penable", false,-1);
    tracep->declBus(c+176,"state", false,-1, 1,0);
    tracep->declBit(c+168,"accept_read", false,-1);
    tracep->declBit(c+157,"accept_write", false,-1);
    tracep->declBit(c+177,"is_write_r", false,-1);
    tracep->declBit(c+1199,"is_write", false,-1);
    tracep->declBus(c+175,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+167,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+178,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+179,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+180,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+181,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1465,"resp", false,-1, 1,0);
    tracep->declBus(c+182,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1463,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1464,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+183,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1462,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+184,"auto_in_awready", false,-1);
    tracep->declBit(c+1406,"auto_in_awvalid", false,-1);
    tracep->declBus(c+185,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+187,"auto_in_wready", false,-1);
    tracep->declBit(c+1409,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1410,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1411,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1412,"auto_in_wlast", false,-1);
    tracep->declBit(c+649,"auto_in_bready", false,-1);
    tracep->declBit(c+188,"auto_in_bvalid", false,-1);
    tracep->declBus(c+189,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+191,"auto_in_arready", false,-1);
    tracep->declBit(c+36,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+192,"auto_in_rvalid", false,-1);
    tracep->declBus(c+193,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+196,"auto_in_rlast", false,-1);
    tracep->declBit(c+157,"auto_out_awready", false,-1);
    tracep->declBit(c+158,"auto_out_awvalid", false,-1);
    tracep->declBus(c+159,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+161,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+162,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+157,"auto_out_wready", false,-1);
    tracep->declBit(c+163,"auto_out_wvalid", false,-1);
    tracep->declBus(c+164,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+166,"auto_out_bready", false,-1);
    tracep->declBit(c+1462,"auto_out_bvalid", false,-1);
    tracep->declBus(c+167,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1463,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+168,"auto_out_arready", false,-1);
    tracep->declBit(c+169,"auto_out_arvalid", false,-1);
    tracep->declBus(c+170,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+171,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+172,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+173,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+174,"auto_out_rready", false,-1);
    tracep->declBit(c+1464,"auto_out_rvalid", false,-1);
    tracep->declBus(c+175,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1594,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1463,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+166,"io_enq_ready", false,-1);
    tracep->declBit(c+1462,"io_enq_valid", false,-1);
    tracep->declBus(c+167,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1463,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+649,"io_deq_ready", false,-1);
    tracep->declBit(c+188,"io_deq_valid", false,-1);
    tracep->declBus(c+189,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+190,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+197,"wrap", false,-1);
    tracep->declBit(c+198,"wrap_1", false,-1);
    tracep->declBit(c+199,"maybe_full", false,-1);
    tracep->declBit(c+200,"ptr_match", false,-1);
    tracep->declBit(c+201,"empty", false,-1);
    tracep->declBit(c+202,"full", false,-1);
    tracep->declBit(c+1466,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+198,"R0_addr", false,-1);
    tracep->declBit(c+1651,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declBus(c+203,"R0_data", false,-1, 5,0);
    tracep->declBit(c+197,"W0_addr", false,-1);
    tracep->declBit(c+1466,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declBus(c+1595,"W0_data", false,-1, 5,0);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+174,"io_enq_ready", false,-1);
    tracep->declBit(c+1464,"io_enq_valid", false,-1);
    tracep->declBus(c+175,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1594,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1463,"io_enq_bits_resp", false,-1, 1,0);
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
    tracep->declBit(c+1467,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+208,"R0_addr", false,-1);
    tracep->declBit(c+1651,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declQuad(c+213,"R0_data", false,-1, 38,0);
    tracep->declBit(c+207,"W0_addr", false,-1);
    tracep->declBit(c+1467,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declQuad(c+1596,"W0_data", false,-1, 38,0);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+191,"io_enq_ready", false,-1);
    tracep->declBit(c+36,"io_enq_valid", false,-1);
    tracep->declBus(c+37,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+39,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+40,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+168,"io_deq_ready", false,-1);
    tracep->declBit(c+169,"io_deq_valid", false,-1);
    tracep->declBus(c+170,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+171,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+172,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+173,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+220,"wrap", false,-1);
    tracep->declBit(c+221,"wrap_1", false,-1);
    tracep->declBit(c+222,"maybe_full", false,-1);
    tracep->declBit(c+223,"ptr_match", false,-1);
    tracep->declBit(c+224,"empty", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->declBit(c+41,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+221,"R0_addr", false,-1);
    tracep->declBit(c+1651,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declQuad(c+226,"R0_data", false,-1, 46,0);
    tracep->declBit(c+220,"W0_addr", false,-1);
    tracep->declBit(c+41,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declQuad(c+42,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1406,"io_enq_valid", false,-1);
    tracep->declBus(c+185,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1407,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1408,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+186,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+157,"io_deq_ready", false,-1);
    tracep->declBit(c+158,"io_deq_valid", false,-1);
    tracep->declBus(c+159,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+160,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+161,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+162,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+233,"wrap", false,-1);
    tracep->declBit(c+234,"wrap_1", false,-1);
    tracep->declBit(c+235,"maybe_full", false,-1);
    tracep->declBit(c+236,"ptr_match", false,-1);
    tracep->declBit(c+237,"empty", false,-1);
    tracep->declBit(c+238,"full", false,-1);
    tracep->declBit(c+1413,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+234,"R0_addr", false,-1);
    tracep->declBit(c+1651,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declQuad(c+239,"R0_data", false,-1, 46,0);
    tracep->declBit(c+233,"W0_addr", false,-1);
    tracep->declBit(c+1413,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declQuad(c+1598,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+1409,"io_enq_valid", false,-1);
    tracep->declBus(c+1410,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1411,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1412,"io_enq_bits_last", false,-1);
    tracep->declBit(c+157,"io_deq_ready", false,-1);
    tracep->declBit(c+163,"io_deq_valid", false,-1);
    tracep->declBus(c+164,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+165,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+246,"wrap", false,-1);
    tracep->declBit(c+247,"wrap_1", false,-1);
    tracep->declBit(c+248,"maybe_full", false,-1);
    tracep->declBit(c+249,"ptr_match", false,-1);
    tracep->declBit(c+250,"empty", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+1414,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+247,"R0_addr", false,-1);
    tracep->declBit(c+1651,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declQuad(c+252,"R0_data", false,-1, 35,0);
    tracep->declBit(c+246,"W0_addr", false,-1);
    tracep->declBit(c+1414,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declQuad(c+1415,"W0_data", false,-1, 35,0);
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
    tracep->declBus(c+1642,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1643,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1644,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+101,"in_arready", false,-1);
    tracep->declBit(c+44,"in_arvalid", false,-1);
    tracep->declBus(c+45,"in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1600,"in_rready", false,-1);
    tracep->declBit(c+687,"in_rvalid", false,-1);
    tracep->declBus(c+688,"in_rid", false,-1, 3,0);
    tracep->declBus(c+689,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1652,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+690,"in_rlast", false,-1);
    tracep->declBit(c+102,"in_awready", false,-1);
    tracep->declBit(c+1417,"in_awvalid", false,-1);
    tracep->declBus(c+1653,"in_awid", false,-1, 3,0);
    tracep->declBus(c+981,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"in_wready", false,-1);
    tracep->declBit(c+1418,"in_wvalid", false,-1);
    tracep->declBus(c+983,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"in_wlast", false,-1);
    tracep->declBit(c+1601,"in_bready", false,-1);
    tracep->declBit(c+691,"in_bvalid", false,-1);
    tracep->declBus(c+688,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1652,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"out_arready", false,-1);
    tracep->declBit(c+44,"out_arvalid", false,-1);
    tracep->declBus(c+45,"out_arid", false,-1, 3,0);
    tracep->declBus(c+46,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1600,"out_rready", false,-1);
    tracep->declBit(c+687,"out_rvalid", false,-1);
    tracep->declBus(c+688,"out_rid", false,-1, 3,0);
    tracep->declBus(c+689,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1652,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+690,"out_rlast", false,-1);
    tracep->declBit(c+102,"out_awready", false,-1);
    tracep->declBit(c+1417,"out_awvalid", false,-1);
    tracep->declBus(c+1653,"out_awid", false,-1, 3,0);
    tracep->declBus(c+981,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"out_wready", false,-1);
    tracep->declBit(c+1418,"out_wvalid", false,-1);
    tracep->declBus(c+983,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"out_wlast", false,-1);
    tracep->declBit(c+1601,"out_bready", false,-1);
    tracep->declBit(c+691,"out_bvalid", false,-1);
    tracep->declBus(c+688,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1652,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1646,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1647,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1655,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1645,"RD_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1656,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1657,"RD_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1658,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1659,"WT_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1660,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1661,"WT_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1662,"request_counter_rd", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1663+i*1,"wait_counter_rd", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1671+i*1,"rid", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1679+i*1,"rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1687+i*1,"rresp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1695+i*1,"rlast", true,(i+0));
    }
    tracep->declBus(c+1703,"arlen", false,-1, 7,0);
    tracep->declBus(c+1704,"arsize", false,-1, 2,0);
    tracep->declBus(c+1705,"arburst", false,-1, 1,0);
    tracep->declBus(c+1706,"r_counter", false,-1, 2,0);
    tracep->declBus(c+1707,"rlen", false,-1, 2,0);
    tracep->declBus(c+1708,"state_rd", false,-1, 2,0);
    tracep->declBus(c+1709,"next_state_rd", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+259,"auto_in_awready", false,-1);
    tracep->declBit(c+1419,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1653,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+981,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+260,"auto_in_wready", false,-1);
    tracep->declBit(c+1420,"auto_in_wvalid", false,-1);
    tracep->declBus(c+983,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"auto_in_wlast", false,-1);
    tracep->declBit(c+1602,"auto_in_bready", false,-1);
    tracep->declBit(c+1220,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1221,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1222,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_in_arready", false,-1);
    tracep->declBit(c+50,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_in_rready", false,-1);
    tracep->declBit(c+262,"auto_in_rvalid", false,-1);
    tracep->declBus(c+263,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+266,"auto_in_rlast", false,-1);
    tracep->declBit(c+1545,"auto_out_awready", false,-1);
    tracep->declBit(c+1421,"auto_out_awvalid", false,-1);
    tracep->declBus(c+185,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+267,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1546,"auto_out_wready", false,-1);
    tracep->declBit(c+1422,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1410,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1411,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1412,"auto_out_wlast", false,-1);
    tracep->declBit(c+1547,"auto_out_bready", false,-1);
    tracep->declBit(c+268,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1221,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1223,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1224,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+105,"auto_out_arready", false,-1);
    tracep->declBit(c+51,"auto_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+104,"auto_out_rready", false,-1);
    tracep->declBit(c+262,"auto_out_rvalid", false,-1);
    tracep->declBus(c+263,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+270,"auto_out_rlast", false,-1);
    tracep->declBit(c+1422,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+271,"w_idle", false,-1);
    tracep->declBit(c+1548,"in_awready", false,-1);
    tracep->declBit(c+272,"busy", false,-1);
    tracep->declBus(c+273,"r_addr", false,-1, 31,0);
    tracep->declBus(c+274,"r_len", false,-1, 7,0);
    tracep->declBus(c+53,"len", false,-1, 7,0);
    tracep->declBus(c+54,"addr", false,-1, 31,0);
    tracep->declBit(c+275,"busy_1", false,-1);
    tracep->declBus(c+276,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+277,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+278,"len_1", false,-1, 7,0);
    tracep->declBus(c+1423,"addr_1", false,-1, 31,0);
    tracep->declBit(c+279,"wbeats_latched", false,-1);
    tracep->declBit(c+1421,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1424,"wbeats_valid", false,-1);
    tracep->declBus(c+280,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1425,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1412,"w_last", false,-1);
    tracep->declBit(c+1547,"nodeOut_bready", false,-1);
    tracep->declBus(c+1225,"error_0", false,-1, 1,0);
    tracep->declBus(c+1226,"error_1", false,-1, 1,0);
    tracep->declBus(c+1227,"error_2", false,-1, 1,0);
    tracep->declBus(c+1228,"error_3", false,-1, 1,0);
    tracep->declBus(c+1229,"error_4", false,-1, 1,0);
    tracep->declBus(c+1230,"error_5", false,-1, 1,0);
    tracep->declBus(c+1231,"error_6", false,-1, 1,0);
    tracep->declBus(c+1232,"error_7", false,-1, 1,0);
    tracep->declBus(c+1233,"error_8", false,-1, 1,0);
    tracep->declBus(c+1234,"error_9", false,-1, 1,0);
    tracep->declBus(c+1235,"error_10", false,-1, 1,0);
    tracep->declBus(c+1236,"error_11", false,-1, 1,0);
    tracep->declBus(c+1237,"error_12", false,-1, 1,0);
    tracep->declBus(c+1238,"error_13", false,-1, 1,0);
    tracep->declBus(c+1239,"error_14", false,-1, 1,0);
    tracep->declBus(c+1240,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
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
    tracep->declQuad(c+281,"ram", false,-1, 48,0);
    tracep->declBit(c+283,"full", false,-1);
    tracep->declBit(c+51,"io_deq_valid_0", false,-1);
    tracep->declBit(c+107,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1419,"io_enq_valid", false,-1);
    tracep->declBus(c+1653,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+981,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1654,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+982,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1652,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1549,"io_deq_ready", false,-1);
    tracep->declBit(c+1426,"io_deq_valid", false,-1);
    tracep->declBus(c+185,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1427,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+284,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1408,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+186,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+285,"ram", false,-1, 48,0);
    tracep->declBit(c+287,"full", false,-1);
    tracep->declBit(c+1426,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1550,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+1420,"io_enq_valid", false,-1);
    tracep->declBus(c+983,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+984,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+985,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1551,"io_deq_ready", false,-1);
    tracep->declBit(c+1428,"io_deq_valid", false,-1);
    tracep->declBus(c+1410,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1411,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1603,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+288,"ram", false,-1, 36,0);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+1428,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1552,"do_enq", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1553,"auto_in_awready", false,-1);
    tracep->declBit(c+1429,"auto_in_awvalid", false,-1);
    tracep->declBus(c+185,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1430,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1604,"auto_in_wready", false,-1);
    tracep->declBit(c+1431,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1410,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1411,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1554,"auto_in_bready", false,-1);
    tracep->declBit(c+291,"auto_in_bvalid", false,-1);
    tracep->declBus(c+292,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+293,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_in_arready", false,-1);
    tracep->declBit(c+57,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+109,"auto_in_rready", false,-1);
    tracep->declBit(c+294,"auto_in_rvalid", false,-1);
    tracep->declBus(c+295,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+296,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+297,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+108,"nodeIn_arready", false,-1);
    tracep->declBit(c+1553,"nodeIn_awready", false,-1);
    tracep->declBit(c+1432,"w_sel0", false,-1);
    tracep->declBit(c+291,"w_full", false,-1);
    tracep->declBus(c+292,"w_id", false,-1, 3,0);
    tracep->declBit(c+298,"r_sel1", false,-1);
    tracep->declBit(c+299,"w_sel1", false,-1);
    tracep->declBit(c+294,"r_full", false,-1);
    tracep->declBus(c+295,"r_id", false,-1, 3,0);
    tracep->declBit(c+110,"ren", false,-1);
    tracep->declBit(c+300,"rdata_REG", false,-1);
    tracep->declBus(c+301,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+302,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+303,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+304,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+59,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+110,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declBus(c+305,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1433,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1555,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declBus(c+1410,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1411,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+111,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+986,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1653,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+981,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1605,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+987,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+983,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+988,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1468,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1469,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1184,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1607,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1186,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+102,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1417,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1653,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+981,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1418,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+983,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1601,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+691,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+688,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1652,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1600,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+687,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+688,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+689,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1652,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+690,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+259,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1419,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1653,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+981,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+260,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1420,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+983,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1602,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1220,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1221,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1222,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+50,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+262,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+263,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+266,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1468,"in_0_bvalid", false,-1);
    tracep->declBit(c+1184,"in_0_rvalid", false,-1);
    tracep->declBit(c+113,"in_0_wready", false,-1);
    tracep->declBit(c+114,"in_0_awready", false,-1);
    tracep->declBit(c+1609,"in_0_arready", false,-1);
    tracep->declBit(c+111,"anonIn_awready", false,-1);
    tracep->declBit(c+112,"anonIn_arready", false,-1);
    tracep->declBit(c+62,"requestARIO_0_0", false,-1);
    tracep->declBit(c+63,"requestARIO_0_1", false,-1);
    tracep->declBit(c+989,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+990,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+64,"arSel", false,-1, 15,0);
    tracep->declBus(c+1710,"awSel", false,-1, 15,0);
    tracep->declBus(c+1187,"rSel", false,-1, 15,0);
    tracep->declBus(c+1470,"bSel", false,-1, 15,0);
    tracep->declBus(c+306,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+307,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+308,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+309,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+310,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+311,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+312,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1711,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+313,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+314,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+315,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1712,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+316,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+317,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+318,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1713,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+319,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+320,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+321,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1714,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+322,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+323,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+324,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1715,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+325,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+326,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+327,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1716,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+328,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+329,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+330,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1717,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+331,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+332,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+333,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1718,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+334,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+335,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+336,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1719,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+337,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+338,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+339,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1720,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+340,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+341,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+342,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1721,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+343,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+344,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+345,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1722,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+346,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+347,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+348,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1723,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+349,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+350,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1724,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+352,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+353,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+354,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1725,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+65,"in_0_arvalid", false,-1);
    tracep->declBit(c+355,"latched", false,-1);
    tracep->declBit(c+1434,"in_0_awvalid", false,-1);
    tracep->declBit(c+1435,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1436,"in_0_wvalid", false,-1);
    tracep->declBit(c+356,"idle_2", false,-1);
    tracep->declBit(c+1188,"anyValid", false,-1);
    tracep->declBus(c+1189,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+357,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1190,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1191,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1192,"prefixOR_1", false,-1);
    tracep->declBit(c+1193,"winner_2_1", false,-1);
    tracep->declBit(c+358,"state_2_0", false,-1);
    tracep->declBit(c+359,"state_2_1", false,-1);
    tracep->declBit(c+1194,"muxState_2_0", false,-1);
    tracep->declBit(c+1195,"muxState_2_1", false,-1);
    tracep->declBit(c+360,"idle_3", false,-1);
    tracep->declBit(c+1471,"anyValid_1", false,-1);
    tracep->declBus(c+1472,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+361,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1473,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1474,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1475,"winner_3_0", false,-1);
    tracep->declBit(c+1476,"winner_3_1", false,-1);
    tracep->declBit(c+362,"state_3_0", false,-1);
    tracep->declBit(c+363,"state_3_1", false,-1);
    tracep->declBit(c+1477,"muxState_3_0", false,-1);
    tracep->declBit(c+1610,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+1435,"io_enq_valid", false,-1);
    tracep->declBus(c+991,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+115,"io_deq_ready", false,-1);
    tracep->declBit(c+1437,"io_deq_valid", false,-1);
    tracep->declBus(c+1438,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+365,"wrap", false,-1);
    tracep->declBit(c+366,"wrap_1", false,-1);
    tracep->declBit(c+367,"maybe_full", false,-1);
    tracep->declBit(c+368,"ptr_match", false,-1);
    tracep->declBit(c+369,"empty", false,-1);
    tracep->declBit(c+370,"full", false,-1);
    tracep->declBit(c+1437,"io_deq_valid_0", false,-1);
    tracep->declBit(c+116,"do_deq", false,-1);
    tracep->declBit(c+117,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+366,"R0_addr", false,-1);
    tracep->declBit(c+1651,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declBus(c+371,"R0_data", false,-1, 1,0);
    tracep->declBit(c+365,"W0_addr", false,-1);
    tracep->declBit(c+117,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declBus(c+991,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+372+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1556,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1439,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1546,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1422,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1410,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1411,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1412,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1547,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+268,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1221,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1223,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+66,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+262,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+263,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+270,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1553,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1429,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1430,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1604,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1431,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1410,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1411,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1554,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+291,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+292,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+293,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+57,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+109,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+294,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+295,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+296,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+297,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1440,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1441,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+374,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+67,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+375,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+376,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+377,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+184,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1406,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+187,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1409,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1410,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1411,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1412,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+649,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+188,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+191,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+192,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+193,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+196,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+268,"in_0_bvalid", false,-1);
    tracep->declBit(c+262,"in_0_rvalid", false,-1);
    tracep->declBit(c+1557,"in_0_wready", false,-1);
    tracep->declBit(c+1558,"in_0_awready", false,-1);
    tracep->declBit(c+118,"in_0_arready", false,-1);
    tracep->declBit(c+1556,"anonIn_awready", false,-1);
    tracep->declBit(c+69,"requestARIO_0_0", false,-1);
    tracep->declBit(c+70,"requestARIO_0_1", false,-1);
    tracep->declBit(c+71,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1442,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1443,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1444,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+72,"arSel", false,-1, 15,0);
    tracep->declBus(c+378,"awSel", false,-1, 15,0);
    tracep->declBus(c+379,"rSel", false,-1, 15,0);
    tracep->declBus(c+1241,"bSel", false,-1, 15,0);
    tracep->declBit(c+380,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+381,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+382,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+383,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+384,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+385,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+386,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+387,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+388,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+389,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+390,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+391,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+392,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+393,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+394,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+395,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+396,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+397,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+398,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+399,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+400,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+401,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+402,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+403,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+404,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+405,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+406,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+407,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+408,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+409,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+410,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+411,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+412,"latched", false,-1);
    tracep->declBit(c+1445,"in_0_awvalid", false,-1);
    tracep->declBit(c+1446,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1447,"in_0_wvalid", false,-1);
    tracep->declBit(c+413,"idle_3", false,-1);
    tracep->declBit(c+414,"anyValid", false,-1);
    tracep->declBus(c+415,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+416,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+417,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+418,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+419,"prefixOR_1", false,-1);
    tracep->declBit(c+420,"winner_3_1", false,-1);
    tracep->declBit(c+421,"winner_3_2", false,-1);
    tracep->declBit(c+422,"state_3_0", false,-1);
    tracep->declBit(c+423,"state_3_1", false,-1);
    tracep->declBit(c+424,"state_3_2", false,-1);
    tracep->declBit(c+425,"muxState_3_0", false,-1);
    tracep->declBit(c+426,"muxState_3_1", false,-1);
    tracep->declBit(c+427,"muxState_3_2", false,-1);
    tracep->declBit(c+428,"idle_4", false,-1);
    tracep->declBit(c+429,"anyValid_1", false,-1);
    tracep->declBus(c+430,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+431,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+432,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+433,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+434,"winner_4_0", false,-1);
    tracep->declBit(c+435,"winner_4_2", false,-1);
    tracep->declBit(c+436,"state_4_0", false,-1);
    tracep->declBit(c+437,"state_4_2", false,-1);
    tracep->declBit(c+438,"muxState_4_0", false,-1);
    tracep->declBit(c+439,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+440,"io_enq_ready", false,-1);
    tracep->declBit(c+1446,"io_enq_valid", false,-1);
    tracep->declBus(c+1448,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1559,"io_deq_ready", false,-1);
    tracep->declBit(c+1449,"io_deq_valid", false,-1);
    tracep->declBus(c+1450,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+441,"wrap", false,-1);
    tracep->declBit(c+442,"wrap_1", false,-1);
    tracep->declBit(c+443,"maybe_full", false,-1);
    tracep->declBit(c+444,"ptr_match", false,-1);
    tracep->declBit(c+445,"empty", false,-1);
    tracep->declBit(c+446,"full", false,-1);
    tracep->declBit(c+1449,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1560,"do_deq", false,-1);
    tracep->declBit(c+1561,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+442,"R0_addr", false,-1);
    tracep->declBit(c+1651,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declBus(c+447,"R0_data", false,-1, 2,0);
    tracep->declBit(c+441,"W0_addr", false,-1);
    tracep->declBit(c+1561,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declBus(c+1448,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+448+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1545,"auto_in_awready", false,-1);
    tracep->declBit(c+1421,"auto_in_awvalid", false,-1);
    tracep->declBus(c+185,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+267,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1546,"auto_in_wready", false,-1);
    tracep->declBit(c+1422,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1410,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1411,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1412,"auto_in_wlast", false,-1);
    tracep->declBit(c+1547,"auto_in_bready", false,-1);
    tracep->declBit(c+268,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1221,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1223,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1224,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+105,"auto_in_arready", false,-1);
    tracep->declBit(c+51,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+104,"auto_in_rready", false,-1);
    tracep->declBit(c+262,"auto_in_rvalid", false,-1);
    tracep->declBus(c+263,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+270,"auto_in_rlast", false,-1);
    tracep->declBit(c+1556,"auto_out_awready", false,-1);
    tracep->declBit(c+1439,"auto_out_awvalid", false,-1);
    tracep->declBus(c+185,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1408,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+186,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1546,"auto_out_wready", false,-1);
    tracep->declBit(c+1422,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1410,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1411,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1412,"auto_out_wlast", false,-1);
    tracep->declBit(c+1547,"auto_out_bready", false,-1);
    tracep->declBit(c+268,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1221,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1223,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_out_arready", false,-1);
    tracep->declBit(c+66,"auto_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_out_rready", false,-1);
    tracep->declBit(c+262,"auto_out_rvalid", false,-1);
    tracep->declBus(c+263,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+270,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+451,"io_deq_valid", false,-1);
    tracep->declBit(c+452,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+451,"full", false,-1);
    tracep->declBit(c+452,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+453,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+454,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+455,"io_deq_valid", false,-1);
    tracep->declBit(c+456,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+455,"full", false,-1);
    tracep->declBit(c+456,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+457,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+458,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+459,"io_deq_valid", false,-1);
    tracep->declBit(c+460,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+459,"full", false,-1);
    tracep->declBit(c+460,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+461,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+462,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+463,"io_deq_valid", false,-1);
    tracep->declBit(c+464,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+463,"full", false,-1);
    tracep->declBit(c+464,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+465,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+466,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+467,"io_deq_valid", false,-1);
    tracep->declBit(c+468,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+467,"full", false,-1);
    tracep->declBit(c+468,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+469,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+470,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+471,"io_deq_valid", false,-1);
    tracep->declBit(c+472,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+471,"full", false,-1);
    tracep->declBit(c+472,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+473,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+474,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+475,"io_deq_valid", false,-1);
    tracep->declBit(c+476,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+475,"full", false,-1);
    tracep->declBit(c+476,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+477,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+478,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+479,"io_deq_valid", false,-1);
    tracep->declBit(c+480,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+479,"full", false,-1);
    tracep->declBit(c+480,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+481,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+482,"io_enq_ready", false,-1);
    tracep->declBit(c+650,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1372,"io_deq_ready", false,-1);
    tracep->declBit(c+483,"io_deq_valid", false,-1);
    tracep->declBit(c+484,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+483,"full", false,-1);
    tracep->declBit(c+484,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+485,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+486,"io_enq_ready", false,-1);
    tracep->declBit(c+651,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1373,"io_deq_ready", false,-1);
    tracep->declBit(c+487,"io_deq_valid", false,-1);
    tracep->declBit(c+488,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+487,"full", false,-1);
    tracep->declBit(c+488,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+489,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+490,"io_enq_ready", false,-1);
    tracep->declBit(c+652,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1374,"io_deq_ready", false,-1);
    tracep->declBit(c+491,"io_deq_valid", false,-1);
    tracep->declBit(c+492,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+491,"full", false,-1);
    tracep->declBit(c+492,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+493,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+494,"io_enq_ready", false,-1);
    tracep->declBit(c+653,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1375,"io_deq_ready", false,-1);
    tracep->declBit(c+495,"io_deq_valid", false,-1);
    tracep->declBit(c+496,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+495,"full", false,-1);
    tracep->declBit(c+496,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+497,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+498,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+499,"io_deq_valid", false,-1);
    tracep->declBit(c+500,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+499,"full", false,-1);
    tracep->declBit(c+500,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+501,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+502,"io_enq_ready", false,-1);
    tracep->declBit(c+654,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1376,"io_deq_ready", false,-1);
    tracep->declBit(c+503,"io_deq_valid", false,-1);
    tracep->declBit(c+504,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+503,"full", false,-1);
    tracep->declBit(c+504,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+505,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+506,"io_enq_ready", false,-1);
    tracep->declBit(c+655,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1377,"io_deq_ready", false,-1);
    tracep->declBit(c+507,"io_deq_valid", false,-1);
    tracep->declBit(c+508,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+507,"full", false,-1);
    tracep->declBit(c+508,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+509,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+510,"io_enq_ready", false,-1);
    tracep->declBit(c+656,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1378,"io_deq_ready", false,-1);
    tracep->declBit(c+511,"io_deq_valid", false,-1);
    tracep->declBit(c+512,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+511,"full", false,-1);
    tracep->declBit(c+512,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+513,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+514,"io_enq_ready", false,-1);
    tracep->declBit(c+657,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1379,"io_deq_ready", false,-1);
    tracep->declBit(c+515,"io_deq_valid", false,-1);
    tracep->declBit(c+516,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+515,"full", false,-1);
    tracep->declBit(c+516,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+517,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+518,"io_enq_ready", false,-1);
    tracep->declBit(c+658,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1380,"io_deq_ready", false,-1);
    tracep->declBit(c+519,"io_deq_valid", false,-1);
    tracep->declBit(c+520,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+519,"full", false,-1);
    tracep->declBit(c+520,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+521,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+522,"io_enq_ready", false,-1);
    tracep->declBit(c+659,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1381,"io_deq_ready", false,-1);
    tracep->declBit(c+523,"io_deq_valid", false,-1);
    tracep->declBit(c+524,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+523,"full", false,-1);
    tracep->declBit(c+524,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+525,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+526,"io_enq_ready", false,-1);
    tracep->declBit(c+660,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1382,"io_deq_ready", false,-1);
    tracep->declBit(c+527,"io_deq_valid", false,-1);
    tracep->declBit(c+528,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+527,"full", false,-1);
    tracep->declBit(c+528,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+529,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+530,"io_enq_ready", false,-1);
    tracep->declBit(c+661,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1383,"io_deq_ready", false,-1);
    tracep->declBit(c+531,"io_deq_valid", false,-1);
    tracep->declBit(c+532,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+531,"full", false,-1);
    tracep->declBit(c+532,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+533,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+534,"io_enq_ready", false,-1);
    tracep->declBit(c+662,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1384,"io_deq_ready", false,-1);
    tracep->declBit(c+535,"io_deq_valid", false,-1);
    tracep->declBit(c+536,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+535,"full", false,-1);
    tracep->declBit(c+536,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+537,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+538,"io_enq_ready", false,-1);
    tracep->declBit(c+663,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1385,"io_deq_ready", false,-1);
    tracep->declBit(c+539,"io_deq_valid", false,-1);
    tracep->declBit(c+540,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+539,"full", false,-1);
    tracep->declBit(c+540,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+541,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+542,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+543,"io_deq_valid", false,-1);
    tracep->declBit(c+544,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+543,"full", false,-1);
    tracep->declBit(c+544,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+545,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+546,"io_enq_ready", false,-1);
    tracep->declBit(c+664,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1386,"io_deq_ready", false,-1);
    tracep->declBit(c+547,"io_deq_valid", false,-1);
    tracep->declBit(c+548,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+547,"full", false,-1);
    tracep->declBit(c+548,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+549,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+550,"io_enq_ready", false,-1);
    tracep->declBit(c+665,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1387,"io_deq_ready", false,-1);
    tracep->declBit(c+551,"io_deq_valid", false,-1);
    tracep->declBit(c+552,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+551,"full", false,-1);
    tracep->declBit(c+552,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+553,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+554,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+555,"io_deq_valid", false,-1);
    tracep->declBit(c+556,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+555,"full", false,-1);
    tracep->declBit(c+556,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+557,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+558,"io_enq_ready", false,-1);
    tracep->declBit(c+96,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+559,"io_deq_valid", false,-1);
    tracep->declBit(c+560,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+559,"full", false,-1);
    tracep->declBit(c+560,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+561,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+562,"io_enq_ready", false,-1);
    tracep->declBit(c+97,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+563,"io_deq_valid", false,-1);
    tracep->declBit(c+564,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+563,"full", false,-1);
    tracep->declBit(c+564,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+565,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+566,"io_enq_ready", false,-1);
    tracep->declBit(c+98,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+567,"io_deq_valid", false,-1);
    tracep->declBit(c+568,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+567,"full", false,-1);
    tracep->declBit(c+568,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+569,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+570,"io_enq_ready", false,-1);
    tracep->declBit(c+99,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+571,"io_deq_valid", false,-1);
    tracep->declBit(c+572,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+571,"full", false,-1);
    tracep->declBit(c+572,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+573,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+574,"io_enq_ready", false,-1);
    tracep->declBit(c+100,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+575,"io_deq_valid", false,-1);
    tracep->declBit(c+576,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+575,"full", false,-1);
    tracep->declBit(c+576,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+577,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1611,"reset", false,-1);
    tracep->declBit(c+111,"auto_master_out_awready", false,-1);
    tracep->declBit(c+986,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1653,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+981,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1605,"auto_master_out_wready", false,-1);
    tracep->declBit(c+987,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+983,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+988,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1468,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1469,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"auto_master_out_arready", false,-1);
    tracep->declBit(c+60,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+45,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1184,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1607,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1186,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1611,"reset", false,-1);
    tracep->declBit(c+1650,"io_interrupt", false,-1);
    tracep->declBit(c+111,"io_master_awready", false,-1);
    tracep->declBit(c+986,"io_master_awvalid", false,-1);
    tracep->declBus(c+981,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1654,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1605,"io_master_wready", false,-1);
    tracep->declBit(c+987,"io_master_wvalid", false,-1);
    tracep->declBus(c+983,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"io_master_wlast", false,-1);
    tracep->declBit(c+988,"io_master_bready", false,-1);
    tracep->declBit(c+1468,"io_master_bvalid", false,-1);
    tracep->declBus(c+1606,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1469,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+112,"io_master_arready", false,-1);
    tracep->declBit(c+60,"io_master_arvalid", false,-1);
    tracep->declBus(c+46,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+45,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+47,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"io_master_rready", false,-1);
    tracep->declBit(c+1184,"io_master_rvalid", false,-1);
    tracep->declBus(c+1608,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1607,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1186,"io_master_rlast", false,-1);
    tracep->declBus(c+1185,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1726,"io_slave_awready", false,-1);
    tracep->declBit(c+1650,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1727,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1654,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1655,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1728,"io_slave_wready", false,-1);
    tracep->declBit(c+1650,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1727,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1653,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1650,"io_slave_wlast", false,-1);
    tracep->declBit(c+1650,"io_slave_bready", false,-1);
    tracep->declBit(c+1729,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1730,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1731,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1732,"io_slave_arready", false,-1);
    tracep->declBit(c+1650,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1727,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1653,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1652,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1650,"io_slave_rready", false,-1);
    tracep->declBit(c+1733,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1734,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1735,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1736,"io_slave_rlast", false,-1);
    tracep->declBus(c+1737,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBit(c+1487,"reset_ifu", false,-1);
    tracep->declBus(c+1488,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1489,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1490,"npc", false,-1, 31,0);
    tracep->declBit(c+1738,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1739,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1488,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1489,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1491,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1492,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1493,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1653,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1656,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1652,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1494,"ifu_arvalid", false,-1);
    tracep->declBit(c+119,"ifu_arready", false,-1);
    tracep->declBus(c+120,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+121,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+122,"ifu_rlast", false,-1);
    tracep->declBus(c+123,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+124,"ifu_rvalid", false,-1);
    tracep->declBit(c+1495,"ifu_rready", false,-1);
    tracep->declBit(c+992,"bus_busy", false,-1);
    tracep->declBit(c+1740,"useless1", false,-1);
    tracep->declBit(c+1741,"useless2", false,-1);
    tracep->declBit(c+1742,"useless3", false,-1);
    tracep->declBit(c+1743,"useless4", false,-1);
    tracep->declBit(c+1496,"fencei", false,-1);
    tracep->declBus(c+993,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1653,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+994,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1652,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+995,"lsu_arvalid", false,-1);
    tracep->declBit(c+125,"lsu_arready", false,-1);
    tracep->declBus(c+126,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"lsu_rlast", false,-1);
    tracep->declBus(c+129,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+130,"lsu_rvalid", false,-1);
    tracep->declBit(c+996,"lsu_rready", false,-1);
    tracep->declBus(c+981,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1654,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+986,"lsu_awvalid", false,-1);
    tracep->declBit(c+111,"lsu_awready", false,-1);
    tracep->declBus(c+983,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"lsu_wlast", false,-1);
    tracep->declBit(c+987,"lsu_wvalid", false,-1);
    tracep->declBit(c+1605,"lsu_wready", false,-1);
    tracep->declBus(c+1606,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1469,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1468,"lsu_bvalid", false,-1);
    tracep->declBit(c+988,"lsu_bready", false,-1);
    tracep->declBus(c+1497,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1653,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1498,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1652,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1499,"axi_arvalid", false,-1);
    tracep->declBit(c+131,"axi_arready", false,-1);
    tracep->declBus(c+132,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+134,"axi_rlast", false,-1);
    tracep->declBus(c+135,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+136,"axi_rvalid", false,-1);
    tracep->declBit(c+1500,"axi_rready", false,-1);
    tracep->declBus(c+981,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1654,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+986,"axi_awvalid", false,-1);
    tracep->declBit(c+111,"axi_awready", false,-1);
    tracep->declBus(c+983,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"axi_wlast", false,-1);
    tracep->declBit(c+987,"axi_wvalid", false,-1);
    tracep->declBit(c+1605,"axi_wready", false,-1);
    tracep->declBus(c+1606,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1469,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1468,"axi_bvalid", false,-1);
    tracep->declBit(c+988,"axi_bready", false,-1);
    tracep->declBus(c+73,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+74,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+75,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+76,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+77,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+78,"clint_arvalid", false,-1);
    tracep->declBit(c+997,"clint_arready", false,-1);
    tracep->declBus(c+998,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+999,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1000,"clint_rlast", false,-1);
    tracep->declBus(c+1653,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1001,"clint_rvalid", false,-1);
    tracep->declBit(c+79,"clint_rready", false,-1);
    tracep->declBus(c+1744,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1745,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1746,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1747,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1748,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1749,"clint_awvalid", false,-1);
    tracep->declBit(c+1002,"clint_awready", false,-1);
    tracep->declBus(c+1750,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1751,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1752,"clint_wlast", false,-1);
    tracep->declBit(c+1753,"clint_wvalid", false,-1);
    tracep->declBit(c+1003,"clint_wready", false,-1);
    tracep->declBus(c+1004,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1653,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1005,"clint_bvalid", false,-1);
    tracep->declBit(c+1754,"clint_bready", false,-1);
    tracep->declBus(c+1501,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1502,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1613,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1614,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1242,"a5", false,-1, 31,0);
    tracep->declBus(c+1503,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1613,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1614,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1504,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1615,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1505,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1506,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1507,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1508,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1509,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1510,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1511,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1512,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1513,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1514,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1515,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1516,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1517,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1518,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1519,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1520,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1006,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1521,"csr_write", false,-1);
    tracep->declBus(c+1522,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1243+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1007,"wdata", false,-1, 31,0);
    tracep->declBus(c+1008,"waddr", false,-1, 4,0);
    tracep->declBit(c+1009,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1247+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1010,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1011,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1012,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1013,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1755,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1014,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1015,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1016,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1017,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1018,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1019,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1020,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1021,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1022,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1023,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1024,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1025,"npc_valid", false,-1);
    tracep->declBit(c+1026,"rd_exu_valid", false,-1);
    tracep->declBus(c+1027,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1028,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1029,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1030,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1756,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1031,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1032,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1033,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1034,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1035,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1036,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1037,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1038,"ready_lsu_to_wbu", false,-1);
    tracep->declBit(c+1039,"rd_lsu_valid", false,-1);
    tracep->declBit(c+1040,"rd_wbu_valid", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1493,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1653,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1654,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1656,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1652,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1494,"arvalid_i_a", false,-1);
    tracep->declBit(c+119,"arready_o_a", false,-1);
    tracep->declBus(c+120,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+121,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+122,"rlast_o_a", false,-1);
    tracep->declBus(c+123,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+124,"rvalid_o_a", false,-1);
    tracep->declBit(c+1495,"rready_i_a", false,-1);
    tracep->declBus(c+1757,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1653,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1654,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1655,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1652,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1650,"awvalid_i_a", false,-1);
    tracep->declBit(c+1758,"awready_o_a", false,-1);
    tracep->declBus(c+1757,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1653,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1650,"wlast_i_a", false,-1);
    tracep->declBit(c+1650,"wvalid_i_a", false,-1);
    tracep->declBit(c+1759,"wready_o_a", false,-1);
    tracep->declBus(c+1760,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1761,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1762,"bvalid_o_a", false,-1);
    tracep->declBit(c+1650,"bready_i_a", false,-1);
    tracep->declBus(c+993,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1653,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1654,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+994,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1652,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+995,"arvalid_i_b", false,-1);
    tracep->declBit(c+125,"arready_o_b", false,-1);
    tracep->declBus(c+126,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+127,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+128,"rlast_o_b", false,-1);
    tracep->declBus(c+129,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+130,"rvalid_o_b", false,-1);
    tracep->declBit(c+996,"rready_i_b", false,-1);
    tracep->declBus(c+981,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1653,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1654,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+982,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1652,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+986,"awvalid_i_b", false,-1);
    tracep->declBit(c+111,"awready_o_b", false,-1);
    tracep->declBus(c+983,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+984,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+985,"wlast_i_b", false,-1);
    tracep->declBit(c+987,"wvalid_i_b", false,-1);
    tracep->declBit(c+1605,"wready_o_b", false,-1);
    tracep->declBus(c+1606,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1469,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1468,"bvalid_o_b", false,-1);
    tracep->declBit(c+988,"bready_i_b", false,-1);
    tracep->declBus(c+1497,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1653,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1654,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1498,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1652,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1499,"arvalid_o", false,-1);
    tracep->declBit(c+131,"arready_i", false,-1);
    tracep->declBus(c+132,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+133,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+134,"rlast_i", false,-1);
    tracep->declBus(c+135,"rid_i", false,-1, 3,0);
    tracep->declBit(c+136,"rvalid_i", false,-1);
    tracep->declBit(c+1500,"rready_o", false,-1);
    tracep->declBus(c+981,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1653,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1654,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+982,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1652,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+986,"awvalid_o", false,-1);
    tracep->declBit(c+111,"awready_i", false,-1);
    tracep->declBus(c+983,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+984,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+985,"wlast_o", false,-1);
    tracep->declBit(c+987,"wvalid_o", false,-1);
    tracep->declBit(c+1605,"wready_i", false,-1);
    tracep->declBus(c+1606,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1469,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1468,"bvalid_i", false,-1);
    tracep->declBit(c+988,"bready_o", false,-1);
    tracep->declBit(c+992,"bus_busy", false,-1);
    tracep->declBus(c+1763,"MASTER_A", false,-1, 0,0);
    tracep->declBus(c+1764,"MASTER_B", false,-1, 0,0);
    tracep->declBit(c+1041,"arb_grant", false,-1);
    tracep->declBit(c+1042,"arb_locked", false,-1);
    tracep->declBit(c+1043,"current_master", false,-1);
    tracep->declBit(c+1616,"ar_handshake", false,-1);
    tracep->declBit(c+1617,"r_last_handshake", false,-1);
    tracep->declBit(c+1523,"arb_grant_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+73,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+74,"arid_i", false,-1, 3,0);
    tracep->declBus(c+75,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+76,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+77,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+78,"arvalid_i", false,-1);
    tracep->declBit(c+997,"arready_o", false,-1);
    tracep->declBus(c+998,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+999,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1000,"rlast_o", false,-1);
    tracep->declBus(c+1653,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1001,"rvalid_o", false,-1);
    tracep->declBit(c+79,"rready_i", false,-1);
    tracep->declBus(c+1744,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1745,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1746,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1747,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1748,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1749,"awvalid_i", false,-1);
    tracep->declBit(c+1002,"awready_o", false,-1);
    tracep->declBus(c+1750,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1751,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1752,"wlast_i", false,-1);
    tracep->declBit(c+1753,"wvalid_i", false,-1);
    tracep->declBit(c+1003,"wready_o", false,-1);
    tracep->declBus(c+1004,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1653,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1005,"bvalid_o", false,-1);
    tracep->declBit(c+1754,"bready_i", false,-1);
    tracep->declBit(c+1044,"ar_state", false,-1);
    tracep->declBit(c+1045,"r_state", false,-1);
    tracep->declBit(c+1046,"aw_state", false,-1);
    tracep->declBit(c+1047,"w_state", false,-1);
    tracep->declBit(c+1765,"b_state", false,-1);
    tracep->declBus(c+1048,"araddr", false,-1, 31,0);
    tracep->declBus(c+1049,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1050,"wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1766,"wvalid", false,-1);
    tracep->declBit(c+1052,"flag_waddr", false,-1);
    tracep->declBit(c+1053,"flag_wdata", false,-1);
    tracep->declBit(c+1054,"flag_rdata", false,-1);
    tracep->declBit(c+1055,"flag_raddr", false,-1);
    tracep->declBit(c+1767,"flag_write", false,-1);
    tracep->declBus(c+1056,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1057,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1058,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1059,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1060,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1061,"lfsr_in", false,-1);
    tracep->declBus(c+1062,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1063,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBit(c+1487,"reset_ifu", false,-1);
    tracep->declBus(c+1503,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1613,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1614,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1504,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1615,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1505,"a_in_src_i", false,-1);
    tracep->declBus(c+1506,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1507,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1508,"adder_a_src_i", false,-1);
    tracep->declBit(c+1509,"adder_out_src_i", false,-1);
    tracep->declBus(c+1510,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1511,"MemRead_i", false,-1);
    tracep->declBit(c+1512,"MemWrite_i", false,-1);
    tracep->declBus(c+1513,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1514,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1515,"wb_src_i", false,-1);
    tracep->declBit(c+1516,"csr_write_i", false,-1);
    tracep->declBit(c+1517,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1518,"reg_write_i", false,-1);
    tracep->declBus(c+1519,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1520,"exu_valid_i", false,-1);
    tracep->declBit(c+1006,"exu_ready_o", false,-1);
    tracep->declBus(c+1010,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1011,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1012,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1013,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1490,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1014,"MemRead_o", false,-1);
    tracep->declBit(c+1015,"MemWrite_o", false,-1);
    tracep->declBus(c+1016,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1017,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1018,"wb_src_o", false,-1);
    tracep->declBit(c+1019,"csr_write_o", false,-1);
    tracep->declBit(c+1020,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1021,"reg_write_o", false,-1);
    tracep->declBus(c+1022,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1023,"exu_valid_o", false,-1);
    tracep->declBit(c+1024,"exu_ready_i", false,-1);
    tracep->declBit(c+1025,"npc_valid", false,-1);
    tracep->declBit(c+1026,"rd_exu_valid", false,-1);
    tracep->declBus(c+1065,"pc", false,-1, 31,0);
    tracep->declBus(c+1011,"rs1", false,-1, 31,0);
    tracep->declBus(c+1012,"rs2", false,-1, 31,0);
    tracep->declBus(c+1066,"imm", false,-1, 31,0);
    tracep->declBus(c+1067,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1068,"a_in_src", false,-1);
    tracep->declBus(c+1069,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1070,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1071,"adder_a_src", false,-1);
    tracep->declBit(c+1072,"adder_out_src", false,-1);
    tracep->declBus(c+1073,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1074,"npc_flag", false,-1);
    tracep->declBus(c+1075,"a_in", false,-1, 31,0);
    tracep->declBus(c+1076,"b_in", false,-1, 31,0);
    tracep->declBus(c+1077,"a_out", false,-1, 31,0);
    tracep->declBus(c+1078,"add_out", false,-1, 31,0);
    tracep->declBus(c+1079,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1010,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1490,"npc", false,-1, 31,0);
    tracep->declBit(c+1080,"zero", false,-1);
    tracep->declBus(c+1652,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1768,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1769,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1081,"current_state", false,-1, 1,0);
    tracep->declBus(c+1524,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1075,"a", false,-1, 31,0);
    tracep->declBus(c+1076,"b", false,-1, 31,0);
    tracep->declBus(c+1073,"op", false,-1, 3,0);
    tracep->declBus(c+1010,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1080,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1011,"d0", false,-1, 31,0);
    tracep->declBus(c+1065,"d1", false,-1, 31,0);
    tracep->declBit(c+1068,"sel", false,-1);
    tracep->declBus(c+1075,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1012,"d0", false,-1, 31,0);
    tracep->declBus(c+1066,"d1", false,-1, 31,0);
    tracep->declBus(c+1771,"d2", false,-1, 31,0);
    tracep->declBus(c+1067,"d3", false,-1, 31,0);
    tracep->declBus(c+1069,"sel", false,-1, 1,0);
    tracep->declBus(c+1076,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1077,"a", false,-1, 31,0);
    tracep->declBus(c+1066,"b", false,-1, 31,0);
    tracep->declBus(c+1078,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1065,"d0", false,-1, 31,0);
    tracep->declBus(c+1011,"d1", false,-1, 31,0);
    tracep->declBit(c+1071,"sel", false,-1);
    tracep->declBus(c+1077,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1078,"d0", false,-1, 31,0);
    tracep->declBus(c+1067,"d1", false,-1, 31,0);
    tracep->declBit(c+1072,"sel", false,-1);
    tracep->declBus(c+1079,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1082,"pc4", false,-1, 31,0);
    tracep->declBus(c+1079,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1070,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1080,"zero", false,-1);
    tracep->declBus(c+1010,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1490,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBit(c+1487,"reset_ifu", false,-1);
    tracep->declBus(c+1501,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1502,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1613,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1614,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1242,"a5", false,-1, 31,0);
    tracep->declBus(c+1488,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1489,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1491,"idu_valid_i", false,-1);
    tracep->declBit(c+1492,"idu_ready_o", false,-1);
    tracep->declBus(c+1503,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1613,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1614,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1504,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1615,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1505,"a_in_src_o", false,-1);
    tracep->declBus(c+1506,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1507,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1508,"adder_a_src_o", false,-1);
    tracep->declBit(c+1509,"adder_out_src_o", false,-1);
    tracep->declBus(c+1510,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1511,"MemRead_o", false,-1);
    tracep->declBit(c+1512,"MemWrite_o", false,-1);
    tracep->declBus(c+1513,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1514,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1515,"wb_src_o", false,-1);
    tracep->declBit(c+1516,"csr_write_o", false,-1);
    tracep->declBit(c+1517,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1518,"reg_write_o", false,-1);
    tracep->declBus(c+1519,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1520,"idu_valid_o", false,-1);
    tracep->declBit(c+1006,"idu_ready_i", false,-1);
    tracep->declBit(c+1521,"csr_write_i", false,-1);
    tracep->declBus(c+1522,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1279+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1496,"fencei", false,-1);
    tracep->declBus(c+1083,"exu_rd", false,-1, 4,0);
    tracep->declBus(c+1084,"lsu_rd", false,-1, 4,0);
    tracep->declBus(c+1085,"wbu_rd", false,-1, 4,0);
    tracep->declBus(c+1503,"pc", false,-1, 31,0);
    tracep->declBus(c+1525,"inst", false,-1, 31,0);
    tracep->declBus(c+1526,"opcode", false,-1, 6,0);
    tracep->declBus(c+1527,"wmask_tmp", false,-1, 7,0);
    tracep->declBit(c+1528,"opcode_r", false,-1);
    tracep->declBit(c+1529,"opcode_i", false,-1);
    tracep->declBit(c+1530,"opcode_s", false,-1);
    tracep->declBit(c+1531,"opcode_sb", false,-1);
    tracep->declBit(c+1532,"opcode_u", false,-1);
    tracep->declBit(c+1533,"opcode_uj", false,-1);
    tracep->declBit(c+1618,"isRAW", false,-1);
    tracep->declBit(c+1534,"flag", false,-1);
    tracep->declBit(c+1619,"exu_raw", false,-1);
    tracep->declBit(c+1620,"lsu_raw", false,-1);
    tracep->declBit(c+1621,"wbu_raw", false,-1);
    tracep->declBus(c+1652,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1768,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1769,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1535,"current_state", false,-1, 1,0);
    tracep->declBus(c+1536,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1525,"inst", false,-1, 31,0);
    tracep->declBus(c+1510,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1526,"opcode", false,-1, 6,0);
    tracep->declBus(c+1537,"funct3", false,-1, 2,0);
    tracep->declBus(c+1538,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1521,"wen", false,-1);
    tracep->declBus(c+1525,"inst", false,-1, 31,0);
    tracep->declBus(c+1522,"wdata", false,-1, 31,0);
    tracep->declBus(c+1242,"NO", false,-1, 31,0);
    tracep->declBus(c+1503,"pc", false,-1, 31,0);
    tracep->declBus(c+1615,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1283+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1287,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1288,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1289,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1290,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1772,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1773,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1526,"opcode", false,-1, 6,0);
    tracep->declBus(c+1537,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1525,"inst", false,-1, 31,0);
    tracep->declBit(c+1505,"a_in_src", false,-1);
    tracep->declBus(c+1506,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1518,"reg_write", false,-1);
    tracep->declBus(c+1507,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1508,"adder_a_src", false,-1);
    tracep->declBit(c+1511,"MemRead", false,-1);
    tracep->declBit(c+1512,"MemWrite", false,-1);
    tracep->declBus(c+1527,"wmask", false,-1, 7,0);
    tracep->declBit(c+1515,"wb_src", false,-1);
    tracep->declBus(c+1514,"rmask", false,-1, 2,0);
    tracep->declBit(c+1516,"csr_write", false,-1);
    tracep->declBit(c+1509,"adder_out_src", false,-1);
    tracep->declBit(c+1517,"csr_wdata_src", false,-1);
    tracep->declBus(c+1526,"opcode", false,-1, 6,0);
    tracep->declBus(c+1537,"funct3", false,-1, 2,0);
    tracep->declBus(c+1538,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1770,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1525,"inst", false,-1, 31,0);
    tracep->declBus(c+1504,"data", false,-1, 31,0);
    tracep->declBus(c+1526,"opcode", false,-1, 6,0);
    tracep->declBus(c+1537,"funct3", false,-1, 2,0);
    tracep->declBus(c+1538,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1493,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1653,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1654,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1656,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1652,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1494,"arvalid_o", false,-1);
    tracep->declBit(c+119,"arready_i", false,-1);
    tracep->declBus(c+120,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+121,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+122,"rlast_i", false,-1);
    tracep->declBus(c+123,"rid_i", false,-1, 3,0);
    tracep->declBit(c+124,"rvalid_i", false,-1);
    tracep->declBit(c+1495,"rready_o", false,-1);
    tracep->declBus(c+1490,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1025,"npc_valid", false,-1);
    tracep->declBit(c+1487,"reset_o", false,-1);
    tracep->declBus(c+1488,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1489,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1491,"ifu_valid_o", false,-1);
    tracep->declBit(c+1492,"ifu_ready_i", false,-1);
    tracep->declBit(c+992,"bus_busy", false,-1);
    tracep->declBus(c+1539,"pc_dbg", false,-1, 31,0);
    tracep->declBus(c+1655,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1645,"S_WAIT_R", false,-1, 2,0);
    tracep->declBus(c+1656,"S_OUT", false,-1, 2,0);
    tracep->declBus(c+1657,"S_FLUSH", false,-1, 2,0);
    tracep->declBus(c+1539,"pc_fetch", false,-1, 31,0);
    tracep->declBus(c+1540,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1541,"inst_buf", false,-1, 31,0);
    tracep->declBus(c+1542,"state", false,-1, 2,0);
    tracep->declBit(c+1543,"ctrl_hazard", false,-1);
    tracep->declBit(c+1544,"ar_inflight", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1010,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1011,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1012,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1013,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1014,"MemRead_i", false,-1);
    tracep->declBit(c+1015,"MemWrite_i", false,-1);
    tracep->declBus(c+1016,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1017,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1018,"wb_src_i", false,-1);
    tracep->declBit(c+1019,"csr_write_i", false,-1);
    tracep->declBit(c+1020,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1021,"reg_write_i", false,-1);
    tracep->declBus(c+1022,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1023,"lsu_valid_i", false,-1);
    tracep->declBit(c+1024,"lsu_ready_o", false,-1);
    tracep->declBus(c+1027,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1028,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1029,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1030,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1031,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1032,"wb_src_o", false,-1);
    tracep->declBit(c+1033,"csr_write_o", false,-1);
    tracep->declBit(c+1034,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1035,"reg_write_o", false,-1);
    tracep->declBus(c+1036,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1037,"lsu_valid_o", false,-1);
    tracep->declBit(c+1038,"lsu_ready_i", false,-1);
    tracep->declBus(c+993,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1653,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1654,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+994,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1652,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+995,"arvalid_o", false,-1);
    tracep->declBit(c+125,"arready_i", false,-1);
    tracep->declBus(c+126,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+127,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+128,"rlast_i", false,-1);
    tracep->declBus(c+129,"rid_i", false,-1, 3,0);
    tracep->declBit(c+130,"rvalid_i", false,-1);
    tracep->declBit(c+996,"rready_o", false,-1);
    tracep->declBus(c+981,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1653,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1654,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+982,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1652,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+986,"awvalid_o", false,-1);
    tracep->declBit(c+111,"awready_i", false,-1);
    tracep->declBus(c+983,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+984,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+985,"wlast_o", false,-1);
    tracep->declBit(c+987,"wvalid_o", false,-1);
    tracep->declBit(c+1605,"wready_i", false,-1);
    tracep->declBus(c+1606,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1469,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1468,"bvalid_i", false,-1);
    tracep->declBit(c+988,"bready_o", false,-1);
    tracep->declBit(c+992,"bus_busy", false,-1);
    tracep->declBit(c+1039,"rd_lsu_valid", false,-1);
    tracep->declBus(c+1027,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1028,"rs1", false,-1, 31,0);
    tracep->declBus(c+1774,"rs2", false,-1, 31,0);
    tracep->declBus(c+1775,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1031,"rmask", false,-1, 2,0);
    tracep->declBus(c+1086,"wmask", false,-1, 3,0);
    tracep->declBit(c+1087,"flag", false,-1);
    tracep->declBit(c+1776,"wvalid_tmp", false,-1);
    tracep->declBit(c+1088,"MemRead", false,-1);
    tracep->declBit(c+1089,"MemWrite", false,-1);
    tracep->declBit(c+995,"arvalid", false,-1);
    tracep->declBus(c+993,"araddr", false,-1, 31,0);
    tracep->declBit(c+996,"rready", false,-1);
    tracep->declBus(c+981,"awaddr", false,-1, 31,0);
    tracep->declBit(c+986,"awvalid", false,-1);
    tracep->declBus(c+983,"wdata", false,-1, 31,0);
    tracep->declBus(c+984,"wstrb", false,-1, 3,0);
    tracep->declBit(c+987,"wvalid", false,-1);
    tracep->declBit(c+988,"bready", false,-1);
    tracep->declBit(c+1090,"read_mem", false,-1);
    tracep->declBit(c+1091,"write_mem", false,-1);
    tracep->declBus(c+1652,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1768,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1769,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1092,"current_state", false,-1, 1,0);
    tracep->declBus(c+1622,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1777,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1770,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBus(c+1007,"wdata", false,-1, 31,0);
    tracep->declBus(c+1008,"waddr", false,-1, 4,0);
    tracep->declBit(c+1009,"wen", false,-1);
    tracep->declBus(c+1501,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1613,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1502,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1614,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1242,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1291+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1323+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1027,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1028,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1029,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1030,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1031,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1032,"wb_src_i", false,-1);
    tracep->declBit(c+1033,"csr_write_i", false,-1);
    tracep->declBit(c+1034,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1035,"reg_write_i", false,-1);
    tracep->declBus(c+1036,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1037,"wbu_valid_i", false,-1);
    tracep->declBit(c+1038,"wbu_ready_o", false,-1);
    tracep->declBus(c+1522,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1007,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1521,"csr_write_o", false,-1);
    tracep->declBit(c+1009,"reg_write_o", false,-1);
    tracep->declBus(c+1008,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1040,"rd_wbu_valid", false,-1);
    tracep->declBus(c+1093,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1094,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1095,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1096,"rs1", false,-1, 31,0);
    tracep->declBus(c+1097,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1098,"rmask", false,-1, 2,0);
    tracep->declBit(c+1099,"wb_src", false,-1);
    tracep->declBit(c+1100,"csr_wdata_src", false,-1);
    tracep->declBit(c+1101,"difftest_check", false,-1);
    tracep->declBit(c+1102,"difftest_check_flag", false,-1);
    tracep->declBus(c+1652,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1768,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1769,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1103,"current_state", false,-1, 1,0);
    tracep->declBus(c+1104,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1096,"d0", false,-1, 31,0);
    tracep->declBus(c+1097,"d1", false,-1, 31,0);
    tracep->declBit(c+1100,"sel", false,-1);
    tracep->declBus(c+1522,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1094,"read_data", false,-1, 31,0);
    tracep->declBus(c+1105,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1098,"rmask", false,-1, 2,0);
    tracep->declBus(c+1093,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1106,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1107,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1108,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1109,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1110,"byte3", false,-1, 31,0);
    tracep->declBus(c+1111,"byte2", false,-1, 31,0);
    tracep->declBus(c+1112,"byte1", false,-1, 31,0);
    tracep->declBus(c+1113,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1095,"d0", false,-1, 31,0);
    tracep->declBus(c+1093,"d1", false,-1, 31,0);
    tracep->declBit(c+1099,"sel", false,-1);
    tracep->declBus(c+1007,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1497,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1653,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1654,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1498,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1652,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1499,"axi_arvalid_i", false,-1);
    tracep->declBit(c+131,"axi_arready_o", false,-1);
    tracep->declBus(c+132,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+133,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+134,"axi_rlast_o", false,-1);
    tracep->declBus(c+135,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+136,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1500,"axi_rready_i", false,-1);
    tracep->declBus(c+981,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1653,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1654,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+982,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1652,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+986,"axi_awvalid_i", false,-1);
    tracep->declBit(c+111,"axi_awready_o", false,-1);
    tracep->declBus(c+983,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+984,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+985,"axi_wlast_i", false,-1);
    tracep->declBit(c+987,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1605,"axi_wready_o", false,-1);
    tracep->declBus(c+1606,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1469,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1468,"axi_bvalid_o", false,-1);
    tracep->declBit(c+988,"axi_bready_i", false,-1);
    tracep->declBus(c+46,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+45,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+47,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+48,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+49,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+60,"sram_arvalid_o", false,-1);
    tracep->declBit(c+112,"sram_arready_i", false,-1);
    tracep->declBus(c+1607,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1608,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1186,"sram_rlast_i", false,-1);
    tracep->declBus(c+1185,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1184,"sram_rvalid_i", false,-1);
    tracep->declBit(c+61,"sram_rready_o", false,-1);
    tracep->declBus(c+981,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1653,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1654,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+982,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1652,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+986,"sram_awvalid_o", false,-1);
    tracep->declBit(c+111,"sram_awready_i", false,-1);
    tracep->declBus(c+983,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+984,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+985,"sram_wlast_o", false,-1);
    tracep->declBit(c+987,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1605,"sram_wready_i", false,-1);
    tracep->declBus(c+1606,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1469,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1468,"sram_bvalid_i", false,-1);
    tracep->declBit(c+988,"sram_bready_o", false,-1);
    tracep->declBus(c+73,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+74,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+75,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+76,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+77,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+78,"clint_arvalid_o", false,-1);
    tracep->declBit(c+997,"clint_arready_i", false,-1);
    tracep->declBus(c+998,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+999,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1000,"clint_rlast_i", false,-1);
    tracep->declBus(c+1653,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1001,"clint_rvalid_i", false,-1);
    tracep->declBit(c+79,"clint_rready_o", false,-1);
    tracep->declBus(c+1744,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1745,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1746,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1747,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1748,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1749,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1002,"clint_awready_i", false,-1);
    tracep->declBus(c+1750,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1751,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1752,"clint_wlast_o", false,-1);
    tracep->declBit(c+1753,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1003,"clint_wready_i", false,-1);
    tracep->declBus(c+1004,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1653,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1005,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1754,"clint_bready_o", false,-1);
    tracep->declBit(c+80,"ar_switch", false,-1);
    tracep->declBit(c+81,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"io_d", false,-1);
    tracep->declBit(c+578,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"io_d", false,-1);
    tracep->declBit(c+578,"io_q", false,-1);
    tracep->declBit(c+578,"sync_0", false,-1);
    tracep->declBit(c+579,"sync_1", false,-1);
    tracep->declBit(c+580,"sync_2", false,-1);
    tracep->declBit(c+581,"sync_3", false,-1);
    tracep->declBit(c+582,"sync_4", false,-1);
    tracep->declBit(c+583,"sync_5", false,-1);
    tracep->declBit(c+584,"sync_6", false,-1);
    tracep->declBit(c+585,"sync_7", false,-1);
    tracep->declBit(c+586,"sync_8", false,-1);
    tracep->declBit(c+587,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1206,"auto_in_psel", false,-1);
    tracep->declBit(c+1207,"auto_in_penable", false,-1);
    tracep->declBit(c+1199,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1205,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1645,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+682,"auto_in_pready", false,-1);
    tracep->declBit(c+1650,"auto_in_pslverr", false,-1);
    tracep->declBus(c+683,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1564,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1565,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1566,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1355,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1206,"in_psel", false,-1);
    tracep->declBit(c+1207,"in_penable", false,-1);
    tracep->declBus(c+1645,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1199,"in_pwrite", false,-1);
    tracep->declBus(c+1200,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+682,"in_pready", false,-1);
    tracep->declBus(c+683,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1650,"in_pslverr", false,-1);
    tracep->declBus(c+1564,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1565,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1566,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+692,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+683,"rdata", false,-1, 31,0);
    tracep->declBus(c+693,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+682,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+694,"num", false,-1, 3,0);
    tracep->declBus(c+1566,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+695,"num", false,-1, 3,0);
    tracep->declBus(c+1567,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+696,"num", false,-1, 3,0);
    tracep->declBus(c+1568,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+697,"num", false,-1, 3,0);
    tracep->declBus(c+1569,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+698,"num", false,-1, 3,0);
    tracep->declBus(c+1570,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+699,"num", false,-1, 3,0);
    tracep->declBus(c+1571,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+700,"num", false,-1, 3,0);
    tracep->declBus(c+1572,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+701,"num", false,-1, 3,0);
    tracep->declBus(c+1573,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1589,"auto_in_psel", false,-1);
    tracep->declBit(c+1590,"auto_in_penable", false,-1);
    tracep->declBit(c+1199,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1205,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1645,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"auto_in_pready", false,-1);
    tracep->declBit(c+1650,"auto_in_pslverr", false,-1);
    tracep->declBus(c+155,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1574,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1575,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1355,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1589,"in_psel", false,-1);
    tracep->declBit(c+1590,"in_penable", false,-1);
    tracep->declBus(c+1645,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1199,"in_pwrite", false,-1);
    tracep->declBus(c+1200,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"in_pready", false,-1);
    tracep->declBus(c+155,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1650,"in_pslverr", false,-1);
    tracep->declBit(c+1574,"ps2_clk", false,-1);
    tracep->declBit(c+1575,"ps2_data", false,-1);
    tracep->declBus(c+588,"data_r", false,-1, 7,0);
    tracep->declBus(c+589,"old_data", false,-1, 7,0);
    tracep->declBus(c+590,"data_asic", false,-1, 7,0);
    tracep->declBus(c+591,"buffer", false,-1, 7,0);
    tracep->declBit(c+592,"ready", false,-1);
    tracep->declBit(c+593,"nextdata_n", false,-1);
    tracep->declBit(c+594,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1623,"clrn", false,-1);
    tracep->declBit(c+1574,"ps2_clk", false,-1);
    tracep->declBit(c+1575,"ps2_data", false,-1);
    tracep->declBit(c+593,"nextdata_n", false,-1);
    tracep->declBus(c+591,"data", false,-1, 7,0);
    tracep->declBit(c+592,"ready", false,-1);
    tracep->declBit(c+594,"overflow", false,-1);
    tracep->declBus(c+595,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+596+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+604,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+605,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+606,"count", false,-1, 3,0);
    tracep->declBus(c+607,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+608,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1440,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1441,"auto_in_wvalid", false,-1);
    tracep->declBit(c+374,"auto_in_arready", false,-1);
    tracep->declBit(c+67,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+375,"auto_in_rvalid", false,-1);
    tracep->declBus(c+376,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+377,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+375,"state", false,-1);
    tracep->declBus(c+377,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+376,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+82,"raddr", false,-1, 31,0);
    tracep->declBit(c+83,"ren", false,-1);
    tracep->declBus(c+84,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1208,"auto_in_psel", false,-1);
    tracep->declBit(c+1591,"auto_in_penable", false,-1);
    tracep->declBit(c+1199,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1198,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1645,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1592,"auto_in_pready", false,-1);
    tracep->declBit(c+1650,"auto_in_pslverr", false,-1);
    tracep->declBus(c+156,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1585,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1458,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1586,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1198,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1208,"in_psel", false,-1);
    tracep->declBit(c+1591,"in_penable", false,-1);
    tracep->declBus(c+1645,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1199,"in_pwrite", false,-1);
    tracep->declBus(c+1200,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1592,"in_pready", false,-1);
    tracep->declBus(c+156,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1650,"in_pslverr", false,-1);
    tracep->declBit(c+1585,"qspi_sck", false,-1);
    tracep->declBit(c+1458,"qspi_ce_n", false,-1);
    tracep->declBus(c+1586,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1586,"din", false,-1, 3,0);
    tracep->declBus(c+1624,"dout", false,-1, 3,0);
    tracep->declBus(c+1478,"douten", false,-1, 3,0);
    tracep->declBit(c+1625,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBus(c+1198,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1200,"dat_i", false,-1, 31,0);
    tracep->declBus(c+156,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1201,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1208,"cyc_i", false,-1);
    tracep->declBit(c+1208,"stb_i", false,-1);
    tracep->declBit(c+1625,"ack_o", false,-1);
    tracep->declBit(c+1199,"we_i", false,-1);
    tracep->declBit(c+1585,"sck", false,-1);
    tracep->declBit(c+1458,"ce_n", false,-1);
    tracep->declBus(c+1586,"din", false,-1, 3,0);
    tracep->declBus(c+1624,"dout", false,-1, 3,0);
    tracep->declBus(c+1478,"douten", false,-1, 3,0);
    tracep->declBus(c+1652,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1768,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1769,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+702,"mr_sck", false,-1);
    tracep->declBit(c+703,"mr_ce_n", false,-1);
    tracep->declBus(c+1586,"mr_din", false,-1, 3,0);
    tracep->declBus(c+704,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+705,"mr_doe", false,-1);
    tracep->declBit(c+706,"mw_sck", false,-1);
    tracep->declBit(c+707,"mw_ce_n", false,-1);
    tracep->declBus(c+1586,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1479,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+708,"mw_doe", false,-1);
    tracep->declBit(c+1480,"mr_rd", false,-1);
    tracep->declBit(c+709,"mr_done", false,-1);
    tracep->declBit(c+1481,"mw_wr", false,-1);
    tracep->declBit(c+1482,"mw_done", false,-1);
    tracep->declBit(c+1208,"wb_valid", false,-1);
    tracep->declBit(c+1356,"wb_we", false,-1);
    tracep->declBit(c+1357,"wb_re", false,-1);
    tracep->declBus(c+1393,"state", false,-1, 1,0);
    tracep->declBus(c+1626,"nstate", false,-1, 1,0);
    tracep->declBus(c+1627,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1628,"qpi_sck", false,-1);
    tracep->declBus(c+1358,"size", false,-1, 2,0);
    tracep->declBus(c+1359,"byte0", false,-1, 7,0);
    tracep->declBus(c+1360,"byte1", false,-1, 7,0);
    tracep->declBus(c+1361,"byte2", false,-1, 7,0);
    tracep->declBus(c+1362,"byte3", false,-1, 7,0);
    tracep->declBus(c+1363,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBus(c+1364,"addr", false,-1, 23,0);
    tracep->declBit(c+1480,"rd", false,-1);
    tracep->declBus(c+1658,"size", false,-1, 2,0);
    tracep->declBit(c+709,"done", false,-1);
    tracep->declBus(c+156,"line", false,-1, 31,0);
    tracep->declBit(c+702,"sck", false,-1);
    tracep->declBit(c+703,"ce_n", false,-1);
    tracep->declBus(c+1586,"din", false,-1, 3,0);
    tracep->declBus(c+704,"dout", false,-1, 3,0);
    tracep->declBit(c+705,"douten", false,-1);
    tracep->declBus(c+1763,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1764,"READ", false,-1, 0,0);
    tracep->declBus(c+1778,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+710,"state", false,-1);
    tracep->declBit(c+1483,"nstate", false,-1);
    tracep->declBus(c+711,"counter", false,-1, 7,0);
    tracep->declBus(c+712,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+609+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1779,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+713,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1623,"rst_n", false,-1);
    tracep->declBus(c+1365,"addr", false,-1, 23,0);
    tracep->declBus(c+1363,"line", false,-1, 31,0);
    tracep->declBus(c+1358,"size", false,-1, 2,0);
    tracep->declBit(c+1481,"wr", false,-1);
    tracep->declBit(c+1482,"done", false,-1);
    tracep->declBit(c+706,"sck", false,-1);
    tracep->declBit(c+707,"ce_n", false,-1);
    tracep->declBus(c+1586,"din", false,-1, 3,0);
    tracep->declBus(c+1479,"dout", false,-1, 3,0);
    tracep->declBit(c+708,"douten", false,-1);
    tracep->declBus(c+1763,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1764,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1366,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+714,"state", false,-1);
    tracep->declBit(c+1484,"nstate", false,-1);
    tracep->declBus(c+715,"counter", false,-1, 7,0);
    tracep->declBus(c+716,"saddr", false,-1, 23,0);
    tracep->declBus(c+1780,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+102,"auto_in_awready", false,-1);
    tracep->declBit(c+1417,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1653,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+981,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"auto_in_wready", false,-1);
    tracep->declBit(c+1418,"auto_in_wvalid", false,-1);
    tracep->declBus(c+983,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"auto_in_wlast", false,-1);
    tracep->declBit(c+1601,"auto_in_bready", false,-1);
    tracep->declBit(c+691,"auto_in_bvalid", false,-1);
    tracep->declBus(c+688,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1652,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"auto_in_arready", false,-1);
    tracep->declBit(c+44,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1600,"auto_in_rready", false,-1);
    tracep->declBit(c+687,"auto_in_rvalid", false,-1);
    tracep->declBus(c+688,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+689,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1652,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+690,"auto_in_rlast", false,-1);
    tracep->declBit(c+1587,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1390,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+677,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+678,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+679,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+680,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1588,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1391,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1392,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1451,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+102,"in_awready", false,-1);
    tracep->declBit(c+1417,"in_awvalid", false,-1);
    tracep->declBus(c+981,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1653,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1654,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+982,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1652,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"in_wready", false,-1);
    tracep->declBit(c+1418,"in_wvalid", false,-1);
    tracep->declBus(c+983,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+984,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+985,"in_wlast", false,-1);
    tracep->declBit(c+1601,"in_bready", false,-1);
    tracep->declBit(c+691,"in_bvalid", false,-1);
    tracep->declBus(c+1652,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+688,"in_bid", false,-1, 3,0);
    tracep->declBit(c+101,"in_arready", false,-1);
    tracep->declBit(c+44,"in_arvalid", false,-1);
    tracep->declBus(c+46,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+45,"in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1600,"in_rready", false,-1);
    tracep->declBit(c+687,"in_rvalid", false,-1);
    tracep->declBus(c+1652,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+689,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+690,"in_rlast", false,-1);
    tracep->declBus(c+688,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1587,"sdram_clk", false,-1);
    tracep->declBit(c+1390,"sdram_cke", false,-1);
    tracep->declBit(c+677,"sdram_cs", false,-1);
    tracep->declBit(c+678,"sdram_ras", false,-1);
    tracep->declBit(c+679,"sdram_cas", false,-1);
    tracep->declBit(c+680,"sdram_we", false,-1);
    tracep->declBus(c+1588,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1391,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1392,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1451,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+717,"sdram_dout_en", false,-1);
    tracep->declBus(c+718,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBit(c+1417,"inport_awvalid_i", false,-1);
    tracep->declBus(c+981,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1653,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1654,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1652,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1418,"inport_wvalid_i", false,-1);
    tracep->declBus(c+983,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+984,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+985,"inport_wlast_i", false,-1);
    tracep->declBit(c+1601,"inport_bready_i", false,-1);
    tracep->declBit(c+44,"inport_arvalid_i", false,-1);
    tracep->declBus(c+46,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+45,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+47,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+49,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1600,"inport_rready_i", false,-1);
    tracep->declBus(c+1451,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+102,"inport_awready_o", false,-1);
    tracep->declBit(c+103,"inport_wready_o", false,-1);
    tracep->declBit(c+691,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1652,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+688,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+101,"inport_arready_o", false,-1);
    tracep->declBit(c+687,"inport_rvalid_o", false,-1);
    tracep->declBus(c+689,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1652,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+688,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+690,"inport_rlast_o", false,-1);
    tracep->declBit(c+1587,"sdram_clk_o", false,-1);
    tracep->declBit(c+1390,"sdram_cke_o", false,-1);
    tracep->declBit(c+677,"sdram_cs_o", false,-1);
    tracep->declBit(c+678,"sdram_ras_o", false,-1);
    tracep->declBit(c+679,"sdram_cas_o", false,-1);
    tracep->declBit(c+680,"sdram_we_o", false,-1);
    tracep->declBus(c+1392,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1588,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1391,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+718,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+717,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1643,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1781,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1647,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1782,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+137,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+138,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_w", false,-1);
    tracep->declBit(c+1394,"ram_accept_w", false,-1);
    tracep->declBus(c+983,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+719,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1629,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+720,"ram_ack_w", false,-1);
    tracep->declBit(c+1650,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBit(c+1417,"axi_awvalid_i", false,-1);
    tracep->declBus(c+981,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1653,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1654,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1652,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1418,"axi_wvalid_i", false,-1);
    tracep->declBus(c+983,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+984,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+985,"axi_wlast_i", false,-1);
    tracep->declBit(c+1601,"axi_bready_i", false,-1);
    tracep->declBit(c+44,"axi_arvalid_i", false,-1);
    tracep->declBus(c+46,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+45,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+47,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+49,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1600,"axi_rready_i", false,-1);
    tracep->declBit(c+1394,"ram_accept_i", false,-1);
    tracep->declBit(c+720,"ram_ack_i", false,-1);
    tracep->declBit(c+1650,"ram_error_i", false,-1);
    tracep->declBus(c+719,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+102,"axi_awready_o", false,-1);
    tracep->declBit(c+103,"axi_wready_o", false,-1);
    tracep->declBit(c+691,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1652,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+688,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+101,"axi_arready_o", false,-1);
    tracep->declBit(c+687,"axi_rvalid_o", false,-1);
    tracep->declBus(c+689,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1652,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+688,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+690,"axi_rlast_o", false,-1);
    tracep->declBus(c+138,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_o", false,-1);
    tracep->declBus(c+1629,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+137,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+983,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+721,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+722,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+723,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+724,"req_rd_q", false,-1);
    tracep->declBit(c+725,"req_wr_q", false,-1);
    tracep->declBus(c+726,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+727,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+728,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+729,"req_prio_q", false,-1);
    tracep->declBit(c+730,"req_hold_rd_q", false,-1);
    tracep->declBit(c+731,"req_hold_wr_q", false,-1);
    tracep->declBit(c+732,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+140,"req_push_w", false,-1);
    tracep->declBus(c+1630,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+733,"req_out_valid_w", false,-1);
    tracep->declBus(c+734,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+141,"resp_accept_w", false,-1);
    tracep->declBit(c+735,"resp_is_write_w", false,-1);
    tracep->declBit(c+736,"resp_is_read_w", false,-1);
    tracep->declBit(c+690,"resp_is_last_w", false,-1);
    tracep->declBus(c+688,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+737,"resp_valid_w", false,-1);
    tracep->declBit(c+738,"write_prio_w", false,-1);
    tracep->declBit(c+739,"read_prio_w", false,-1);
    tracep->declBit(c+142,"write_active_w", false,-1);
    tracep->declBit(c+139,"read_active_w", false,-1);
    tracep->declBus(c+137,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1631,"wr_w", false,-1);
    tracep->declBit(c+139,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1783,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1784,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1782,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBus(c+1630,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+140,"push_i", false,-1);
    tracep->declBit(c+141,"pop_i", false,-1);
    tracep->declBus(c+734,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+732,"accept_o", false,-1);
    tracep->declBit(c+733,"valid_o", false,-1);
    tracep->declBus(c+1785,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+740+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+744,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+745,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+746,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1784,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1782,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBus(c+719,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+720,"push_i", false,-1);
    tracep->declBit(c+141,"pop_i", false,-1);
    tracep->declBus(c+689,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+747,"accept_o", false,-1);
    tracep->declBit(c+737,"valid_o", false,-1);
    tracep->declBus(c+1785,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+748+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+752,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+753,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+754,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBus(c+138,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+139,"inport_rd_i", false,-1);
    tracep->declBus(c+1629,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+137,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+983,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1451,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1394,"inport_accept_o", false,-1);
    tracep->declBit(c+720,"inport_ack_o", false,-1);
    tracep->declBit(c+1650,"inport_error_o", false,-1);
    tracep->declBus(c+719,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1587,"sdram_clk_o", false,-1);
    tracep->declBit(c+1390,"sdram_cke_o", false,-1);
    tracep->declBit(c+677,"sdram_cs_o", false,-1);
    tracep->declBit(c+678,"sdram_ras_o", false,-1);
    tracep->declBit(c+679,"sdram_cas_o", false,-1);
    tracep->declBit(c+680,"sdram_we_o", false,-1);
    tracep->declBus(c+1392,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1588,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1391,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+718,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+717,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1643,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1781,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1647,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1782,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1782,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1784,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1784,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1786,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1787,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1788,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1789,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1784,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1790,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1791,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1792,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1793,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1794,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1795,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1796,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1653,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1797,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1784,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1653,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1796,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1795,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1791,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1793,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1792,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1794,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1790,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1798,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1799,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1800,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1800,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1770,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1800,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1782,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1782,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1783,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+137,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+138,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_w", false,-1);
    tracep->declBit(c+1394,"ram_accept_w", false,-1);
    tracep->declBus(c+983,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+719,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+720,"ram_ack_w", false,-1);
    tracep->declBit(c+143,"ram_req_w", false,-1);
    tracep->declBus(c+755,"command_q", false,-1, 3,0);
    tracep->declBus(c+1395,"addr_q", false,-1, 12,0);
    tracep->declBus(c+718,"data_q", false,-1, 31,0);
    tracep->declBit(c+756,"data_rd_en_q", false,-1);
    tracep->declBus(c+1392,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1390,"cke_q", false,-1);
    tracep->declBus(c+1391,"bank_q", false,-1, 1,0);
    tracep->declBus(c+719,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+757,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1451,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+758,"refresh_q", false,-1);
    tracep->declBus(c+759,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+760+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1396,"state_q", false,-1, 3,0);
    tracep->declBus(c+144,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+145,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+764,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+765,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+146,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+147,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+148,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1784,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+766,"delay_q", false,-1, 3,0);
    tracep->declBus(c+149,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1801,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1397,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+767,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+768,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+769,"idx", false,-1, 31,0);
    tracep->declBus(c+770,"rd_q", false,-1, 3,0);
    tracep->declBit(c+720,"ack_q", false,-1);
    tracep->declArray(c+1398,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1212,"auto_in_psel", false,-1);
    tracep->declBit(c+1213,"auto_in_penable", false,-1);
    tracep->declBit(c+1199,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1204,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1645,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+684,"auto_in_pready", false,-1);
    tracep->declBit(c+685,"auto_in_pslverr", false,-1);
    tracep->declBus(c+686,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+676,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1388,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1389,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1584,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1802,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1803,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1804,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1367,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1212,"in_psel", false,-1);
    tracep->declBit(c+1213,"in_penable", false,-1);
    tracep->declBus(c+1645,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1199,"in_pwrite", false,-1);
    tracep->declBus(c+1200,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+684,"in_pready", false,-1);
    tracep->declBus(c+686,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+685,"in_pslverr", false,-1);
    tracep->declBit(c+676,"spi_sck", false,-1);
    tracep->declBus(c+1388,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1389,"spi_mosi", false,-1);
    tracep->declBit(c+1584,"spi_miso", false,-1);
    tracep->declBit(c+771,"spi_irq_out", false,-1);
    tracep->declBus(c+1805,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1806,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1805,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1807,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1808,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1809,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1653,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1796,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1795,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1791,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1793,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1792,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1794,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1790,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1798,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1799,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1810,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+772,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1485,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+773,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+774,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+775,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+776,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+777,"wb_we_i", false,-1);
    tracep->declBit(c+778,"wb_stb_i", false,-1);
    tracep->declBit(c+779,"wb_cyc_i", false,-1);
    tracep->declBit(c+780,"wb_ack_o", false,-1);
    tracep->declBit(c+1650,"wb_err_o", false,-1);
    tracep->declBit(c+781,"wb_int_o", false,-1);
    tracep->declBit(c+782,"done", false,-1);
    tracep->declBus(c+783,"paddr", false,-1, 31,0);
    tracep->declQuad(c+784,"data", false,-1, 63,0);
    tracep->declBit(c+786,"is_flash_access", false,-1);
    tracep->declBus(c+787,"tmp", false,-1, 31,0);
    tracep->declQuad(c+788,"tmp64", false,-1, 63,0);
    tracep->declBus(c+790,"counter", false,-1, 7,0);
    tracep->declBit(c+791,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1811,"Tp", false,-1, 31,0);
    tracep->declBit(c+1562,"wb_clk_i", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBus(c+773,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+774,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+775,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+776,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+777,"wb_we_i", false,-1);
    tracep->declBit(c+778,"wb_stb_i", false,-1);
    tracep->declBit(c+779,"wb_cyc_i", false,-1);
    tracep->declBit(c+780,"wb_ack_o", false,-1);
    tracep->declBit(c+1650,"wb_err_o", false,-1);
    tracep->declBit(c+781,"wb_int_o", false,-1);
    tracep->declBus(c+1388,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+676,"sclk_pad_o", false,-1);
    tracep->declBit(c+1389,"mosi_pad_o", false,-1);
    tracep->declBit(c+1584,"miso_pad_i", false,-1);
    tracep->declBus(c+792,"divider", false,-1, 15,0);
    tracep->declBus(c+793,"ctrl", false,-1, 13,0);
    tracep->declBus(c+794,"ss", false,-1, 7,0);
    tracep->declBus(c+795,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+796,"rx", false,-1, 127,0);
    tracep->declBit(c+800,"rx_negedge", false,-1);
    tracep->declBit(c+801,"tx_negedge", false,-1);
    tracep->declBus(c+802,"char_len", false,-1, 6,0);
    tracep->declBit(c+803,"go", false,-1);
    tracep->declBit(c+804,"lsb", false,-1);
    tracep->declBit(c+805,"ie", false,-1);
    tracep->declBit(c+806,"ass", false,-1);
    tracep->declBit(c+807,"spi_divider_sel", false,-1);
    tracep->declBit(c+808,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+809,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+810,"spi_ss_sel", false,-1);
    tracep->declBit(c+811,"tip", false,-1);
    tracep->declBit(c+812,"pos_edge", false,-1);
    tracep->declBit(c+813,"neg_edge", false,-1);
    tracep->declBit(c+814,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1811,"Tp", false,-1, 31,0);
    tracep->declBit(c+1562,"clk_in", false,-1);
    tracep->declBit(c+1563,"rst", false,-1);
    tracep->declBit(c+811,"enable", false,-1);
    tracep->declBit(c+803,"go", false,-1);
    tracep->declBit(c+814,"last_clk", false,-1);
    tracep->declBus(c+792,"divider", false,-1, 15,0);
    tracep->declBit(c+676,"clk_out", false,-1);
    tracep->declBit(c+812,"pos_edge", false,-1);
    tracep->declBit(c+813,"neg_edge", false,-1);
    tracep->declBus(c+815,"cnt", false,-1, 15,0);
    tracep->declBit(c+816,"cnt_zero", false,-1);
    tracep->declBit(c+817,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1811,"Tp", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"rst", false,-1);
    tracep->declBus(c+818,"latch", false,-1, 3,0);
    tracep->declBus(c+776,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+802,"len", false,-1, 6,0);
    tracep->declBit(c+804,"lsb", false,-1);
    tracep->declBit(c+803,"go", false,-1);
    tracep->declBit(c+812,"pos_edge", false,-1);
    tracep->declBit(c+813,"neg_edge", false,-1);
    tracep->declBit(c+800,"rx_negedge", false,-1);
    tracep->declBit(c+801,"tx_negedge", false,-1);
    tracep->declBit(c+811,"tip", false,-1);
    tracep->declBit(c+814,"last", false,-1);
    tracep->declBus(c+774,"p_in", false,-1, 31,0);
    tracep->declArray(c+796,"p_out", false,-1, 127,0);
    tracep->declBit(c+676,"s_clk", false,-1);
    tracep->declBit(c+1584,"s_in", false,-1);
    tracep->declBit(c+1389,"s_out", false,-1);
    tracep->declBus(c+819,"cnt", false,-1, 7,0);
    tracep->declArray(c+796,"data", false,-1, 127,0);
    tracep->declBus(c+820,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+821,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+822,"rx_clk", false,-1);
    tracep->declBit(c+823,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1209,"auto_in_psel", false,-1);
    tracep->declBit(c+1210,"auto_in_penable", false,-1);
    tracep->declBit(c+1199,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1205,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1645,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1211,"auto_in_pready", false,-1);
    tracep->declBit(c+1650,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1593,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1582,"uart_rx", false,-1);
    tracep->declBit(c+1583,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1209,"in_psel", false,-1);
    tracep->declBit(c+1210,"in_penable", false,-1);
    tracep->declBus(c+1645,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1211,"in_pready", false,-1);
    tracep->declBit(c+1650,"in_pslverr", false,-1);
    tracep->declBus(c+1355,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1199,"in_pwrite", false,-1);
    tracep->declBus(c+1593,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1200,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1582,"uart_rx", false,-1);
    tracep->declBit(c+1583,"uart_tx", false,-1);
    tracep->declBit(c+824,"rtsn", false,-1);
    tracep->declBit(c+1650,"ctsn", false,-1);
    tracep->declBit(c+825,"dtr_pad_o", false,-1);
    tracep->declBit(c+1650,"dsr_pad_i", false,-1);
    tracep->declBit(c+1650,"ri_pad_i", false,-1);
    tracep->declBit(c+1650,"dcd_pad_i", false,-1);
    tracep->declBit(c+826,"interrupt", false,-1);
    tracep->declBit(c+1632,"reg_we", false,-1);
    tracep->declBit(c+1633,"reg_re", false,-1);
    tracep->declBus(c+1368,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1369,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+613,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1486,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+827,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBus(c+1368,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1370,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1486,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1632,"wb_we_i", false,-1);
    tracep->declBit(c+1633,"wb_re_i", false,-1);
    tracep->declBit(c+1583,"stx_pad_o", false,-1);
    tracep->declBit(c+1582,"srx_pad_i", false,-1);
    tracep->declBus(c+1798,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+827,"rts_pad_o", false,-1);
    tracep->declBit(c+825,"dtr_pad_o", false,-1);
    tracep->declBit(c+826,"int_o", false,-1);
    tracep->declBit(c+828,"enable", false,-1);
    tracep->declBit(c+829,"srx_pad", false,-1);
    tracep->declBus(c+830,"ier", false,-1, 3,0);
    tracep->declBus(c+831,"iir", false,-1, 3,0);
    tracep->declBus(c+832,"fcr", false,-1, 1,0);
    tracep->declBus(c+833,"mcr", false,-1, 4,0);
    tracep->declBus(c+834,"lcr", false,-1, 7,0);
    tracep->declBus(c+835,"msr", false,-1, 7,0);
    tracep->declBus(c+836,"dl", false,-1, 15,0);
    tracep->declBus(c+837,"scratch", false,-1, 7,0);
    tracep->declBit(c+838,"start_dlc", false,-1);
    tracep->declBit(c+839,"lsr_mask_d", false,-1);
    tracep->declBit(c+840,"msi_reset", false,-1);
    tracep->declBus(c+841,"dlc", false,-1, 15,0);
    tracep->declBus(c+842,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+843,"rx_reset", false,-1);
    tracep->declBit(c+844,"tx_reset", false,-1);
    tracep->declBit(c+845,"dlab", false,-1);
    tracep->declBit(c+1651,"cts_pad_i", false,-1);
    tracep->declBit(c+1650,"dsr_pad_i", false,-1);
    tracep->declBit(c+1650,"ri_pad_i", false,-1);
    tracep->declBit(c+1650,"dcd_pad_i", false,-1);
    tracep->declBit(c+846,"loopback", false,-1);
    tracep->declBit(c+1650,"cts", false,-1);
    tracep->declBit(c+1651,"dsr", false,-1);
    tracep->declBit(c+1651,"ri", false,-1);
    tracep->declBit(c+1651,"dcd", false,-1);
    tracep->declBit(c+847,"cts_c", false,-1);
    tracep->declBit(c+848,"dsr_c", false,-1);
    tracep->declBit(c+849,"ri_c", false,-1);
    tracep->declBit(c+850,"dcd_c", false,-1);
    tracep->declBus(c+851,"lsr", false,-1, 7,0);
    tracep->declBit(c+852,"lsr0", false,-1);
    tracep->declBit(c+853,"lsr1", false,-1);
    tracep->declBit(c+854,"lsr2", false,-1);
    tracep->declBit(c+855,"lsr3", false,-1);
    tracep->declBit(c+856,"lsr4", false,-1);
    tracep->declBit(c+857,"lsr5", false,-1);
    tracep->declBit(c+858,"lsr6", false,-1);
    tracep->declBit(c+859,"lsr7", false,-1);
    tracep->declBit(c+860,"lsr0r", false,-1);
    tracep->declBit(c+861,"lsr1r", false,-1);
    tracep->declBit(c+862,"lsr2r", false,-1);
    tracep->declBit(c+863,"lsr3r", false,-1);
    tracep->declBit(c+864,"lsr4r", false,-1);
    tracep->declBit(c+865,"lsr5r", false,-1);
    tracep->declBit(c+866,"lsr6r", false,-1);
    tracep->declBit(c+867,"lsr7r", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBit(c+868,"rls_int", false,-1);
    tracep->declBit(c+869,"rda_int", false,-1);
    tracep->declBit(c+870,"ti_int", false,-1);
    tracep->declBit(c+871,"thre_int", false,-1);
    tracep->declBit(c+872,"ms_int", false,-1);
    tracep->declBit(c+873,"tf_push", false,-1);
    tracep->declBit(c+874,"rf_pop", false,-1);
    tracep->declBus(c+1634,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+875,"rf_error_bit", false,-1);
    tracep->declBit(c+853,"rf_overrun", false,-1);
    tracep->declBit(c+876,"rf_push_pulse", false,-1);
    tracep->declBus(c+877,"rf_count", false,-1, 4,0);
    tracep->declBus(c+878,"tf_count", false,-1, 4,0);
    tracep->declBus(c+879,"tstate", false,-1, 2,0);
    tracep->declBus(c+880,"rstate", false,-1, 3,0);
    tracep->declBus(c+881,"counter_t", false,-1, 9,0);
    tracep->declBit(c+882,"thre_set_en", false,-1);
    tracep->declBus(c+883,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+884,"block_value", false,-1, 7,0);
    tracep->declBit(c+885,"serial_out", false,-1);
    tracep->declBit(c+886,"serial_in", false,-1);
    tracep->declBit(c+31,"lsr_mask_condition", false,-1);
    tracep->declBit(c+32,"iir_read", false,-1);
    tracep->declBit(c+33,"msr_read", false,-1);
    tracep->declBit(c+34,"fifo_read", false,-1);
    tracep->declBit(c+35,"fifo_write", false,-1);
    tracep->declBus(c+887,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+888,"lsr0_d", false,-1);
    tracep->declBit(c+889,"lsr1_d", false,-1);
    tracep->declBit(c+890,"lsr2_d", false,-1);
    tracep->declBit(c+891,"lsr3_d", false,-1);
    tracep->declBit(c+892,"lsr4_d", false,-1);
    tracep->declBit(c+893,"lsr5_d", false,-1);
    tracep->declBit(c+894,"lsr6_d", false,-1);
    tracep->declBit(c+895,"lsr7_d", false,-1);
    tracep->declBit(c+896,"rls_int_d", false,-1);
    tracep->declBit(c+897,"thre_int_d", false,-1);
    tracep->declBit(c+898,"ms_int_d", false,-1);
    tracep->declBit(c+899,"ti_int_d", false,-1);
    tracep->declBit(c+900,"rda_int_d", false,-1);
    tracep->declBit(c+901,"rls_int_rise", false,-1);
    tracep->declBit(c+902,"thre_int_rise", false,-1);
    tracep->declBit(c+903,"ms_int_rise", false,-1);
    tracep->declBit(c+904,"ti_int_rise", false,-1);
    tracep->declBit(c+905,"rda_int_rise", false,-1);
    tracep->declBit(c+906,"rls_int_pnd", false,-1);
    tracep->declBit(c+907,"rda_int_pnd", false,-1);
    tracep->declBit(c+908,"thre_int_pnd", false,-1);
    tracep->declBit(c+909,"ms_int_pnd", false,-1);
    tracep->declBit(c+910,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1811,"Tp", false,-1, 31,0);
    tracep->declBus(c+1811,"width", false,-1, 31,0);
    tracep->declBus(c+1764,"init_value", false,-1, 0,0);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1650,"stage1_rst_i", false,-1);
    tracep->declBit(c+1651,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1582,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+829,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+911,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBus(c+834,"lcr", false,-1, 7,0);
    tracep->declBit(c+874,"rf_pop", false,-1);
    tracep->declBit(c+886,"srx_pad_i", false,-1);
    tracep->declBit(c+828,"enable", false,-1);
    tracep->declBit(c+843,"rx_reset", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBus(c+881,"counter_t", false,-1, 9,0);
    tracep->declBus(c+877,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1634,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+853,"rf_overrun", false,-1);
    tracep->declBit(c+875,"rf_error_bit", false,-1);
    tracep->declBus(c+880,"rstate", false,-1, 3,0);
    tracep->declBit(c+876,"rf_push_pulse", false,-1);
    tracep->declBus(c+912,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+913,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+914,"rshift", false,-1, 7,0);
    tracep->declBit(c+915,"rparity", false,-1);
    tracep->declBit(c+916,"rparity_error", false,-1);
    tracep->declBit(c+917,"rframing_error", false,-1);
    tracep->declBit(c+918,"rbit_in", false,-1);
    tracep->declBit(c+919,"rparity_xor", false,-1);
    tracep->declBus(c+920,"counter_b", false,-1, 7,0);
    tracep->declBit(c+921,"rf_push_q", false,-1);
    tracep->declBus(c+922,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+923,"rf_push", false,-1);
    tracep->declBit(c+924,"break_error", false,-1);
    tracep->declBit(c+925,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+926,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+927,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+928,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1653,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1796,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1795,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1791,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1793,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1792,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1794,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1790,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1798,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1799,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1812,"sr_push", false,-1, 3,0);
    tracep->declBus(c+929,"toc_value", false,-1, 9,0);
    tracep->declBus(c+930,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1813,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1814,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1784,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1777,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBit(c+876,"push", false,-1);
    tracep->declBit(c+874,"pop", false,-1);
    tracep->declBus(c+922,"data_in", false,-1, 10,0);
    tracep->declBit(c+843,"fifo_reset", false,-1);
    tracep->declBit(c+30,"reset_status", false,-1);
    tracep->declBus(c+1634,"data_out", false,-1, 10,0);
    tracep->declBit(c+853,"overrun", false,-1);
    tracep->declBus(c+877,"count", false,-1, 4,0);
    tracep->declBit(c+875,"error_bit", false,-1);
    tracep->declBus(c+1635,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+931+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+947,"top", false,-1, 3,0);
    tracep->declBus(c+948,"bottom", false,-1, 3,0);
    tracep->declBus(c+949,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+950,"word0", false,-1, 2,0);
    tracep->declBus(c+951,"word1", false,-1, 2,0);
    tracep->declBus(c+952,"word2", false,-1, 2,0);
    tracep->declBus(c+953,"word3", false,-1, 2,0);
    tracep->declBus(c+954,"word4", false,-1, 2,0);
    tracep->declBus(c+955,"word5", false,-1, 2,0);
    tracep->declBus(c+956,"word6", false,-1, 2,0);
    tracep->declBus(c+957,"word7", false,-1, 2,0);
    tracep->declBus(c+958,"word8", false,-1, 2,0);
    tracep->declBus(c+959,"word9", false,-1, 2,0);
    tracep->declBus(c+960,"word10", false,-1, 2,0);
    tracep->declBus(c+961,"word11", false,-1, 2,0);
    tracep->declBus(c+962,"word12", false,-1, 2,0);
    tracep->declBus(c+963,"word13", false,-1, 2,0);
    tracep->declBus(c+964,"word14", false,-1, 2,0);
    tracep->declBus(c+965,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1784,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1804,"data_width", false,-1, 31,0);
    tracep->declBus(c+1814,"depth", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+876,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 3,0);
    tracep->declBus(c+948,"dpra", false,-1, 3,0);
    tracep->declBus(c+966,"di", false,-1, 7,0);
    tracep->declBus(c+1635,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+614+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBus(c+834,"lcr", false,-1, 7,0);
    tracep->declBit(c+873,"tf_push", false,-1);
    tracep->declBus(c+1370,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+828,"enable", false,-1);
    tracep->declBit(c+844,"tx_reset", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBit(c+885,"stx_pad_o", false,-1);
    tracep->declBus(c+879,"tstate", false,-1, 2,0);
    tracep->declBus(c+878,"tf_count", false,-1, 4,0);
    tracep->declBus(c+967,"counter", false,-1, 4,0);
    tracep->declBus(c+968,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+969,"shift_out", false,-1, 6,0);
    tracep->declBit(c+970,"stx_o_tmp", false,-1);
    tracep->declBit(c+971,"parity_xor", false,-1);
    tracep->declBit(c+972,"tf_pop", false,-1);
    tracep->declBit(c+973,"bit_out", false,-1);
    tracep->declBus(c+1370,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1196,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+974,"tf_overrun", false,-1);
    tracep->declBus(c+1655,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1645,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1656,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1657,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1658,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1659,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1804,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1814,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1784,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1777,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBit(c+873,"push", false,-1);
    tracep->declBit(c+972,"pop", false,-1);
    tracep->declBus(c+1370,"data_in", false,-1, 7,0);
    tracep->declBit(c+844,"fifo_reset", false,-1);
    tracep->declBit(c+30,"reset_status", false,-1);
    tracep->declBus(c+1196,"data_out", false,-1, 7,0);
    tracep->declBit(c+974,"overrun", false,-1);
    tracep->declBus(c+878,"count", false,-1, 4,0);
    tracep->declBus(c+975,"top", false,-1, 3,0);
    tracep->declBus(c+976,"bottom", false,-1, 3,0);
    tracep->declBus(c+977,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1784,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1804,"data_width", false,-1, 31,0);
    tracep->declBus(c+1814,"depth", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+873,"we", false,-1);
    tracep->declBus(c+975,"a", false,-1, 3,0);
    tracep->declBus(c+976,"dpra", false,-1, 3,0);
    tracep->declBus(c+1370,"di", false,-1, 7,0);
    tracep->declBus(c+1196,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+630+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1202,"auto_in_psel", false,-1);
    tracep->declBit(c+1203,"auto_in_penable", false,-1);
    tracep->declBit(c+1199,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1204,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1645,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"auto_in_pready", false,-1);
    tracep->declBit(c+1648,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1649,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1576,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1577,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1578,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1579,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1580,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1581,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1367,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1202,"in_psel", false,-1);
    tracep->declBit(c+1203,"in_penable", false,-1);
    tracep->declBus(c+1645,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1199,"in_pwrite", false,-1);
    tracep->declBus(c+1200,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1201,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+681,"in_pready", false,-1);
    tracep->declBus(c+1649,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1648,"in_pslverr", false,-1);
    tracep->declBus(c+1576,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1579,"vga_hsync", false,-1);
    tracep->declBit(c+1580,"vga_vsync", false,-1);
    tracep->declBit(c+1581,"vga_valid", false,-1);
    tracep->declBus(c+978,"h_addr", false,-1, 9,0);
    tracep->declBus(c+646,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1197,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1371,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+681,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1562,"pclk", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1197,"vga_data", false,-1, 23,0);
    tracep->declBus(c+978,"h_addr", false,-1, 9,0);
    tracep->declBus(c+646,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1579,"hsync", false,-1);
    tracep->declBit(c+1580,"vsync", false,-1);
    tracep->declBit(c+1581,"valid", false,-1);
    tracep->declBus(c+1576,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1815,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1816,"h_active", false,-1, 31,0);
    tracep->declBus(c+1817,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1818,"h_total", false,-1, 31,0);
    tracep->declBus(c+1782,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1819,"v_active", false,-1, 31,0);
    tracep->declBus(c+1820,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1821,"v_total", false,-1, 31,0);
    tracep->declBus(c+979,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+647,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+980,"h_valid", false,-1);
    tracep->declBit(c+648,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+676,"sck", false,-1);
    tracep->declBit(c+1401,"ss", false,-1);
    tracep->declBit(c+1389,"mosi", false,-1);
    tracep->declBit(c+1180,"miso", false,-1);
    tracep->declBus(c+1181,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1182,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1636,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+676,"sck", false,-1);
    tracep->declBit(c+1402,"ss", false,-1);
    tracep->declBit(c+1389,"mosi", false,-1);
    tracep->declBit(c+1637,"miso", false,-1);
    tracep->declBit(c+1402,"reset", false,-1);
    tracep->declBus(c+1174,"state", false,-1, 2,0);
    tracep->declBus(c+1175,"counter", false,-1, 7,0);
    tracep->declBus(c+1176,"cmd", false,-1, 7,0);
    tracep->declBus(c+1177,"addr", false,-1, 23,0);
    tracep->declBus(c+1178,"data", false,-1, 31,0);
    tracep->declBit(c+1179,"ren", false,-1);
    tracep->declBus(c+1638,"rdata", false,-1, 31,0);
    tracep->declBus(c+1639,"raddr", false,-1, 31,0);
    tracep->declBus(c+1183,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+676,"clock", false,-1);
    tracep->declBit(c+1179,"valid", false,-1);
    tracep->declBus(c+1176,"cmd", false,-1, 7,0);
    tracep->declBus(c+1639,"addr", false,-1, 31,0);
    tracep->declBus(c+1638,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1585,"sck", false,-1);
    tracep->declBit(c+1458,"ce_n", false,-1);
    tracep->declBus(c+1586,"dio", false,-1, 3,0);
    tracep->declBus(c+666,"dio_out", false,-1, 3,0);
    tracep->declBus(c+667,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1586,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1757,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1811,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1782,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1785,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1784,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1777,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+668,"state", false,-1, 2,0);
    tracep->declBus(c+1640,"next_state", false,-1, 2,0);
    tracep->declBus(c+669,"counter", false,-1, 7,0);
    tracep->declBus(c+670,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+671,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+672,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+673,"is_read_op", false,-1);
    tracep->declBit(c+674,"is_write_op", false,-1);
    tracep->declBus(c+675,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1641,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1587,"clk", false,-1);
    tracep->declBit(c+1390,"cke", false,-1);
    tracep->declBit(c+677,"cs", false,-1);
    tracep->declBit(c+678,"ras", false,-1);
    tracep->declBit(c+679,"cas", false,-1);
    tracep->declBit(c+680,"we", false,-1);
    tracep->declBus(c+1588,"a", false,-1, 13,0);
    tracep->declBus(c+1391,"ba", false,-1, 1,0);
    tracep->declBus(c+1392,"dqm", false,-1, 3,0);
    tracep->declBus(c+1451,"dq", false,-1, 31,0);
    tracep->declBit(c+22,"cs_0", false,-1);
    tracep->declBit(c+23,"ras_0", false,-1);
    tracep->declBit(c+24,"cas_0", false,-1);
    tracep->declBit(c+25,"we_0", false,-1);
    tracep->declBit(c+26,"cs_1", false,-1);
    tracep->declBit(c+27,"ras_1", false,-1);
    tracep->declBit(c+28,"cas_1", false,-1);
    tracep->declBit(c+29,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1587,"clk", false,-1);
    tracep->declBit(c+1390,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1395,"a", false,-1, 12,0);
    tracep->declBus(c+1391,"ba", false,-1, 1,0);
    tracep->declBus(c+1392,"dqm", false,-1, 3,0);
    tracep->declBus(c+1451,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1587,"clk", false,-1);
    tracep->declBit(c+1390,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1395,"a", false,-1, 12,0);
    tracep->declBus(c+1391,"ba", false,-1, 1,0);
    tracep->declBus(c+1403,"dqm", false,-1, 1,0);
    tracep->declBus(c+1452,"dq", false,-1, 15,0);
    tracep->declBus(c+1795,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1796,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1790,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1822,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1791,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1792,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1793,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1653,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1114,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1115,"bl", false,-1, 2,0);
    tracep->declBus(c+150,"command", false,-1, 3,0);
    tracep->declBus(c+1116,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1117,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1404,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1118,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1453,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1119,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1120+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1823,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1124,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1824,"state", false,-1, 2,0);
    tracep->declBit(c+1125,"write_brust", false,-1);
    tracep->declBus(c+1126,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1127,"read_burst", false,-1);
    tracep->declBit(c+1825,"flag", false,-1);
    tracep->declBus(c+1128,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1587,"clk", false,-1);
    tracep->declBit(c+1390,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1395,"a", false,-1, 12,0);
    tracep->declBus(c+1391,"ba", false,-1, 1,0);
    tracep->declBus(c+1405,"dqm", false,-1, 1,0);
    tracep->declBus(c+1454,"dq", false,-1, 15,0);
    tracep->declBus(c+1795,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1796,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1790,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1822,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1791,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1792,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1793,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1653,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1129,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1130,"bl", false,-1, 2,0);
    tracep->declBus(c+150,"command", false,-1, 3,0);
    tracep->declBus(c+1131,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1132,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1404,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1133,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1455,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1134,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1135+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1826,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1139,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1827,"state", false,-1, 2,0);
    tracep->declBit(c+1140,"write_brust", false,-1);
    tracep->declBus(c+1141,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1142,"read_burst", false,-1);
    tracep->declBit(c+1828,"flag", false,-1);
    tracep->declBus(c+1143,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1587,"clk", false,-1);
    tracep->declBit(c+1390,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1395,"a", false,-1, 12,0);
    tracep->declBus(c+1391,"ba", false,-1, 1,0);
    tracep->declBus(c+1392,"dqm", false,-1, 3,0);
    tracep->declBus(c+1451,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1587,"clk", false,-1);
    tracep->declBit(c+1390,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1395,"a", false,-1, 12,0);
    tracep->declBus(c+1391,"ba", false,-1, 1,0);
    tracep->declBus(c+1403,"dqm", false,-1, 1,0);
    tracep->declBus(c+1452,"dq", false,-1, 15,0);
    tracep->declBus(c+1795,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1796,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1790,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1822,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1791,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1792,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1793,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1653,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1144,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1145,"bl", false,-1, 2,0);
    tracep->declBus(c+151,"command", false,-1, 3,0);
    tracep->declBus(c+1146,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1147,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1404,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1148,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1456,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1149,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1150+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1829,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1154,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1830,"state", false,-1, 2,0);
    tracep->declBit(c+1155,"write_brust", false,-1);
    tracep->declBus(c+1156,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1157,"read_burst", false,-1);
    tracep->declBit(c+1831,"flag", false,-1);
    tracep->declBus(c+1158,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1587,"clk", false,-1);
    tracep->declBit(c+1390,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1395,"a", false,-1, 12,0);
    tracep->declBus(c+1391,"ba", false,-1, 1,0);
    tracep->declBus(c+1405,"dqm", false,-1, 1,0);
    tracep->declBus(c+1454,"dq", false,-1, 15,0);
    tracep->declBus(c+1795,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1796,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1790,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1822,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1791,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1792,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1793,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1653,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1159,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1160,"bl", false,-1, 2,0);
    tracep->declBus(c+151,"command", false,-1, 3,0);
    tracep->declBus(c+1161,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1162,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1404,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1163,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1457,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1164,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1165+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1832,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1169,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1833,"state", false,-1, 2,0);
    tracep->declBit(c+1170,"write_brust", false,-1);
    tracep->declBus(c+1171,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1172,"read_burst", false,-1);
    tracep->declBit(c+1834,"flag", false,-1);
    tracep->declBus(c+1173,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
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
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+153,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
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
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+158,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+159,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+160,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+161,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+162,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+164,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+165,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+169,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+170,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+171,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+172,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+173,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+174,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
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
    bufp->fullBit(oldp+261,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+264,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+265,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+266,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+267,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+269,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+271,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+296,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+378,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+379,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+466,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+478,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+482,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+494,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+498,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+502,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+506,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+510,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+514,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+518,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+522,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+526,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+530,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+534,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+538,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+542,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+546,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+550,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+554,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+558,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+562,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+566,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+570,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+574,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+608,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+646,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+649,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+650,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+651,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+652,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+653,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+654,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+655,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+656,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+657,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+658,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+659,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+660,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+661,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+662,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+663,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+664,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+665,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+677,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+678,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+679,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+680,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+688,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+690,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullSData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+694,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+695,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+696,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+697,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+698,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+699,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+700,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+701,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+704,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+705,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+708,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+709,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+713,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+717,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+732,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+733,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+735,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+736,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+737,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+738,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+739,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+747,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+787,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+788,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+800,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+801,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+802,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+803,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+804,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+805,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+806,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+807,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+808,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+810,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+814,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+816,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+817,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+820,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+824,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+825,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+845,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+846,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+847,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+848,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+849,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+850,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+851,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+854,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+855,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+856,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+875,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+882,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+901,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+902,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+903,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+904,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+905,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+924,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+925,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+926,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+927,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+928,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+930,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+949,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+966,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+977,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullIData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_busy));
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1007,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1013,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu_valid));
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_lsu_valid));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu_valid));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_locked));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__current_master));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1061,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc_flag));
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1077,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1078,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1080,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullIData(oldp+1082,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd),5);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd),5);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd),5);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemWrite));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1101,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1104,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state)))),2);
    bufp->fullCData(oldp+1105,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1106,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1107,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1108,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1109,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1110,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1111,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1112,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1113,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1114,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1115,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1129,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1130,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1144,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1145,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1159,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1160,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1179,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1187,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1204,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1205,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1216,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1219,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1222,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullSData(oldp+1241,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullIData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1355,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1361,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1362,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1363,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1364,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1365,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1366,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1367,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1368,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1371,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1372,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1373,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1374,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1375,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1376,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1377,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1378,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1379,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1380,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1381,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1382,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1383,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1384,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1385,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1386,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1387,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullSData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1401,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1403,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1404,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1405,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1406,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1409,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1412,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1415,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1430,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1431,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1432,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1433,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1440,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1441,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1443,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1452,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1454,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1465,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullSData(oldp+1470,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc),32);
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullCData(oldp+1501,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1502,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1513,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1519,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant_next));
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1526,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullBit(oldp+1528,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1529,(((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))))));
    bufp->fullBit(oldp+1530,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1531,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1532,(((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)))));
    bufp->fullBit(oldp+1533,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__flag));
    bufp->fullCData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1537,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1538,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_fetch),32);
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_out),32);
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_buf),32);
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),3);
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ctrl_hazard));
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ar_inflight));
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1562,(vlSelf->clock));
    bufp->fullBit(oldp+1563,(vlSelf->reset));
    bufp->fullSData(oldp+1564,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1565,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1566,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1567,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1568,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1569,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1570,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1571,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1572,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1573,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1574,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1575,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1576,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1577,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1578,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1579,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1580,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1581,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1582,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1583,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1584,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1587,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1588,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1590,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1591,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
    bufp->fullBit(oldp+1592,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1593,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1594,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1595,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1596,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+1598,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1600,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1601,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1602,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1603,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullBit(oldp+1604,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1607,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1608,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1609,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+1611,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1615,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1616,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullBit(oldp+1617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast)))));
    bufp->fullBit(oldp+1618,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1619,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1620,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1621,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullCData(oldp+1622,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
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
    bufp->fullBit(oldp+1623,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1624,((0xfU & vlSelf->__VdfgTmp_h5918518b__0)),4);
    bufp->fullBit(oldp+1625,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1626,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1629,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                          : 0U))),8);
    bufp->fullCData(oldp+1630,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1631,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1634,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1637,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1639,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1642,(0x226U),32);
    bufp->fullIData(oldp+1643,(0x64U),32);
    bufp->fullIData(oldp+1644,(0x200U),32);
    bufp->fullCData(oldp+1645,(1U),3);
    bufp->fullIData(oldp+1646,(0xb00U),32);
    bufp->fullIData(oldp+1647,(9U),32);
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1650,(0U));
    bufp->fullBit(oldp+1651,(1U));
    bufp->fullCData(oldp+1652,(0U),2);
    bufp->fullCData(oldp+1653,(0U),4);
    bufp->fullCData(oldp+1654,(0U),8);
    bufp->fullCData(oldp+1655,(0U),3);
    bufp->fullCData(oldp+1656,(2U),3);
    bufp->fullCData(oldp+1657,(3U),3);
    bufp->fullCData(oldp+1658,(4U),3);
    bufp->fullCData(oldp+1659,(5U),3);
    bufp->fullCData(oldp+1660,(6U),3);
    bufp->fullCData(oldp+1661,(7U),3);
    bufp->fullSData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_rd),10);
    bufp->fullIData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[0]),32);
    bufp->fullIData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[1]),32);
    bufp->fullIData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[2]),32);
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[3]),32);
    bufp->fullIData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[4]),32);
    bufp->fullIData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[5]),32);
    bufp->fullIData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[6]),32);
    bufp->fullIData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[7]),32);
    bufp->fullCData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[0]),4);
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[1]),4);
    bufp->fullCData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[2]),4);
    bufp->fullCData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[3]),4);
    bufp->fullCData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[4]),4);
    bufp->fullCData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[5]),4);
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[6]),4);
    bufp->fullCData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[7]),4);
    bufp->fullIData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[0]),32);
    bufp->fullIData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[1]),32);
    bufp->fullIData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[2]),32);
    bufp->fullIData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[3]),32);
    bufp->fullIData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[4]),32);
    bufp->fullIData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[5]),32);
    bufp->fullIData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[6]),32);
    bufp->fullIData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[7]),32);
    bufp->fullCData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[0]),2);
    bufp->fullCData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[1]),2);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[2]),2);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[3]),2);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[4]),2);
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[5]),2);
    bufp->fullCData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[6]),2);
    bufp->fullCData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[7]),2);
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[0]));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[1]));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[2]));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[3]));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[4]));
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[5]));
    bufp->fullBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[6]));
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[7]));
    bufp->fullCData(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen),8);
    bufp->fullCData(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize),3);
    bufp->fullCData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst),2);
    bufp->fullCData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_counter),3);
    bufp->fullCData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen),3);
    bufp->fullCData(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd),3);
    bufp->fullCData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__next_state_rd),3);
    bufp->fullSData(oldp+1710,(1U),16);
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1727,(0U),32);
    bufp->fullBit(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1757,(0U),32);
    bufp->fullBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1763,(0U));
    bufp->fullBit(oldp+1764,(1U));
    bufp->fullBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1768,(1U),2);
    bufp->fullCData(oldp+1769,(2U),2);
    bufp->fullIData(oldp+1770,(0x20U),32);
    bufp->fullIData(oldp+1771,(4U),32);
    bufp->fullIData(oldp+1772,(0x79737978U),32);
    bufp->fullIData(oldp+1773,(0x17e3c19U),32);
    bufp->fullIData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1777,(5U),32);
    bufp->fullCData(oldp+1778,(0x1bU),8);
    bufp->fullCData(oldp+1779,(0xebU),8);
    bufp->fullCData(oldp+1780,(0x38U),8);
    bufp->fullIData(oldp+1781,(0x18U),32);
    bufp->fullIData(oldp+1782,(2U),32);
    bufp->fullIData(oldp+1783,(6U),32);
    bufp->fullIData(oldp+1784,(4U),32);
    bufp->fullIData(oldp+1785,(3U),32);
    bufp->fullIData(oldp+1786,(0xdU),32);
    bufp->fullIData(oldp+1787,(0x2000U),32);
    bufp->fullIData(oldp+1788,(0x2710U),32);
    bufp->fullIData(oldp+1789,(0x30cU),32);
    bufp->fullCData(oldp+1790,(7U),4);
    bufp->fullCData(oldp+1791,(3U),4);
    bufp->fullCData(oldp+1792,(5U),4);
    bufp->fullCData(oldp+1793,(4U),4);
    bufp->fullCData(oldp+1794,(6U),4);
    bufp->fullCData(oldp+1795,(2U),4);
    bufp->fullCData(oldp+1796,(1U),4);
    bufp->fullSData(oldp+1797,(0x20U),13);
    bufp->fullCData(oldp+1798,(8U),4);
    bufp->fullCData(oldp+1799,(9U),4);
    bufp->fullIData(oldp+1800,(0xaU),32);
    bufp->fullIData(oldp+1801,(0x11U),32);
    bufp->fullIData(oldp+1802,(0x30000000U),32);
    bufp->fullIData(oldp+1803,(0x3fffffffU),32);
    bufp->fullIData(oldp+1804,(8U),32);
    bufp->fullCData(oldp+1805,(4U),5);
    bufp->fullCData(oldp+1806,(0U),5);
    bufp->fullCData(oldp+1807,(0x10U),5);
    bufp->fullCData(oldp+1808,(0x14U),5);
    bufp->fullCData(oldp+1809,(0x18U),5);
    bufp->fullIData(oldp+1810,(0x3000000U),32);
    bufp->fullIData(oldp+1811,(1U),32);
    bufp->fullCData(oldp+1812,(0xaU),4);
    bufp->fullIData(oldp+1813,(0xbU),32);
    bufp->fullIData(oldp+1814,(0x10U),32);
    bufp->fullIData(oldp+1815,(0x60U),32);
    bufp->fullIData(oldp+1816,(0x90U),32);
    bufp->fullIData(oldp+1817,(0x310U),32);
    bufp->fullIData(oldp+1818,(0x320U),32);
    bufp->fullIData(oldp+1819,(0x23U),32);
    bufp->fullIData(oldp+1820,(0x203U),32);
    bufp->fullIData(oldp+1821,(0x20dU),32);
    bufp->fullIData(oldp+1822,(0x400000U),32);
    bufp->fullCData(oldp+1823,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1824,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1825,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1827,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1828,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1830,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1831,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1833,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1834,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
