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
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1249,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1250,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1251,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1252,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1253,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1254,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1255,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1256,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1257,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1258,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1259,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1260,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1261,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1262,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1263,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1264,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1265,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1266,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1267,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1268,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1249,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1250,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1251,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1252,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1253,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1254,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1255,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1256,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1257,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1258,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1259,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1260,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1261,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1262,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1263,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1264,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1265,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1266,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1267,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1268,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+566,"spi_sck", false,-1);
    tracep->declBus(c+567,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1269,"spi_mosi", false,-1);
    tracep->declBit(c+1270,"spi_miso", false,-1);
    tracep->declBit(c+1267,"uart_rx", false,-1);
    tracep->declBit(c+1268,"uart_tx", false,-1);
    tracep->declBit(c+1271,"psram_sck", false,-1);
    tracep->declBit(c+1272,"psram_ce_n", false,-1);
    tracep->declBus(c+1200,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1273,"sdram_clk", false,-1);
    tracep->declBit(c+568,"sdram_cke", false,-1);
    tracep->declBit(c+569,"sdram_cs", false,-1);
    tracep->declBit(c+570,"sdram_ras", false,-1);
    tracep->declBit(c+571,"sdram_cas", false,-1);
    tracep->declBit(c+572,"sdram_we", false,-1);
    tracep->declBus(c+573,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+574,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+575,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+576,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1249,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1250,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1251,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1252,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1253,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1254,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1255,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1256,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1257,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1258,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1259,"ps2_clk", false,-1);
    tracep->declBit(c+1260,"ps2_data", false,-1);
    tracep->declBus(c+1261,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1262,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1263,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1264,"vga_hsync", false,-1);
    tracep->declBit(c+1265,"vga_vsync", false,-1);
    tracep->declBit(c+1266,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1036,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+76,"in_psel", false,-1);
    tracep->declBit(c+77,"in_penable", false,-1);
    tracep->declBus(c+1298,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"in_pready", false,-1);
    tracep->declBus(c+1202,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1040,"in_pslverr", false,-1);
    tracep->declBus(c+1036,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+76,"out_psel", false,-1);
    tracep->declBit(c+77,"out_penable", false,-1);
    tracep->declBus(c+1298,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"out_pwrite", false,-1);
    tracep->declBus(c+1038,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"out_pready", false,-1);
    tracep->declBus(c+1202,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1040,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+76,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+77,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1037,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1040,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1202,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+556,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+557,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+577,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1299,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+578,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+558,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+559,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1041,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1298,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1301,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1302,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+560,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+561,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1042,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1298,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1303,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1304,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1305,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+562,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+563,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1042,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1298,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1308,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1043,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+564,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1274,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1299,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+78,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1044,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1045,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1042,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1298,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1046,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1299,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1275,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1047,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1048,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1041,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1298,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+579,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1299,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+580,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1049,"sel_0", false,-1);
    tracep->declBit(c+1050,"sel_1", false,-1);
    tracep->declBit(c+1051,"sel_2", false,-1);
    tracep->declBit(c+1052,"sel_3", false,-1);
    tracep->declBit(c+1053,"sel_4", false,-1);
    tracep->declBit(c+1054,"sel_5", false,-1);
    tracep->declBit(c+1055,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+79,"auto_in_awready", false,-1);
    tracep->declBit(c+80,"auto_in_awvalid", false,-1);
    tracep->declBus(c+81,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+84,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+79,"auto_in_wready", false,-1);
    tracep->declBit(c+85,"auto_in_wvalid", false,-1);
    tracep->declBus(c+86,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+88,"auto_in_bready", false,-1);
    tracep->declBit(c+1203,"auto_in_bvalid", false,-1);
    tracep->declBus(c+89,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1056,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+90,"auto_in_arready", false,-1);
    tracep->declBit(c+91,"auto_in_arvalid", false,-1);
    tracep->declBus(c+92,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+93,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+94,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+95,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+96,"auto_in_rready", false,-1);
    tracep->declBit(c+1204,"auto_in_rvalid", false,-1);
    tracep->declBus(c+97,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1276,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1056,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+76,"auto_out_psel", false,-1);
    tracep->declBit(c+77,"auto_out_penable", false,-1);
    tracep->declBit(c+1037,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1038,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"auto_out_pready", false,-1);
    tracep->declBit(c+1040,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1202,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+77,"nodeOut_penable", false,-1);
    tracep->declBus(c+98,"state", false,-1, 1,0);
    tracep->declBit(c+90,"accept_read", false,-1);
    tracep->declBit(c+79,"accept_write", false,-1);
    tracep->declBit(c+99,"is_write_r", false,-1);
    tracep->declBit(c+1037,"is_write", false,-1);
    tracep->declBus(c+97,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+89,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+100,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+101,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+102,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+103,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1057,"resp", false,-1, 1,0);
    tracep->declBus(c+104,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1056,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1204,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+105,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1203,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+106,"auto_in_awready", false,-1);
    tracep->declBit(c+903,"auto_in_awvalid", false,-1);
    tracep->declBus(c+107,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+904,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+108,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+109,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_in_wready", false,-1);
    tracep->declBit(c+905,"auto_in_wvalid", false,-1);
    tracep->declBus(c+906,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+908,"auto_in_wlast", false,-1);
    tracep->declBit(c+505,"auto_in_bready", false,-1);
    tracep->declBit(c+111,"auto_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+114,"auto_in_arready", false,-1);
    tracep->declBit(c+909,"auto_in_arvalid", false,-1);
    tracep->declBus(c+910,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+911,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+912,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+913,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1277,"auto_in_rready", false,-1);
    tracep->declBit(c+115,"auto_in_rvalid", false,-1);
    tracep->declBus(c+116,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+118,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+119,"auto_in_rlast", false,-1);
    tracep->declBit(c+79,"auto_out_awready", false,-1);
    tracep->declBit(c+80,"auto_out_awvalid", false,-1);
    tracep->declBus(c+81,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+83,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+84,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+79,"auto_out_wready", false,-1);
    tracep->declBit(c+85,"auto_out_wvalid", false,-1);
    tracep->declBus(c+86,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+88,"auto_out_bready", false,-1);
    tracep->declBit(c+1203,"auto_out_bvalid", false,-1);
    tracep->declBus(c+89,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1056,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+90,"auto_out_arready", false,-1);
    tracep->declBit(c+91,"auto_out_arvalid", false,-1);
    tracep->declBus(c+92,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+93,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+94,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+95,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+96,"auto_out_rready", false,-1);
    tracep->declBit(c+1204,"auto_out_rvalid", false,-1);
    tracep->declBus(c+97,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1276,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1056,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+88,"io_enq_ready", false,-1);
    tracep->declBit(c+1203,"io_enq_valid", false,-1);
    tracep->declBus(c+89,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1056,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+505,"io_deq_ready", false,-1);
    tracep->declBit(c+111,"io_deq_valid", false,-1);
    tracep->declBus(c+112,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+113,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+120,"wrap", false,-1);
    tracep->declBit(c+121,"wrap_1", false,-1);
    tracep->declBit(c+122,"maybe_full", false,-1);
    tracep->declBit(c+123,"ptr_match", false,-1);
    tracep->declBit(c+124,"empty", false,-1);
    tracep->declBit(c+125,"full", false,-1);
    tracep->declBit(c+1205,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+121,"R0_addr", false,-1);
    tracep->declBit(c+1309,"R0_en", false,-1);
    tracep->declBit(c+1247,"R0_clk", false,-1);
    tracep->declBus(c+126,"R0_data", false,-1, 5,0);
    tracep->declBit(c+120,"W0_addr", false,-1);
    tracep->declBit(c+1205,"W0_en", false,-1);
    tracep->declBit(c+1247,"W0_clk", false,-1);
    tracep->declBus(c+565,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+127+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+129,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+96,"io_enq_ready", false,-1);
    tracep->declBit(c+1204,"io_enq_valid", false,-1);
    tracep->declBus(c+97,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1276,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1056,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1277,"io_deq_ready", false,-1);
    tracep->declBit(c+115,"io_deq_valid", false,-1);
    tracep->declBus(c+116,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+117,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+118,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+119,"io_deq_bits_last", false,-1);
    tracep->declBit(c+130,"wrap", false,-1);
    tracep->declBit(c+131,"wrap_1", false,-1);
    tracep->declBit(c+132,"maybe_full", false,-1);
    tracep->declBit(c+133,"ptr_match", false,-1);
    tracep->declBit(c+134,"empty", false,-1);
    tracep->declBit(c+135,"full", false,-1);
    tracep->declBit(c+1206,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+131,"R0_addr", false,-1);
    tracep->declBit(c+1309,"R0_en", false,-1);
    tracep->declBit(c+1247,"R0_clk", false,-1);
    tracep->declQuad(c+136,"R0_data", false,-1, 38,0);
    tracep->declBit(c+130,"W0_addr", false,-1);
    tracep->declBit(c+1206,"W0_en", false,-1);
    tracep->declBit(c+1247,"W0_clk", false,-1);
    tracep->declQuad(c+1278,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+138+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+142,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+114,"io_enq_ready", false,-1);
    tracep->declBit(c+909,"io_enq_valid", false,-1);
    tracep->declBus(c+910,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+911,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+912,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+913,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+90,"io_deq_ready", false,-1);
    tracep->declBit(c+91,"io_deq_valid", false,-1);
    tracep->declBus(c+92,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+93,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+94,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+95,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+143,"wrap", false,-1);
    tracep->declBit(c+144,"wrap_1", false,-1);
    tracep->declBit(c+145,"maybe_full", false,-1);
    tracep->declBit(c+146,"ptr_match", false,-1);
    tracep->declBit(c+147,"empty", false,-1);
    tracep->declBit(c+148,"full", false,-1);
    tracep->declBit(c+914,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+144,"R0_addr", false,-1);
    tracep->declBit(c+1309,"R0_en", false,-1);
    tracep->declBit(c+1247,"R0_clk", false,-1);
    tracep->declQuad(c+149,"R0_data", false,-1, 46,0);
    tracep->declBit(c+143,"W0_addr", false,-1);
    tracep->declBit(c+914,"W0_en", false,-1);
    tracep->declBit(c+1247,"W0_clk", false,-1);
    tracep->declQuad(c+915,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+151+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+155,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+106,"io_enq_ready", false,-1);
    tracep->declBit(c+903,"io_enq_valid", false,-1);
    tracep->declBus(c+107,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+904,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+108,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+109,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+79,"io_deq_ready", false,-1);
    tracep->declBit(c+80,"io_deq_valid", false,-1);
    tracep->declBus(c+81,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+82,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+83,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+84,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+156,"wrap", false,-1);
    tracep->declBit(c+157,"wrap_1", false,-1);
    tracep->declBit(c+158,"maybe_full", false,-1);
    tracep->declBit(c+159,"ptr_match", false,-1);
    tracep->declBit(c+160,"empty", false,-1);
    tracep->declBit(c+161,"full", false,-1);
    tracep->declBit(c+917,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+157,"R0_addr", false,-1);
    tracep->declBit(c+1309,"R0_en", false,-1);
    tracep->declBit(c+1247,"R0_clk", false,-1);
    tracep->declQuad(c+162,"R0_data", false,-1, 46,0);
    tracep->declBit(c+156,"W0_addr", false,-1);
    tracep->declBit(c+917,"W0_en", false,-1);
    tracep->declBit(c+1247,"W0_clk", false,-1);
    tracep->declQuad(c+506,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+164+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+168,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+110,"io_enq_ready", false,-1);
    tracep->declBit(c+905,"io_enq_valid", false,-1);
    tracep->declBus(c+906,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+907,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+908,"io_enq_bits_last", false,-1);
    tracep->declBit(c+79,"io_deq_ready", false,-1);
    tracep->declBit(c+85,"io_deq_valid", false,-1);
    tracep->declBus(c+86,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+87,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+169,"wrap", false,-1);
    tracep->declBit(c+170,"wrap_1", false,-1);
    tracep->declBit(c+171,"maybe_full", false,-1);
    tracep->declBit(c+172,"ptr_match", false,-1);
    tracep->declBit(c+173,"empty", false,-1);
    tracep->declBit(c+174,"full", false,-1);
    tracep->declBit(c+918,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+170,"R0_addr", false,-1);
    tracep->declBit(c+1309,"R0_en", false,-1);
    tracep->declBit(c+1247,"R0_clk", false,-1);
    tracep->declQuad(c+175,"R0_data", false,-1, 35,0);
    tracep->declBit(c+169,"W0_addr", false,-1);
    tracep->declBit(c+918,"W0_en", false,-1);
    tracep->declBit(c+1247,"W0_clk", false,-1);
    tracep->declQuad(c+919,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+177+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+181,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+182,"auto_in_awready", false,-1);
    tracep->declBit(c+805,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1310,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+806,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1311,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1313,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+183,"auto_in_wready", false,-1);
    tracep->declBit(c+807,"auto_in_wvalid", false,-1);
    tracep->declBus(c+808,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+809,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"auto_in_wlast", false,-1);
    tracep->declBit(c+1280,"auto_in_bready", false,-1);
    tracep->declBit(c+184,"auto_in_bvalid", false,-1);
    tracep->declBus(c+185,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+186,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_in_arready", false,-1);
    tracep->declBit(c+810,"auto_in_arvalid", false,-1);
    tracep->declBus(c+811,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+921,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+812,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+813,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+814,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+815,"auto_in_rready", false,-1);
    tracep->declBit(c+188,"auto_in_rvalid", false,-1);
    tracep->declBus(c+189,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+192,"auto_in_rlast", false,-1);
    tracep->declBit(c+922,"auto_out_awready", false,-1);
    tracep->declBit(c+923,"auto_out_awvalid", false,-1);
    tracep->declBus(c+107,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+904,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+108,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+109,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+193,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+924,"auto_out_wready", false,-1);
    tracep->declBit(c+925,"auto_out_wvalid", false,-1);
    tracep->declBus(c+906,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+908,"auto_out_wlast", false,-1);
    tracep->declBit(c+926,"auto_out_bready", false,-1);
    tracep->declBit(c+194,"auto_out_bvalid", false,-1);
    tracep->declBus(c+185,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+196,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+927,"auto_out_arready", false,-1);
    tracep->declBit(c+928,"auto_out_arvalid", false,-1);
    tracep->declBus(c+910,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+911,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+912,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+913,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+929,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+815,"auto_out_rready", false,-1);
    tracep->declBit(c+188,"auto_out_rvalid", false,-1);
    tracep->declBus(c+189,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+197,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+198,"auto_out_rlast", false,-1);
    tracep->declBit(c+925,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+199,"w_idle", false,-1);
    tracep->declBit(c+930,"in_awready", false,-1);
    tracep->declBit(c+200,"busy", false,-1);
    tracep->declBus(c+201,"r_addr", false,-1, 31,0);
    tracep->declBus(c+202,"r_len", false,-1, 7,0);
    tracep->declBus(c+931,"len", false,-1, 7,0);
    tracep->declBus(c+932,"addr", false,-1, 31,0);
    tracep->declBit(c+203,"busy_1", false,-1);
    tracep->declBus(c+204,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+205,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+206,"len_1", false,-1, 7,0);
    tracep->declBus(c+933,"addr_1", false,-1, 31,0);
    tracep->declBit(c+207,"wbeats_latched", false,-1);
    tracep->declBit(c+923,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+934,"wbeats_valid", false,-1);
    tracep->declBus(c+208,"w_counter", false,-1, 8,0);
    tracep->declBus(c+935,"w_todo", false,-1, 8,0);
    tracep->declBit(c+908,"w_last", false,-1);
    tracep->declBit(c+926,"nodeOut_bready", false,-1);
    tracep->declBus(c+209,"error_0", false,-1, 1,0);
    tracep->declBus(c+210,"error_1", false,-1, 1,0);
    tracep->declBus(c+211,"error_2", false,-1, 1,0);
    tracep->declBus(c+212,"error_3", false,-1, 1,0);
    tracep->declBus(c+213,"error_4", false,-1, 1,0);
    tracep->declBus(c+214,"error_5", false,-1, 1,0);
    tracep->declBus(c+215,"error_6", false,-1, 1,0);
    tracep->declBus(c+216,"error_7", false,-1, 1,0);
    tracep->declBus(c+217,"error_8", false,-1, 1,0);
    tracep->declBus(c+218,"error_9", false,-1, 1,0);
    tracep->declBus(c+219,"error_10", false,-1, 1,0);
    tracep->declBus(c+220,"error_11", false,-1, 1,0);
    tracep->declBus(c+221,"error_12", false,-1, 1,0);
    tracep->declBus(c+222,"error_13", false,-1, 1,0);
    tracep->declBus(c+223,"error_14", false,-1, 1,0);
    tracep->declBus(c+224,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+810,"io_enq_valid", false,-1);
    tracep->declBus(c+811,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+921,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+812,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+813,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+814,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+936,"io_deq_ready", false,-1);
    tracep->declBit(c+928,"io_deq_valid", false,-1);
    tracep->declBus(c+910,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+937,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+938,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+912,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+913,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+225,"ram", false,-1, 48,0);
    tracep->declBit(c+227,"full", false,-1);
    tracep->declBit(c+928,"io_deq_valid_0", false,-1);
    tracep->declBit(c+939,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+182,"io_enq_ready", false,-1);
    tracep->declBit(c+805,"io_enq_valid", false,-1);
    tracep->declBus(c+1310,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+806,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1311,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1312,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1313,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+940,"io_deq_ready", false,-1);
    tracep->declBit(c+941,"io_deq_valid", false,-1);
    tracep->declBus(c+107,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+942,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+228,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+108,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+109,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+229,"ram", false,-1, 48,0);
    tracep->declBit(c+231,"full", false,-1);
    tracep->declBit(c+941,"io_deq_valid_0", false,-1);
    tracep->declBit(c+943,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+183,"io_enq_ready", false,-1);
    tracep->declBit(c+807,"io_enq_valid", false,-1);
    tracep->declBus(c+808,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+809,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1299,"io_enq_bits_last", false,-1);
    tracep->declBit(c+944,"io_deq_ready", false,-1);
    tracep->declBit(c+945,"io_deq_valid", false,-1);
    tracep->declBus(c+906,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+907,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+232,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+233,"ram", false,-1, 36,0);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+945,"io_deq_valid_0", false,-1);
    tracep->declBit(c+946,"do_enq", false,-1);
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
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+947,"auto_in_awready", false,-1);
    tracep->declBit(c+948,"auto_in_awvalid", false,-1);
    tracep->declBus(c+107,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+949,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+950,"auto_in_wready", false,-1);
    tracep->declBit(c+951,"auto_in_wvalid", false,-1);
    tracep->declBus(c+906,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+952,"auto_in_bready", false,-1);
    tracep->declBit(c+236,"auto_in_bvalid", false,-1);
    tracep->declBus(c+237,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+238,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+953,"auto_in_arready", false,-1);
    tracep->declBit(c+954,"auto_in_arvalid", false,-1);
    tracep->declBus(c+910,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+955,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+956,"auto_in_rready", false,-1);
    tracep->declBit(c+239,"auto_in_rvalid", false,-1);
    tracep->declBus(c+240,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+241,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+242,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+953,"nodeIn_arready", false,-1);
    tracep->declBit(c+947,"nodeIn_awready", false,-1);
    tracep->declBit(c+957,"w_sel0", false,-1);
    tracep->declBit(c+236,"w_full", false,-1);
    tracep->declBus(c+237,"w_id", false,-1, 3,0);
    tracep->declBit(c+243,"r_sel1", false,-1);
    tracep->declBit(c+244,"w_sel1", false,-1);
    tracep->declBit(c+239,"r_full", false,-1);
    tracep->declBus(c+240,"r_id", false,-1, 3,0);
    tracep->declBit(c+958,"ren", false,-1);
    tracep->declBit(c+245,"rdata_REG", false,-1);
    tracep->declBus(c+246,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+247,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+248,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+249,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+959,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+958,"R0_en", false,-1);
    tracep->declBit(c+1247,"R0_clk", false,-1);
    tracep->declBus(c+250,"R0_data", false,-1, 31,0);
    tracep->declBus(c+960,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+961,"W0_en", false,-1);
    tracep->declBit(c+1247,"W0_clk", false,-1);
    tracep->declBus(c+906,"W0_data", false,-1, 31,0);
    tracep->declBus(c+907,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+182,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+805,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1310,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+806,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1311,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1313,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+183,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+807,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+808,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+809,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1280,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+184,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+186,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+810,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+811,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+921,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+812,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+813,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+814,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+815,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+188,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+192,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+182,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+805,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1310,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+806,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1311,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1313,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+183,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+807,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+808,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+809,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1280,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+184,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+186,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+810,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+811,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+921,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+812,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+813,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+814,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+815,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+188,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+192,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+962,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+963,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+107,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+904,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+108,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+109,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+924,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+925,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+906,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+908,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+926,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+194,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+964,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+965,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+910,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+911,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+912,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+913,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+815,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+188,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+198,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+947,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+948,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+107,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+949,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+950,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+951,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+906,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+952,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+236,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+237,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+238,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+953,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+954,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+910,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+955,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+956,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+239,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+240,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+241,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+242,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+966,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+967,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+251,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+968,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+910,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+969,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1281,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+252,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+253,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+254,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+106,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+903,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+107,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+904,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+108,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+109,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+110,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+905,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+906,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+908,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+505,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+111,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+112,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+114,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+909,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+910,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+911,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+912,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+913,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1277,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+115,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+116,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+118,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+119,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+194,"in_0_bvalid", false,-1);
    tracep->declBit(c+188,"in_0_rvalid", false,-1);
    tracep->declBit(c+970,"in_0_wready", false,-1);
    tracep->declBit(c+971,"in_0_awready", false,-1);
    tracep->declBit(c+964,"in_0_arready", false,-1);
    tracep->declBit(c+962,"anonIn_awready", false,-1);
    tracep->declBit(c+972,"requestARIO_0_0", false,-1);
    tracep->declBit(c+973,"requestARIO_0_1", false,-1);
    tracep->declBit(c+974,"requestARIO_0_2", false,-1);
    tracep->declBit(c+975,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+976,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+977,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+978,"arSel", false,-1, 15,0);
    tracep->declBus(c+255,"awSel", false,-1, 15,0);
    tracep->declBus(c+256,"rSel", false,-1, 15,0);
    tracep->declBus(c+257,"bSel", false,-1, 15,0);
    tracep->declBit(c+258,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+259,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+260,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+261,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+262,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+263,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+264,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+265,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+266,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+267,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+268,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+269,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+270,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+271,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+272,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+273,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+274,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+275,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+276,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+277,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+278,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+279,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+280,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+281,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+282,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+283,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+284,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+285,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+286,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+287,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+288,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+289,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+290,"latched", false,-1);
    tracep->declBit(c+979,"in_0_awvalid", false,-1);
    tracep->declBit(c+980,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+981,"in_0_wvalid", false,-1);
    tracep->declBit(c+291,"idle_3", false,-1);
    tracep->declBit(c+292,"anyValid", false,-1);
    tracep->declBus(c+293,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+294,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+295,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+296,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+297,"prefixOR_1", false,-1);
    tracep->declBit(c+298,"winner_3_1", false,-1);
    tracep->declBit(c+299,"winner_3_2", false,-1);
    tracep->declBit(c+300,"state_3_0", false,-1);
    tracep->declBit(c+301,"state_3_1", false,-1);
    tracep->declBit(c+302,"state_3_2", false,-1);
    tracep->declBit(c+303,"muxState_3_0", false,-1);
    tracep->declBit(c+304,"muxState_3_1", false,-1);
    tracep->declBit(c+305,"muxState_3_2", false,-1);
    tracep->declBit(c+306,"idle_4", false,-1);
    tracep->declBit(c+307,"anyValid_1", false,-1);
    tracep->declBus(c+308,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+309,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+310,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+311,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+312,"winner_4_0", false,-1);
    tracep->declBit(c+313,"winner_4_2", false,-1);
    tracep->declBit(c+314,"state_4_0", false,-1);
    tracep->declBit(c+315,"state_4_2", false,-1);
    tracep->declBit(c+316,"muxState_4_0", false,-1);
    tracep->declBit(c+317,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+318,"io_enq_ready", false,-1);
    tracep->declBit(c+980,"io_enq_valid", false,-1);
    tracep->declBus(c+982,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+983,"io_deq_ready", false,-1);
    tracep->declBit(c+984,"io_deq_valid", false,-1);
    tracep->declBus(c+985,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+319,"wrap", false,-1);
    tracep->declBit(c+320,"wrap_1", false,-1);
    tracep->declBit(c+321,"maybe_full", false,-1);
    tracep->declBit(c+322,"ptr_match", false,-1);
    tracep->declBit(c+323,"empty", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+984,"io_deq_valid_0", false,-1);
    tracep->declBit(c+986,"do_deq", false,-1);
    tracep->declBit(c+987,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+320,"R0_addr", false,-1);
    tracep->declBit(c+1309,"R0_en", false,-1);
    tracep->declBit(c+1247,"R0_clk", false,-1);
    tracep->declBus(c+325,"R0_data", false,-1, 2,0);
    tracep->declBit(c+319,"W0_addr", false,-1);
    tracep->declBit(c+987,"W0_en", false,-1);
    tracep->declBit(c+1247,"W0_clk", false,-1);
    tracep->declBus(c+982,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+326+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+922,"auto_in_awready", false,-1);
    tracep->declBit(c+923,"auto_in_awvalid", false,-1);
    tracep->declBus(c+107,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+904,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+108,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+109,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+193,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+924,"auto_in_wready", false,-1);
    tracep->declBit(c+925,"auto_in_wvalid", false,-1);
    tracep->declBus(c+906,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+908,"auto_in_wlast", false,-1);
    tracep->declBit(c+926,"auto_in_bready", false,-1);
    tracep->declBit(c+194,"auto_in_bvalid", false,-1);
    tracep->declBus(c+185,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+196,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+927,"auto_in_arready", false,-1);
    tracep->declBit(c+928,"auto_in_arvalid", false,-1);
    tracep->declBus(c+910,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+911,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+912,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+913,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+929,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+815,"auto_in_rready", false,-1);
    tracep->declBit(c+188,"auto_in_rvalid", false,-1);
    tracep->declBus(c+189,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+197,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+198,"auto_in_rlast", false,-1);
    tracep->declBit(c+962,"auto_out_awready", false,-1);
    tracep->declBit(c+963,"auto_out_awvalid", false,-1);
    tracep->declBus(c+107,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+904,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+108,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+109,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+924,"auto_out_wready", false,-1);
    tracep->declBit(c+925,"auto_out_wvalid", false,-1);
    tracep->declBus(c+906,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+908,"auto_out_wlast", false,-1);
    tracep->declBit(c+926,"auto_out_bready", false,-1);
    tracep->declBit(c+194,"auto_out_bvalid", false,-1);
    tracep->declBus(c+185,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+964,"auto_out_arready", false,-1);
    tracep->declBit(c+965,"auto_out_arvalid", false,-1);
    tracep->declBus(c+910,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+911,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+912,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+913,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+815,"auto_out_rready", false,-1);
    tracep->declBit(c+188,"auto_out_rvalid", false,-1);
    tracep->declBus(c+189,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+198,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+988,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+508,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBit(c+330,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+330,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+331,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+989,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+509,"io_deq_ready", false,-1);
    tracep->declBit(c+333,"io_deq_valid", false,-1);
    tracep->declBit(c+334,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+333,"full", false,-1);
    tracep->declBit(c+334,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+335,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+990,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+510,"io_deq_ready", false,-1);
    tracep->declBit(c+337,"io_deq_valid", false,-1);
    tracep->declBit(c+338,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+338,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+340,"io_enq_ready", false,-1);
    tracep->declBit(c+991,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+511,"io_deq_ready", false,-1);
    tracep->declBit(c+341,"io_deq_valid", false,-1);
    tracep->declBit(c+342,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+341,"full", false,-1);
    tracep->declBit(c+342,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+343,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+344,"io_enq_ready", false,-1);
    tracep->declBit(c+992,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+512,"io_deq_ready", false,-1);
    tracep->declBit(c+345,"io_deq_valid", false,-1);
    tracep->declBit(c+346,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+345,"full", false,-1);
    tracep->declBit(c+346,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+347,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+993,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+513,"io_deq_ready", false,-1);
    tracep->declBit(c+349,"io_deq_valid", false,-1);
    tracep->declBit(c+350,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+349,"full", false,-1);
    tracep->declBit(c+350,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+351,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+994,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+514,"io_deq_ready", false,-1);
    tracep->declBit(c+353,"io_deq_valid", false,-1);
    tracep->declBit(c+354,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+353,"full", false,-1);
    tracep->declBit(c+354,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+995,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+515,"io_deq_ready", false,-1);
    tracep->declBit(c+357,"io_deq_valid", false,-1);
    tracep->declBit(c+358,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->declBit(c+358,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+359,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+360,"io_enq_ready", false,-1);
    tracep->declBit(c+516,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+517,"io_deq_ready", false,-1);
    tracep->declBit(c+361,"io_deq_valid", false,-1);
    tracep->declBit(c+362,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+361,"full", false,-1);
    tracep->declBit(c+362,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+363,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+518,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+519,"io_deq_ready", false,-1);
    tracep->declBit(c+365,"io_deq_valid", false,-1);
    tracep->declBit(c+366,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+365,"full", false,-1);
    tracep->declBit(c+366,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+367,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+520,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+521,"io_deq_ready", false,-1);
    tracep->declBit(c+369,"io_deq_valid", false,-1);
    tracep->declBit(c+370,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+369,"full", false,-1);
    tracep->declBit(c+370,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+371,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+522,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+523,"io_deq_ready", false,-1);
    tracep->declBit(c+373,"io_deq_valid", false,-1);
    tracep->declBit(c+374,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+373,"full", false,-1);
    tracep->declBit(c+374,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+375,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+996,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+524,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
    tracep->declBit(c+525,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+526,"io_deq_ready", false,-1);
    tracep->declBit(c+381,"io_deq_valid", false,-1);
    tracep->declBit(c+382,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+381,"full", false,-1);
    tracep->declBit(c+382,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+383,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+384,"io_enq_ready", false,-1);
    tracep->declBit(c+527,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+528,"io_deq_ready", false,-1);
    tracep->declBit(c+385,"io_deq_valid", false,-1);
    tracep->declBit(c+386,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->declBit(c+386,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+387,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+529,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+530,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBit(c+390,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+389,"full", false,-1);
    tracep->declBit(c+390,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+391,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+392,"io_enq_ready", false,-1);
    tracep->declBit(c+531,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+532,"io_deq_ready", false,-1);
    tracep->declBit(c+393,"io_deq_valid", false,-1);
    tracep->declBit(c+394,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+393,"full", false,-1);
    tracep->declBit(c+394,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+533,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+534,"io_deq_ready", false,-1);
    tracep->declBit(c+397,"io_deq_valid", false,-1);
    tracep->declBit(c+398,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+397,"full", false,-1);
    tracep->declBit(c+398,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+399,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+400,"io_enq_ready", false,-1);
    tracep->declBit(c+535,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+536,"io_deq_ready", false,-1);
    tracep->declBit(c+401,"io_deq_valid", false,-1);
    tracep->declBit(c+402,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+401,"full", false,-1);
    tracep->declBit(c+402,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+403,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+404,"io_enq_ready", false,-1);
    tracep->declBit(c+537,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+538,"io_deq_ready", false,-1);
    tracep->declBit(c+405,"io_deq_valid", false,-1);
    tracep->declBit(c+406,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+405,"full", false,-1);
    tracep->declBit(c+406,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+407,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+408,"io_enq_ready", false,-1);
    tracep->declBit(c+539,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+540,"io_deq_ready", false,-1);
    tracep->declBit(c+409,"io_deq_valid", false,-1);
    tracep->declBit(c+410,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+409,"full", false,-1);
    tracep->declBit(c+410,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+411,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+412,"io_enq_ready", false,-1);
    tracep->declBit(c+541,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+542,"io_deq_ready", false,-1);
    tracep->declBit(c+413,"io_deq_valid", false,-1);
    tracep->declBit(c+414,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+413,"full", false,-1);
    tracep->declBit(c+414,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+415,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+416,"io_enq_ready", false,-1);
    tracep->declBit(c+543,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+544,"io_deq_ready", false,-1);
    tracep->declBit(c+417,"io_deq_valid", false,-1);
    tracep->declBit(c+418,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+417,"full", false,-1);
    tracep->declBit(c+418,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+419,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+420,"io_enq_ready", false,-1);
    tracep->declBit(c+997,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+545,"io_deq_ready", false,-1);
    tracep->declBit(c+421,"io_deq_valid", false,-1);
    tracep->declBit(c+422,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+421,"full", false,-1);
    tracep->declBit(c+422,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+423,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+424,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+547,"io_deq_ready", false,-1);
    tracep->declBit(c+425,"io_deq_valid", false,-1);
    tracep->declBit(c+426,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+425,"full", false,-1);
    tracep->declBit(c+426,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+427,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+428,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+193,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+549,"io_deq_ready", false,-1);
    tracep->declBit(c+429,"io_deq_valid", false,-1);
    tracep->declBit(c+430,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+429,"full", false,-1);
    tracep->declBit(c+430,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+431,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+432,"io_enq_ready", false,-1);
    tracep->declBit(c+998,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+550,"io_deq_ready", false,-1);
    tracep->declBit(c+433,"io_deq_valid", false,-1);
    tracep->declBit(c+434,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+433,"full", false,-1);
    tracep->declBit(c+434,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+435,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+436,"io_enq_ready", false,-1);
    tracep->declBit(c+999,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+551,"io_deq_ready", false,-1);
    tracep->declBit(c+437,"io_deq_valid", false,-1);
    tracep->declBit(c+438,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+437,"full", false,-1);
    tracep->declBit(c+438,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+439,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+440,"io_enq_ready", false,-1);
    tracep->declBit(c+1000,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+552,"io_deq_ready", false,-1);
    tracep->declBit(c+441,"io_deq_valid", false,-1);
    tracep->declBit(c+442,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+441,"full", false,-1);
    tracep->declBit(c+442,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+443,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+444,"io_enq_ready", false,-1);
    tracep->declBit(c+1001,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+553,"io_deq_ready", false,-1);
    tracep->declBit(c+445,"io_deq_valid", false,-1);
    tracep->declBit(c+446,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+445,"full", false,-1);
    tracep->declBit(c+446,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+447,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+448,"io_enq_ready", false,-1);
    tracep->declBit(c+1002,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+554,"io_deq_ready", false,-1);
    tracep->declBit(c+449,"io_deq_valid", false,-1);
    tracep->declBit(c+450,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+449,"full", false,-1);
    tracep->declBit(c+450,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+451,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+452,"io_enq_ready", false,-1);
    tracep->declBit(c+1003,"io_enq_valid", false,-1);
    tracep->declBit(c+929,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+555,"io_deq_ready", false,-1);
    tracep->declBit(c+453,"io_deq_valid", false,-1);
    tracep->declBit(c+454,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+453,"full", false,-1);
    tracep->declBit(c+454,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+455,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1282,"reset", false,-1);
    tracep->declBit(c+182,"auto_master_out_awready", false,-1);
    tracep->declBit(c+805,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1310,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+806,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1311,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1313,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+183,"auto_master_out_wready", false,-1);
    tracep->declBit(c+807,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+808,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+809,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1280,"auto_master_out_bready", false,-1);
    tracep->declBit(c+184,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+185,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+186,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_master_out_arready", false,-1);
    tracep->declBit(c+810,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+811,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+921,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+812,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+813,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+814,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+815,"auto_master_out_rready", false,-1);
    tracep->declBit(c+188,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+189,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+192,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1282,"reset", false,-1);
    tracep->declBit(c+1299,"io_interrupt", false,-1);
    tracep->declBit(c+182,"io_master_awready", false,-1);
    tracep->declBit(c+805,"io_master_awvalid", false,-1);
    tracep->declBus(c+806,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1310,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1311,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1313,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+183,"io_master_wready", false,-1);
    tracep->declBit(c+807,"io_master_wvalid", false,-1);
    tracep->declBus(c+808,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+809,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"io_master_wlast", false,-1);
    tracep->declBit(c+1280,"io_master_bready", false,-1);
    tracep->declBit(c+184,"io_master_bvalid", false,-1);
    tracep->declBus(c+186,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+185,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+187,"io_master_arready", false,-1);
    tracep->declBit(c+810,"io_master_arvalid", false,-1);
    tracep->declBus(c+921,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+811,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+812,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+813,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+814,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+815,"io_master_rready", false,-1);
    tracep->declBit(c+188,"io_master_rvalid", false,-1);
    tracep->declBus(c+191,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+190,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+192,"io_master_rlast", false,-1);
    tracep->declBus(c+189,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1314,"io_slave_awready", false,-1);
    tracep->declBit(c+1299,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1315,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1310,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1311,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1313,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1316,"io_slave_wready", false,-1);
    tracep->declBit(c+1299,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1315,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1310,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"io_slave_wlast", false,-1);
    tracep->declBit(c+1299,"io_slave_bready", false,-1);
    tracep->declBit(c+1317,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1318,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1319,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1320,"io_slave_arready", false,-1);
    tracep->declBit(c+1299,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1315,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1310,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1311,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1312,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1313,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1299,"io_slave_rready", false,-1);
    tracep->declBit(c+1321,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1322,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1323,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1324,"io_slave_rlast", false,-1);
    tracep->declBus(c+1325,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+456,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1004,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+816,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+817,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+16,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+17,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1004,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+18,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+19,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+456,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+20,"ifu_arvalid", false,-1);
    tracep->declBit(c+1005,"ifu_arready", false,-1);
    tracep->declBus(c+1004,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1006,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1007,"ifu_rvalid", false,-1);
    tracep->declBit(c+21,"ifu_rready", false,-1);
    tracep->declBit(c+1326,"useless1", false,-1);
    tracep->declBit(c+1327,"useless2", false,-1);
    tracep->declBit(c+1328,"useless3", false,-1);
    tracep->declBit(c+1329,"useless4", false,-1);
    tracep->declBus(c+1008,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+818,"axi_arvalid", false,-1);
    tracep->declBit(c+1009,"axi_arready", false,-1);
    tracep->declBus(c+1010,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1011,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1012,"axi_rvalid", false,-1);
    tracep->declBit(c+819,"axi_rready", false,-1);
    tracep->declBus(c+806,"axi_awaddr", false,-1, 31,0);
    tracep->declBit(c+805,"axi_awvalid", false,-1);
    tracep->declBit(c+182,"axi_awready", false,-1);
    tracep->declBus(c+808,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+809,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+807,"axi_wvalid", false,-1);
    tracep->declBit(c+183,"axi_wready", false,-1);
    tracep->declBus(c+186,"axi_bresp", false,-1, 1,0);
    tracep->declBit(c+184,"axi_bvalid", false,-1);
    tracep->declBit(c+1280,"axi_bready", false,-1);
    tracep->declBus(c+1330,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1331,"sram_arvalid", false,-1);
    tracep->declBit(c+1332,"sram_arready", false,-1);
    tracep->declBus(c+1333,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1334,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+1335,"sram_rvalid", false,-1);
    tracep->declBit(c+1336,"sram_rready", false,-1);
    tracep->declBus(c+1337,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+1338,"sram_awvalid", false,-1);
    tracep->declBit(c+1339,"sram_awready", false,-1);
    tracep->declBus(c+1340,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1342,"sram_wvalid", false,-1);
    tracep->declBit(c+1343,"sram_wready", false,-1);
    tracep->declBus(c+1344,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1345,"sram_bvalid", false,-1);
    tracep->declBit(c+1346,"sram_bready", false,-1);
    tracep->declBus(c+1013,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+820,"clint_arvalid", false,-1);
    tracep->declBit(c+22,"clint_arready", false,-1);
    tracep->declBus(c+23,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+24,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+25,"clint_rvalid", false,-1);
    tracep->declBit(c+821,"clint_rready", false,-1);
    tracep->declBus(c+1347,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1348,"clint_awvalid", false,-1);
    tracep->declBit(c+26,"clint_awready", false,-1);
    tracep->declBus(c+1349,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1350,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"clint_wvalid", false,-1);
    tracep->declBit(c+27,"clint_wready", false,-1);
    tracep->declBus(c+28,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"clint_bvalid", false,-1);
    tracep->declBit(c+1352,"clint_bready", false,-1);
    tracep->declBus(c+1221,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1222,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1284,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1285,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1058,"a5", false,-1, 31,0);
    tracep->declBus(c+1223,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1284,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1285,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1224,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1286,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1225,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1226,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1227,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1228,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1229,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1230,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1231,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1232,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1233,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1234,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1235,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1236,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1237,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1238,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1239,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+30,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+822,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1240,"csr_write", false,-1);
    tracep->declBus(c+1241,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1059+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+823,"wdata", false,-1, 31,0);
    tracep->declBus(c+824,"waddr", false,-1, 4,0);
    tracep->declBit(c+825,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1063+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+826,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+827,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+828,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+829,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+830,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+831,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+832,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+833,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+834,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+835,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+836,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+837,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+838,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+839,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+840,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+841,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+842,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+843,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+844,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1014,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+845,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+846,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+847,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+848,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+849,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+850,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+851,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+852,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+853,"ready_lsu_to_wbu", false,-1);
    tracep->declBus(c+842,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+854,"lsu_arvalid", false,-1);
    tracep->declBit(c+1015,"lsu_arready", false,-1);
    tracep->declBus(c+1014,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1016,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1017,"lsu_rvalid", false,-1);
    tracep->declBit(c+855,"lsu_rready", false,-1);
    tracep->declBus(c+842,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+856,"lsu_awvalid", false,-1);
    tracep->declBit(c+1018,"lsu_awready", false,-1);
    tracep->declBus(c+857,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+858,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+859,"lsu_wvalid", false,-1);
    tracep->declBit(c+1019,"lsu_wready", false,-1);
    tracep->declBus(c+1020,"lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+1021,"lsu_bvalid", false,-1);
    tracep->declBit(c+860,"lsu_bready", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+456,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1310,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1311,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1312,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1313,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+20,"arvalid_i_a", false,-1);
    tracep->declBit(c+1005,"arready_o_a", false,-1);
    tracep->declBus(c+1004,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+1006,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+31,"rlast_o_a", false,-1);
    tracep->declBus(c+32,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+1007,"rvalid_o_a", false,-1);
    tracep->declBit(c+21,"rready_i_a", false,-1);
    tracep->declBus(c+1353,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1310,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1311,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1312,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1313,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1299,"awvalid_i_a", false,-1);
    tracep->declBit(c+1022,"awready_o_a", false,-1);
    tracep->declBus(c+1353,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1310,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1299,"wlast_i_a", false,-1);
    tracep->declBit(c+1299,"wvalid_i_a", false,-1);
    tracep->declBit(c+1023,"wready_o_a", false,-1);
    tracep->declBus(c+1024,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+33,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1025,"bvalid_o_a", false,-1);
    tracep->declBit(c+1299,"bready_i_a", false,-1);
    tracep->declBus(c+842,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1310,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1311,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1312,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1313,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+854,"arvalid_i_b", false,-1);
    tracep->declBit(c+1015,"arready_o_b", false,-1);
    tracep->declBus(c+1014,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+1016,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+34,"rlast_o_b", false,-1);
    tracep->declBus(c+35,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+1017,"rvalid_o_b", false,-1);
    tracep->declBit(c+855,"rready_i_b", false,-1);
    tracep->declBus(c+842,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1310,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1311,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1312,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1313,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+856,"awvalid_i_b", false,-1);
    tracep->declBit(c+1018,"awready_o_b", false,-1);
    tracep->declBus(c+857,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+858,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1299,"wlast_i_b", false,-1);
    tracep->declBit(c+859,"wvalid_i_b", false,-1);
    tracep->declBit(c+1019,"wready_o_b", false,-1);
    tracep->declBus(c+1020,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+36,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1021,"bvalid_o_b", false,-1);
    tracep->declBit(c+860,"bready_i_b", false,-1);
    tracep->declBus(c+1008,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1,"arid_o", false,-1, 3,0);
    tracep->declBus(c+2,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+3,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+4,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+818,"arvalid_o", false,-1);
    tracep->declBit(c+1009,"arready_i", false,-1);
    tracep->declBus(c+1010,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1011,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1299,"rlast_i", false,-1);
    tracep->declBus(c+1310,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1012,"rvalid_i", false,-1);
    tracep->declBit(c+819,"rready_o", false,-1);
    tracep->declBus(c+806,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+5,"awid_o", false,-1, 3,0);
    tracep->declBus(c+6,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+7,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+8,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+805,"awvalid_o", false,-1);
    tracep->declBit(c+182,"awready_i", false,-1);
    tracep->declBus(c+808,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+809,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+9,"wlast_o", false,-1);
    tracep->declBit(c+807,"wvalid_o", false,-1);
    tracep->declBit(c+183,"wready_i", false,-1);
    tracep->declBus(c+186,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1310,"bid_i", false,-1, 3,0);
    tracep->declBit(c+184,"bvalid_i", false,-1);
    tracep->declBit(c+1280,"bready_o", false,-1);
    tracep->declBit(c+37,"ar_switch", false,-1);
    tracep->declBit(c+38,"r_switch", false,-1);
    tracep->declBit(c+39,"aw_switch", false,-1);
    tracep->declBit(c+40,"w_switch", false,-1);
    tracep->declBit(c+41,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+1013,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+1310,"arid_i", false,-1, 3,0);
    tracep->declBus(c+1311,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+1312,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+1313,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+820,"arvalid_i", false,-1);
    tracep->declBit(c+22,"arready_o", false,-1);
    tracep->declBus(c+23,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+24,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+42,"rlast_o", false,-1);
    tracep->declBus(c+1310,"rid_o", false,-1, 3,0);
    tracep->declBit(c+25,"rvalid_o", false,-1);
    tracep->declBit(c+821,"rready_i", false,-1);
    tracep->declBus(c+1347,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1310,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1311,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1312,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1313,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1348,"awvalid_i", false,-1);
    tracep->declBit(c+26,"awready_o", false,-1);
    tracep->declBus(c+1349,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1350,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1299,"wlast_i", false,-1);
    tracep->declBit(c+1351,"wvalid_i", false,-1);
    tracep->declBit(c+27,"wready_o", false,-1);
    tracep->declBus(c+28,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1310,"bid_o", false,-1, 3,0);
    tracep->declBit(c+29,"bvalid_o", false,-1);
    tracep->declBit(c+1352,"bready_i", false,-1);
    tracep->declBit(c+43,"ar_state", false,-1);
    tracep->declBit(c+44,"r_state", false,-1);
    tracep->declBit(c+45,"aw_state", false,-1);
    tracep->declBit(c+46,"w_state", false,-1);
    tracep->declBit(c+1354,"b_state", false,-1);
    tracep->declBus(c+47,"araddr", false,-1, 31,0);
    tracep->declBus(c+48,"awaddr", false,-1, 31,0);
    tracep->declBus(c+49,"wdata", false,-1, 31,0);
    tracep->declBus(c+50,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1355,"wvalid", false,-1);
    tracep->declBit(c+51,"flag_waddr", false,-1);
    tracep->declBit(c+52,"flag_wdata", false,-1);
    tracep->declBit(c+53,"flag_rdata", false,-1);
    tracep->declBit(c+54,"flag_raddr", false,-1);
    tracep->declBit(c+1356,"flag_write", false,-1);
    tracep->declBus(c+55,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+56,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+57,"w_delay", false,-1, 4,0);
    tracep->declBus(c+58,"r_delay", false,-1, 4,0);
    tracep->declBus(c+59,"LFSR", false,-1, 4,0);
    tracep->declBit(c+60,"lfsr_in", false,-1);
    tracep->declBus(c+61,"write_box", false,-1, 1,0);
    tracep->declQuad(c+62,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+1223,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1284,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1285,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1224,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1286,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1225,"a_in_src_i", false,-1);
    tracep->declBus(c+1226,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1227,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1228,"adder_a_src_i", false,-1);
    tracep->declBit(c+1229,"adder_out_src_i", false,-1);
    tracep->declBus(c+1230,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1231,"MemRead_i", false,-1);
    tracep->declBit(c+1232,"MemWrite_i", false,-1);
    tracep->declBus(c+1233,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1234,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1235,"wb_src_i", false,-1);
    tracep->declBit(c+1236,"csr_write_i", false,-1);
    tracep->declBit(c+1237,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1238,"reg_write_i", false,-1);
    tracep->declBus(c+1239,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+30,"exu_valid_i", false,-1);
    tracep->declBit(c+822,"exu_ready_o", false,-1);
    tracep->declBus(c+826,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+827,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+828,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+829,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+830,"npc_o", false,-1, 31,0);
    tracep->declBit(c+831,"MemRead_o", false,-1);
    tracep->declBit(c+832,"MemWrite_o", false,-1);
    tracep->declBus(c+833,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+834,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+835,"wb_src_o", false,-1);
    tracep->declBit(c+836,"csr_write_o", false,-1);
    tracep->declBit(c+837,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+838,"reg_write_o", false,-1);
    tracep->declBus(c+839,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+840,"exu_valid_o", false,-1);
    tracep->declBit(c+841,"exu_ready_i", false,-1);
    tracep->declBus(c+861,"pc", false,-1, 31,0);
    tracep->declBus(c+827,"rs1", false,-1, 31,0);
    tracep->declBus(c+828,"rs2", false,-1, 31,0);
    tracep->declBus(c+862,"imm", false,-1, 31,0);
    tracep->declBus(c+863,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+864,"a_in_src", false,-1);
    tracep->declBus(c+865,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+866,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+867,"adder_a_src", false,-1);
    tracep->declBit(c+868,"adder_out_src", false,-1);
    tracep->declBus(c+869,"alu_op", false,-1, 3,0);
    tracep->declBus(c+870,"a_in", false,-1, 31,0);
    tracep->declBus(c+871,"b_in", false,-1, 31,0);
    tracep->declBus(c+872,"a_out", false,-1, 31,0);
    tracep->declBus(c+873,"add_out", false,-1, 31,0);
    tracep->declBus(c+874,"pc_new", false,-1, 31,0);
    tracep->declBus(c+826,"alu_result", false,-1, 31,0);
    tracep->declBus(c+830,"npc", false,-1, 31,0);
    tracep->declBit(c+875,"zero", false,-1);
    tracep->declBus(c+1313,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1357,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1358,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+876,"current_state", false,-1, 1,0);
    tracep->declBus(c+877,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+870,"a", false,-1, 31,0);
    tracep->declBus(c+871,"b", false,-1, 31,0);
    tracep->declBus(c+869,"op", false,-1, 3,0);
    tracep->declBus(c+826,"alu_result", false,-1, 31,0);
    tracep->declBit(c+875,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+827,"d0", false,-1, 31,0);
    tracep->declBus(c+861,"d1", false,-1, 31,0);
    tracep->declBit(c+864,"sel", false,-1);
    tracep->declBus(c+870,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+828,"d0", false,-1, 31,0);
    tracep->declBus(c+862,"d1", false,-1, 31,0);
    tracep->declBus(c+1360,"d2", false,-1, 31,0);
    tracep->declBus(c+863,"d3", false,-1, 31,0);
    tracep->declBus(c+865,"sel", false,-1, 1,0);
    tracep->declBus(c+871,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+872,"a", false,-1, 31,0);
    tracep->declBus(c+862,"b", false,-1, 31,0);
    tracep->declBus(c+873,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+861,"d0", false,-1, 31,0);
    tracep->declBus(c+827,"d1", false,-1, 31,0);
    tracep->declBit(c+867,"sel", false,-1);
    tracep->declBus(c+872,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+873,"d0", false,-1, 31,0);
    tracep->declBus(c+863,"d1", false,-1, 31,0);
    tracep->declBit(c+868,"sel", false,-1);
    tracep->declBus(c+874,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+878,"pc4", false,-1, 31,0);
    tracep->declBus(c+874,"pc_new", false,-1, 31,0);
    tracep->declBus(c+866,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+875,"zero", false,-1);
    tracep->declBus(c+826,"alu_result", false,-1, 31,0);
    tracep->declBus(c+830,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+1221,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1222,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1284,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1285,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1058,"a5", false,-1, 31,0);
    tracep->declBus(c+17,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1004,"inst_i", false,-1, 31,0);
    tracep->declBit(c+18,"idu_valid_i", false,-1);
    tracep->declBit(c+19,"idu_ready_o", false,-1);
    tracep->declBus(c+1223,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1284,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1285,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1224,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1286,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1225,"a_in_src_o", false,-1);
    tracep->declBus(c+1226,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1227,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1228,"adder_a_src_o", false,-1);
    tracep->declBit(c+1229,"adder_out_src_o", false,-1);
    tracep->declBus(c+1230,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1231,"MemRead_o", false,-1);
    tracep->declBit(c+1232,"MemWrite_o", false,-1);
    tracep->declBus(c+1233,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1234,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1235,"wb_src_o", false,-1);
    tracep->declBit(c+1236,"csr_write_o", false,-1);
    tracep->declBit(c+1237,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1238,"reg_write_o", false,-1);
    tracep->declBus(c+1239,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+30,"idu_valid_o", false,-1);
    tracep->declBit(c+822,"idu_ready_i", false,-1);
    tracep->declBit(c+1240,"csr_write_i", false,-1);
    tracep->declBus(c+1241,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1095+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1223,"pc", false,-1, 31,0);
    tracep->declBus(c+1242,"inst", false,-1, 31,0);
    tracep->declBus(c+1243,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1313,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1357,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1358,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+64,"current_state", false,-1, 1,0);
    tracep->declBus(c+879,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1242,"inst", false,-1, 31,0);
    tracep->declBus(c+1230,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1244,"opcode", false,-1, 6,0);
    tracep->declBus(c+1245,"funct3", false,-1, 2,0);
    tracep->declBus(c+1246,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1240,"wen", false,-1);
    tracep->declBus(c+1242,"inst", false,-1, 31,0);
    tracep->declBus(c+1241,"wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"NO", false,-1, 31,0);
    tracep->declBus(c+1223,"pc", false,-1, 31,0);
    tracep->declBus(c+1286,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1099+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1103,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1104,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1105,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1106,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1244,"opcode", false,-1, 6,0);
    tracep->declBus(c+1245,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1242,"inst", false,-1, 31,0);
    tracep->declBit(c+1225,"a_in_src", false,-1);
    tracep->declBus(c+1226,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1238,"reg_write", false,-1);
    tracep->declBus(c+1227,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1228,"adder_a_src", false,-1);
    tracep->declBit(c+1231,"MemRead", false,-1);
    tracep->declBit(c+1232,"MemWrite", false,-1);
    tracep->declBus(c+1243,"wmask", false,-1, 7,0);
    tracep->declBit(c+1235,"wb_src", false,-1);
    tracep->declBus(c+1234,"rmask", false,-1, 2,0);
    tracep->declBit(c+1236,"csr_write", false,-1);
    tracep->declBit(c+1229,"adder_out_src", false,-1);
    tracep->declBit(c+1237,"csr_wdata_src", false,-1);
    tracep->declBus(c+1244,"opcode", false,-1, 6,0);
    tracep->declBus(c+1245,"funct3", false,-1, 2,0);
    tracep->declBus(c+1246,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1359,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1242,"inst", false,-1, 31,0);
    tracep->declBus(c+1224,"data", false,-1, 31,0);
    tracep->declBus(c+1244,"opcode", false,-1, 6,0);
    tracep->declBus(c+1245,"funct3", false,-1, 2,0);
    tracep->declBus(c+1246,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+456,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1310,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1311,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1361,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1313,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+20,"arvalid_o", false,-1);
    tracep->declBit(c+1005,"arready_i", false,-1);
    tracep->declBus(c+1004,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1006,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1299,"rlast_i", false,-1);
    tracep->declBus(c+1310,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1007,"rvalid_i", false,-1);
    tracep->declBit(c+21,"rready_o", false,-1);
    tracep->declBus(c+816,"npc_i", false,-1, 31,0);
    tracep->declBit(c+817,"ifu_valid_i", false,-1);
    tracep->declBit(c+16,"ifu_ready_o", false,-1);
    tracep->declBus(c+17,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1004,"inst_o", false,-1, 31,0);
    tracep->declBit(c+18,"ifu_valid_o", false,-1);
    tracep->declBit(c+19,"ifu_ready_i", false,-1);
    tracep->declBus(c+456,"pc", false,-1, 31,0);
    tracep->declBus(c+880,"npc", false,-1, 31,0);
    tracep->declBus(c+1362,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1363,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1364,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1365,"lfsr_in", false,-1);
    tracep->declBit(c+20,"arvalid", false,-1);
    tracep->declBus(c+456,"araddr", false,-1, 31,0);
    tracep->declBit(c+21,"rready", false,-1);
    tracep->declBus(c+1366,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1367+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1399,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1312,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1298,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1361,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1400,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1401,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+65,"current_state", false,-1, 2,0);
    tracep->declBus(c+881,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1402,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+880,"din", false,-1, 31,0);
    tracep->declBus(c+456,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+826,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+827,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+828,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+829,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+830,"npc_i", false,-1, 31,0);
    tracep->declBit(c+831,"MemRead_i", false,-1);
    tracep->declBit(c+832,"MemWrite_i", false,-1);
    tracep->declBus(c+833,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+834,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+835,"wb_src_i", false,-1);
    tracep->declBit(c+836,"csr_write_i", false,-1);
    tracep->declBit(c+837,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+838,"reg_write_i", false,-1);
    tracep->declBus(c+839,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+840,"lsu_valid_i", false,-1);
    tracep->declBit(c+841,"lsu_ready_o", false,-1);
    tracep->declBus(c+842,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+843,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+844,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1014,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+845,"npc_o", false,-1, 31,0);
    tracep->declBus(c+846,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+847,"wb_src_o", false,-1);
    tracep->declBit(c+848,"csr_write_o", false,-1);
    tracep->declBit(c+849,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+850,"reg_write_o", false,-1);
    tracep->declBus(c+851,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+852,"lsu_valid_o", false,-1);
    tracep->declBit(c+853,"lsu_ready_i", false,-1);
    tracep->declBus(c+842,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1310,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1311,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1312,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1313,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+854,"arvalid_o", false,-1);
    tracep->declBit(c+1015,"arready_i", false,-1);
    tracep->declBus(c+1014,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1016,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1403,"rlast_i", false,-1);
    tracep->declBus(c+1404,"rid_i", false,-1, 3,0);
    tracep->declBit(c+1017,"rvalid_i", false,-1);
    tracep->declBit(c+855,"rready_o", false,-1);
    tracep->declBus(c+842,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1310,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1311,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1312,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1313,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+856,"awvalid_o", false,-1);
    tracep->declBit(c+1018,"awready_i", false,-1);
    tracep->declBus(c+857,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+858,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1309,"wlast_o", false,-1);
    tracep->declBit(c+859,"wvalid_o", false,-1);
    tracep->declBit(c+1019,"wready_i", false,-1);
    tracep->declBus(c+1020,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1310,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1021,"bvalid_i", false,-1);
    tracep->declBit(c+860,"bready_o", false,-1);
    tracep->declBus(c+842,"alu_result", false,-1, 31,0);
    tracep->declBus(c+843,"rs1", false,-1, 31,0);
    tracep->declBus(c+1405,"rs2", false,-1, 31,0);
    tracep->declBus(c+1406,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+846,"rmask", false,-1, 2,0);
    tracep->declBit(c+66,"flag", false,-1);
    tracep->declBit(c+1407,"wvalid_tmp", false,-1);
    tracep->declBus(c+1408,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1409,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1410,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1411,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1412,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1413,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1414,"lfsr_in", false,-1);
    tracep->declBit(c+854,"arvalid", false,-1);
    tracep->declBus(c+842,"araddr", false,-1, 31,0);
    tracep->declBit(c+855,"rready", false,-1);
    tracep->declBus(c+842,"awaddr", false,-1, 31,0);
    tracep->declBit(c+856,"awvalid", false,-1);
    tracep->declBus(c+857,"wdata", false,-1, 31,0);
    tracep->declBus(c+858,"wstrb", false,-1, 3,0);
    tracep->declBit(c+859,"wvalid", false,-1);
    tracep->declBit(c+860,"bready", false,-1);
    tracep->declBus(c+1415,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1416+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1448,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1449,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1450+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1482,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1483+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1515+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1547,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1313,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1357,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1358,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1548,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+882,"current_state", false,-1, 1,0);
    tracep->declBus(c+883,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1549,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1359,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBus(c+823,"wdata", false,-1, 31,0);
    tracep->declBus(c+824,"waddr", false,-1, 4,0);
    tracep->declBit(c+825,"wen", false,-1);
    tracep->declBus(c+1221,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1284,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1222,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1285,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1058,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1107+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1139+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+842,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+843,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+844,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1014,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+845,"npc_i", false,-1, 31,0);
    tracep->declBus(c+846,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+847,"wb_src_i", false,-1);
    tracep->declBit(c+848,"csr_write_i", false,-1);
    tracep->declBit(c+849,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+850,"reg_write_i", false,-1);
    tracep->declBus(c+851,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+852,"wbu_valid_i", false,-1);
    tracep->declBit(c+853,"wbu_ready_o", false,-1);
    tracep->declBus(c+816,"npc_o", false,-1, 31,0);
    tracep->declBit(c+817,"wbu_valid_o", false,-1);
    tracep->declBit(c+16,"wbu_ready_i", false,-1);
    tracep->declBus(c+1241,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+823,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1240,"csr_write_o", false,-1);
    tracep->declBit(c+825,"reg_write_o", false,-1);
    tracep->declBus(c+824,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+884,"mem_data", false,-1, 31,0);
    tracep->declBus(c+885,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+886,"alu_result", false,-1, 31,0);
    tracep->declBus(c+887,"rs1", false,-1, 31,0);
    tracep->declBus(c+888,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+889,"rmask", false,-1, 2,0);
    tracep->declBit(c+890,"wb_src", false,-1);
    tracep->declBit(c+891,"csr_wdata_src", false,-1);
    tracep->declBus(c+1313,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1357,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1358,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+892,"current_state", false,-1, 1,0);
    tracep->declBus(c+893,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+887,"d0", false,-1, 31,0);
    tracep->declBus(c+888,"d1", false,-1, 31,0);
    tracep->declBit(c+891,"sel", false,-1);
    tracep->declBus(c+1241,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+885,"read_data", false,-1, 31,0);
    tracep->declBus(c+894,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+889,"rmask", false,-1, 2,0);
    tracep->declBus(c+884,"mem_data", false,-1, 31,0);
    tracep->declBus(c+895,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+896,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+897,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+898,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+899,"byte3", false,-1, 31,0);
    tracep->declBus(c+900,"byte2", false,-1, 31,0);
    tracep->declBus(c+901,"byte1", false,-1, 31,0);
    tracep->declBus(c+902,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+886,"d0", false,-1, 31,0);
    tracep->declBus(c+884,"d1", false,-1, 31,0);
    tracep->declBit(c+890,"sel", false,-1);
    tracep->declBus(c+823,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1283,"rst_n", false,-1);
    tracep->declBus(c+1008,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1310,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1311,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1312,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1313,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+818,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1009,"axi_arready_o", false,-1);
    tracep->declBus(c+1010,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1011,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1287,"axi_rlast_o", false,-1);
    tracep->declBus(c+1026,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1012,"axi_rvalid_o", false,-1);
    tracep->declBit(c+819,"axi_rready_i", false,-1);
    tracep->declBus(c+806,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1310,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1311,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1312,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1313,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+805,"axi_awvalid_i", false,-1);
    tracep->declBit(c+182,"axi_awready_o", false,-1);
    tracep->declBus(c+808,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+809,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1299,"axi_wlast_i", false,-1);
    tracep->declBit(c+807,"axi_wvalid_i", false,-1);
    tracep->declBit(c+183,"axi_wready_o", false,-1);
    tracep->declBus(c+186,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+185,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+184,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1280,"axi_bready_i", false,-1);
    tracep->declBus(c+921,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+811,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+812,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+813,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+814,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+810,"sram_arvalid_o", false,-1);
    tracep->declBit(c+187,"sram_arready_i", false,-1);
    tracep->declBus(c+190,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+191,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+192,"sram_rlast_i", false,-1);
    tracep->declBus(c+189,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+188,"sram_rvalid_i", false,-1);
    tracep->declBit(c+815,"sram_rready_o", false,-1);
    tracep->declBus(c+806,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1310,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1311,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1312,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1313,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+805,"sram_awvalid_o", false,-1);
    tracep->declBit(c+182,"sram_awready_i", false,-1);
    tracep->declBus(c+808,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+809,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1299,"sram_wlast_o", false,-1);
    tracep->declBit(c+807,"sram_wvalid_o", false,-1);
    tracep->declBit(c+183,"sram_wready_i", false,-1);
    tracep->declBus(c+186,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+185,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+184,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1280,"sram_bready_o", false,-1);
    tracep->declBus(c+1013,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+67,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+68,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+69,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+70,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+820,"clint_arvalid_o", false,-1);
    tracep->declBit(c+22,"clint_arready_i", false,-1);
    tracep->declBus(c+23,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+24,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1299,"clint_rlast_i", false,-1);
    tracep->declBus(c+1310,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+25,"clint_rvalid_i", false,-1);
    tracep->declBit(c+821,"clint_rready_o", false,-1);
    tracep->declBus(c+1347,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1550,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1551,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1552,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1553,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1348,"clint_awvalid_o", false,-1);
    tracep->declBit(c+26,"clint_awready_i", false,-1);
    tracep->declBus(c+1349,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1350,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1554,"clint_wlast_o", false,-1);
    tracep->declBit(c+1351,"clint_wvalid_o", false,-1);
    tracep->declBit(c+27,"clint_wready_i", false,-1);
    tracep->declBus(c+28,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1310,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+29,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1352,"clint_bready_o", false,-1);
    tracep->declBit(c+71,"ar_switch", false,-1);
    tracep->declBit(c+72,"r_switch", false,-1);
    tracep->declBit(c+73,"aw_switch", false,-1);
    tracep->declBit(c+74,"w_switch", false,-1);
    tracep->declBit(c+75,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"io_d", false,-1);
    tracep->declBit(c+457,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"io_d", false,-1);
    tracep->declBit(c+457,"io_q", false,-1);
    tracep->declBit(c+457,"sync_0", false,-1);
    tracep->declBit(c+458,"sync_1", false,-1);
    tracep->declBit(c+459,"sync_2", false,-1);
    tracep->declBit(c+460,"sync_3", false,-1);
    tracep->declBit(c+461,"sync_4", false,-1);
    tracep->declBit(c+462,"sync_5", false,-1);
    tracep->declBit(c+463,"sync_6", false,-1);
    tracep->declBit(c+464,"sync_7", false,-1);
    tracep->declBit(c+465,"sync_8", false,-1);
    tracep->declBit(c+466,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+562,"auto_in_psel", false,-1);
    tracep->declBit(c+563,"auto_in_penable", false,-1);
    tracep->declBit(c+1037,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1042,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1298,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"auto_in_pready", false,-1);
    tracep->declBit(c+1307,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1308,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1249,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1250,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1251,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1252,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1253,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1254,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1255,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1256,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1257,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1258,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1171,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+562,"in_psel", false,-1);
    tracep->declBit(c+563,"in_penable", false,-1);
    tracep->declBus(c+1298,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"in_pready", false,-1);
    tracep->declBus(c+1308,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1307,"in_pslverr", false,-1);
    tracep->declBus(c+1249,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1250,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1251,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1252,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1253,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1254,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1255,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1256,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1257,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1258,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+560,"auto_in_psel", false,-1);
    tracep->declBit(c+561,"auto_in_penable", false,-1);
    tracep->declBit(c+1037,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1042,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1298,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1303,"auto_in_pready", false,-1);
    tracep->declBit(c+1304,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1305,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1259,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1260,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1171,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+560,"in_psel", false,-1);
    tracep->declBit(c+561,"in_penable", false,-1);
    tracep->declBus(c+1298,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1303,"in_pready", false,-1);
    tracep->declBus(c+1305,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1304,"in_pslverr", false,-1);
    tracep->declBit(c+1259,"ps2_clk", false,-1);
    tracep->declBit(c+1260,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+966,"auto_in_awvalid", false,-1);
    tracep->declBit(c+967,"auto_in_wvalid", false,-1);
    tracep->declBit(c+251,"auto_in_arready", false,-1);
    tracep->declBit(c+968,"auto_in_arvalid", false,-1);
    tracep->declBus(c+910,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+969,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1281,"auto_in_rready", false,-1);
    tracep->declBit(c+252,"auto_in_rvalid", false,-1);
    tracep->declBus(c+253,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+254,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+252,"state", false,-1);
    tracep->declBus(c+254,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+253,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1027,"raddr", false,-1, 31,0);
    tracep->declBit(c+1028,"ren", false,-1);
    tracep->declBus(c+1029,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+1043,"auto_in_psel", false,-1);
    tracep->declBit(c+564,"auto_in_penable", false,-1);
    tracep->declBit(c+1037,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1274,"auto_in_pready", false,-1);
    tracep->declBit(c+1299,"auto_in_pslverr", false,-1);
    tracep->declBus(c+78,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1271,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1272,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1200,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1036,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1043,"in_psel", false,-1);
    tracep->declBit(c+564,"in_penable", false,-1);
    tracep->declBus(c+1298,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1274,"in_pready", false,-1);
    tracep->declBus(c+78,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1299,"in_pslverr", false,-1);
    tracep->declBit(c+1271,"qspi_sck", false,-1);
    tracep->declBit(c+1272,"qspi_ce_n", false,-1);
    tracep->declBus(c+1200,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1200,"din", false,-1, 3,0);
    tracep->declBus(c+1207,"dout", false,-1, 3,0);
    tracep->declBus(c+1208,"douten", false,-1, 3,0);
    tracep->declBit(c+1288,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1247,"clk_i", false,-1);
    tracep->declBit(c+1248,"rst_i", false,-1);
    tracep->declBus(c+1036,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1038,"dat_i", false,-1, 31,0);
    tracep->declBus(c+78,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1039,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1043,"cyc_i", false,-1);
    tracep->declBit(c+1043,"stb_i", false,-1);
    tracep->declBit(c+1288,"ack_o", false,-1);
    tracep->declBit(c+1037,"we_i", false,-1);
    tracep->declBit(c+1271,"sck", false,-1);
    tracep->declBit(c+1272,"ce_n", false,-1);
    tracep->declBus(c+1200,"din", false,-1, 3,0);
    tracep->declBus(c+1207,"dout", false,-1, 3,0);
    tracep->declBus(c+1208,"douten", false,-1, 3,0);
    tracep->declBus(c+1555,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1556,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+581,"mr_sck", false,-1);
    tracep->declBit(c+582,"mr_ce_n", false,-1);
    tracep->declBus(c+1200,"mr_din", false,-1, 3,0);
    tracep->declBus(c+583,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+584,"mr_doe", false,-1);
    tracep->declBit(c+585,"mw_sck", false,-1);
    tracep->declBit(c+586,"mw_ce_n", false,-1);
    tracep->declBus(c+1200,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1209,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+587,"mw_doe", false,-1);
    tracep->declBit(c+1210,"mr_rd", false,-1);
    tracep->declBit(c+588,"mr_done", false,-1);
    tracep->declBit(c+1211,"mw_wr", false,-1);
    tracep->declBit(c+1212,"mw_done", false,-1);
    tracep->declBit(c+1043,"wb_valid", false,-1);
    tracep->declBit(c+1172,"wb_we", false,-1);
    tracep->declBit(c+1173,"wb_re", false,-1);
    tracep->declBit(c+589,"state", false,-1);
    tracep->declBit(c+1213,"nstate", false,-1);
    tracep->declBus(c+1174,"size", false,-1, 2,0);
    tracep->declBus(c+1175,"byte0", false,-1, 7,0);
    tracep->declBus(c+1176,"byte1", false,-1, 7,0);
    tracep->declBus(c+1177,"byte2", false,-1, 7,0);
    tracep->declBus(c+1178,"byte3", false,-1, 7,0);
    tracep->declBus(c+1179,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1289,"rst_n", false,-1);
    tracep->declBus(c+1180,"addr", false,-1, 23,0);
    tracep->declBit(c+1210,"rd", false,-1);
    tracep->declBus(c+1401,"size", false,-1, 2,0);
    tracep->declBit(c+588,"done", false,-1);
    tracep->declBus(c+78,"line", false,-1, 31,0);
    tracep->declBit(c+581,"sck", false,-1);
    tracep->declBit(c+582,"ce_n", false,-1);
    tracep->declBus(c+1200,"din", false,-1, 3,0);
    tracep->declBus(c+583,"dout", false,-1, 3,0);
    tracep->declBit(c+584,"douten", false,-1);
    tracep->declBus(c+1555,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1556,"READ", false,-1, 0,0);
    tracep->declBus(c+1557,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+590,"state", false,-1);
    tracep->declBit(c+1214,"nstate", false,-1);
    tracep->declBus(c+591,"counter", false,-1, 7,0);
    tracep->declBus(c+592,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+467+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1558,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+593,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1289,"rst_n", false,-1);
    tracep->declBus(c+1181,"addr", false,-1, 23,0);
    tracep->declBus(c+1179,"line", false,-1, 31,0);
    tracep->declBus(c+1174,"size", false,-1, 2,0);
    tracep->declBit(c+1211,"wr", false,-1);
    tracep->declBit(c+1212,"done", false,-1);
    tracep->declBit(c+585,"sck", false,-1);
    tracep->declBit(c+586,"ce_n", false,-1);
    tracep->declBus(c+1200,"din", false,-1, 3,0);
    tracep->declBus(c+1209,"dout", false,-1, 3,0);
    tracep->declBit(c+587,"douten", false,-1);
    tracep->declBus(c+1555,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1556,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1182,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+594,"state", false,-1);
    tracep->declBit(c+1215,"nstate", false,-1);
    tracep->declBus(c+595,"counter", false,-1, 7,0);
    tracep->declBus(c+596,"saddr", false,-1, 23,0);
    tracep->declBus(c+1559,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+556,"auto_in_psel", false,-1);
    tracep->declBit(c+557,"auto_in_penable", false,-1);
    tracep->declBit(c+1037,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1036,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+577,"auto_in_pready", false,-1);
    tracep->declBit(c+1299,"auto_in_pslverr", false,-1);
    tracep->declBus(c+578,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1273,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+568,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+569,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+570,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+571,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+572,"sdram_bundle_we", false,-1);
    tracep->declBus(c+573,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+574,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+575,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+576,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1036,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+556,"in_psel", false,-1);
    tracep->declBit(c+557,"in_penable", false,-1);
    tracep->declBus(c+1298,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+577,"in_pready", false,-1);
    tracep->declBus(c+578,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1299,"in_pslverr", false,-1);
    tracep->declBit(c+1273,"sdram_clk", false,-1);
    tracep->declBit(c+568,"sdram_cke", false,-1);
    tracep->declBit(c+569,"sdram_cs", false,-1);
    tracep->declBit(c+570,"sdram_ras", false,-1);
    tracep->declBit(c+571,"sdram_cas", false,-1);
    tracep->declBit(c+572,"sdram_we", false,-1);
    tracep->declBus(c+573,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+574,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+575,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+576,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+597,"sdram_dout_en", false,-1);
    tracep->declBus(c+598,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+471,"state", false,-1, 1,0);
    tracep->declBit(c+599,"req_accept", false,-1);
    tracep->declBit(c+1183,"is_read", false,-1);
    tracep->declBit(c+1184,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1247,"clk_i", false,-1);
    tracep->declBit(c+1248,"rst_i", false,-1);
    tracep->declBus(c+1185,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1183,"inport_rd_i", false,-1);
    tracep->declBus(c+1311,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1036,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1038,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+576,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+599,"inport_accept_o", false,-1);
    tracep->declBit(c+577,"inport_ack_o", false,-1);
    tracep->declBit(c+1299,"inport_error_o", false,-1);
    tracep->declBus(c+578,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1273,"sdram_clk_o", false,-1);
    tracep->declBit(c+568,"sdram_cke_o", false,-1);
    tracep->declBit(c+569,"sdram_cs_o", false,-1);
    tracep->declBit(c+570,"sdram_ras_o", false,-1);
    tracep->declBit(c+571,"sdram_cas_o", false,-1);
    tracep->declBit(c+572,"sdram_we_o", false,-1);
    tracep->declBus(c+575,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+573,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+574,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+598,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+597,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1560,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1561,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1562,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1563,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1563,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1563,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1564,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1565,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1566,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1567,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1568,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1564,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1569,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1570,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1571,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1572,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1573,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1574,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1575,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1310,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1576,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1564,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1310,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1575,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1574,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1570,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1572,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1571,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1573,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1569,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1577,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1578,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1579,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1579,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1580,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1579,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1563,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1563,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1581,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1036,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1185,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1183,"ram_rd_w", false,-1);
    tracep->declBit(c+599,"ram_accept_w", false,-1);
    tracep->declBus(c+1038,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+578,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+577,"ram_ack_w", false,-1);
    tracep->declBit(c+1186,"ram_req_w", false,-1);
    tracep->declBus(c+600,"command_q", false,-1, 3,0);
    tracep->declBus(c+573,"addr_q", false,-1, 12,0);
    tracep->declBus(c+598,"data_q", false,-1, 15,0);
    tracep->declBit(c+601,"data_rd_en_q", false,-1);
    tracep->declBus(c+575,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+568,"cke_q", false,-1);
    tracep->declBus(c+574,"bank_q", false,-1, 1,0);
    tracep->declBus(c+602,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+603,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+576,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+604,"refresh_q", false,-1);
    tracep->declBus(c+605,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+606+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+610,"state_q", false,-1, 3,0);
    tracep->declBus(c+1216,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1217,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+611,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+612,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1187,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1188,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1189,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1564,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+613,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1218,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1582,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+614,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+615,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+616,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+617,"idx", false,-1, 31,0);
    tracep->declBus(c+618,"rd_q", false,-1, 3,0);
    tracep->declBit(c+577,"ack_q", false,-1);
    tracep->declArray(c+619,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+1047,"auto_in_psel", false,-1);
    tracep->declBit(c+1048,"auto_in_penable", false,-1);
    tracep->declBit(c+1037,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1041,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1298,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+579,"auto_in_pready", false,-1);
    tracep->declBit(c+1299,"auto_in_pslverr", false,-1);
    tracep->declBus(c+580,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+566,"spi_bundle_sck", false,-1);
    tracep->declBus(c+567,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1269,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1270,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1583,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1584,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1585,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1190,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1047,"in_psel", false,-1);
    tracep->declBit(c+1048,"in_penable", false,-1);
    tracep->declBus(c+1298,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+579,"in_pready", false,-1);
    tracep->declBus(c+580,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1299,"in_pslverr", false,-1);
    tracep->declBit(c+566,"spi_sck", false,-1);
    tracep->declBus(c+567,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1269,"spi_mosi", false,-1);
    tracep->declBit(c+1270,"spi_miso", false,-1);
    tracep->declBit(c+622,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1586,"Tp", false,-1, 31,0);
    tracep->declBit(c+1247,"wb_clk_i", false,-1);
    tracep->declBit(c+1248,"wb_rst_i", false,-1);
    tracep->declBus(c+1191,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1038,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+580,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1039,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1037,"wb_we_i", false,-1);
    tracep->declBit(c+1047,"wb_stb_i", false,-1);
    tracep->declBit(c+1048,"wb_cyc_i", false,-1);
    tracep->declBit(c+579,"wb_ack_o", false,-1);
    tracep->declBit(c+1299,"wb_err_o", false,-1);
    tracep->declBit(c+622,"wb_int_o", false,-1);
    tracep->declBus(c+567,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+566,"sclk_pad_o", false,-1);
    tracep->declBit(c+1269,"mosi_pad_o", false,-1);
    tracep->declBit(c+1270,"miso_pad_i", false,-1);
    tracep->declBus(c+623,"divider", false,-1, 15,0);
    tracep->declBus(c+624,"ctrl", false,-1, 13,0);
    tracep->declBus(c+625,"ss", false,-1, 7,0);
    tracep->declBus(c+1219,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+626,"rx", false,-1, 127,0);
    tracep->declBit(c+630,"rx_negedge", false,-1);
    tracep->declBit(c+631,"tx_negedge", false,-1);
    tracep->declBus(c+632,"char_len", false,-1, 6,0);
    tracep->declBit(c+633,"go", false,-1);
    tracep->declBit(c+634,"lsb", false,-1);
    tracep->declBit(c+635,"ie", false,-1);
    tracep->declBit(c+636,"ass", false,-1);
    tracep->declBit(c+1192,"spi_divider_sel", false,-1);
    tracep->declBit(c+1193,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1194,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1195,"spi_ss_sel", false,-1);
    tracep->declBit(c+637,"tip", false,-1);
    tracep->declBit(c+638,"pos_edge", false,-1);
    tracep->declBit(c+639,"neg_edge", false,-1);
    tracep->declBit(c+640,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1586,"Tp", false,-1, 31,0);
    tracep->declBit(c+1247,"clk_in", false,-1);
    tracep->declBit(c+1248,"rst", false,-1);
    tracep->declBit(c+637,"enable", false,-1);
    tracep->declBit(c+633,"go", false,-1);
    tracep->declBit(c+640,"last_clk", false,-1);
    tracep->declBus(c+623,"divider", false,-1, 15,0);
    tracep->declBit(c+566,"clk_out", false,-1);
    tracep->declBit(c+638,"pos_edge", false,-1);
    tracep->declBit(c+639,"neg_edge", false,-1);
    tracep->declBus(c+641,"cnt", false,-1, 15,0);
    tracep->declBit(c+642,"cnt_zero", false,-1);
    tracep->declBit(c+643,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1586,"Tp", false,-1, 31,0);
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1248,"rst", false,-1);
    tracep->declBus(c+1196,"latch", false,-1, 3,0);
    tracep->declBus(c+1039,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+632,"len", false,-1, 6,0);
    tracep->declBit(c+634,"lsb", false,-1);
    tracep->declBit(c+633,"go", false,-1);
    tracep->declBit(c+638,"pos_edge", false,-1);
    tracep->declBit(c+639,"neg_edge", false,-1);
    tracep->declBit(c+630,"rx_negedge", false,-1);
    tracep->declBit(c+631,"tx_negedge", false,-1);
    tracep->declBit(c+637,"tip", false,-1);
    tracep->declBit(c+640,"last", false,-1);
    tracep->declBus(c+1038,"p_in", false,-1, 31,0);
    tracep->declArray(c+626,"p_out", false,-1, 127,0);
    tracep->declBit(c+566,"s_clk", false,-1);
    tracep->declBit(c+1270,"s_in", false,-1);
    tracep->declBit(c+1269,"s_out", false,-1);
    tracep->declBus(c+644,"cnt", false,-1, 7,0);
    tracep->declArray(c+626,"data", false,-1, 127,0);
    tracep->declBus(c+645,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+646,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+647,"rx_clk", false,-1);
    tracep->declBit(c+648,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+1044,"auto_in_psel", false,-1);
    tracep->declBit(c+1045,"auto_in_penable", false,-1);
    tracep->declBit(c+1037,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1042,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1298,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1046,"auto_in_pready", false,-1);
    tracep->declBit(c+1299,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1275,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1267,"uart_rx", false,-1);
    tracep->declBit(c+1268,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1044,"in_psel", false,-1);
    tracep->declBit(c+1045,"in_penable", false,-1);
    tracep->declBus(c+1298,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1046,"in_pready", false,-1);
    tracep->declBit(c+1299,"in_pslverr", false,-1);
    tracep->declBus(c+1171,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1275,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1267,"uart_rx", false,-1);
    tracep->declBit(c+1268,"uart_tx", false,-1);
    tracep->declBit(c+649,"rtsn", false,-1);
    tracep->declBit(c+1299,"ctsn", false,-1);
    tracep->declBit(c+650,"dtr_pad_o", false,-1);
    tracep->declBit(c+1299,"dsr_pad_i", false,-1);
    tracep->declBit(c+1299,"ri_pad_i", false,-1);
    tracep->declBit(c+1299,"dcd_pad_i", false,-1);
    tracep->declBit(c+651,"interrupt", false,-1);
    tracep->declBit(c+1290,"reg_we", false,-1);
    tracep->declBit(c+1291,"reg_re", false,-1);
    tracep->declBus(c+1197,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1198,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+472,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1220,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+652,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1248,"wb_rst_i", false,-1);
    tracep->declBus(c+1197,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1199,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1220,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1290,"wb_we_i", false,-1);
    tracep->declBit(c+1291,"wb_re_i", false,-1);
    tracep->declBit(c+1268,"stx_pad_o", false,-1);
    tracep->declBit(c+1267,"srx_pad_i", false,-1);
    tracep->declBus(c+1577,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+652,"rts_pad_o", false,-1);
    tracep->declBit(c+650,"dtr_pad_o", false,-1);
    tracep->declBit(c+651,"int_o", false,-1);
    tracep->declBit(c+653,"enable", false,-1);
    tracep->declBit(c+654,"srx_pad", false,-1);
    tracep->declBus(c+655,"ier", false,-1, 3,0);
    tracep->declBus(c+656,"iir", false,-1, 3,0);
    tracep->declBus(c+657,"fcr", false,-1, 1,0);
    tracep->declBus(c+658,"mcr", false,-1, 4,0);
    tracep->declBus(c+659,"lcr", false,-1, 7,0);
    tracep->declBus(c+660,"msr", false,-1, 7,0);
    tracep->declBus(c+661,"dl", false,-1, 15,0);
    tracep->declBus(c+662,"scratch", false,-1, 7,0);
    tracep->declBit(c+663,"start_dlc", false,-1);
    tracep->declBit(c+664,"lsr_mask_d", false,-1);
    tracep->declBit(c+665,"msi_reset", false,-1);
    tracep->declBus(c+666,"dlc", false,-1, 15,0);
    tracep->declBus(c+667,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+668,"rx_reset", false,-1);
    tracep->declBit(c+669,"tx_reset", false,-1);
    tracep->declBit(c+670,"dlab", false,-1);
    tracep->declBit(c+1309,"cts_pad_i", false,-1);
    tracep->declBit(c+1299,"dsr_pad_i", false,-1);
    tracep->declBit(c+1299,"ri_pad_i", false,-1);
    tracep->declBit(c+1299,"dcd_pad_i", false,-1);
    tracep->declBit(c+671,"loopback", false,-1);
    tracep->declBit(c+1299,"cts", false,-1);
    tracep->declBit(c+1309,"dsr", false,-1);
    tracep->declBit(c+1309,"ri", false,-1);
    tracep->declBit(c+1309,"dcd", false,-1);
    tracep->declBit(c+672,"cts_c", false,-1);
    tracep->declBit(c+673,"dsr_c", false,-1);
    tracep->declBit(c+674,"ri_c", false,-1);
    tracep->declBit(c+675,"dcd_c", false,-1);
    tracep->declBus(c+676,"lsr", false,-1, 7,0);
    tracep->declBit(c+677,"lsr0", false,-1);
    tracep->declBit(c+678,"lsr1", false,-1);
    tracep->declBit(c+679,"lsr2", false,-1);
    tracep->declBit(c+680,"lsr3", false,-1);
    tracep->declBit(c+681,"lsr4", false,-1);
    tracep->declBit(c+682,"lsr5", false,-1);
    tracep->declBit(c+683,"lsr6", false,-1);
    tracep->declBit(c+684,"lsr7", false,-1);
    tracep->declBit(c+685,"lsr0r", false,-1);
    tracep->declBit(c+686,"lsr1r", false,-1);
    tracep->declBit(c+687,"lsr2r", false,-1);
    tracep->declBit(c+688,"lsr3r", false,-1);
    tracep->declBit(c+689,"lsr4r", false,-1);
    tracep->declBit(c+690,"lsr5r", false,-1);
    tracep->declBit(c+691,"lsr6r", false,-1);
    tracep->declBit(c+692,"lsr7r", false,-1);
    tracep->declBit(c+10,"lsr_mask", false,-1);
    tracep->declBit(c+693,"rls_int", false,-1);
    tracep->declBit(c+694,"rda_int", false,-1);
    tracep->declBit(c+695,"ti_int", false,-1);
    tracep->declBit(c+696,"thre_int", false,-1);
    tracep->declBit(c+697,"ms_int", false,-1);
    tracep->declBit(c+698,"tf_push", false,-1);
    tracep->declBit(c+699,"rf_pop", false,-1);
    tracep->declBus(c+1292,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+700,"rf_error_bit", false,-1);
    tracep->declBit(c+678,"rf_overrun", false,-1);
    tracep->declBit(c+701,"rf_push_pulse", false,-1);
    tracep->declBus(c+702,"rf_count", false,-1, 4,0);
    tracep->declBus(c+703,"tf_count", false,-1, 4,0);
    tracep->declBus(c+704,"tstate", false,-1, 2,0);
    tracep->declBus(c+705,"rstate", false,-1, 3,0);
    tracep->declBus(c+706,"counter_t", false,-1, 9,0);
    tracep->declBit(c+707,"thre_set_en", false,-1);
    tracep->declBus(c+708,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+709,"block_value", false,-1, 7,0);
    tracep->declBit(c+710,"serial_out", false,-1);
    tracep->declBit(c+711,"serial_in", false,-1);
    tracep->declBit(c+11,"lsr_mask_condition", false,-1);
    tracep->declBit(c+12,"iir_read", false,-1);
    tracep->declBit(c+13,"msr_read", false,-1);
    tracep->declBit(c+14,"fifo_read", false,-1);
    tracep->declBit(c+15,"fifo_write", false,-1);
    tracep->declBus(c+712,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+713,"lsr0_d", false,-1);
    tracep->declBit(c+714,"lsr1_d", false,-1);
    tracep->declBit(c+715,"lsr2_d", false,-1);
    tracep->declBit(c+716,"lsr3_d", false,-1);
    tracep->declBit(c+717,"lsr4_d", false,-1);
    tracep->declBit(c+718,"lsr5_d", false,-1);
    tracep->declBit(c+719,"lsr6_d", false,-1);
    tracep->declBit(c+720,"lsr7_d", false,-1);
    tracep->declBit(c+721,"rls_int_d", false,-1);
    tracep->declBit(c+722,"thre_int_d", false,-1);
    tracep->declBit(c+723,"ms_int_d", false,-1);
    tracep->declBit(c+724,"ti_int_d", false,-1);
    tracep->declBit(c+725,"rda_int_d", false,-1);
    tracep->declBit(c+726,"rls_int_rise", false,-1);
    tracep->declBit(c+727,"thre_int_rise", false,-1);
    tracep->declBit(c+728,"ms_int_rise", false,-1);
    tracep->declBit(c+729,"ti_int_rise", false,-1);
    tracep->declBit(c+730,"rda_int_rise", false,-1);
    tracep->declBit(c+731,"rls_int_pnd", false,-1);
    tracep->declBit(c+732,"rda_int_pnd", false,-1);
    tracep->declBit(c+733,"thre_int_pnd", false,-1);
    tracep->declBit(c+734,"ms_int_pnd", false,-1);
    tracep->declBit(c+735,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1586,"Tp", false,-1, 31,0);
    tracep->declBus(c+1586,"width", false,-1, 31,0);
    tracep->declBus(c+1556,"init_value", false,-1, 0,0);
    tracep->declBit(c+1248,"rst_i", false,-1);
    tracep->declBit(c+1247,"clk_i", false,-1);
    tracep->declBit(c+1299,"stage1_rst_i", false,-1);
    tracep->declBit(c+1309,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1267,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+654,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+736,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1248,"wb_rst_i", false,-1);
    tracep->declBus(c+659,"lcr", false,-1, 7,0);
    tracep->declBit(c+699,"rf_pop", false,-1);
    tracep->declBit(c+711,"srx_pad_i", false,-1);
    tracep->declBit(c+653,"enable", false,-1);
    tracep->declBit(c+668,"rx_reset", false,-1);
    tracep->declBit(c+10,"lsr_mask", false,-1);
    tracep->declBus(c+706,"counter_t", false,-1, 9,0);
    tracep->declBus(c+702,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1292,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+678,"rf_overrun", false,-1);
    tracep->declBit(c+700,"rf_error_bit", false,-1);
    tracep->declBus(c+705,"rstate", false,-1, 3,0);
    tracep->declBit(c+701,"rf_push_pulse", false,-1);
    tracep->declBus(c+737,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+738,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+739,"rshift", false,-1, 7,0);
    tracep->declBit(c+740,"rparity", false,-1);
    tracep->declBit(c+741,"rparity_error", false,-1);
    tracep->declBit(c+742,"rframing_error", false,-1);
    tracep->declBit(c+743,"rbit_in", false,-1);
    tracep->declBit(c+744,"rparity_xor", false,-1);
    tracep->declBus(c+745,"counter_b", false,-1, 7,0);
    tracep->declBit(c+746,"rf_push_q", false,-1);
    tracep->declBus(c+747,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+748,"rf_push", false,-1);
    tracep->declBit(c+749,"break_error", false,-1);
    tracep->declBit(c+750,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+751,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+752,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+753,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1310,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1575,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1574,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1570,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1572,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1571,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1573,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1569,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1577,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1578,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1587,"sr_push", false,-1, 3,0);
    tracep->declBus(c+754,"toc_value", false,-1, 9,0);
    tracep->declBus(c+755,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1588,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1580,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1564,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1549,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1248,"wb_rst_i", false,-1);
    tracep->declBit(c+701,"push", false,-1);
    tracep->declBit(c+699,"pop", false,-1);
    tracep->declBus(c+747,"data_in", false,-1, 10,0);
    tracep->declBit(c+668,"fifo_reset", false,-1);
    tracep->declBit(c+10,"reset_status", false,-1);
    tracep->declBus(c+1292,"data_out", false,-1, 10,0);
    tracep->declBit(c+678,"overrun", false,-1);
    tracep->declBus(c+702,"count", false,-1, 4,0);
    tracep->declBit(c+700,"error_bit", false,-1);
    tracep->declBus(c+1293,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+756+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+772,"top", false,-1, 3,0);
    tracep->declBus(c+773,"bottom", false,-1, 3,0);
    tracep->declBus(c+774,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+775,"word0", false,-1, 2,0);
    tracep->declBus(c+776,"word1", false,-1, 2,0);
    tracep->declBus(c+777,"word2", false,-1, 2,0);
    tracep->declBus(c+778,"word3", false,-1, 2,0);
    tracep->declBus(c+779,"word4", false,-1, 2,0);
    tracep->declBus(c+780,"word5", false,-1, 2,0);
    tracep->declBus(c+781,"word6", false,-1, 2,0);
    tracep->declBus(c+782,"word7", false,-1, 2,0);
    tracep->declBus(c+783,"word8", false,-1, 2,0);
    tracep->declBus(c+784,"word9", false,-1, 2,0);
    tracep->declBus(c+785,"word10", false,-1, 2,0);
    tracep->declBus(c+786,"word11", false,-1, 2,0);
    tracep->declBus(c+787,"word12", false,-1, 2,0);
    tracep->declBus(c+788,"word13", false,-1, 2,0);
    tracep->declBus(c+789,"word14", false,-1, 2,0);
    tracep->declBus(c+790,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1564,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1585,"data_width", false,-1, 31,0);
    tracep->declBus(c+1580,"depth", false,-1, 31,0);
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+701,"we", false,-1);
    tracep->declBus(c+772,"a", false,-1, 3,0);
    tracep->declBus(c+773,"dpra", false,-1, 3,0);
    tracep->declBus(c+791,"di", false,-1, 7,0);
    tracep->declBus(c+1293,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+473+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1248,"wb_rst_i", false,-1);
    tracep->declBus(c+659,"lcr", false,-1, 7,0);
    tracep->declBit(c+698,"tf_push", false,-1);
    tracep->declBus(c+1199,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+653,"enable", false,-1);
    tracep->declBit(c+669,"tx_reset", false,-1);
    tracep->declBit(c+10,"lsr_mask", false,-1);
    tracep->declBit(c+710,"stx_pad_o", false,-1);
    tracep->declBus(c+704,"tstate", false,-1, 2,0);
    tracep->declBus(c+703,"tf_count", false,-1, 4,0);
    tracep->declBus(c+792,"counter", false,-1, 4,0);
    tracep->declBus(c+793,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+794,"shift_out", false,-1, 6,0);
    tracep->declBit(c+795,"stx_o_tmp", false,-1);
    tracep->declBit(c+796,"parity_xor", false,-1);
    tracep->declBit(c+797,"tf_pop", false,-1);
    tracep->declBit(c+798,"bit_out", false,-1);
    tracep->declBus(c+1199,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1294,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+799,"tf_overrun", false,-1);
    tracep->declBus(c+1312,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1298,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1361,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1400,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1401,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1589,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1585,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1580,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1564,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1549,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+1248,"wb_rst_i", false,-1);
    tracep->declBit(c+698,"push", false,-1);
    tracep->declBit(c+797,"pop", false,-1);
    tracep->declBus(c+1199,"data_in", false,-1, 7,0);
    tracep->declBit(c+669,"fifo_reset", false,-1);
    tracep->declBit(c+10,"reset_status", false,-1);
    tracep->declBus(c+1294,"data_out", false,-1, 7,0);
    tracep->declBit(c+799,"overrun", false,-1);
    tracep->declBus(c+703,"count", false,-1, 4,0);
    tracep->declBus(c+800,"top", false,-1, 3,0);
    tracep->declBus(c+801,"bottom", false,-1, 3,0);
    tracep->declBus(c+802,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1564,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1585,"data_width", false,-1, 31,0);
    tracep->declBus(c+1580,"depth", false,-1, 31,0);
    tracep->declBit(c+1247,"clk", false,-1);
    tracep->declBit(c+698,"we", false,-1);
    tracep->declBus(c+800,"a", false,-1, 3,0);
    tracep->declBus(c+801,"dpra", false,-1, 3,0);
    tracep->declBus(c+1199,"di", false,-1, 7,0);
    tracep->declBus(c+1294,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+489+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBit(c+558,"auto_in_psel", false,-1);
    tracep->declBit(c+559,"auto_in_penable", false,-1);
    tracep->declBit(c+1037,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1041,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1298,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1038,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"auto_in_pready", false,-1);
    tracep->declBit(c+1301,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1302,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1261,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1262,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1263,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1264,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1265,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1266,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1247,"clock", false,-1);
    tracep->declBit(c+1248,"reset", false,-1);
    tracep->declBus(c+1190,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+558,"in_psel", false,-1);
    tracep->declBit(c+559,"in_penable", false,-1);
    tracep->declBus(c+1298,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"in_pready", false,-1);
    tracep->declBus(c+1302,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1301,"in_pslverr", false,-1);
    tracep->declBus(c+1261,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1262,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1263,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1264,"vga_hsync", false,-1);
    tracep->declBit(c+1265,"vga_vsync", false,-1);
    tracep->declBit(c+1266,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+566,"sck", false,-1);
    tracep->declBit(c+803,"ss", false,-1);
    tracep->declBit(c+1269,"mosi", false,-1);
    tracep->declBit(c+1309,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+566,"sck", false,-1);
    tracep->declBit(c+804,"ss", false,-1);
    tracep->declBit(c+1269,"mosi", false,-1);
    tracep->declBit(c+1270,"miso", false,-1);
    tracep->declBit(c+804,"reset", false,-1);
    tracep->declBus(c+1030,"state", false,-1, 2,0);
    tracep->declBus(c+1031,"counter", false,-1, 7,0);
    tracep->declBus(c+1032,"cmd", false,-1, 7,0);
    tracep->declBus(c+1033,"addr", false,-1, 23,0);
    tracep->declBus(c+1034,"data", false,-1, 31,0);
    tracep->declBit(c+1035,"ren", false,-1);
    tracep->declBus(c+1295,"rdata", false,-1, 31,0);
    tracep->declBus(c+1296,"raddr", false,-1, 31,0);
    tracep->declBus(c+1297,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+566,"clock", false,-1);
    tracep->declBit(c+1035,"valid", false,-1);
    tracep->declBus(c+1032,"cmd", false,-1, 7,0);
    tracep->declBus(c+1296,"addr", false,-1, 31,0);
    tracep->declBus(c+1295,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1271,"sck", false,-1);
    tracep->declBit(c+1272,"ce_n", false,-1);
    tracep->declBus(c+1200,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1273,"clk", false,-1);
    tracep->declBit(c+568,"cke", false,-1);
    tracep->declBit(c+569,"cs", false,-1);
    tracep->declBit(c+570,"ras", false,-1);
    tracep->declBit(c+571,"cas", false,-1);
    tracep->declBit(c+572,"we", false,-1);
    tracep->declBus(c+573,"a", false,-1, 12,0);
    tracep->declBus(c+574,"ba", false,-1, 1,0);
    tracep->declBus(c+575,"dqm", false,-1, 1,0);
    tracep->declBus(c+576,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
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
    bufp->fullCData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arid_o),4);
    bufp->fullCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arlen_o),8);
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arsize_o),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arburst_o),2);
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awid_o),4);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awlen_o),8);
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awsize_o),3);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awburst_o),2);
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wlast_o));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__rlast_o_a));
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__rid_o_a),4);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__rlast_o_b));
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__rid_o_b),4);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_b),4);
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rlast_o));
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+60,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_arid_o),4);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_arlen_o),8);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_arsize_o),3);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_arburst_o),2);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__b_switch));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+77,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+78,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+80,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+81,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+82,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+83,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+84,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+85,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+86,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+87,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+88,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+91,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+92,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+93,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+94,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+95,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+96,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+106,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+110,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+111,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+112,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+113,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+114,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+115,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+116,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+117,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+118,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+119,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+182,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o),4);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+190,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+191,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+192,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+193,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+197,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+199,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram))));
    bufp->fullQData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+241,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+255,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+256,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+257,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)))),16);
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+318,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+340,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+400,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+404,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+408,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+412,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+416,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+420,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+424,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+428,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+432,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+436,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+444,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+452,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+506,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+508,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+509,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+510,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+511,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+512,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+513,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+514,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+515,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+517,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)))));
    bufp->fullBit(oldp+518,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+519,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+520,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+521,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+522,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+523,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+524,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+525,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+526,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+527,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+528,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+529,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+530,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+531,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+532,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+533,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+534,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+535,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+536,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+537,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+538,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+539,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+540,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+541,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+542,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+543,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+544,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+545,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+546,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+547,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+548,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_bid_o)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+550,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+551,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+552,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+553,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+554,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+555,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+557,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+565,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+569,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+570,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+571,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+572,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+576,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+578,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+583,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
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
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+584,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+587,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+588,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+593,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+597,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+599,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+630,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+631,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+632,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+633,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+634,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+635,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+636,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+640,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+642,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+643,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+645,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+649,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+650,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+652,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+670,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+671,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+672,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+673,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+674,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+675,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+676,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+679,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+680,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+681,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+700,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+707,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+726,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+727,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+728,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+729,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+730,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+749,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+750,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+751,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+752,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+753,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+755,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+774,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+791,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+802,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+803,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+823,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+829,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+830,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+858,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+872,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+873,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+875,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+878,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),3);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+894,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+895,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+896,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+897,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+898,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+899,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+900,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+901,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+902,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullBit(oldp+903,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+905,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+908,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+909,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+915,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+919,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+929,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+949,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+950,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+951,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+954,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+955,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+957,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+959,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+960,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+966,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+967,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+968,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+969,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+976,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+978,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+989,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+990,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+991,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+992,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+993,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+994,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+995,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+996,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+997,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+998,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+999,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+1000,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1001,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1002,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1003,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__axi_rid_o),4);
    bufp->fullIData(oldp+1027,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1035,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1041,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1042,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1046,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1057,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1171,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1177,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1178,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1179,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1180,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1181,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+1182,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1187,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1188,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1189,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1190,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1191,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+1192,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+1193,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+1194,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
    bufp->fullBit(oldp+1195,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1197,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullCData(oldp+1200,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                   | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1221,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1222,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1233,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1239,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1244,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1245,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1246,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1247,(vlSelf->clock));
    bufp->fullBit(oldp+1248,(vlSelf->reset));
    bufp->fullSData(oldp+1249,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1250,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1251,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1252,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1253,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1254,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1255,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1256,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1257,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1258,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1259,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1260,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1261,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1262,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1263,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1264,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1265,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1266,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1267,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1268,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1270,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1272,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1273,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1274,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1275,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1276,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+1278,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1280,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullBit(oldp+1281,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1282,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1286,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
                                         ? ((0x300U 
                                             == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus
                                             : ((0x305U 
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
                                                   : 0U))))
                                         : 0U)) : 0U)),32);
    bufp->fullBit(oldp+1287,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch) 
                              & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1289,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1292,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1296,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1298,(1U),3);
    bufp->fullBit(oldp+1299,(0U));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1309,(1U));
    bufp->fullCData(oldp+1310,(0U),4);
    bufp->fullCData(oldp+1311,(0U),8);
    bufp->fullCData(oldp+1312,(0U),3);
    bufp->fullCData(oldp+1313,(0U),2);
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1315,(0U),32);
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1353,(0U),32);
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1357,(1U),2);
    bufp->fullCData(oldp+1358,(2U),2);
    bufp->fullIData(oldp+1359,(0x20U),32);
    bufp->fullIData(oldp+1360,(4U),32);
    bufp->fullCData(oldp+1361,(2U),3);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1400,(3U),3);
    bufp->fullCData(oldp+1401,(4U),3);
    bufp->fullIData(oldp+1402,(0x20000008U),32);
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rlast_i));
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rid_i),4);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1548,(3U),2);
    bufp->fullIData(oldp+1549,(5U),32);
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_awid_o),4);
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_awlen_o),8);
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_awsize_o),3);
    bufp->fullCData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_awburst_o),2);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__clint_wlast_o));
    bufp->fullBit(oldp+1555,(0U));
    bufp->fullBit(oldp+1556,(1U));
    bufp->fullCData(oldp+1557,(0x1bU),8);
    bufp->fullCData(oldp+1558,(0xebU),8);
    bufp->fullCData(oldp+1559,(0x38U),8);
    bufp->fullIData(oldp+1560,(0x64U),32);
    bufp->fullIData(oldp+1561,(0x18U),32);
    bufp->fullIData(oldp+1562,(9U),32);
    bufp->fullIData(oldp+1563,(2U),32);
    bufp->fullIData(oldp+1564,(4U),32);
    bufp->fullIData(oldp+1565,(0xdU),32);
    bufp->fullIData(oldp+1566,(0x2000U),32);
    bufp->fullIData(oldp+1567,(0x2710U),32);
    bufp->fullIData(oldp+1568,(0x30cU),32);
    bufp->fullCData(oldp+1569,(7U),4);
    bufp->fullCData(oldp+1570,(3U),4);
    bufp->fullCData(oldp+1571,(5U),4);
    bufp->fullCData(oldp+1572,(4U),4);
    bufp->fullCData(oldp+1573,(6U),4);
    bufp->fullCData(oldp+1574,(2U),4);
    bufp->fullCData(oldp+1575,(1U),4);
    bufp->fullSData(oldp+1576,(0x21U),13);
    bufp->fullCData(oldp+1577,(8U),4);
    bufp->fullCData(oldp+1578,(9U),4);
    bufp->fullIData(oldp+1579,(0xaU),32);
    bufp->fullIData(oldp+1580,(0x10U),32);
    bufp->fullIData(oldp+1581,(6U),32);
    bufp->fullIData(oldp+1582,(0x11U),32);
    bufp->fullIData(oldp+1583,(0x30000000U),32);
    bufp->fullIData(oldp+1584,(0x3fffffffU),32);
    bufp->fullIData(oldp+1585,(8U),32);
    bufp->fullIData(oldp+1586,(1U),32);
    bufp->fullCData(oldp+1587,(0xaU),4);
    bufp->fullIData(oldp+1588,(0xbU),32);
    bufp->fullCData(oldp+1589,(5U),3);
}
