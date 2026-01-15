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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1567,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1568,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1569,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1570,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1571,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1572,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1573,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1574,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1575,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1576,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1577,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1578,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1579,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1580,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1581,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1582,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1583,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1584,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1585,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1586,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1567,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1568,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1569,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1570,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1571,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1572,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1573,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1574,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1575,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1576,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1577,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1578,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1579,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1580,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1581,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1582,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1583,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1584,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1585,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1586,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+711,"spi_sck", false,-1);
    tracep->declBus(c+1440,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1441,"spi_mosi", false,-1);
    tracep->declBit(c+1587,"spi_miso", false,-1);
    tracep->declBit(c+1585,"uart_rx", false,-1);
    tracep->declBit(c+1586,"uart_tx", false,-1);
    tracep->declBit(c+1588,"psram_sck", false,-1);
    tracep->declBit(c+1554,"psram_ce_n", false,-1);
    tracep->declBus(c+1589,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1590,"sdram_clk", false,-1);
    tracep->declBit(c+1442,"sdram_cke", false,-1);
    tracep->declBit(c+712,"sdram_cs", false,-1);
    tracep->declBit(c+713,"sdram_ras", false,-1);
    tracep->declBit(c+714,"sdram_cas", false,-1);
    tracep->declBit(c+715,"sdram_we", false,-1);
    tracep->declBus(c+1591,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1443,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1444,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1502,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1567,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1568,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1569,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1574,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1575,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1576,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1577,"ps2_clk", false,-1);
    tracep->declBit(c+1578,"ps2_data", false,-1);
    tracep->declBus(c+1579,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1580,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1581,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1582,"vga_hsync", false,-1);
    tracep->declBit(c+1583,"vga_vsync", false,-1);
    tracep->declBit(c+1584,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1639,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1640,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1641,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1260,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1261,"in_psel", false,-1);
    tracep->declBit(c+1262,"in_penable", false,-1);
    tracep->declBus(c+1642,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1263,"in_pwrite", false,-1);
    tracep->declBus(c+1264,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1265,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1266,"in_pready", false,-1);
    tracep->declBus(c+1267,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1268,"in_pslverr", false,-1);
    tracep->declBus(c+1269,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1270,"out_psel", false,-1);
    tracep->declBit(c+1271,"out_penable", false,-1);
    tracep->declBus(c+1272,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1273,"out_pwrite", false,-1);
    tracep->declBus(c+1274,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"out_pready", false,-1);
    tracep->declBus(c+1592,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1593,"out_pslverr", false,-1);
    tracep->declBus(c+1643,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1644,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1645,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1642,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1646,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1647,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1276,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1277,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1278,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1279,"state", false,-1, 2,0);
    tracep->declBus(c+1594,"next_state", false,-1, 2,0);
    tracep->declBit(c+1648,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1270,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1271,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1273,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1269,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1272,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1593,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1592,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1280,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1281,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1273,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1282,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1272,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+716,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1649,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1650,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1283,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1284,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1273,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1285,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1272,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+155,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1286,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1287,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1273,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1285,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1272,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+717,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+718,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1288,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1289,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1273,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1269,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1272,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1595,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+156,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1290,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1291,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1273,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1285,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1272,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1596,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1293,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1294,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1273,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1282,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1272,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+719,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+720,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+721,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1295,"sel_0", false,-1);
    tracep->declBit(c+1296,"sel_1", false,-1);
    tracep->declBit(c+1297,"sel_2", false,-1);
    tracep->declBit(c+1298,"sel_3", false,-1);
    tracep->declBit(c+1299,"sel_4", false,-1);
    tracep->declBit(c+1300,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1301,"auto_in_awready", false,-1);
    tracep->declBit(c+157,"auto_in_awvalid", false,-1);
    tracep->declBus(c+158,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+159,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+161,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1301,"auto_in_wready", false,-1);
    tracep->declBit(c+162,"auto_in_wvalid", false,-1);
    tracep->declBus(c+163,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+164,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+165,"auto_in_bready", false,-1);
    tracep->declBit(c+1302,"auto_in_bvalid", false,-1);
    tracep->declBus(c+166,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1303,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1304,"auto_in_arready", false,-1);
    tracep->declBit(c+167,"auto_in_arvalid", false,-1);
    tracep->declBus(c+168,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+169,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+170,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+171,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+172,"auto_in_rready", false,-1);
    tracep->declBit(c+1305,"auto_in_rvalid", false,-1);
    tracep->declBus(c+173,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1597,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1261,"auto_out_psel", false,-1);
    tracep->declBit(c+1262,"auto_out_penable", false,-1);
    tracep->declBit(c+1263,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1260,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1264,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1265,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1266,"auto_out_pready", false,-1);
    tracep->declBit(c+1268,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1267,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1262,"nodeOut_penable", false,-1);
    tracep->declBus(c+1306,"state", false,-1, 1,0);
    tracep->declBit(c+1304,"accept_read", false,-1);
    tracep->declBit(c+1301,"accept_write", false,-1);
    tracep->declBit(c+174,"is_write_r", false,-1);
    tracep->declBit(c+1263,"is_write", false,-1);
    tracep->declBus(c+173,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+166,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+175,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+176,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+177,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+178,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1307,"resp", false,-1, 1,0);
    tracep->declBus(c+179,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1303,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1305,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+180,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1302,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+181,"auto_in_awready", false,-1);
    tracep->declBit(c+1457,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1458,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1459,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_in_wready", false,-1);
    tracep->declBit(c+1460,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1461,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1462,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1463,"auto_in_wlast", false,-1);
    tracep->declBit(c+668,"auto_in_bready", false,-1);
    tracep->declBit(c+185,"auto_in_bvalid", false,-1);
    tracep->declBus(c+186,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_in_arready", false,-1);
    tracep->declBit(c+22,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+189,"auto_in_rvalid", false,-1);
    tracep->declBus(c+190,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+191,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+192,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+193,"auto_in_rlast", false,-1);
    tracep->declBit(c+1301,"auto_out_awready", false,-1);
    tracep->declBit(c+157,"auto_out_awvalid", false,-1);
    tracep->declBus(c+158,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+159,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+161,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1301,"auto_out_wready", false,-1);
    tracep->declBit(c+162,"auto_out_wvalid", false,-1);
    tracep->declBus(c+163,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+164,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+165,"auto_out_bready", false,-1);
    tracep->declBit(c+1302,"auto_out_bvalid", false,-1);
    tracep->declBus(c+166,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1303,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1304,"auto_out_arready", false,-1);
    tracep->declBit(c+167,"auto_out_arvalid", false,-1);
    tracep->declBus(c+168,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+169,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+170,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+171,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+172,"auto_out_rready", false,-1);
    tracep->declBit(c+1305,"auto_out_rvalid", false,-1);
    tracep->declBus(c+173,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1597,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+165,"io_enq_ready", false,-1);
    tracep->declBit(c+1302,"io_enq_valid", false,-1);
    tracep->declBus(c+166,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1303,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+668,"io_deq_ready", false,-1);
    tracep->declBit(c+185,"io_deq_valid", false,-1);
    tracep->declBus(c+186,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+187,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+194,"wrap", false,-1);
    tracep->declBit(c+195,"wrap_1", false,-1);
    tracep->declBit(c+196,"maybe_full", false,-1);
    tracep->declBit(c+197,"ptr_match", false,-1);
    tracep->declBit(c+198,"empty", false,-1);
    tracep->declBit(c+199,"full", false,-1);
    tracep->declBit(c+1308,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+195,"R0_addr", false,-1);
    tracep->declBit(c+1652,"R0_en", false,-1);
    tracep->declBit(c+1565,"R0_clk", false,-1);
    tracep->declBus(c+200,"R0_data", false,-1, 5,0);
    tracep->declBit(c+194,"W0_addr", false,-1);
    tracep->declBit(c+1308,"W0_en", false,-1);
    tracep->declBit(c+1565,"W0_clk", false,-1);
    tracep->declBus(c+1598,"W0_data", false,-1, 5,0);
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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+1305,"io_enq_valid", false,-1);
    tracep->declBus(c+173,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1597,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1303,"io_enq_bits_resp", false,-1, 1,0);
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
    tracep->declBit(c+1309,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1652,"R0_en", false,-1);
    tracep->declBit(c+1565,"R0_clk", false,-1);
    tracep->declQuad(c+210,"R0_data", false,-1, 38,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1309,"W0_en", false,-1);
    tracep->declBit(c+1565,"W0_clk", false,-1);
    tracep->declQuad(c+1599,"W0_data", false,-1, 38,0);
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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+22,"io_enq_valid", false,-1);
    tracep->declBus(c+23,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+24,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+25,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+26,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1304,"io_deq_ready", false,-1);
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
    tracep->declBit(c+27,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+218,"R0_addr", false,-1);
    tracep->declBit(c+1652,"R0_en", false,-1);
    tracep->declBit(c+1565,"R0_clk", false,-1);
    tracep->declQuad(c+223,"R0_data", false,-1, 46,0);
    tracep->declBit(c+217,"W0_addr", false,-1);
    tracep->declBit(c+27,"W0_en", false,-1);
    tracep->declBit(c+1565,"W0_clk", false,-1);
    tracep->declQuad(c+28,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+181,"io_enq_ready", false,-1);
    tracep->declBit(c+1457,"io_enq_valid", false,-1);
    tracep->declBus(c+182,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1458,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1459,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+183,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1301,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1464,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+231,"R0_addr", false,-1);
    tracep->declBit(c+1652,"R0_en", false,-1);
    tracep->declBit(c+1565,"R0_clk", false,-1);
    tracep->declQuad(c+236,"R0_data", false,-1, 46,0);
    tracep->declBit(c+230,"W0_addr", false,-1);
    tracep->declBit(c+1464,"W0_en", false,-1);
    tracep->declBit(c+1565,"W0_clk", false,-1);
    tracep->declQuad(c+1601,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1460,"io_enq_valid", false,-1);
    tracep->declBus(c+1461,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1462,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1463,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1301,"io_deq_ready", false,-1);
    tracep->declBit(c+162,"io_deq_valid", false,-1);
    tracep->declBus(c+163,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+164,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+243,"wrap", false,-1);
    tracep->declBit(c+244,"wrap_1", false,-1);
    tracep->declBit(c+245,"maybe_full", false,-1);
    tracep->declBit(c+246,"ptr_match", false,-1);
    tracep->declBit(c+247,"empty", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+1465,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+244,"R0_addr", false,-1);
    tracep->declBit(c+1652,"R0_en", false,-1);
    tracep->declBit(c+1565,"R0_clk", false,-1);
    tracep->declQuad(c+249,"R0_data", false,-1, 35,0);
    tracep->declBit(c+243,"W0_addr", false,-1);
    tracep->declBit(c+1465,"W0_en", false,-1);
    tracep->declBit(c+1565,"W0_clk", false,-1);
    tracep->declQuad(c+1466,"W0_data", false,-1, 35,0);
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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+89,"in_arready", false,-1);
    tracep->declBit(c+30,"in_arvalid", false,-1);
    tracep->declBus(c+31,"in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1603,"in_rready", false,-1);
    tracep->declBit(c+722,"in_rvalid", false,-1);
    tracep->declBus(c+723,"in_rid", false,-1, 3,0);
    tracep->declBus(c+724,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1653,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+725,"in_rlast", false,-1);
    tracep->declBit(c+90,"in_awready", false,-1);
    tracep->declBit(c+1468,"in_awvalid", false,-1);
    tracep->declBus(c+1654,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1016,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1655,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+91,"in_wready", false,-1);
    tracep->declBit(c+1469,"in_wvalid", false,-1);
    tracep->declBus(c+1018,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"in_wlast", false,-1);
    tracep->declBit(c+1604,"in_bready", false,-1);
    tracep->declBit(c+726,"in_bvalid", false,-1);
    tracep->declBus(c+723,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1653,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+89,"out_arready", false,-1);
    tracep->declBit(c+30,"out_arvalid", false,-1);
    tracep->declBus(c+31,"out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1603,"out_rready", false,-1);
    tracep->declBit(c+722,"out_rvalid", false,-1);
    tracep->declBus(c+723,"out_rid", false,-1, 3,0);
    tracep->declBus(c+724,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1653,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+725,"out_rlast", false,-1);
    tracep->declBit(c+90,"out_awready", false,-1);
    tracep->declBit(c+1468,"out_awvalid", false,-1);
    tracep->declBus(c+1654,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1016,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1655,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+91,"out_wready", false,-1);
    tracep->declBit(c+1469,"out_wvalid", false,-1);
    tracep->declBus(c+1018,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"out_wlast", false,-1);
    tracep->declBit(c+1604,"out_bready", false,-1);
    tracep->declBit(c+726,"out_bvalid", false,-1);
    tracep->declBus(c+723,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1653,"out_bresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+256,"auto_in_awready", false,-1);
    tracep->declBit(c+1470,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1654,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+257,"auto_in_wready", false,-1);
    tracep->declBit(c+1471,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1018,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_in_wlast", false,-1);
    tracep->declBit(c+1605,"auto_in_bready", false,-1);
    tracep->declBit(c+258,"auto_in_bvalid", false,-1);
    tracep->declBus(c+259,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_in_arready", false,-1);
    tracep->declBit(c+36,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+92,"auto_in_rready", false,-1);
    tracep->declBit(c+262,"auto_in_rvalid", false,-1);
    tracep->declBus(c+263,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+266,"auto_in_rlast", false,-1);
    tracep->declBit(c+1505,"auto_out_awready", false,-1);
    tracep->declBit(c+1472,"auto_out_awvalid", false,-1);
    tracep->declBus(c+182,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1458,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1459,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+267,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1506,"auto_out_wready", false,-1);
    tracep->declBit(c+1473,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1461,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1462,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1463,"auto_out_wlast", false,-1);
    tracep->declBit(c+1507,"auto_out_bready", false,-1);
    tracep->declBit(c+268,"auto_out_bvalid", false,-1);
    tracep->declBus(c+259,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+270,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+93,"auto_out_arready", false,-1);
    tracep->declBit(c+37,"auto_out_arvalid", false,-1);
    tracep->declBus(c+23,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+38,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+92,"auto_out_rready", false,-1);
    tracep->declBit(c+262,"auto_out_rvalid", false,-1);
    tracep->declBus(c+263,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+271,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+272,"auto_out_rlast", false,-1);
    tracep->declBit(c+1473,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+273,"w_idle", false,-1);
    tracep->declBit(c+1508,"in_awready", false,-1);
    tracep->declBit(c+274,"busy", false,-1);
    tracep->declBus(c+275,"r_addr", false,-1, 31,0);
    tracep->declBus(c+276,"r_len", false,-1, 7,0);
    tracep->declBus(c+39,"len", false,-1, 7,0);
    tracep->declBus(c+40,"addr", false,-1, 31,0);
    tracep->declBit(c+277,"busy_1", false,-1);
    tracep->declBus(c+278,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+279,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+280,"len_1", false,-1, 7,0);
    tracep->declBus(c+1474,"addr_1", false,-1, 31,0);
    tracep->declBit(c+281,"wbeats_latched", false,-1);
    tracep->declBit(c+1472,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1475,"wbeats_valid", false,-1);
    tracep->declBus(c+282,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1476,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1463,"w_last", false,-1);
    tracep->declBit(c+1507,"nodeOut_bready", false,-1);
    tracep->declBus(c+283,"error_0", false,-1, 1,0);
    tracep->declBus(c+284,"error_1", false,-1, 1,0);
    tracep->declBus(c+285,"error_2", false,-1, 1,0);
    tracep->declBus(c+286,"error_3", false,-1, 1,0);
    tracep->declBus(c+287,"error_4", false,-1, 1,0);
    tracep->declBus(c+288,"error_5", false,-1, 1,0);
    tracep->declBus(c+289,"error_6", false,-1, 1,0);
    tracep->declBus(c+290,"error_7", false,-1, 1,0);
    tracep->declBus(c+291,"error_8", false,-1, 1,0);
    tracep->declBus(c+292,"error_9", false,-1, 1,0);
    tracep->declBus(c+293,"error_10", false,-1, 1,0);
    tracep->declBus(c+294,"error_11", false,-1, 1,0);
    tracep->declBus(c+295,"error_12", false,-1, 1,0);
    tracep->declBus(c+296,"error_13", false,-1, 1,0);
    tracep->declBus(c+297,"error_14", false,-1, 1,0);
    tracep->declBus(c+298,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+36,"io_enq_valid", false,-1);
    tracep->declBus(c+31,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+32,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+33,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+34,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+35,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+94,"io_deq_ready", false,-1);
    tracep->declBit(c+37,"io_deq_valid", false,-1);
    tracep->declBus(c+23,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+41,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+42,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+25,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+26,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+299,"ram", false,-1, 48,0);
    tracep->declBit(c+301,"full", false,-1);
    tracep->declBit(c+37,"io_deq_valid_0", false,-1);
    tracep->declBit(c+95,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+1470,"io_enq_valid", false,-1);
    tracep->declBus(c+1654,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1016,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1655,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1017,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1653,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1509,"io_deq_ready", false,-1);
    tracep->declBit(c+1477,"io_deq_valid", false,-1);
    tracep->declBus(c+182,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1478,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+302,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1459,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+183,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+303,"ram", false,-1, 48,0);
    tracep->declBit(c+305,"full", false,-1);
    tracep->declBit(c+1477,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1510,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1471,"io_enq_valid", false,-1);
    tracep->declBus(c+1018,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1019,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1020,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1511,"io_deq_ready", false,-1);
    tracep->declBit(c+1479,"io_deq_valid", false,-1);
    tracep->declBus(c+1461,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1462,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1606,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+306,"ram", false,-1, 36,0);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+1479,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1512,"do_enq", false,-1);
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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1513,"auto_in_awready", false,-1);
    tracep->declBit(c+1480,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1481,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1607,"auto_in_wready", false,-1);
    tracep->declBit(c+1482,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1461,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1462,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1514,"auto_in_bready", false,-1);
    tracep->declBit(c+309,"auto_in_bvalid", false,-1);
    tracep->declBus(c+310,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+311,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+96,"auto_in_arready", false,-1);
    tracep->declBit(c+43,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+97,"auto_in_rready", false,-1);
    tracep->declBit(c+312,"auto_in_rvalid", false,-1);
    tracep->declBus(c+313,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+314,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+315,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+96,"nodeIn_arready", false,-1);
    tracep->declBit(c+1513,"nodeIn_awready", false,-1);
    tracep->declBit(c+1483,"w_sel0", false,-1);
    tracep->declBit(c+309,"w_full", false,-1);
    tracep->declBus(c+310,"w_id", false,-1, 3,0);
    tracep->declBit(c+316,"r_sel1", false,-1);
    tracep->declBit(c+317,"w_sel1", false,-1);
    tracep->declBit(c+312,"r_full", false,-1);
    tracep->declBus(c+313,"r_id", false,-1, 3,0);
    tracep->declBit(c+98,"ren", false,-1);
    tracep->declBit(c+318,"rdata_REG", false,-1);
    tracep->declBus(c+319,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+320,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+321,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+322,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+45,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+98,"R0_en", false,-1);
    tracep->declBit(c+1565,"R0_clk", false,-1);
    tracep->declBus(c+323,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1484,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1515,"W0_en", false,-1);
    tracep->declBit(c+1565,"W0_clk", false,-1);
    tracep->declBus(c+1461,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1462,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+99,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1021,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1654,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1022,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1018,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1023,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1234,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1235,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1236,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+46,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1237,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1238,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1608,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1609,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1239,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+90,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1468,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1654,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+91,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1469,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1018,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1604,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+726,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+723,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1653,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+89,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1603,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+722,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+723,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+724,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1653,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+725,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+256,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1470,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1654,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+257,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1471,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1018,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1605,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+258,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+259,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+92,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+262,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+263,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+266,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1234,"in_0_bvalid", false,-1);
    tracep->declBit(c+1237,"in_0_rvalid", false,-1);
    tracep->declBit(c+102,"in_0_wready", false,-1);
    tracep->declBit(c+103,"in_0_awready", false,-1);
    tracep->declBit(c+1610,"in_0_arready", false,-1);
    tracep->declBit(c+99,"anonIn_awready", false,-1);
    tracep->declBit(c+101,"anonIn_arready", false,-1);
    tracep->declBit(c+48,"requestARIO_0_0", false,-1);
    tracep->declBit(c+49,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1024,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1025,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+50,"arSel", false,-1, 15,0);
    tracep->declBus(c+1656,"awSel", false,-1, 15,0);
    tracep->declBus(c+1240,"rSel", false,-1, 15,0);
    tracep->declBus(c+1241,"bSel", false,-1, 15,0);
    tracep->declBus(c+324,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+325,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+326,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+327,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+328,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+329,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+330,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1657,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+331,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+332,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+333,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1658,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+334,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+335,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+336,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1659,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+337,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+338,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+339,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1660,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+340,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+341,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+342,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1661,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+343,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+344,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+345,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1662,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+346,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+347,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+348,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1663,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+349,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+350,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1664,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+352,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+353,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+354,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1665,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+355,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+356,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+357,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1666,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+358,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+359,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+360,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1667,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+361,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+362,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+363,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1668,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+364,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+365,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+366,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1669,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+367,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+368,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+369,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1670,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+370,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+371,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+372,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1671,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+51,"in_0_arvalid", false,-1);
    tracep->declBit(c+373,"latched", false,-1);
    tracep->declBit(c+1485,"in_0_awvalid", false,-1);
    tracep->declBit(c+1486,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1487,"in_0_wvalid", false,-1);
    tracep->declBit(c+374,"idle_2", false,-1);
    tracep->declBit(c+1242,"anyValid", false,-1);
    tracep->declBus(c+1243,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+375,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1244,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1245,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1246,"prefixOR_1", false,-1);
    tracep->declBit(c+1247,"winner_2_1", false,-1);
    tracep->declBit(c+376,"state_2_0", false,-1);
    tracep->declBit(c+377,"state_2_1", false,-1);
    tracep->declBit(c+1248,"muxState_2_0", false,-1);
    tracep->declBit(c+1249,"muxState_2_1", false,-1);
    tracep->declBit(c+378,"idle_3", false,-1);
    tracep->declBit(c+1250,"anyValid_1", false,-1);
    tracep->declBus(c+1251,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+379,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1252,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1253,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1254,"winner_3_0", false,-1);
    tracep->declBit(c+1255,"winner_3_1", false,-1);
    tracep->declBit(c+380,"state_3_0", false,-1);
    tracep->declBit(c+381,"state_3_1", false,-1);
    tracep->declBit(c+1256,"muxState_3_0", false,-1);
    tracep->declBit(c+1257,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+382,"io_enq_ready", false,-1);
    tracep->declBit(c+1486,"io_enq_valid", false,-1);
    tracep->declBus(c+1026,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+104,"io_deq_ready", false,-1);
    tracep->declBit(c+1488,"io_deq_valid", false,-1);
    tracep->declBus(c+1489,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+383,"wrap", false,-1);
    tracep->declBit(c+384,"wrap_1", false,-1);
    tracep->declBit(c+385,"maybe_full", false,-1);
    tracep->declBit(c+386,"ptr_match", false,-1);
    tracep->declBit(c+387,"empty", false,-1);
    tracep->declBit(c+388,"full", false,-1);
    tracep->declBit(c+1488,"io_deq_valid_0", false,-1);
    tracep->declBit(c+105,"do_deq", false,-1);
    tracep->declBit(c+106,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+384,"R0_addr", false,-1);
    tracep->declBit(c+1652,"R0_en", false,-1);
    tracep->declBit(c+1565,"R0_clk", false,-1);
    tracep->declBus(c+389,"R0_data", false,-1, 1,0);
    tracep->declBit(c+383,"W0_addr", false,-1);
    tracep->declBit(c+106,"W0_en", false,-1);
    tracep->declBit(c+1565,"W0_clk", false,-1);
    tracep->declBus(c+1026,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+390+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1516,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1490,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1458,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1459,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1506,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1473,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1461,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1462,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1463,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1507,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+268,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+259,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+107,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+52,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+92,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+262,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+263,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+272,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1513,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1480,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1481,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1607,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1482,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1461,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1462,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1514,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+309,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+310,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+311,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+96,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+97,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+312,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+313,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+314,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+315,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1491,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1492,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+392,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+53,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+393,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+394,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+395,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+181,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1457,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1458,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1459,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1460,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1461,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1462,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1463,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+668,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+185,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+186,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+189,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+190,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+191,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+192,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+193,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+268,"in_0_bvalid", false,-1);
    tracep->declBit(c+262,"in_0_rvalid", false,-1);
    tracep->declBit(c+1517,"in_0_wready", false,-1);
    tracep->declBit(c+1518,"in_0_awready", false,-1);
    tracep->declBit(c+107,"in_0_arready", false,-1);
    tracep->declBit(c+1516,"anonIn_awready", false,-1);
    tracep->declBit(c+55,"requestARIO_0_0", false,-1);
    tracep->declBit(c+56,"requestARIO_0_1", false,-1);
    tracep->declBit(c+57,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1493,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1494,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1495,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+58,"arSel", false,-1, 15,0);
    tracep->declBus(c+396,"awSel", false,-1, 15,0);
    tracep->declBus(c+397,"rSel", false,-1, 15,0);
    tracep->declBus(c+398,"bSel", false,-1, 15,0);
    tracep->declBit(c+399,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+400,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+401,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+402,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+403,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+404,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+405,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+406,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+407,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+408,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+409,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+410,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+411,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+412,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+413,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+414,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+415,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+416,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+417,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+418,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+419,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+420,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+421,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+422,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+423,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+424,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+425,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+426,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+427,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+428,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+429,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+430,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+431,"latched", false,-1);
    tracep->declBit(c+1496,"in_0_awvalid", false,-1);
    tracep->declBit(c+1497,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1498,"in_0_wvalid", false,-1);
    tracep->declBit(c+432,"idle_3", false,-1);
    tracep->declBit(c+433,"anyValid", false,-1);
    tracep->declBus(c+434,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+435,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+436,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+437,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+438,"prefixOR_1", false,-1);
    tracep->declBit(c+439,"winner_3_1", false,-1);
    tracep->declBit(c+440,"winner_3_2", false,-1);
    tracep->declBit(c+441,"state_3_0", false,-1);
    tracep->declBit(c+442,"state_3_1", false,-1);
    tracep->declBit(c+443,"state_3_2", false,-1);
    tracep->declBit(c+444,"muxState_3_0", false,-1);
    tracep->declBit(c+445,"muxState_3_1", false,-1);
    tracep->declBit(c+446,"muxState_3_2", false,-1);
    tracep->declBit(c+447,"idle_4", false,-1);
    tracep->declBit(c+448,"anyValid_1", false,-1);
    tracep->declBus(c+449,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+450,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+451,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+452,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+453,"winner_4_0", false,-1);
    tracep->declBit(c+454,"winner_4_2", false,-1);
    tracep->declBit(c+455,"state_4_0", false,-1);
    tracep->declBit(c+456,"state_4_2", false,-1);
    tracep->declBit(c+457,"muxState_4_0", false,-1);
    tracep->declBit(c+458,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+459,"io_enq_ready", false,-1);
    tracep->declBit(c+1497,"io_enq_valid", false,-1);
    tracep->declBus(c+1499,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1519,"io_deq_ready", false,-1);
    tracep->declBit(c+1500,"io_deq_valid", false,-1);
    tracep->declBus(c+1501,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+460,"wrap", false,-1);
    tracep->declBit(c+461,"wrap_1", false,-1);
    tracep->declBit(c+462,"maybe_full", false,-1);
    tracep->declBit(c+463,"ptr_match", false,-1);
    tracep->declBit(c+464,"empty", false,-1);
    tracep->declBit(c+465,"full", false,-1);
    tracep->declBit(c+1500,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1520,"do_deq", false,-1);
    tracep->declBit(c+1521,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+461,"R0_addr", false,-1);
    tracep->declBit(c+1652,"R0_en", false,-1);
    tracep->declBit(c+1565,"R0_clk", false,-1);
    tracep->declBus(c+466,"R0_data", false,-1, 2,0);
    tracep->declBit(c+460,"W0_addr", false,-1);
    tracep->declBit(c+1521,"W0_en", false,-1);
    tracep->declBit(c+1565,"W0_clk", false,-1);
    tracep->declBus(c+1499,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+467+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1505,"auto_in_awready", false,-1);
    tracep->declBit(c+1472,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1458,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1459,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+267,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1506,"auto_in_wready", false,-1);
    tracep->declBit(c+1473,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1461,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1462,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1463,"auto_in_wlast", false,-1);
    tracep->declBit(c+1507,"auto_in_bready", false,-1);
    tracep->declBit(c+268,"auto_in_bvalid", false,-1);
    tracep->declBus(c+259,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+270,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+93,"auto_in_arready", false,-1);
    tracep->declBit(c+37,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+38,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+92,"auto_in_rready", false,-1);
    tracep->declBit(c+262,"auto_in_rvalid", false,-1);
    tracep->declBus(c+263,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+271,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+272,"auto_in_rlast", false,-1);
    tracep->declBit(c+1516,"auto_out_awready", false,-1);
    tracep->declBit(c+1490,"auto_out_awvalid", false,-1);
    tracep->declBus(c+182,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1458,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1459,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1506,"auto_out_wready", false,-1);
    tracep->declBit(c+1473,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1461,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1462,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1463,"auto_out_wlast", false,-1);
    tracep->declBit(c+1507,"auto_out_bready", false,-1);
    tracep->declBit(c+268,"auto_out_bvalid", false,-1);
    tracep->declBus(c+259,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+107,"auto_out_arready", false,-1);
    tracep->declBit(c+52,"auto_out_arvalid", false,-1);
    tracep->declBus(c+23,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+92,"auto_out_rready", false,-1);
    tracep->declBit(c+262,"auto_out_rvalid", false,-1);
    tracep->declBus(c+263,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+272,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+469,"io_enq_ready", false,-1);
    tracep->declBit(c+72,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+470,"io_deq_valid", false,-1);
    tracep->declBit(c+471,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+470,"full", false,-1);
    tracep->declBit(c+471,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+472,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+473,"io_enq_ready", false,-1);
    tracep->declBit(c+73,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+474,"io_deq_valid", false,-1);
    tracep->declBit(c+475,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+474,"full", false,-1);
    tracep->declBit(c+475,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+476,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+477,"io_enq_ready", false,-1);
    tracep->declBit(c+74,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+478,"io_deq_valid", false,-1);
    tracep->declBit(c+479,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+478,"full", false,-1);
    tracep->declBit(c+479,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+480,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+481,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+482,"io_deq_valid", false,-1);
    tracep->declBit(c+483,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+482,"full", false,-1);
    tracep->declBit(c+483,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+484,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+76,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+486,"io_deq_valid", false,-1);
    tracep->declBit(c+487,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+486,"full", false,-1);
    tracep->declBit(c+487,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+488,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+77,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+490,"io_deq_valid", false,-1);
    tracep->declBit(c+491,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+490,"full", false,-1);
    tracep->declBit(c+491,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+492,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+493,"io_enq_ready", false,-1);
    tracep->declBit(c+78,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+494,"io_deq_valid", false,-1);
    tracep->declBit(c+495,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+494,"full", false,-1);
    tracep->declBit(c+495,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+496,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+497,"io_enq_ready", false,-1);
    tracep->declBit(c+79,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+498,"io_deq_valid", false,-1);
    tracep->declBit(c+499,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+498,"full", false,-1);
    tracep->declBit(c+499,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+500,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+501,"io_enq_ready", false,-1);
    tracep->declBit(c+669,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+670,"io_deq_ready", false,-1);
    tracep->declBit(c+502,"io_deq_valid", false,-1);
    tracep->declBit(c+503,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+502,"full", false,-1);
    tracep->declBit(c+503,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+504,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+671,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+672,"io_deq_ready", false,-1);
    tracep->declBit(c+506,"io_deq_valid", false,-1);
    tracep->declBit(c+507,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+506,"full", false,-1);
    tracep->declBit(c+507,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+508,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+509,"io_enq_ready", false,-1);
    tracep->declBit(c+673,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+674,"io_deq_ready", false,-1);
    tracep->declBit(c+510,"io_deq_valid", false,-1);
    tracep->declBit(c+511,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+510,"full", false,-1);
    tracep->declBit(c+511,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+512,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+513,"io_enq_ready", false,-1);
    tracep->declBit(c+675,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+676,"io_deq_ready", false,-1);
    tracep->declBit(c+514,"io_deq_valid", false,-1);
    tracep->declBit(c+515,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+514,"full", false,-1);
    tracep->declBit(c+515,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+516,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+517,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+518,"io_deq_valid", false,-1);
    tracep->declBit(c+519,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+518,"full", false,-1);
    tracep->declBit(c+519,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+520,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+521,"io_enq_ready", false,-1);
    tracep->declBit(c+677,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+678,"io_deq_ready", false,-1);
    tracep->declBit(c+522,"io_deq_valid", false,-1);
    tracep->declBit(c+523,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+522,"full", false,-1);
    tracep->declBit(c+523,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+524,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+525,"io_enq_ready", false,-1);
    tracep->declBit(c+679,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+680,"io_deq_ready", false,-1);
    tracep->declBit(c+526,"io_deq_valid", false,-1);
    tracep->declBit(c+527,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+526,"full", false,-1);
    tracep->declBit(c+527,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+528,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+529,"io_enq_ready", false,-1);
    tracep->declBit(c+681,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+682,"io_deq_ready", false,-1);
    tracep->declBit(c+530,"io_deq_valid", false,-1);
    tracep->declBit(c+531,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+530,"full", false,-1);
    tracep->declBit(c+531,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+532,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+533,"io_enq_ready", false,-1);
    tracep->declBit(c+683,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+684,"io_deq_ready", false,-1);
    tracep->declBit(c+534,"io_deq_valid", false,-1);
    tracep->declBit(c+535,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+534,"full", false,-1);
    tracep->declBit(c+535,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+536,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+537,"io_enq_ready", false,-1);
    tracep->declBit(c+685,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+686,"io_deq_ready", false,-1);
    tracep->declBit(c+538,"io_deq_valid", false,-1);
    tracep->declBit(c+539,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+538,"full", false,-1);
    tracep->declBit(c+539,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+540,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+541,"io_enq_ready", false,-1);
    tracep->declBit(c+687,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+688,"io_deq_ready", false,-1);
    tracep->declBit(c+542,"io_deq_valid", false,-1);
    tracep->declBit(c+543,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+542,"full", false,-1);
    tracep->declBit(c+543,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+544,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+545,"io_enq_ready", false,-1);
    tracep->declBit(c+689,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+690,"io_deq_ready", false,-1);
    tracep->declBit(c+546,"io_deq_valid", false,-1);
    tracep->declBit(c+547,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+546,"full", false,-1);
    tracep->declBit(c+547,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+548,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+549,"io_enq_ready", false,-1);
    tracep->declBit(c+691,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+692,"io_deq_ready", false,-1);
    tracep->declBit(c+550,"io_deq_valid", false,-1);
    tracep->declBit(c+551,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+550,"full", false,-1);
    tracep->declBit(c+551,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+552,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+553,"io_enq_ready", false,-1);
    tracep->declBit(c+693,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+694,"io_deq_ready", false,-1);
    tracep->declBit(c+554,"io_deq_valid", false,-1);
    tracep->declBit(c+555,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+554,"full", false,-1);
    tracep->declBit(c+555,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+556,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+557,"io_enq_ready", false,-1);
    tracep->declBit(c+695,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+696,"io_deq_ready", false,-1);
    tracep->declBit(c+558,"io_deq_valid", false,-1);
    tracep->declBit(c+559,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+558,"full", false,-1);
    tracep->declBit(c+559,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+560,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+561,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+562,"io_deq_valid", false,-1);
    tracep->declBit(c+563,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+562,"full", false,-1);
    tracep->declBit(c+563,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+564,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+565,"io_enq_ready", false,-1);
    tracep->declBit(c+697,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+698,"io_deq_ready", false,-1);
    tracep->declBit(c+566,"io_deq_valid", false,-1);
    tracep->declBit(c+567,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+566,"full", false,-1);
    tracep->declBit(c+567,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+568,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+569,"io_enq_ready", false,-1);
    tracep->declBit(c+699,"io_enq_valid", false,-1);
    tracep->declBit(c+267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+700,"io_deq_ready", false,-1);
    tracep->declBit(c+570,"io_deq_valid", false,-1);
    tracep->declBit(c+571,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+570,"full", false,-1);
    tracep->declBit(c+571,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+572,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+573,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+574,"io_deq_valid", false,-1);
    tracep->declBit(c+575,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+574,"full", false,-1);
    tracep->declBit(c+575,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+576,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+577,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+578,"io_deq_valid", false,-1);
    tracep->declBit(c+579,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+578,"full", false,-1);
    tracep->declBit(c+579,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+580,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+581,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+582,"io_deq_valid", false,-1);
    tracep->declBit(c+583,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+582,"full", false,-1);
    tracep->declBit(c+583,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+584,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+585,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+586,"io_deq_valid", false,-1);
    tracep->declBit(c+587,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+586,"full", false,-1);
    tracep->declBit(c+587,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+588,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+589,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+590,"io_deq_valid", false,-1);
    tracep->declBit(c+591,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+590,"full", false,-1);
    tracep->declBit(c+591,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+592,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+593,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+38,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+594,"io_deq_valid", false,-1);
    tracep->declBit(c+595,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+594,"full", false,-1);
    tracep->declBit(c+595,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+596,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1611,"reset", false,-1);
    tracep->declBit(c+99,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1021,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1654,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+100,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1022,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1018,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1023,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1234,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1235,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1236,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"auto_master_out_arready", false,-1);
    tracep->declBit(c+46,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1237,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1238,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1608,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1609,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1239,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1611,"reset", false,-1);
    tracep->declBit(c+1651,"io_interrupt", false,-1);
    tracep->declBit(c+99,"io_master_awready", false,-1);
    tracep->declBit(c+1021,"io_master_awvalid", false,-1);
    tracep->declBus(c+1016,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1655,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+100,"io_master_wready", false,-1);
    tracep->declBit(c+1022,"io_master_wvalid", false,-1);
    tracep->declBus(c+1018,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"io_master_wlast", false,-1);
    tracep->declBit(c+1023,"io_master_bready", false,-1);
    tracep->declBit(c+1234,"io_master_bvalid", false,-1);
    tracep->declBus(c+1236,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1235,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+101,"io_master_arready", false,-1);
    tracep->declBit(c+46,"io_master_arvalid", false,-1);
    tracep->declBus(c+32,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+33,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"io_master_rready", false,-1);
    tracep->declBit(c+1237,"io_master_rvalid", false,-1);
    tracep->declBus(c+1609,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1608,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1239,"io_master_rlast", false,-1);
    tracep->declBus(c+1238,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1672,"io_slave_awready", false,-1);
    tracep->declBit(c+1651,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1673,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1655,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1645,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1674,"io_slave_wready", false,-1);
    tracep->declBit(c+1651,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1673,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1654,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1651,"io_slave_wlast", false,-1);
    tracep->declBit(c+1651,"io_slave_bready", false,-1);
    tracep->declBit(c+1675,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1676,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1677,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1678,"io_slave_arready", false,-1);
    tracep->declBit(c+1651,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1673,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1655,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1645,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1653,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1651,"io_slave_rready", false,-1);
    tracep->declBit(c+1679,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1680,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1681,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1682,"io_slave_rlast", false,-1);
    tracep->declBus(c+1683,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1027,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1028,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1029,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+1030,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1031,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1027,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1028,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1032,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1033,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1034,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1655,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1646,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1653,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1035,"ifu_arvalid", false,-1);
    tracep->declBit(c+108,"ifu_arready", false,-1);
    tracep->declBus(c+109,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+110,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+111,"ifu_rlast", false,-1);
    tracep->declBus(c+112,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+113,"ifu_rvalid", false,-1);
    tracep->declBit(c+1036,"ifu_rready", false,-1);
    tracep->declBit(c+1684,"useless1", false,-1);
    tracep->declBit(c+1685,"useless2", false,-1);
    tracep->declBit(c+1686,"useless3", false,-1);
    tracep->declBit(c+1687,"useless4", false,-1);
    tracep->declBus(c+1037,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1655,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1038,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1653,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1039,"lsu_arvalid", false,-1);
    tracep->declBit(c+114,"lsu_arready", false,-1);
    tracep->declBus(c+115,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+116,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+117,"lsu_rlast", false,-1);
    tracep->declBus(c+118,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+119,"lsu_rvalid", false,-1);
    tracep->declBit(c+1040,"lsu_rready", false,-1);
    tracep->declBus(c+1041,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1655,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1042,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1043,"lsu_awvalid", false,-1);
    tracep->declBit(c+120,"lsu_awready", false,-1);
    tracep->declBus(c+1044,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1045,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1046,"lsu_wlast", false,-1);
    tracep->declBit(c+1047,"lsu_wvalid", false,-1);
    tracep->declBit(c+121,"lsu_wready", false,-1);
    tracep->declBus(c+1522,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1523,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1524,"lsu_bvalid", false,-1);
    tracep->declBit(c+1048,"lsu_bready", false,-1);
    tracep->declBus(c+1049,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1655,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1050,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1653,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1051,"axi_arvalid", false,-1);
    tracep->declBit(c+122,"axi_arready", false,-1);
    tracep->declBus(c+123,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+124,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+125,"axi_rlast", false,-1);
    tracep->declBus(c+126,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+127,"axi_rvalid", false,-1);
    tracep->declBit(c+1052,"axi_rready", false,-1);
    tracep->declBus(c+1016,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1655,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1021,"axi_awvalid", false,-1);
    tracep->declBit(c+99,"axi_awready", false,-1);
    tracep->declBus(c+1018,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"axi_wlast", false,-1);
    tracep->declBit(c+1022,"axi_wvalid", false,-1);
    tracep->declBit(c+100,"axi_wready", false,-1);
    tracep->declBus(c+1236,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1235,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1234,"axi_bvalid", false,-1);
    tracep->declBit(c+1023,"axi_bready", false,-1);
    tracep->declBus(c+59,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+60,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+61,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+62,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+63,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+64,"clint_arvalid", false,-1);
    tracep->declBit(c+1053,"clint_arready", false,-1);
    tracep->declBus(c+1054,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1055,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1056,"clint_rlast", false,-1);
    tracep->declBus(c+1654,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1057,"clint_rvalid", false,-1);
    tracep->declBit(c+65,"clint_rready", false,-1);
    tracep->declBus(c+1688,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1689,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1690,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1691,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1692,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1693,"clint_awvalid", false,-1);
    tracep->declBit(c+1058,"clint_awready", false,-1);
    tracep->declBus(c+1694,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1695,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1696,"clint_wlast", false,-1);
    tracep->declBit(c+1697,"clint_wvalid", false,-1);
    tracep->declBit(c+1059,"clint_wready", false,-1);
    tracep->declBus(c+1060,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1654,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1061,"clint_bvalid", false,-1);
    tracep->declBit(c+1698,"clint_bready", false,-1);
    tracep->declBus(c+1528,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1529,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1613,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1614,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1310,"a5", false,-1, 31,0);
    tracep->declBus(c+1530,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1613,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1614,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1531,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1615,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1532,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1533,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1534,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1535,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1536,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1537,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1538,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1539,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1540,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1541,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1542,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1543,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1544,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1545,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1546,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1062,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1063,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1547,"csr_write", false,-1);
    tracep->declBus(c+1548,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1311+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1064,"wdata", false,-1, 31,0);
    tracep->declBus(c+1065,"waddr", false,-1, 4,0);
    tracep->declBit(c+1066,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1315+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1067,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1068,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1069,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1070,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1071,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1072,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1073,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1074,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1075,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1076,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1077,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1078,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1079,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1080,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1081,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1082,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+1083,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1084,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1085,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1086,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1087,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1088,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1089,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1090,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1091,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1092,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1093,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1094,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1095,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1034,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1654,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1655,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1646,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1653,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1035,"arvalid_i_a", false,-1);
    tracep->declBit(c+108,"arready_o_a", false,-1);
    tracep->declBus(c+109,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+110,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+111,"rlast_o_a", false,-1);
    tracep->declBus(c+112,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+113,"rvalid_o_a", false,-1);
    tracep->declBit(c+1036,"rready_i_a", false,-1);
    tracep->declBus(c+1699,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1654,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1655,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1645,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1653,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1651,"awvalid_i_a", false,-1);
    tracep->declBit(c+128,"awready_o_a", false,-1);
    tracep->declBus(c+1699,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1654,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1651,"wlast_i_a", false,-1);
    tracep->declBit(c+1651,"wvalid_i_a", false,-1);
    tracep->declBit(c+129,"wready_o_a", false,-1);
    tracep->declBus(c+1525,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1526,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1527,"bvalid_o_a", false,-1);
    tracep->declBit(c+1651,"bready_i_a", false,-1);
    tracep->declBus(c+1037,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1654,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1655,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1038,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1653,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1039,"arvalid_i_b", false,-1);
    tracep->declBit(c+114,"arready_o_b", false,-1);
    tracep->declBus(c+115,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+116,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+117,"rlast_o_b", false,-1);
    tracep->declBus(c+118,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+119,"rvalid_o_b", false,-1);
    tracep->declBit(c+1040,"rready_i_b", false,-1);
    tracep->declBus(c+1041,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1654,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1655,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1042,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1653,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1043,"awvalid_i_b", false,-1);
    tracep->declBit(c+120,"awready_o_b", false,-1);
    tracep->declBus(c+1044,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1045,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1046,"wlast_i_b", false,-1);
    tracep->declBit(c+1047,"wvalid_i_b", false,-1);
    tracep->declBit(c+121,"wready_o_b", false,-1);
    tracep->declBus(c+1522,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1523,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1524,"bvalid_o_b", false,-1);
    tracep->declBit(c+1048,"bready_i_b", false,-1);
    tracep->declBus(c+1049,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1654,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1655,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1050,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1653,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1051,"arvalid_o", false,-1);
    tracep->declBit(c+122,"arready_i", false,-1);
    tracep->declBus(c+123,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+124,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+125,"rlast_i", false,-1);
    tracep->declBus(c+126,"rid_i", false,-1, 3,0);
    tracep->declBit(c+127,"rvalid_i", false,-1);
    tracep->declBit(c+1052,"rready_o", false,-1);
    tracep->declBus(c+1016,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1654,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1655,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1017,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1653,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1021,"awvalid_o", false,-1);
    tracep->declBit(c+99,"awready_i", false,-1);
    tracep->declBus(c+1018,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1019,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1020,"wlast_o", false,-1);
    tracep->declBit(c+1022,"wvalid_o", false,-1);
    tracep->declBit(c+100,"wready_i", false,-1);
    tracep->declBus(c+1236,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1235,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1234,"bvalid_i", false,-1);
    tracep->declBit(c+1023,"bready_o", false,-1);
    tracep->declBit(c+1096,"ar_switch", false,-1);
    tracep->declBit(c+1097,"r_switch", false,-1);
    tracep->declBit(c+1098,"aw_switch", false,-1);
    tracep->declBit(c+1099,"w_switch", false,-1);
    tracep->declBit(c+1100,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+59,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+60,"arid_i", false,-1, 3,0);
    tracep->declBus(c+61,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+62,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+63,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+64,"arvalid_i", false,-1);
    tracep->declBit(c+1053,"arready_o", false,-1);
    tracep->declBus(c+1054,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1055,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1056,"rlast_o", false,-1);
    tracep->declBus(c+1654,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1057,"rvalid_o", false,-1);
    tracep->declBit(c+65,"rready_i", false,-1);
    tracep->declBus(c+1688,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1689,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1690,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1691,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1692,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1693,"awvalid_i", false,-1);
    tracep->declBit(c+1058,"awready_o", false,-1);
    tracep->declBus(c+1694,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1695,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1696,"wlast_i", false,-1);
    tracep->declBit(c+1697,"wvalid_i", false,-1);
    tracep->declBit(c+1059,"wready_o", false,-1);
    tracep->declBus(c+1060,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1654,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1061,"bvalid_o", false,-1);
    tracep->declBit(c+1698,"bready_i", false,-1);
    tracep->declBit(c+1101,"ar_state", false,-1);
    tracep->declBit(c+1102,"r_state", false,-1);
    tracep->declBit(c+1103,"aw_state", false,-1);
    tracep->declBit(c+1104,"w_state", false,-1);
    tracep->declBit(c+1700,"b_state", false,-1);
    tracep->declBus(c+1105,"araddr", false,-1, 31,0);
    tracep->declBus(c+1106,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1107,"wdata", false,-1, 31,0);
    tracep->declBus(c+1108,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1701,"wvalid", false,-1);
    tracep->declBit(c+1109,"flag_waddr", false,-1);
    tracep->declBit(c+1110,"flag_wdata", false,-1);
    tracep->declBit(c+1111,"flag_rdata", false,-1);
    tracep->declBit(c+1112,"flag_raddr", false,-1);
    tracep->declBit(c+1702,"flag_write", false,-1);
    tracep->declBus(c+1113,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1114,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1115,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1116,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1117,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1118,"lfsr_in", false,-1);
    tracep->declBus(c+1119,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1120,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1530,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1613,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1614,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1531,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1615,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1532,"a_in_src_i", false,-1);
    tracep->declBus(c+1533,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1534,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1535,"adder_a_src_i", false,-1);
    tracep->declBit(c+1536,"adder_out_src_i", false,-1);
    tracep->declBus(c+1537,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1538,"MemRead_i", false,-1);
    tracep->declBit(c+1539,"MemWrite_i", false,-1);
    tracep->declBus(c+1540,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1541,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1542,"wb_src_i", false,-1);
    tracep->declBit(c+1543,"csr_write_i", false,-1);
    tracep->declBit(c+1544,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1545,"reg_write_i", false,-1);
    tracep->declBus(c+1546,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1062,"exu_valid_i", false,-1);
    tracep->declBit(c+1063,"exu_ready_o", false,-1);
    tracep->declBus(c+1067,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1068,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1069,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1070,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1071,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1072,"MemRead_o", false,-1);
    tracep->declBit(c+1073,"MemWrite_o", false,-1);
    tracep->declBus(c+1074,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1075,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1076,"wb_src_o", false,-1);
    tracep->declBit(c+1077,"csr_write_o", false,-1);
    tracep->declBit(c+1078,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1079,"reg_write_o", false,-1);
    tracep->declBus(c+1080,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1081,"exu_valid_o", false,-1);
    tracep->declBit(c+1082,"exu_ready_i", false,-1);
    tracep->declBus(c+1122,"pc", false,-1, 31,0);
    tracep->declBus(c+1068,"rs1", false,-1, 31,0);
    tracep->declBus(c+1069,"rs2", false,-1, 31,0);
    tracep->declBus(c+1123,"imm", false,-1, 31,0);
    tracep->declBus(c+1124,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1125,"a_in_src", false,-1);
    tracep->declBus(c+1126,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1127,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1128,"adder_a_src", false,-1);
    tracep->declBit(c+1129,"adder_out_src", false,-1);
    tracep->declBus(c+1130,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1131,"a_in", false,-1, 31,0);
    tracep->declBus(c+1132,"b_in", false,-1, 31,0);
    tracep->declBus(c+1133,"a_out", false,-1, 31,0);
    tracep->declBus(c+1134,"add_out", false,-1, 31,0);
    tracep->declBus(c+1135,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1067,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1071,"npc", false,-1, 31,0);
    tracep->declBit(c+1136,"zero", false,-1);
    tracep->declBus(c+1653,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1703,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1704,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1137,"current_state", false,-1, 1,0);
    tracep->declBus(c+1138,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1131,"a", false,-1, 31,0);
    tracep->declBus(c+1132,"b", false,-1, 31,0);
    tracep->declBus(c+1130,"op", false,-1, 3,0);
    tracep->declBus(c+1067,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1136,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1705,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1068,"d0", false,-1, 31,0);
    tracep->declBus(c+1122,"d1", false,-1, 31,0);
    tracep->declBit(c+1125,"sel", false,-1);
    tracep->declBus(c+1131,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1705,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1069,"d0", false,-1, 31,0);
    tracep->declBus(c+1123,"d1", false,-1, 31,0);
    tracep->declBus(c+1706,"d2", false,-1, 31,0);
    tracep->declBus(c+1124,"d3", false,-1, 31,0);
    tracep->declBus(c+1126,"sel", false,-1, 1,0);
    tracep->declBus(c+1132,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1133,"a", false,-1, 31,0);
    tracep->declBus(c+1123,"b", false,-1, 31,0);
    tracep->declBus(c+1134,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1705,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1122,"d0", false,-1, 31,0);
    tracep->declBus(c+1068,"d1", false,-1, 31,0);
    tracep->declBit(c+1128,"sel", false,-1);
    tracep->declBus(c+1133,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1705,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1134,"d0", false,-1, 31,0);
    tracep->declBus(c+1124,"d1", false,-1, 31,0);
    tracep->declBit(c+1129,"sel", false,-1);
    tracep->declBus(c+1135,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1139,"pc4", false,-1, 31,0);
    tracep->declBus(c+1135,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1127,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1136,"zero", false,-1);
    tracep->declBus(c+1067,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1071,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1528,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1529,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1613,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1614,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1310,"a5", false,-1, 31,0);
    tracep->declBus(c+1027,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1028,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1032,"idu_valid_i", false,-1);
    tracep->declBit(c+1033,"idu_ready_o", false,-1);
    tracep->declBus(c+1530,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1613,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1614,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1531,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1615,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1532,"a_in_src_o", false,-1);
    tracep->declBus(c+1533,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1534,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1535,"adder_a_src_o", false,-1);
    tracep->declBit(c+1536,"adder_out_src_o", false,-1);
    tracep->declBus(c+1537,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1538,"MemRead_o", false,-1);
    tracep->declBit(c+1539,"MemWrite_o", false,-1);
    tracep->declBus(c+1540,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1541,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1542,"wb_src_o", false,-1);
    tracep->declBit(c+1543,"csr_write_o", false,-1);
    tracep->declBit(c+1544,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1545,"reg_write_o", false,-1);
    tracep->declBus(c+1546,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1062,"idu_valid_o", false,-1);
    tracep->declBit(c+1063,"idu_ready_i", false,-1);
    tracep->declBit(c+1547,"csr_write_i", false,-1);
    tracep->declBus(c+1548,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1347+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1530,"pc", false,-1, 31,0);
    tracep->declBus(c+1549,"inst", false,-1, 31,0);
    tracep->declBus(c+1550,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1653,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1703,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1704,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1140,"current_state", false,-1, 1,0);
    tracep->declBus(c+1141,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1549,"inst", false,-1, 31,0);
    tracep->declBus(c+1537,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1551,"opcode", false,-1, 6,0);
    tracep->declBus(c+1552,"funct3", false,-1, 2,0);
    tracep->declBus(c+1553,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1547,"wen", false,-1);
    tracep->declBus(c+1549,"inst", false,-1, 31,0);
    tracep->declBus(c+1548,"wdata", false,-1, 31,0);
    tracep->declBus(c+1310,"NO", false,-1, 31,0);
    tracep->declBus(c+1530,"pc", false,-1, 31,0);
    tracep->declBus(c+1615,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1351+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1355,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1356,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1357,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1358,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1707,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1708,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1551,"opcode", false,-1, 6,0);
    tracep->declBus(c+1552,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1549,"inst", false,-1, 31,0);
    tracep->declBit(c+1532,"a_in_src", false,-1);
    tracep->declBus(c+1533,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1545,"reg_write", false,-1);
    tracep->declBus(c+1534,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1535,"adder_a_src", false,-1);
    tracep->declBit(c+1538,"MemRead", false,-1);
    tracep->declBit(c+1539,"MemWrite", false,-1);
    tracep->declBus(c+1550,"wmask", false,-1, 7,0);
    tracep->declBit(c+1542,"wb_src", false,-1);
    tracep->declBus(c+1541,"rmask", false,-1, 2,0);
    tracep->declBit(c+1543,"csr_write", false,-1);
    tracep->declBit(c+1536,"adder_out_src", false,-1);
    tracep->declBit(c+1544,"csr_wdata_src", false,-1);
    tracep->declBus(c+1551,"opcode", false,-1, 6,0);
    tracep->declBus(c+1552,"funct3", false,-1, 2,0);
    tracep->declBus(c+1553,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1549,"inst", false,-1, 31,0);
    tracep->declBus(c+1531,"data", false,-1, 31,0);
    tracep->declBus(c+1551,"opcode", false,-1, 6,0);
    tracep->declBus(c+1552,"funct3", false,-1, 2,0);
    tracep->declBus(c+1553,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1034,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1654,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1655,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1646,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1653,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1035,"arvalid_o", false,-1);
    tracep->declBit(c+108,"arready_i", false,-1);
    tracep->declBus(c+109,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+110,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+111,"rlast_i", false,-1);
    tracep->declBus(c+112,"rid_i", false,-1, 3,0);
    tracep->declBit(c+113,"rvalid_i", false,-1);
    tracep->declBit(c+1036,"rready_o", false,-1);
    tracep->declBus(c+1029,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1030,"ifu_valid_i", false,-1);
    tracep->declBit(c+1031,"ifu_ready_o", false,-1);
    tracep->declBus(c+1027,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1028,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1032,"ifu_valid_o", false,-1);
    tracep->declBit(c+1033,"ifu_ready_i", false,-1);
    tracep->declBus(c+1142,"pc", false,-1, 31,0);
    tracep->declBus(c+1709,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1710,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1711,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1712,"lfsr_in", false,-1);
    tracep->declBit(c+1035,"arvalid", false,-1);
    tracep->declBus(c+1034,"araddr", false,-1, 31,0);
    tracep->declBus(c+1143,"inst", false,-1, 31,0);
    tracep->declBit(c+1036,"rready", false,-1);
    tracep->declBus(c+1713,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1714+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1746,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1645,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1642,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1646,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1647,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1747,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+1144,"current_state", false,-1, 2,0);
    tracep->declBus(c+130,"next_state", false,-1, 2,0);
    tracep->declBus(c+1145,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+1146,"ready_flag", false,-1);
    tracep->declBit(c+1147,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1067,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1068,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1069,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1070,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1071,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1072,"MemRead_i", false,-1);
    tracep->declBit(c+1073,"MemWrite_i", false,-1);
    tracep->declBus(c+1074,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1075,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1076,"wb_src_i", false,-1);
    tracep->declBit(c+1077,"csr_write_i", false,-1);
    tracep->declBit(c+1078,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1079,"reg_write_i", false,-1);
    tracep->declBus(c+1080,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1081,"lsu_valid_i", false,-1);
    tracep->declBit(c+1082,"lsu_ready_o", false,-1);
    tracep->declBus(c+1083,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1084,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1085,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1086,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1087,"npc_o", false,-1, 31,0);
    tracep->declBus(c+1088,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1089,"wb_src_o", false,-1);
    tracep->declBit(c+1090,"csr_write_o", false,-1);
    tracep->declBit(c+1091,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1092,"reg_write_o", false,-1);
    tracep->declBus(c+1093,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1094,"lsu_valid_o", false,-1);
    tracep->declBit(c+1095,"lsu_ready_i", false,-1);
    tracep->declBus(c+1037,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1654,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1655,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1038,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1653,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1039,"arvalid_o", false,-1);
    tracep->declBit(c+114,"arready_i", false,-1);
    tracep->declBus(c+115,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+116,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+117,"rlast_i", false,-1);
    tracep->declBus(c+118,"rid_i", false,-1, 3,0);
    tracep->declBit(c+119,"rvalid_i", false,-1);
    tracep->declBit(c+1040,"rready_o", false,-1);
    tracep->declBus(c+1041,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1654,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1655,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1042,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1653,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1043,"awvalid_o", false,-1);
    tracep->declBit(c+120,"awready_i", false,-1);
    tracep->declBus(c+1044,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1045,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1046,"wlast_o", false,-1);
    tracep->declBit(c+1047,"wvalid_o", false,-1);
    tracep->declBit(c+121,"wready_i", false,-1);
    tracep->declBus(c+1522,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1523,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1524,"bvalid_i", false,-1);
    tracep->declBit(c+1048,"bready_o", false,-1);
    tracep->declBus(c+1083,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1084,"rs1", false,-1, 31,0);
    tracep->declBus(c+1748,"rs2", false,-1, 31,0);
    tracep->declBus(c+1749,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1088,"rmask", false,-1, 2,0);
    tracep->declBit(c+1148,"flag", false,-1);
    tracep->declBit(c+1750,"wvalid_tmp", false,-1);
    tracep->declBus(c+1751,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1752,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1753,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1754,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1755,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1756,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1757,"lfsr_in", false,-1);
    tracep->declBit(c+1039,"arvalid", false,-1);
    tracep->declBus(c+1037,"araddr", false,-1, 31,0);
    tracep->declBit(c+1040,"rready", false,-1);
    tracep->declBus(c+1041,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1043,"awvalid", false,-1);
    tracep->declBus(c+1044,"wdata", false,-1, 31,0);
    tracep->declBus(c+1045,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"wvalid", false,-1);
    tracep->declBit(c+1048,"bready", false,-1);
    tracep->declBus(c+1758,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1759+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1791,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1792,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1793+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1825,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1826+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1858+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1890,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1653,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1703,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1704,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1891,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1149,"current_state", false,-1, 1,0);
    tracep->declBus(c+1150,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1892,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBus(c+1064,"wdata", false,-1, 31,0);
    tracep->declBus(c+1065,"waddr", false,-1, 4,0);
    tracep->declBit(c+1066,"wen", false,-1);
    tracep->declBus(c+1528,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1613,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1529,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1614,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1310,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1359+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1391+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1083,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1084,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1085,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1086,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1087,"npc_i", false,-1, 31,0);
    tracep->declBus(c+1088,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1089,"wb_src_i", false,-1);
    tracep->declBit(c+1090,"csr_write_i", false,-1);
    tracep->declBit(c+1091,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1092,"reg_write_i", false,-1);
    tracep->declBus(c+1093,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1094,"wbu_valid_i", false,-1);
    tracep->declBit(c+1095,"wbu_ready_o", false,-1);
    tracep->declBus(c+1029,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1030,"wbu_valid_o", false,-1);
    tracep->declBit(c+1031,"wbu_ready_i", false,-1);
    tracep->declBus(c+1548,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1064,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1547,"csr_write_o", false,-1);
    tracep->declBit(c+1066,"reg_write_o", false,-1);
    tracep->declBus(c+1065,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1151,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1152,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1153,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1154,"rs1", false,-1, 31,0);
    tracep->declBus(c+1155,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1156,"rmask", false,-1, 2,0);
    tracep->declBit(c+1157,"wb_src", false,-1);
    tracep->declBit(c+1158,"csr_wdata_src", false,-1);
    tracep->declBit(c+1159,"difftest_check", false,-1);
    tracep->declBit(c+1160,"difftest_check_flag", false,-1);
    tracep->declBus(c+1653,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1703,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1704,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1161,"current_state", false,-1, 1,0);
    tracep->declBus(c+1162,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1705,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1154,"d0", false,-1, 31,0);
    tracep->declBus(c+1155,"d1", false,-1, 31,0);
    tracep->declBit(c+1158,"sel", false,-1);
    tracep->declBus(c+1548,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1152,"read_data", false,-1, 31,0);
    tracep->declBus(c+1163,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1156,"rmask", false,-1, 2,0);
    tracep->declBus(c+1151,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1164,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1165,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1166,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1167,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1168,"byte3", false,-1, 31,0);
    tracep->declBus(c+1169,"byte2", false,-1, 31,0);
    tracep->declBus(c+1170,"byte1", false,-1, 31,0);
    tracep->declBus(c+1171,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1705,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1153,"d0", false,-1, 31,0);
    tracep->declBus(c+1151,"d1", false,-1, 31,0);
    tracep->declBit(c+1157,"sel", false,-1);
    tracep->declBus(c+1064,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1049,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1654,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1655,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1050,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1653,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1051,"axi_arvalid_i", false,-1);
    tracep->declBit(c+122,"axi_arready_o", false,-1);
    tracep->declBus(c+123,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+124,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+125,"axi_rlast_o", false,-1);
    tracep->declBus(c+126,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+127,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1052,"axi_rready_i", false,-1);
    tracep->declBus(c+1016,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1654,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1655,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1017,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1653,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1021,"axi_awvalid_i", false,-1);
    tracep->declBit(c+99,"axi_awready_o", false,-1);
    tracep->declBus(c+1018,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1019,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1020,"axi_wlast_i", false,-1);
    tracep->declBit(c+1022,"axi_wvalid_i", false,-1);
    tracep->declBit(c+100,"axi_wready_o", false,-1);
    tracep->declBus(c+1236,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1235,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1234,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1023,"axi_bready_i", false,-1);
    tracep->declBus(c+32,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+31,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+33,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+34,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+35,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+46,"sram_arvalid_o", false,-1);
    tracep->declBit(c+101,"sram_arready_i", false,-1);
    tracep->declBus(c+1608,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1609,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1239,"sram_rlast_i", false,-1);
    tracep->declBus(c+1238,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1237,"sram_rvalid_i", false,-1);
    tracep->declBit(c+47,"sram_rready_o", false,-1);
    tracep->declBus(c+1016,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1654,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1655,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1017,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1653,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1021,"sram_awvalid_o", false,-1);
    tracep->declBit(c+99,"sram_awready_i", false,-1);
    tracep->declBus(c+1018,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1019,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1020,"sram_wlast_o", false,-1);
    tracep->declBit(c+1022,"sram_wvalid_o", false,-1);
    tracep->declBit(c+100,"sram_wready_i", false,-1);
    tracep->declBus(c+1236,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1235,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1234,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1023,"sram_bready_o", false,-1);
    tracep->declBus(c+59,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+60,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+61,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+62,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+63,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+64,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1053,"clint_arready_i", false,-1);
    tracep->declBus(c+1054,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1055,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1056,"clint_rlast_i", false,-1);
    tracep->declBus(c+1654,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1057,"clint_rvalid_i", false,-1);
    tracep->declBit(c+65,"clint_rready_o", false,-1);
    tracep->declBus(c+1688,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1689,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1690,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1691,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1692,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1693,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1058,"clint_awready_i", false,-1);
    tracep->declBus(c+1694,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1695,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1696,"clint_wlast_o", false,-1);
    tracep->declBit(c+1697,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1059,"clint_wready_i", false,-1);
    tracep->declBus(c+1060,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1654,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1061,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1698,"clint_bready_o", false,-1);
    tracep->declBit(c+66,"ar_switch", false,-1);
    tracep->declBit(c+67,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"io_d", false,-1);
    tracep->declBit(c+597,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"io_d", false,-1);
    tracep->declBit(c+597,"io_q", false,-1);
    tracep->declBit(c+597,"sync_0", false,-1);
    tracep->declBit(c+598,"sync_1", false,-1);
    tracep->declBit(c+599,"sync_2", false,-1);
    tracep->declBit(c+600,"sync_3", false,-1);
    tracep->declBit(c+601,"sync_4", false,-1);
    tracep->declBit(c+602,"sync_5", false,-1);
    tracep->declBit(c+603,"sync_6", false,-1);
    tracep->declBit(c+604,"sync_7", false,-1);
    tracep->declBit(c+605,"sync_8", false,-1);
    tracep->declBit(c+606,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1286,"auto_in_psel", false,-1);
    tracep->declBit(c+1287,"auto_in_penable", false,-1);
    tracep->declBit(c+1273,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1285,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1272,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+717,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+718,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1567,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1568,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1569,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1574,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1575,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1576,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1423,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1286,"in_psel", false,-1);
    tracep->declBit(c+1287,"in_penable", false,-1);
    tracep->declBus(c+1272,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1273,"in_pwrite", false,-1);
    tracep->declBus(c+1274,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+717,"in_pready", false,-1);
    tracep->declBus(c+718,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBus(c+1567,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1568,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1569,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1574,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1575,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1576,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+727,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+718,"rdata", false,-1, 31,0);
    tracep->declBus(c+728,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+717,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+729,"num", false,-1, 3,0);
    tracep->declBus(c+1569,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+730,"num", false,-1, 3,0);
    tracep->declBus(c+1570,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+731,"num", false,-1, 3,0);
    tracep->declBus(c+1571,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+732,"num", false,-1, 3,0);
    tracep->declBus(c+1572,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+733,"num", false,-1, 3,0);
    tracep->declBus(c+1573,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+734,"num", false,-1, 3,0);
    tracep->declBus(c+1574,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+735,"num", false,-1, 3,0);
    tracep->declBus(c+1575,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+736,"num", false,-1, 3,0);
    tracep->declBus(c+1576,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1283,"auto_in_psel", false,-1);
    tracep->declBit(c+1284,"auto_in_penable", false,-1);
    tracep->declBit(c+1273,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1285,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1272,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+155,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1577,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1578,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1423,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1283,"in_psel", false,-1);
    tracep->declBit(c+1284,"in_penable", false,-1);
    tracep->declBus(c+1272,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1273,"in_pwrite", false,-1);
    tracep->declBus(c+1274,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+154,"in_pready", false,-1);
    tracep->declBus(c+155,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBit(c+1577,"ps2_clk", false,-1);
    tracep->declBit(c+1578,"ps2_data", false,-1);
    tracep->declBus(c+607,"data_r", false,-1, 7,0);
    tracep->declBus(c+608,"old_data", false,-1, 7,0);
    tracep->declBus(c+609,"data_asic", false,-1, 7,0);
    tracep->declBus(c+610,"buffer", false,-1, 7,0);
    tracep->declBit(c+611,"ready", false,-1);
    tracep->declBit(c+612,"nextdata_n", false,-1);
    tracep->declBit(c+613,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1616,"clrn", false,-1);
    tracep->declBit(c+1577,"ps2_clk", false,-1);
    tracep->declBit(c+1578,"ps2_data", false,-1);
    tracep->declBit(c+612,"nextdata_n", false,-1);
    tracep->declBus(c+610,"data", false,-1, 7,0);
    tracep->declBit(c+611,"ready", false,-1);
    tracep->declBit(c+613,"overflow", false,-1);
    tracep->declBus(c+614,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+615+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+623,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+624,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+625,"count", false,-1, 3,0);
    tracep->declBus(c+626,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+627,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1491,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1492,"auto_in_wvalid", false,-1);
    tracep->declBit(c+392,"auto_in_arready", false,-1);
    tracep->declBit(c+53,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+393,"auto_in_rvalid", false,-1);
    tracep->declBus(c+394,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+395,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+393,"state", false,-1);
    tracep->declBus(c+395,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+394,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+68,"raddr", false,-1, 31,0);
    tracep->declBit(c+69,"ren", false,-1);
    tracep->declBus(c+70,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1288,"auto_in_psel", false,-1);
    tracep->declBit(c+1289,"auto_in_penable", false,-1);
    tracep->declBit(c+1273,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1269,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1272,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1595,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+156,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1588,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1554,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1589,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1269,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1288,"in_psel", false,-1);
    tracep->declBit(c+1289,"in_penable", false,-1);
    tracep->declBus(c+1272,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1273,"in_pwrite", false,-1);
    tracep->declBus(c+1274,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1595,"in_pready", false,-1);
    tracep->declBus(c+156,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBit(c+1588,"qspi_sck", false,-1);
    tracep->declBit(c+1554,"qspi_ce_n", false,-1);
    tracep->declBus(c+1589,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1589,"din", false,-1, 3,0);
    tracep->declBus(c+1617,"dout", false,-1, 3,0);
    tracep->declBus(c+1556,"douten", false,-1, 3,0);
    tracep->declBit(c+1618,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1565,"clk_i", false,-1);
    tracep->declBit(c+1566,"rst_i", false,-1);
    tracep->declBus(c+1269,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1274,"dat_i", false,-1, 31,0);
    tracep->declBus(c+156,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1275,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1288,"cyc_i", false,-1);
    tracep->declBit(c+1288,"stb_i", false,-1);
    tracep->declBit(c+1618,"ack_o", false,-1);
    tracep->declBit(c+1273,"we_i", false,-1);
    tracep->declBit(c+1588,"sck", false,-1);
    tracep->declBit(c+1554,"ce_n", false,-1);
    tracep->declBus(c+1589,"din", false,-1, 3,0);
    tracep->declBus(c+1617,"dout", false,-1, 3,0);
    tracep->declBus(c+1556,"douten", false,-1, 3,0);
    tracep->declBus(c+1653,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1703,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1704,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+737,"mr_sck", false,-1);
    tracep->declBit(c+738,"mr_ce_n", false,-1);
    tracep->declBus(c+1589,"mr_din", false,-1, 3,0);
    tracep->declBus(c+739,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+740,"mr_doe", false,-1);
    tracep->declBit(c+741,"mw_sck", false,-1);
    tracep->declBit(c+742,"mw_ce_n", false,-1);
    tracep->declBus(c+1589,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1557,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+743,"mw_doe", false,-1);
    tracep->declBit(c+1558,"mr_rd", false,-1);
    tracep->declBit(c+744,"mr_done", false,-1);
    tracep->declBit(c+1559,"mw_wr", false,-1);
    tracep->declBit(c+1560,"mw_done", false,-1);
    tracep->declBit(c+1288,"wb_valid", false,-1);
    tracep->declBit(c+1424,"wb_we", false,-1);
    tracep->declBit(c+1425,"wb_re", false,-1);
    tracep->declBus(c+1445,"state", false,-1, 1,0);
    tracep->declBus(c+1619,"nstate", false,-1, 1,0);
    tracep->declBus(c+1620,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1621,"qpi_sck", false,-1);
    tracep->declBus(c+1426,"size", false,-1, 2,0);
    tracep->declBus(c+1427,"byte0", false,-1, 7,0);
    tracep->declBus(c+1428,"byte1", false,-1, 7,0);
    tracep->declBus(c+1429,"byte2", false,-1, 7,0);
    tracep->declBus(c+1430,"byte3", false,-1, 7,0);
    tracep->declBus(c+1431,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1616,"rst_n", false,-1);
    tracep->declBus(c+1432,"addr", false,-1, 23,0);
    tracep->declBit(c+1558,"rd", false,-1);
    tracep->declBus(c+1747,"size", false,-1, 2,0);
    tracep->declBit(c+744,"done", false,-1);
    tracep->declBus(c+156,"line", false,-1, 31,0);
    tracep->declBit(c+737,"sck", false,-1);
    tracep->declBit(c+738,"ce_n", false,-1);
    tracep->declBus(c+1589,"din", false,-1, 3,0);
    tracep->declBus(c+739,"dout", false,-1, 3,0);
    tracep->declBit(c+740,"douten", false,-1);
    tracep->declBus(c+1893,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1894,"READ", false,-1, 0,0);
    tracep->declBus(c+1895,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+745,"state", false,-1);
    tracep->declBit(c+1561,"nstate", false,-1);
    tracep->declBus(c+746,"counter", false,-1, 7,0);
    tracep->declBus(c+747,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+628+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1896,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+748,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1616,"rst_n", false,-1);
    tracep->declBus(c+1433,"addr", false,-1, 23,0);
    tracep->declBus(c+1431,"line", false,-1, 31,0);
    tracep->declBus(c+1426,"size", false,-1, 2,0);
    tracep->declBit(c+1559,"wr", false,-1);
    tracep->declBit(c+1560,"done", false,-1);
    tracep->declBit(c+741,"sck", false,-1);
    tracep->declBit(c+742,"ce_n", false,-1);
    tracep->declBus(c+1589,"din", false,-1, 3,0);
    tracep->declBus(c+1557,"dout", false,-1, 3,0);
    tracep->declBit(c+743,"douten", false,-1);
    tracep->declBus(c+1893,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1894,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1434,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+749,"state", false,-1);
    tracep->declBit(c+1562,"nstate", false,-1);
    tracep->declBus(c+750,"counter", false,-1, 7,0);
    tracep->declBus(c+751,"saddr", false,-1, 23,0);
    tracep->declBus(c+1897,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+90,"auto_in_awready", false,-1);
    tracep->declBit(c+1468,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1654,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+91,"auto_in_wready", false,-1);
    tracep->declBit(c+1469,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1018,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_in_wlast", false,-1);
    tracep->declBit(c+1604,"auto_in_bready", false,-1);
    tracep->declBit(c+726,"auto_in_bvalid", false,-1);
    tracep->declBus(c+723,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1653,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+89,"auto_in_arready", false,-1);
    tracep->declBit(c+30,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1603,"auto_in_rready", false,-1);
    tracep->declBit(c+722,"auto_in_rvalid", false,-1);
    tracep->declBus(c+723,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+724,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1653,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+725,"auto_in_rlast", false,-1);
    tracep->declBit(c+1590,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1442,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+712,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+713,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+714,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+715,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1591,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1443,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1444,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1502,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+90,"in_awready", false,-1);
    tracep->declBit(c+1468,"in_awvalid", false,-1);
    tracep->declBus(c+1016,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1654,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1655,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1653,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+91,"in_wready", false,-1);
    tracep->declBit(c+1469,"in_wvalid", false,-1);
    tracep->declBus(c+1018,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1019,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"in_wlast", false,-1);
    tracep->declBit(c+1604,"in_bready", false,-1);
    tracep->declBit(c+726,"in_bvalid", false,-1);
    tracep->declBus(c+1653,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+723,"in_bid", false,-1, 3,0);
    tracep->declBit(c+89,"in_arready", false,-1);
    tracep->declBit(c+30,"in_arvalid", false,-1);
    tracep->declBus(c+32,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"in_arid", false,-1, 3,0);
    tracep->declBus(c+33,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1603,"in_rready", false,-1);
    tracep->declBit(c+722,"in_rvalid", false,-1);
    tracep->declBus(c+1653,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+724,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+725,"in_rlast", false,-1);
    tracep->declBus(c+723,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1590,"sdram_clk", false,-1);
    tracep->declBit(c+1442,"sdram_cke", false,-1);
    tracep->declBit(c+712,"sdram_cs", false,-1);
    tracep->declBit(c+713,"sdram_ras", false,-1);
    tracep->declBit(c+714,"sdram_cas", false,-1);
    tracep->declBit(c+715,"sdram_we", false,-1);
    tracep->declBus(c+1591,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1443,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1444,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1502,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+752,"sdram_dout_en", false,-1);
    tracep->declBus(c+753,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1565,"clk_i", false,-1);
    tracep->declBit(c+1566,"rst_i", false,-1);
    tracep->declBit(c+1468,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1016,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1654,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1655,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1653,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1469,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1018,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1019,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1020,"inport_wlast_i", false,-1);
    tracep->declBit(c+1604,"inport_bready_i", false,-1);
    tracep->declBit(c+30,"inport_arvalid_i", false,-1);
    tracep->declBus(c+32,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+31,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+33,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+35,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1603,"inport_rready_i", false,-1);
    tracep->declBus(c+1502,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+90,"inport_awready_o", false,-1);
    tracep->declBit(c+91,"inport_wready_o", false,-1);
    tracep->declBit(c+726,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1653,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+723,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+89,"inport_arready_o", false,-1);
    tracep->declBit(c+722,"inport_rvalid_o", false,-1);
    tracep->declBus(c+724,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1653,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+723,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+725,"inport_rlast_o", false,-1);
    tracep->declBit(c+1590,"sdram_clk_o", false,-1);
    tracep->declBit(c+1442,"sdram_cke_o", false,-1);
    tracep->declBit(c+712,"sdram_cs_o", false,-1);
    tracep->declBit(c+713,"sdram_ras_o", false,-1);
    tracep->declBit(c+714,"sdram_cas_o", false,-1);
    tracep->declBit(c+715,"sdram_we_o", false,-1);
    tracep->declBus(c+1444,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1591,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1443,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+753,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+752,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1640,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1898,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1644,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1899,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+131,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+132,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+133,"ram_rd_w", false,-1);
    tracep->declBit(c+1446,"ram_accept_w", false,-1);
    tracep->declBus(c+1018,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+754,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+71,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+755,"ram_ack_w", false,-1);
    tracep->declBit(c+1651,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1565,"clk_i", false,-1);
    tracep->declBit(c+1566,"rst_i", false,-1);
    tracep->declBit(c+1468,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1016,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1654,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1655,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1653,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1469,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1018,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1019,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1020,"axi_wlast_i", false,-1);
    tracep->declBit(c+1604,"axi_bready_i", false,-1);
    tracep->declBit(c+30,"axi_arvalid_i", false,-1);
    tracep->declBus(c+32,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+31,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+33,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+35,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1603,"axi_rready_i", false,-1);
    tracep->declBit(c+1446,"ram_accept_i", false,-1);
    tracep->declBit(c+755,"ram_ack_i", false,-1);
    tracep->declBit(c+1651,"ram_error_i", false,-1);
    tracep->declBus(c+754,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+90,"axi_awready_o", false,-1);
    tracep->declBit(c+91,"axi_wready_o", false,-1);
    tracep->declBit(c+726,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1653,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+723,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+89,"axi_arready_o", false,-1);
    tracep->declBit(c+722,"axi_rvalid_o", false,-1);
    tracep->declBus(c+724,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1653,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+723,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+725,"axi_rlast_o", false,-1);
    tracep->declBus(c+132,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+133,"ram_rd_o", false,-1);
    tracep->declBus(c+71,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+131,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1018,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+756,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+757,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+758,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+759,"req_rd_q", false,-1);
    tracep->declBit(c+760,"req_wr_q", false,-1);
    tracep->declBus(c+761,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+762,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+763,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+764,"req_prio_q", false,-1);
    tracep->declBit(c+765,"req_hold_rd_q", false,-1);
    tracep->declBit(c+766,"req_hold_wr_q", false,-1);
    tracep->declBit(c+767,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+134,"req_push_w", false,-1);
    tracep->declBus(c+1622,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+768,"req_out_valid_w", false,-1);
    tracep->declBus(c+769,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+135,"resp_accept_w", false,-1);
    tracep->declBit(c+770,"resp_is_write_w", false,-1);
    tracep->declBit(c+771,"resp_is_read_w", false,-1);
    tracep->declBit(c+725,"resp_is_last_w", false,-1);
    tracep->declBus(c+723,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+772,"resp_valid_w", false,-1);
    tracep->declBit(c+773,"write_prio_w", false,-1);
    tracep->declBit(c+774,"read_prio_w", false,-1);
    tracep->declBit(c+136,"write_active_w", false,-1);
    tracep->declBit(c+133,"read_active_w", false,-1);
    tracep->declBus(c+131,"addr_w", false,-1, 31,0);
    tracep->declBit(c+88,"wr_w", false,-1);
    tracep->declBit(c+133,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1900,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1901,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1899,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1565,"clk_i", false,-1);
    tracep->declBit(c+1566,"rst_i", false,-1);
    tracep->declBus(c+1622,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+134,"push_i", false,-1);
    tracep->declBit(c+135,"pop_i", false,-1);
    tracep->declBus(c+769,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+767,"accept_o", false,-1);
    tracep->declBit(c+768,"valid_o", false,-1);
    tracep->declBus(c+1902,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+775+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+779,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+780,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+781,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1705,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1901,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1899,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1565,"clk_i", false,-1);
    tracep->declBit(c+1566,"rst_i", false,-1);
    tracep->declBus(c+754,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+755,"push_i", false,-1);
    tracep->declBit(c+135,"pop_i", false,-1);
    tracep->declBus(c+724,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+782,"accept_o", false,-1);
    tracep->declBit(c+772,"valid_o", false,-1);
    tracep->declBus(c+1902,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+783+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+787,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+788,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+789,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1565,"clk_i", false,-1);
    tracep->declBit(c+1566,"rst_i", false,-1);
    tracep->declBus(c+132,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+133,"inport_rd_i", false,-1);
    tracep->declBus(c+71,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+131,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1018,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1502,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1446,"inport_accept_o", false,-1);
    tracep->declBit(c+755,"inport_ack_o", false,-1);
    tracep->declBit(c+1651,"inport_error_o", false,-1);
    tracep->declBus(c+754,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1590,"sdram_clk_o", false,-1);
    tracep->declBit(c+1442,"sdram_cke_o", false,-1);
    tracep->declBit(c+712,"sdram_cs_o", false,-1);
    tracep->declBit(c+713,"sdram_ras_o", false,-1);
    tracep->declBit(c+714,"sdram_cas_o", false,-1);
    tracep->declBit(c+715,"sdram_we_o", false,-1);
    tracep->declBus(c+1444,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1591,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1443,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+753,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+752,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1640,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1898,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1644,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1899,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1899,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1901,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1901,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1903,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1904,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1905,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1906,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1901,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1907,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1908,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1909,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1910,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1911,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1912,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1913,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1654,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1914,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1901,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1654,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1913,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1912,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1908,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1910,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1909,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1911,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1907,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1915,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1916,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1917,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1917,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1705,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1917,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1899,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1899,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1900,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+131,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+132,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+133,"ram_rd_w", false,-1);
    tracep->declBit(c+1446,"ram_accept_w", false,-1);
    tracep->declBus(c+1018,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+754,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+755,"ram_ack_w", false,-1);
    tracep->declBit(c+137,"ram_req_w", false,-1);
    tracep->declBus(c+790,"command_q", false,-1, 3,0);
    tracep->declBus(c+1447,"addr_q", false,-1, 12,0);
    tracep->declBus(c+753,"data_q", false,-1, 31,0);
    tracep->declBit(c+791,"data_rd_en_q", false,-1);
    tracep->declBus(c+1444,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1442,"cke_q", false,-1);
    tracep->declBus(c+1443,"bank_q", false,-1, 1,0);
    tracep->declBus(c+754,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+792,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1502,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+793,"refresh_q", false,-1);
    tracep->declBus(c+794,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+795+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1448,"state_q", false,-1, 3,0);
    tracep->declBus(c+138,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+139,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+799,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+800,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+140,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+141,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+142,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1901,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+801,"delay_q", false,-1, 3,0);
    tracep->declBus(c+143,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1918,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1449,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+802,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+803,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+804,"idx", false,-1, 31,0);
    tracep->declBus(c+805,"rd_q", false,-1, 3,0);
    tracep->declBit(c+755,"ack_q", false,-1);
    tracep->declArray(c+1450,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1293,"auto_in_psel", false,-1);
    tracep->declBit(c+1294,"auto_in_penable", false,-1);
    tracep->declBit(c+1273,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1282,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1272,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+719,"auto_in_pready", false,-1);
    tracep->declBit(c+720,"auto_in_pslverr", false,-1);
    tracep->declBus(c+721,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+711,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1440,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1441,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1587,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1919,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1920,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1921,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1435,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1293,"in_psel", false,-1);
    tracep->declBit(c+1294,"in_penable", false,-1);
    tracep->declBus(c+1272,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1273,"in_pwrite", false,-1);
    tracep->declBus(c+1274,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+719,"in_pready", false,-1);
    tracep->declBus(c+721,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+720,"in_pslverr", false,-1);
    tracep->declBit(c+711,"spi_sck", false,-1);
    tracep->declBus(c+1440,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1441,"spi_mosi", false,-1);
    tracep->declBit(c+1587,"spi_miso", false,-1);
    tracep->declBit(c+806,"spi_irq_out", false,-1);
    tracep->declBus(c+1922,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1923,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1922,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1924,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1925,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1926,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1654,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1913,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1912,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1908,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1910,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1909,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1911,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1907,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1915,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1916,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1927,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+807,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1563,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+808,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+809,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+810,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+811,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+812,"wb_we_i", false,-1);
    tracep->declBit(c+813,"wb_stb_i", false,-1);
    tracep->declBit(c+814,"wb_cyc_i", false,-1);
    tracep->declBit(c+815,"wb_ack_o", false,-1);
    tracep->declBit(c+1651,"wb_err_o", false,-1);
    tracep->declBit(c+816,"wb_int_o", false,-1);
    tracep->declBit(c+817,"done", false,-1);
    tracep->declBus(c+818,"paddr", false,-1, 31,0);
    tracep->declQuad(c+819,"data", false,-1, 63,0);
    tracep->declBit(c+821,"is_flash_access", false,-1);
    tracep->declBus(c+822,"tmp", false,-1, 31,0);
    tracep->declQuad(c+823,"tmp64", false,-1, 63,0);
    tracep->declBus(c+825,"counter", false,-1, 7,0);
    tracep->declBit(c+826,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1928,"Tp", false,-1, 31,0);
    tracep->declBit(c+1565,"wb_clk_i", false,-1);
    tracep->declBit(c+1566,"wb_rst_i", false,-1);
    tracep->declBus(c+808,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+809,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+810,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+811,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+812,"wb_we_i", false,-1);
    tracep->declBit(c+813,"wb_stb_i", false,-1);
    tracep->declBit(c+814,"wb_cyc_i", false,-1);
    tracep->declBit(c+815,"wb_ack_o", false,-1);
    tracep->declBit(c+1651,"wb_err_o", false,-1);
    tracep->declBit(c+816,"wb_int_o", false,-1);
    tracep->declBus(c+1440,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+711,"sclk_pad_o", false,-1);
    tracep->declBit(c+1441,"mosi_pad_o", false,-1);
    tracep->declBit(c+1587,"miso_pad_i", false,-1);
    tracep->declBus(c+827,"divider", false,-1, 15,0);
    tracep->declBus(c+828,"ctrl", false,-1, 13,0);
    tracep->declBus(c+829,"ss", false,-1, 7,0);
    tracep->declBus(c+830,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+831,"rx", false,-1, 127,0);
    tracep->declBit(c+835,"rx_negedge", false,-1);
    tracep->declBit(c+836,"tx_negedge", false,-1);
    tracep->declBus(c+837,"char_len", false,-1, 6,0);
    tracep->declBit(c+838,"go", false,-1);
    tracep->declBit(c+839,"lsb", false,-1);
    tracep->declBit(c+840,"ie", false,-1);
    tracep->declBit(c+841,"ass", false,-1);
    tracep->declBit(c+842,"spi_divider_sel", false,-1);
    tracep->declBit(c+843,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+844,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+845,"spi_ss_sel", false,-1);
    tracep->declBit(c+846,"tip", false,-1);
    tracep->declBit(c+847,"pos_edge", false,-1);
    tracep->declBit(c+848,"neg_edge", false,-1);
    tracep->declBit(c+849,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1928,"Tp", false,-1, 31,0);
    tracep->declBit(c+1565,"clk_in", false,-1);
    tracep->declBit(c+1566,"rst", false,-1);
    tracep->declBit(c+846,"enable", false,-1);
    tracep->declBit(c+838,"go", false,-1);
    tracep->declBit(c+849,"last_clk", false,-1);
    tracep->declBus(c+827,"divider", false,-1, 15,0);
    tracep->declBit(c+711,"clk_out", false,-1);
    tracep->declBit(c+847,"pos_edge", false,-1);
    tracep->declBit(c+848,"neg_edge", false,-1);
    tracep->declBus(c+850,"cnt", false,-1, 15,0);
    tracep->declBit(c+851,"cnt_zero", false,-1);
    tracep->declBit(c+852,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1928,"Tp", false,-1, 31,0);
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1566,"rst", false,-1);
    tracep->declBus(c+853,"latch", false,-1, 3,0);
    tracep->declBus(c+811,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+837,"len", false,-1, 6,0);
    tracep->declBit(c+839,"lsb", false,-1);
    tracep->declBit(c+838,"go", false,-1);
    tracep->declBit(c+847,"pos_edge", false,-1);
    tracep->declBit(c+848,"neg_edge", false,-1);
    tracep->declBit(c+835,"rx_negedge", false,-1);
    tracep->declBit(c+836,"tx_negedge", false,-1);
    tracep->declBit(c+846,"tip", false,-1);
    tracep->declBit(c+849,"last", false,-1);
    tracep->declBus(c+809,"p_in", false,-1, 31,0);
    tracep->declArray(c+831,"p_out", false,-1, 127,0);
    tracep->declBit(c+711,"s_clk", false,-1);
    tracep->declBit(c+1587,"s_in", false,-1);
    tracep->declBit(c+1441,"s_out", false,-1);
    tracep->declBus(c+854,"cnt", false,-1, 7,0);
    tracep->declArray(c+831,"data", false,-1, 127,0);
    tracep->declBus(c+855,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+856,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+857,"rx_clk", false,-1);
    tracep->declBit(c+858,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1290,"auto_in_psel", false,-1);
    tracep->declBit(c+1291,"auto_in_penable", false,-1);
    tracep->declBit(c+1273,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1285,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1272,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1596,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1585,"uart_rx", false,-1);
    tracep->declBit(c+1586,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1290,"in_psel", false,-1);
    tracep->declBit(c+1291,"in_penable", false,-1);
    tracep->declBus(c+1272,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1292,"in_pready", false,-1);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBus(c+1423,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1273,"in_pwrite", false,-1);
    tracep->declBus(c+1596,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1274,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1585,"uart_rx", false,-1);
    tracep->declBit(c+1586,"uart_tx", false,-1);
    tracep->declBit(c+859,"rtsn", false,-1);
    tracep->declBit(c+1651,"ctsn", false,-1);
    tracep->declBit(c+860,"dtr_pad_o", false,-1);
    tracep->declBit(c+1651,"dsr_pad_i", false,-1);
    tracep->declBit(c+1651,"ri_pad_i", false,-1);
    tracep->declBit(c+1651,"dcd_pad_i", false,-1);
    tracep->declBit(c+861,"interrupt", false,-1);
    tracep->declBit(c+1623,"reg_we", false,-1);
    tracep->declBit(c+1624,"reg_re", false,-1);
    tracep->declBus(c+1436,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1437,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+632,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1564,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+862,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1566,"wb_rst_i", false,-1);
    tracep->declBus(c+1436,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1438,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1564,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1623,"wb_we_i", false,-1);
    tracep->declBit(c+1624,"wb_re_i", false,-1);
    tracep->declBit(c+1586,"stx_pad_o", false,-1);
    tracep->declBit(c+1585,"srx_pad_i", false,-1);
    tracep->declBus(c+1915,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+862,"rts_pad_o", false,-1);
    tracep->declBit(c+860,"dtr_pad_o", false,-1);
    tracep->declBit(c+861,"int_o", false,-1);
    tracep->declBit(c+863,"enable", false,-1);
    tracep->declBit(c+864,"srx_pad", false,-1);
    tracep->declBus(c+865,"ier", false,-1, 3,0);
    tracep->declBus(c+866,"iir", false,-1, 3,0);
    tracep->declBus(c+867,"fcr", false,-1, 1,0);
    tracep->declBus(c+868,"mcr", false,-1, 4,0);
    tracep->declBus(c+869,"lcr", false,-1, 7,0);
    tracep->declBus(c+870,"msr", false,-1, 7,0);
    tracep->declBus(c+871,"dl", false,-1, 15,0);
    tracep->declBus(c+872,"scratch", false,-1, 7,0);
    tracep->declBit(c+873,"start_dlc", false,-1);
    tracep->declBit(c+874,"lsr_mask_d", false,-1);
    tracep->declBit(c+875,"msi_reset", false,-1);
    tracep->declBus(c+876,"dlc", false,-1, 15,0);
    tracep->declBus(c+877,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+878,"rx_reset", false,-1);
    tracep->declBit(c+879,"tx_reset", false,-1);
    tracep->declBit(c+880,"dlab", false,-1);
    tracep->declBit(c+1652,"cts_pad_i", false,-1);
    tracep->declBit(c+1651,"dsr_pad_i", false,-1);
    tracep->declBit(c+1651,"ri_pad_i", false,-1);
    tracep->declBit(c+1651,"dcd_pad_i", false,-1);
    tracep->declBit(c+881,"loopback", false,-1);
    tracep->declBit(c+1651,"cts", false,-1);
    tracep->declBit(c+1652,"dsr", false,-1);
    tracep->declBit(c+1652,"ri", false,-1);
    tracep->declBit(c+1652,"dcd", false,-1);
    tracep->declBit(c+882,"cts_c", false,-1);
    tracep->declBit(c+883,"dsr_c", false,-1);
    tracep->declBit(c+884,"ri_c", false,-1);
    tracep->declBit(c+885,"dcd_c", false,-1);
    tracep->declBus(c+886,"lsr", false,-1, 7,0);
    tracep->declBit(c+887,"lsr0", false,-1);
    tracep->declBit(c+888,"lsr1", false,-1);
    tracep->declBit(c+889,"lsr2", false,-1);
    tracep->declBit(c+890,"lsr3", false,-1);
    tracep->declBit(c+891,"lsr4", false,-1);
    tracep->declBit(c+892,"lsr5", false,-1);
    tracep->declBit(c+893,"lsr6", false,-1);
    tracep->declBit(c+894,"lsr7", false,-1);
    tracep->declBit(c+895,"lsr0r", false,-1);
    tracep->declBit(c+896,"lsr1r", false,-1);
    tracep->declBit(c+897,"lsr2r", false,-1);
    tracep->declBit(c+898,"lsr3r", false,-1);
    tracep->declBit(c+899,"lsr4r", false,-1);
    tracep->declBit(c+900,"lsr5r", false,-1);
    tracep->declBit(c+901,"lsr6r", false,-1);
    tracep->declBit(c+902,"lsr7r", false,-1);
    tracep->declBit(c+148,"lsr_mask", false,-1);
    tracep->declBit(c+903,"rls_int", false,-1);
    tracep->declBit(c+904,"rda_int", false,-1);
    tracep->declBit(c+905,"ti_int", false,-1);
    tracep->declBit(c+906,"thre_int", false,-1);
    tracep->declBit(c+907,"ms_int", false,-1);
    tracep->declBit(c+908,"tf_push", false,-1);
    tracep->declBit(c+909,"rf_pop", false,-1);
    tracep->declBus(c+1625,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+910,"rf_error_bit", false,-1);
    tracep->declBit(c+888,"rf_overrun", false,-1);
    tracep->declBit(c+911,"rf_push_pulse", false,-1);
    tracep->declBus(c+912,"rf_count", false,-1, 4,0);
    tracep->declBus(c+913,"tf_count", false,-1, 4,0);
    tracep->declBus(c+914,"tstate", false,-1, 2,0);
    tracep->declBus(c+915,"rstate", false,-1, 3,0);
    tracep->declBus(c+916,"counter_t", false,-1, 9,0);
    tracep->declBit(c+917,"thre_set_en", false,-1);
    tracep->declBus(c+918,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+919,"block_value", false,-1, 7,0);
    tracep->declBit(c+920,"serial_out", false,-1);
    tracep->declBit(c+921,"serial_in", false,-1);
    tracep->declBit(c+149,"lsr_mask_condition", false,-1);
    tracep->declBit(c+150,"iir_read", false,-1);
    tracep->declBit(c+151,"msr_read", false,-1);
    tracep->declBit(c+152,"fifo_read", false,-1);
    tracep->declBit(c+153,"fifo_write", false,-1);
    tracep->declBus(c+922,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+923,"lsr0_d", false,-1);
    tracep->declBit(c+924,"lsr1_d", false,-1);
    tracep->declBit(c+925,"lsr2_d", false,-1);
    tracep->declBit(c+926,"lsr3_d", false,-1);
    tracep->declBit(c+927,"lsr4_d", false,-1);
    tracep->declBit(c+928,"lsr5_d", false,-1);
    tracep->declBit(c+929,"lsr6_d", false,-1);
    tracep->declBit(c+930,"lsr7_d", false,-1);
    tracep->declBit(c+931,"rls_int_d", false,-1);
    tracep->declBit(c+932,"thre_int_d", false,-1);
    tracep->declBit(c+933,"ms_int_d", false,-1);
    tracep->declBit(c+934,"ti_int_d", false,-1);
    tracep->declBit(c+935,"rda_int_d", false,-1);
    tracep->declBit(c+936,"rls_int_rise", false,-1);
    tracep->declBit(c+937,"thre_int_rise", false,-1);
    tracep->declBit(c+938,"ms_int_rise", false,-1);
    tracep->declBit(c+939,"ti_int_rise", false,-1);
    tracep->declBit(c+940,"rda_int_rise", false,-1);
    tracep->declBit(c+941,"rls_int_pnd", false,-1);
    tracep->declBit(c+942,"rda_int_pnd", false,-1);
    tracep->declBit(c+943,"thre_int_pnd", false,-1);
    tracep->declBit(c+944,"ms_int_pnd", false,-1);
    tracep->declBit(c+945,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1928,"Tp", false,-1, 31,0);
    tracep->declBus(c+1928,"width", false,-1, 31,0);
    tracep->declBus(c+1894,"init_value", false,-1, 0,0);
    tracep->declBit(c+1566,"rst_i", false,-1);
    tracep->declBit(c+1565,"clk_i", false,-1);
    tracep->declBit(c+1651,"stage1_rst_i", false,-1);
    tracep->declBit(c+1652,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1585,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+864,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+946,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1566,"wb_rst_i", false,-1);
    tracep->declBus(c+869,"lcr", false,-1, 7,0);
    tracep->declBit(c+909,"rf_pop", false,-1);
    tracep->declBit(c+921,"srx_pad_i", false,-1);
    tracep->declBit(c+863,"enable", false,-1);
    tracep->declBit(c+878,"rx_reset", false,-1);
    tracep->declBit(c+148,"lsr_mask", false,-1);
    tracep->declBus(c+916,"counter_t", false,-1, 9,0);
    tracep->declBus(c+912,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1625,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+888,"rf_overrun", false,-1);
    tracep->declBit(c+910,"rf_error_bit", false,-1);
    tracep->declBus(c+915,"rstate", false,-1, 3,0);
    tracep->declBit(c+911,"rf_push_pulse", false,-1);
    tracep->declBus(c+947,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+948,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+949,"rshift", false,-1, 7,0);
    tracep->declBit(c+950,"rparity", false,-1);
    tracep->declBit(c+951,"rparity_error", false,-1);
    tracep->declBit(c+952,"rframing_error", false,-1);
    tracep->declBit(c+953,"rbit_in", false,-1);
    tracep->declBit(c+954,"rparity_xor", false,-1);
    tracep->declBus(c+955,"counter_b", false,-1, 7,0);
    tracep->declBit(c+956,"rf_push_q", false,-1);
    tracep->declBus(c+957,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+958,"rf_push", false,-1);
    tracep->declBit(c+959,"break_error", false,-1);
    tracep->declBit(c+960,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+961,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+962,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+963,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1654,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1913,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1912,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1908,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1910,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1909,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1911,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1907,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1915,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1916,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1929,"sr_push", false,-1, 3,0);
    tracep->declBus(c+964,"toc_value", false,-1, 9,0);
    tracep->declBus(c+965,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1930,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1931,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1901,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1892,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1566,"wb_rst_i", false,-1);
    tracep->declBit(c+911,"push", false,-1);
    tracep->declBit(c+909,"pop", false,-1);
    tracep->declBus(c+957,"data_in", false,-1, 10,0);
    tracep->declBit(c+878,"fifo_reset", false,-1);
    tracep->declBit(c+148,"reset_status", false,-1);
    tracep->declBus(c+1625,"data_out", false,-1, 10,0);
    tracep->declBit(c+888,"overrun", false,-1);
    tracep->declBus(c+912,"count", false,-1, 4,0);
    tracep->declBit(c+910,"error_bit", false,-1);
    tracep->declBus(c+1626,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+966+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+982,"top", false,-1, 3,0);
    tracep->declBus(c+983,"bottom", false,-1, 3,0);
    tracep->declBus(c+984,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+985,"word0", false,-1, 2,0);
    tracep->declBus(c+986,"word1", false,-1, 2,0);
    tracep->declBus(c+987,"word2", false,-1, 2,0);
    tracep->declBus(c+988,"word3", false,-1, 2,0);
    tracep->declBus(c+989,"word4", false,-1, 2,0);
    tracep->declBus(c+990,"word5", false,-1, 2,0);
    tracep->declBus(c+991,"word6", false,-1, 2,0);
    tracep->declBus(c+992,"word7", false,-1, 2,0);
    tracep->declBus(c+993,"word8", false,-1, 2,0);
    tracep->declBus(c+994,"word9", false,-1, 2,0);
    tracep->declBus(c+995,"word10", false,-1, 2,0);
    tracep->declBus(c+996,"word11", false,-1, 2,0);
    tracep->declBus(c+997,"word12", false,-1, 2,0);
    tracep->declBus(c+998,"word13", false,-1, 2,0);
    tracep->declBus(c+999,"word14", false,-1, 2,0);
    tracep->declBus(c+1000,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1901,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1921,"data_width", false,-1, 31,0);
    tracep->declBus(c+1931,"depth", false,-1, 31,0);
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+911,"we", false,-1);
    tracep->declBus(c+982,"a", false,-1, 3,0);
    tracep->declBus(c+983,"dpra", false,-1, 3,0);
    tracep->declBus(c+1001,"di", false,-1, 7,0);
    tracep->declBus(c+1626,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+633+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1566,"wb_rst_i", false,-1);
    tracep->declBus(c+869,"lcr", false,-1, 7,0);
    tracep->declBit(c+908,"tf_push", false,-1);
    tracep->declBus(c+1438,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+863,"enable", false,-1);
    tracep->declBit(c+879,"tx_reset", false,-1);
    tracep->declBit(c+148,"lsr_mask", false,-1);
    tracep->declBit(c+920,"stx_pad_o", false,-1);
    tracep->declBus(c+914,"tstate", false,-1, 2,0);
    tracep->declBus(c+913,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1002,"counter", false,-1, 4,0);
    tracep->declBus(c+1003,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1004,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1005,"stx_o_tmp", false,-1);
    tracep->declBit(c+1006,"parity_xor", false,-1);
    tracep->declBit(c+1007,"tf_pop", false,-1);
    tracep->declBit(c+1008,"bit_out", false,-1);
    tracep->declBus(c+1438,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1258,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1009,"tf_overrun", false,-1);
    tracep->declBus(c+1645,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1642,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1646,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1647,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1747,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1932,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1921,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1931,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1901,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1892,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+1566,"wb_rst_i", false,-1);
    tracep->declBit(c+908,"push", false,-1);
    tracep->declBit(c+1007,"pop", false,-1);
    tracep->declBus(c+1438,"data_in", false,-1, 7,0);
    tracep->declBit(c+879,"fifo_reset", false,-1);
    tracep->declBit(c+148,"reset_status", false,-1);
    tracep->declBus(c+1258,"data_out", false,-1, 7,0);
    tracep->declBit(c+1009,"overrun", false,-1);
    tracep->declBus(c+913,"count", false,-1, 4,0);
    tracep->declBus(c+1010,"top", false,-1, 3,0);
    tracep->declBus(c+1011,"bottom", false,-1, 3,0);
    tracep->declBus(c+1012,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1901,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1921,"data_width", false,-1, 31,0);
    tracep->declBus(c+1931,"depth", false,-1, 31,0);
    tracep->declBit(c+1565,"clk", false,-1);
    tracep->declBit(c+908,"we", false,-1);
    tracep->declBus(c+1010,"a", false,-1, 3,0);
    tracep->declBus(c+1011,"dpra", false,-1, 3,0);
    tracep->declBus(c+1438,"di", false,-1, 7,0);
    tracep->declBus(c+1258,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+649+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBit(c+1280,"auto_in_psel", false,-1);
    tracep->declBit(c+1281,"auto_in_penable", false,-1);
    tracep->declBit(c+1273,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1282,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1272,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1274,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+716,"auto_in_pready", false,-1);
    tracep->declBit(c+1649,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1650,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1579,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1580,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1581,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1582,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1583,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1584,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1565,"clock", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1435,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1280,"in_psel", false,-1);
    tracep->declBit(c+1281,"in_penable", false,-1);
    tracep->declBus(c+1272,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1273,"in_pwrite", false,-1);
    tracep->declBus(c+1274,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1275,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+716,"in_pready", false,-1);
    tracep->declBus(c+1650,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1649,"in_pslverr", false,-1);
    tracep->declBus(c+1579,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1580,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1581,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1582,"vga_hsync", false,-1);
    tracep->declBit(c+1583,"vga_vsync", false,-1);
    tracep->declBit(c+1584,"vga_valid", false,-1);
    tracep->declBus(c+1013,"h_addr", false,-1, 9,0);
    tracep->declBus(c+665,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1259,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1439,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+716,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1565,"pclk", false,-1);
    tracep->declBit(c+1566,"reset", false,-1);
    tracep->declBus(c+1259,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1013,"h_addr", false,-1, 9,0);
    tracep->declBus(c+665,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1582,"hsync", false,-1);
    tracep->declBit(c+1583,"vsync", false,-1);
    tracep->declBit(c+1584,"valid", false,-1);
    tracep->declBus(c+1579,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1580,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1581,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1933,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1934,"h_active", false,-1, 31,0);
    tracep->declBus(c+1935,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1936,"h_total", false,-1, 31,0);
    tracep->declBus(c+1899,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1937,"v_active", false,-1, 31,0);
    tracep->declBus(c+1938,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1939,"v_total", false,-1, 31,0);
    tracep->declBus(c+1014,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+666,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1015,"h_valid", false,-1);
    tracep->declBit(c+667,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+711,"sck", false,-1);
    tracep->declBit(c+1453,"ss", false,-1);
    tracep->declBit(c+1441,"mosi", false,-1);
    tracep->declBit(c+1230,"miso", false,-1);
    tracep->declBus(c+1231,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1232,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1627,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+711,"sck", false,-1);
    tracep->declBit(c+1454,"ss", false,-1);
    tracep->declBit(c+1441,"mosi", false,-1);
    tracep->declBit(c+1628,"miso", false,-1);
    tracep->declBit(c+1454,"reset", false,-1);
    tracep->declBus(c+1224,"state", false,-1, 2,0);
    tracep->declBus(c+1225,"counter", false,-1, 7,0);
    tracep->declBus(c+1226,"cmd", false,-1, 7,0);
    tracep->declBus(c+1227,"addr", false,-1, 23,0);
    tracep->declBus(c+1228,"data", false,-1, 31,0);
    tracep->declBit(c+1229,"ren", false,-1);
    tracep->declBus(c+1629,"rdata", false,-1, 31,0);
    tracep->declBus(c+1630,"raddr", false,-1, 31,0);
    tracep->declBus(c+1233,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+711,"clock", false,-1);
    tracep->declBit(c+1229,"valid", false,-1);
    tracep->declBus(c+1226,"cmd", false,-1, 7,0);
    tracep->declBus(c+1630,"addr", false,-1, 31,0);
    tracep->declBus(c+1629,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1588,"sck", false,-1);
    tracep->declBit(c+1554,"ce_n", false,-1);
    tracep->declBus(c+1589,"dio", false,-1, 3,0);
    tracep->declBus(c+701,"dio_out", false,-1, 3,0);
    tracep->declBus(c+702,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1589,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1699,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1928,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1899,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1902,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1901,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1892,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+703,"state", false,-1, 2,0);
    tracep->declBus(c+1631,"next_state", false,-1, 2,0);
    tracep->declBus(c+704,"counter", false,-1, 7,0);
    tracep->declBus(c+705,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+706,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+707,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+708,"is_read_op", false,-1);
    tracep->declBit(c+709,"is_write_op", false,-1);
    tracep->declBus(c+710,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1632,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1590,"clk", false,-1);
    tracep->declBit(c+1442,"cke", false,-1);
    tracep->declBit(c+712,"cs", false,-1);
    tracep->declBit(c+713,"ras", false,-1);
    tracep->declBit(c+714,"cas", false,-1);
    tracep->declBit(c+715,"we", false,-1);
    tracep->declBus(c+1591,"a", false,-1, 13,0);
    tracep->declBus(c+1443,"ba", false,-1, 1,0);
    tracep->declBus(c+1444,"dqm", false,-1, 3,0);
    tracep->declBus(c+1502,"dq", false,-1, 31,0);
    tracep->declBit(c+144,"cs_0", false,-1);
    tracep->declBit(c+1633,"ras_0", false,-1);
    tracep->declBit(c+1634,"cas_0", false,-1);
    tracep->declBit(c+1635,"we_0", false,-1);
    tracep->declBit(c+145,"cs_1", false,-1);
    tracep->declBit(c+1636,"ras_1", false,-1);
    tracep->declBit(c+1637,"cas_1", false,-1);
    tracep->declBit(c+1638,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1590,"clk", false,-1);
    tracep->declBit(c+1442,"cke", false,-1);
    tracep->declBit(c+145,"cs", false,-1);
    tracep->declBit(c+1636,"ras", false,-1);
    tracep->declBit(c+1637,"cas", false,-1);
    tracep->declBit(c+1638,"we", false,-1);
    tracep->declBus(c+1447,"a", false,-1, 12,0);
    tracep->declBus(c+1443,"ba", false,-1, 1,0);
    tracep->declBus(c+1444,"dqm", false,-1, 3,0);
    tracep->declBus(c+1502,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1590,"clk", false,-1);
    tracep->declBit(c+1442,"cke", false,-1);
    tracep->declBit(c+145,"cs", false,-1);
    tracep->declBit(c+1636,"ras", false,-1);
    tracep->declBit(c+1637,"cas", false,-1);
    tracep->declBit(c+1638,"we", false,-1);
    tracep->declBus(c+1447,"a", false,-1, 12,0);
    tracep->declBus(c+1443,"ba", false,-1, 1,0);
    tracep->declBus(c+1455,"dqm", false,-1, 1,0);
    tracep->declBus(c+1503,"dq", false,-1, 15,0);
    tracep->declBus(c+1647,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1932,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1747,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1940,"CMD_BURST_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1646,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1642,"CMD_AUTO_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1645,"CMD_LOAD_MODE_REGISTER", false,-1, 2,0);
    tracep->declBus(c+146,"cmd", false,-1, 2,0);
    tracep->declBus(c+1172,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1173,"burst_length", false,-1, 2,0);
    tracep->declBus(c+1174,"burst_counter", false,-1, 2,0);
    tracep->declBus(c+1175,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1176,"CAS_counter", false,-1, 2,0);
    tracep->declBus(c+1177,"current_bank", false,-1, 1,0);
    tracep->declBus(c+1178,"current_row", false,-1, 12,0);
    tracep->declBus(c+1179,"current_column", false,-1, 9,0);
    tracep->declBus(c+1180,"current_column_write", false,-1, 9,0);
    tracep->declBit(c+1181,"read_flag", false,-1);
    tracep->declBit(c+1182,"write_flag", false,-1);
    tracep->declBit(c+1183,"flag", false,-1);
    tracep->declBus(c+1184,"data_out", false,-1, 31,0);
    tracep->declBus(c+1941,"current_dqm", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1590,"clk", false,-1);
    tracep->declBit(c+1442,"cke", false,-1);
    tracep->declBit(c+145,"cs", false,-1);
    tracep->declBit(c+1636,"ras", false,-1);
    tracep->declBit(c+1637,"cas", false,-1);
    tracep->declBit(c+1638,"we", false,-1);
    tracep->declBus(c+1447,"a", false,-1, 12,0);
    tracep->declBus(c+1443,"ba", false,-1, 1,0);
    tracep->declBus(c+1456,"dqm", false,-1, 1,0);
    tracep->declBus(c+1504,"dq", false,-1, 15,0);
    tracep->declBus(c+1647,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1932,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1747,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1940,"CMD_BURST_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1646,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1642,"CMD_AUTO_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1645,"CMD_LOAD_MODE_REGISTER", false,-1, 2,0);
    tracep->declBus(c+146,"cmd", false,-1, 2,0);
    tracep->declBus(c+1185,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1186,"burst_length", false,-1, 2,0);
    tracep->declBus(c+1187,"burst_counter", false,-1, 2,0);
    tracep->declBus(c+1188,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1189,"CAS_counter", false,-1, 2,0);
    tracep->declBus(c+1190,"current_bank", false,-1, 1,0);
    tracep->declBus(c+1191,"current_row", false,-1, 12,0);
    tracep->declBus(c+1192,"current_column", false,-1, 9,0);
    tracep->declBus(c+1193,"current_column_write", false,-1, 9,0);
    tracep->declBit(c+1194,"read_flag", false,-1);
    tracep->declBit(c+1195,"write_flag", false,-1);
    tracep->declBit(c+1196,"flag", false,-1);
    tracep->declBus(c+1197,"data_out", false,-1, 31,0);
    tracep->declBus(c+1942,"current_dqm", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1590,"clk", false,-1);
    tracep->declBit(c+1442,"cke", false,-1);
    tracep->declBit(c+144,"cs", false,-1);
    tracep->declBit(c+1633,"ras", false,-1);
    tracep->declBit(c+1634,"cas", false,-1);
    tracep->declBit(c+1635,"we", false,-1);
    tracep->declBus(c+1447,"a", false,-1, 12,0);
    tracep->declBus(c+1443,"ba", false,-1, 1,0);
    tracep->declBus(c+1444,"dqm", false,-1, 3,0);
    tracep->declBus(c+1502,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1590,"clk", false,-1);
    tracep->declBit(c+1442,"cke", false,-1);
    tracep->declBit(c+144,"cs", false,-1);
    tracep->declBit(c+1633,"ras", false,-1);
    tracep->declBit(c+1634,"cas", false,-1);
    tracep->declBit(c+1635,"we", false,-1);
    tracep->declBus(c+1447,"a", false,-1, 12,0);
    tracep->declBus(c+1443,"ba", false,-1, 1,0);
    tracep->declBus(c+1455,"dqm", false,-1, 1,0);
    tracep->declBus(c+1503,"dq", false,-1, 15,0);
    tracep->declBus(c+1647,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1932,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1747,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1940,"CMD_BURST_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1646,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1642,"CMD_AUTO_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1645,"CMD_LOAD_MODE_REGISTER", false,-1, 2,0);
    tracep->declBus(c+147,"cmd", false,-1, 2,0);
    tracep->declBus(c+1198,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1199,"burst_length", false,-1, 2,0);
    tracep->declBus(c+1200,"burst_counter", false,-1, 2,0);
    tracep->declBus(c+1201,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1202,"CAS_counter", false,-1, 2,0);
    tracep->declBus(c+1203,"current_bank", false,-1, 1,0);
    tracep->declBus(c+1204,"current_row", false,-1, 12,0);
    tracep->declBus(c+1205,"current_column", false,-1, 9,0);
    tracep->declBus(c+1206,"current_column_write", false,-1, 9,0);
    tracep->declBit(c+1207,"read_flag", false,-1);
    tracep->declBit(c+1208,"write_flag", false,-1);
    tracep->declBit(c+1209,"flag", false,-1);
    tracep->declBus(c+1210,"data_out", false,-1, 31,0);
    tracep->declBus(c+1943,"current_dqm", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1590,"clk", false,-1);
    tracep->declBit(c+1442,"cke", false,-1);
    tracep->declBit(c+144,"cs", false,-1);
    tracep->declBit(c+1633,"ras", false,-1);
    tracep->declBit(c+1634,"cas", false,-1);
    tracep->declBit(c+1635,"we", false,-1);
    tracep->declBus(c+1447,"a", false,-1, 12,0);
    tracep->declBus(c+1443,"ba", false,-1, 1,0);
    tracep->declBus(c+1456,"dqm", false,-1, 1,0);
    tracep->declBus(c+1504,"dq", false,-1, 15,0);
    tracep->declBus(c+1647,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1932,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1747,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1940,"CMD_BURST_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1646,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1642,"CMD_AUTO_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1645,"CMD_LOAD_MODE_REGISTER", false,-1, 2,0);
    tracep->declBus(c+147,"cmd", false,-1, 2,0);
    tracep->declBus(c+1211,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1212,"burst_length", false,-1, 2,0);
    tracep->declBus(c+1213,"burst_counter", false,-1, 2,0);
    tracep->declBus(c+1214,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1215,"CAS_counter", false,-1, 2,0);
    tracep->declBus(c+1216,"current_bank", false,-1, 1,0);
    tracep->declBus(c+1217,"current_row", false,-1, 12,0);
    tracep->declBus(c+1218,"current_column", false,-1, 9,0);
    tracep->declBus(c+1219,"current_column_write", false,-1, 9,0);
    tracep->declBit(c+1220,"read_flag", false,-1);
    tracep->declBit(c+1221,"write_flag", false,-1);
    tracep->declBit(c+1222,"flag", false,-1);
    tracep->declBus(c+1223,"data_out", false,-1, 31,0);
    tracep->declBus(c+1944,"current_dqm", false,-1, 1,0);
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
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+28,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+38,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+44,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullSData(oldp+45,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+50,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+54,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+58,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullIData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+68,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+71,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                               ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                        : 0U))),8);
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+73,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+74,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+75,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+76,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+77,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+78,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+80,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+81,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+82,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+83,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+84,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+85,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+86,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+87,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awready));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wready));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),3);
    bufp->fullIData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+140,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 2U))),13);
    bufp->fullSData(oldp+141,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+142,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_0));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_1));
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cmd),3);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cmd),3);
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
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
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+260,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+271,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+273,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+311,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+314,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+315,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+396,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+397,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+398,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+459,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+469,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+473,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+477,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+497,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+509,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+513,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+517,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+525,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+529,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+533,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+537,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+541,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+545,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+549,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+553,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+557,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+561,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+565,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+569,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+573,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+577,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+581,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+585,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+589,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+593,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+627,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+665,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+668,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+669,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+670,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+671,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+672,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+673,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+674,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+675,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+676,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+677,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+678,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+679,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+680,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+681,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+682,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+683,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+684,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+685,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+686,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+687,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+688,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+689,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+690,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+691,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+692,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+693,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+694,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+695,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+696,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+697,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+698,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+707,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+712,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+713,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+714,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+715,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+723,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+725,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullSData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+729,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+730,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+731,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+732,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+733,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+734,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+735,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+736,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+739,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+740,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+743,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+744,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+748,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+752,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+767,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+768,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+770,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+771,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+772,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+773,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+774,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+782,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+822,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+823,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+835,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+836,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+837,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+838,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+839,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+840,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+841,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+842,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+843,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+845,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+849,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+851,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+852,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+855,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+859,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+860,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+862,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+880,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+881,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+882,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+883,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+884,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+885,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+886,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+889,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+890,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+891,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+910,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+917,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+936,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+937,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+938,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+939,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+940,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+959,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+960,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+961,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+962,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+963,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+965,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+984,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1001,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1012,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1013,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1042,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                 ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1045,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1064,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1070,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+1071,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1118,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1134,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1136,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1139,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1163,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1164,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1165,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1166,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1167,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1168,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1169,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1170,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1171,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullSData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1173,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__burst_counter),3);
    bufp->fullCData(oldp+1175,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__CAS_counter),3);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__current_bank),2);
    bufp->fullSData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__current_row),13);
    bufp->fullSData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__current_column),10);
    bufp->fullSData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__current_column_write),10);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_flag));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_flag));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__data_out),32);
    bufp->fullSData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1186,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__burst_counter),3);
    bufp->fullCData(oldp+1188,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__CAS_counter),3);
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__current_bank),2);
    bufp->fullSData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__current_row),13);
    bufp->fullSData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__current_column),10);
    bufp->fullSData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__current_column_write),10);
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_flag));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_flag));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__data_out),32);
    bufp->fullSData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1199,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__burst_counter),3);
    bufp->fullCData(oldp+1201,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__CAS_counter),3);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__current_bank),2);
    bufp->fullSData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__current_row),13);
    bufp->fullSData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__current_column),10);
    bufp->fullSData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__current_column_write),10);
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_flag));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_flag));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__data_out),32);
    bufp->fullSData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1212,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__burst_counter),3);
    bufp->fullCData(oldp+1214,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__CAS_counter),3);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__current_bank),2);
    bufp->fullSData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__current_row),13);
    bufp->fullSData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__current_column),10);
    bufp->fullSData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__current_column_write),10);
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_flag));
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_flag));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__data_out),32);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1229,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1240,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1241,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullIData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1262,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1282,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1285,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1289,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1297,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1300,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1307,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullIData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1423,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1429,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1430,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1431,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1432,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullIData(oldp+1433,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1434,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1435,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1436,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1439,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullSData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1453,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1455,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1456,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1457,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1463,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1466,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1481,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1482,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1483,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1484,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1494,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1503,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1504,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1528,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1529,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1540,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1546,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1551,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1552,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1553,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1565,(vlSelf->clock));
    bufp->fullBit(oldp+1566,(vlSelf->reset));
    bufp->fullSData(oldp+1567,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1568,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1569,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1570,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1571,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1572,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1573,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1574,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1575,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1576,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1577,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1578,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1579,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1580,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1581,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1582,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1583,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1584,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1585,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1586,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1587,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1590,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1591,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1592,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1593,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | (IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+1594,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
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
    bufp->fullBit(oldp+1595,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1596,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1597,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1598,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1599,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+1601,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1603,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1604,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1606,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1607,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullIData(oldp+1608,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1609,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1610,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
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
    bufp->fullBit(oldp+1616,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1617,((0xfU & vlSelf->__VdfgTmp_h81912a5e__0)),4);
    bufp->fullBit(oldp+1618,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1619,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1622,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1625,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1627,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1628,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1630,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullBit(oldp+1633,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+1634,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+1635,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+1636,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 0x1aU)) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1637,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 0x1aU)) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1638,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 0x1aU)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullIData(oldp+1639,(0x226U),32);
    bufp->fullIData(oldp+1640,(0x64U),32);
    bufp->fullIData(oldp+1641,(0x200U),32);
    bufp->fullCData(oldp+1642,(1U),3);
    bufp->fullIData(oldp+1643,(0xb00U),32);
    bufp->fullIData(oldp+1644,(9U),32);
    bufp->fullCData(oldp+1645,(0U),3);
    bufp->fullCData(oldp+1646,(2U),3);
    bufp->fullCData(oldp+1647,(3U),3);
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1651,(0U));
    bufp->fullBit(oldp+1652,(1U));
    bufp->fullCData(oldp+1653,(0U),2);
    bufp->fullCData(oldp+1654,(0U),4);
    bufp->fullCData(oldp+1655,(0U),8);
    bufp->fullSData(oldp+1656,(1U),16);
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1673,(0U),32);
    bufp->fullBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1699,(0U),32);
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1703,(1U),2);
    bufp->fullCData(oldp+1704,(2U),2);
    bufp->fullIData(oldp+1705,(0x20U),32);
    bufp->fullIData(oldp+1706,(4U),32);
    bufp->fullIData(oldp+1707,(0x79737978U),32);
    bufp->fullIData(oldp+1708,(0x17e3c19U),32);
    bufp->fullCData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1747,(4U),3);
    bufp->fullIData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1891,(3U),2);
    bufp->fullIData(oldp+1892,(5U),32);
    bufp->fullBit(oldp+1893,(0U));
    bufp->fullBit(oldp+1894,(1U));
    bufp->fullCData(oldp+1895,(0x1bU),8);
    bufp->fullCData(oldp+1896,(0xebU),8);
    bufp->fullCData(oldp+1897,(0x38U),8);
    bufp->fullIData(oldp+1898,(0x18U),32);
    bufp->fullIData(oldp+1899,(2U),32);
    bufp->fullIData(oldp+1900,(6U),32);
    bufp->fullIData(oldp+1901,(4U),32);
    bufp->fullIData(oldp+1902,(3U),32);
    bufp->fullIData(oldp+1903,(0xdU),32);
    bufp->fullIData(oldp+1904,(0x2000U),32);
    bufp->fullIData(oldp+1905,(0x2710U),32);
    bufp->fullIData(oldp+1906,(0x30cU),32);
    bufp->fullCData(oldp+1907,(7U),4);
    bufp->fullCData(oldp+1908,(3U),4);
    bufp->fullCData(oldp+1909,(5U),4);
    bufp->fullCData(oldp+1910,(4U),4);
    bufp->fullCData(oldp+1911,(6U),4);
    bufp->fullCData(oldp+1912,(2U),4);
    bufp->fullCData(oldp+1913,(1U),4);
    bufp->fullSData(oldp+1914,(0x20U),13);
    bufp->fullCData(oldp+1915,(8U),4);
    bufp->fullCData(oldp+1916,(9U),4);
    bufp->fullIData(oldp+1917,(0xaU),32);
    bufp->fullIData(oldp+1918,(0x11U),32);
    bufp->fullIData(oldp+1919,(0x30000000U),32);
    bufp->fullIData(oldp+1920,(0x3fffffffU),32);
    bufp->fullIData(oldp+1921,(8U),32);
    bufp->fullCData(oldp+1922,(4U),5);
    bufp->fullCData(oldp+1923,(0U),5);
    bufp->fullCData(oldp+1924,(0x10U),5);
    bufp->fullCData(oldp+1925,(0x14U),5);
    bufp->fullCData(oldp+1926,(0x18U),5);
    bufp->fullIData(oldp+1927,(0x3000000U),32);
    bufp->fullIData(oldp+1928,(1U),32);
    bufp->fullCData(oldp+1929,(0xaU),4);
    bufp->fullIData(oldp+1930,(0xbU),32);
    bufp->fullIData(oldp+1931,(0x10U),32);
    bufp->fullCData(oldp+1932,(5U),3);
    bufp->fullIData(oldp+1933,(0x60U),32);
    bufp->fullIData(oldp+1934,(0x90U),32);
    bufp->fullIData(oldp+1935,(0x310U),32);
    bufp->fullIData(oldp+1936,(0x320U),32);
    bufp->fullIData(oldp+1937,(0x23U),32);
    bufp->fullIData(oldp+1938,(0x203U),32);
    bufp->fullIData(oldp+1939,(0x20dU),32);
    bufp->fullCData(oldp+1940,(6U),3);
    bufp->fullCData(oldp+1941,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__current_dqm),2);
    bufp->fullCData(oldp+1942,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__current_dqm),2);
    bufp->fullCData(oldp+1943,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__current_dqm),2);
    bufp->fullCData(oldp+1944,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__current_dqm),2);
}
