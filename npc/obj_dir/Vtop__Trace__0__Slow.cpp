// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+160,"clk", false,-1);
    tracep->declBit(c+161,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+160,"clk", false,-1);
    tracep->declBit(c+161,"rst_n", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+4,"rs1", false,-1, 31,0);
    tracep->declBus(c+5,"rs2", false,-1, 31,0);
    tracep->declBus(c+6,"a_in", false,-1, 31,0);
    tracep->declBus(c+7,"b_in", false,-1, 31,0);
    tracep->declBus(c+8,"a_out", false,-1, 31,0);
    tracep->declBus(c+9,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+10,"a_in_src", false,-1);
    tracep->declBit(c+11,"adder_a_src", false,-1);
    tracep->declBit(c+12,"reg_write", false,-1);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBus(c+14,"alu_result", false,-1, 31,0);
    tracep->declBus(c+15,"wdata", false,-1, 31,0);
    tracep->declBit(c+16,"zero", false,-1);
    tracep->declBus(c+17,"pc_new", false,-1, 31,0);
    tracep->declBus(c+18,"npc", false,-1, 31,0);
    tracep->declBus(c+19,"pc_srcs", false,-1, 2,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+20+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+52,"datamem_readdata", false,-1, 31,0);
    tracep->declBit(c+53,"mem_read", false,-1);
    tracep->declBit(c+54,"mem_write", false,-1);
    tracep->declBus(c+55,"wmask", false,-1, 7,0);
    tracep->declBit(c+56,"wb_src", false,-1);
    tracep->declBus(c+57,"mem_data", false,-1, 31,0);
    tracep->declBus(c+58,"rmask", false,-1, 2,0);
    tracep->declBus(c+59,"a5", false,-1, 31,0);
    tracep->declBus(c+60,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+61,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+162,"add_out", false,-1, 31,0);
    tracep->declBit(c+62,"csr_write", false,-1);
    tracep->declBit(c+63,"adder_out_src", false,-1);
    tracep->declBit(c+64,"csr_wdata_src", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+65+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+6,"a", false,-1, 31,0);
    tracep->declBus(c+7,"b", false,-1, 31,0);
    tracep->declBus(c+13,"op", false,-1, 3,0);
    tracep->declBus(c+14,"alu_result", false,-1, 31,0);
    tracep->declBit(c+16,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"d0", false,-1, 31,0);
    tracep->declBus(c+1,"d1", false,-1, 31,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+6,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"d0", false,-1, 31,0);
    tracep->declBus(c+3,"d1", false,-1, 31,0);
    tracep->declBus(c+164,"d2", false,-1, 31,0);
    tracep->declBus(c+61,"d3", false,-1, 31,0);
    tracep->declBus(c+9,"sel", false,-1, 1,0);
    tracep->declBus(c+7,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBus(c+69,"opcode", false,-1, 6,0);
    tracep->declBus(c+70,"funct3", false,-1, 2,0);
    tracep->declBus(c+71,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+8,"a", false,-1, 31,0);
    tracep->declBus(c+3,"b", false,-1, 31,0);
    tracep->declBus(c+162,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"d0", false,-1, 31,0);
    tracep->declBus(c+4,"d1", false,-1, 31,0);
    tracep->declBit(c+11,"sel", false,-1);
    tracep->declBus(c+8,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+162,"d0", false,-1, 31,0);
    tracep->declBus(c+61,"d1", false,-1, 31,0);
    tracep->declBit(c+63,"sel", false,-1);
    tracep->declBus(c+17,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+72,"pc4", false,-1, 31,0);
    tracep->declBus(c+17,"pc_new", false,-1, 31,0);
    tracep->declBus(c+19,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+16,"zero", false,-1);
    tracep->declBus(c+14,"alu_result", false,-1, 31,0);
    tracep->declBus(c+18,"npc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+160,"clk", false,-1);
    tracep->declBit(c+62,"wen", false,-1);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBus(c+60,"wdata", false,-1, 31,0);
    tracep->declBus(c+59,"NO", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+61,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+73+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+77,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+78,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+79,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+80,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+69,"opcode", false,-1, 6,0);
    tracep->declBus(c+70,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBit(c+10,"a_in_src", false,-1);
    tracep->declBus(c+9,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+12,"reg_write", false,-1);
    tracep->declBus(c+19,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+11,"adder_a_src", false,-1);
    tracep->declBit(c+53,"MemRead", false,-1);
    tracep->declBit(c+54,"MemWrite", false,-1);
    tracep->declBus(c+55,"wmask", false,-1, 7,0);
    tracep->declBit(c+56,"wb_src", false,-1);
    tracep->declBus(c+58,"rmask", false,-1, 2,0);
    tracep->declBit(c+62,"csr_write", false,-1);
    tracep->declBit(c+63,"adder_out_src", false,-1);
    tracep->declBit(c+64,"csr_wdata_src", false,-1);
    tracep->declBus(c+69,"opcode", false,-1, 6,0);
    tracep->declBus(c+70,"funct3", false,-1, 2,0);
    tracep->declBus(c+71,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"d0", false,-1, 31,0);
    tracep->declBus(c+81,"d1", false,-1, 31,0);
    tracep->declBit(c+64,"sel", false,-1);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBit(c+53,"MemRead", false,-1);
    tracep->declBit(c+54,"MemWrite", false,-1);
    tracep->declBus(c+14,"address", false,-1, 31,0);
    tracep->declBus(c+5,"write_data", false,-1, 31,0);
    tracep->declBus(c+55,"wmask", false,-1, 7,0);
    tracep->declBus(c+58,"rmask", false,-1, 2,0);
    tracep->declBus(c+52,"read_data", false,-1, 31,0);
    tracep->declBus(c+82,"wmask_send", false,-1, 7,0);
    tracep->declBus(c+83,"rmask_send", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Inst_Mem ");
    tracep->declBit(c+160,"clk", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+165,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+160,"clk", false,-1);
    tracep->declBit(c+161,"rst_n", false,-1);
    tracep->declBus(c+18,"din", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+166,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+160,"clk", false,-1);
    tracep->declBus(c+15,"wdata", false,-1, 31,0);
    tracep->declBus(c+84,"waddr", false,-1, 4,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->declBus(c+85,"raddr1", false,-1, 4,0);
    tracep->declBus(c+4,"rdata1", false,-1, 31,0);
    tracep->declBus(c+86,"raddr2", false,-1, 4,0);
    tracep->declBus(c+5,"rdata2", false,-1, 31,0);
    tracep->declBus(c+59,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+87+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+119+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBus(c+3,"data", false,-1, 31,0);
    tracep->declBus(c+69,"opcode", false,-1, 6,0);
    tracep->declBus(c+70,"funct3", false,-1, 2,0);
    tracep->declBus(c+71,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+52,"read_data", false,-1, 31,0);
    tracep->declBus(c+151,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+58,"rmask", false,-1, 2,0);
    tracep->declBus(c+57,"mem_data", false,-1, 31,0);
    tracep->declBus(c+152,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+153,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+154,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+155,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+156,"byte3", false,-1, 31,0);
    tracep->declBus(c+157,"byte2", false,-1, 31,0);
    tracep->declBus(c+158,"byte1", false,-1, 31,0);
    tracep->declBus(c+159,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"d0", false,-1, 31,0);
    tracep->declBus(c+57,"d1", false,-1, 31,0);
    tracep->declBit(c+56,"sel", false,-1);
    tracep->declBus(c+15,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__inst),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__imm),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__rs1),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__Rgefile__DOT__rf
                            [(0x1fU & (vlSelf->top__DOT__inst 
                                       >> 0x14U))]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__a_in),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__b_in),32);
    bufp->fullIData(oldp+8,(((IData)(vlSelf->top__DOT__adder_a_src)
                              ? vlSelf->top__DOT__rs1
                              : vlSelf->top__DOT__pc)),32);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__b_in_src),2);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__a_in_src));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__adder_a_src));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__reg_write));
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__alu_op),4);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__alu_result),32);
    bufp->fullIData(oldp+15,(((IData)(vlSelf->top__DOT__wb_src)
                               ? vlSelf->top__DOT__mem_data
                               : vlSelf->top__DOT__alu_result)),32);
    bufp->fullBit(oldp+16,((1U & (~ (IData)((0U != vlSelf->top__DOT__alu_result))))));
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__pc_new),32);
    bufp->fullIData(oldp+18,(((4U & (IData)(vlSelf->top__DOT__pc_srcs))
                               ? ((2U & (IData)(vlSelf->top__DOT__pc_srcs))
                                   ? ((1U & (IData)(vlSelf->top__DOT__pc_srcs))
                                       ? ((0U == vlSelf->top__DOT__alu_result)
                                           ? vlSelf->top__DOT__pc_new
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__pc))
                                       : ((1U == vlSelf->top__DOT__alu_result)
                                           ? vlSelf->top__DOT__pc_new
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__pc)))
                                   : ((1U & (IData)(vlSelf->top__DOT__pc_srcs))
                                       ? ((0U == vlSelf->top__DOT__alu_result)
                                           ? vlSelf->top__DOT__pc_new
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__pc))
                                       : ((1U == vlSelf->top__DOT__alu_result)
                                           ? vlSelf->top__DOT__pc_new
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__pc))))
                               : ((2U & (IData)(vlSelf->top__DOT__pc_srcs))
                                   ? ((1U & (IData)(vlSelf->top__DOT__pc_srcs))
                                       ? ((0U != vlSelf->top__DOT__alu_result)
                                           ? vlSelf->top__DOT__pc_new
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__pc))
                                       : ((0U != vlSelf->top__DOT__alu_result)
                                           ? ((IData)(4U) 
                                              + vlSelf->top__DOT__pc)
                                           : vlSelf->top__DOT__pc_new))
                                   : ((1U & (IData)(vlSelf->top__DOT__pc_srcs))
                                       ? vlSelf->top__DOT__pc_new
                                       : ((IData)(4U) 
                                          + vlSelf->top__DOT__pc))))),32);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__pc_srcs),3);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__datamem_readdata),32);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__mem_read));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__mem_write));
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__wmask),8);
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__wb_src));
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__mem_data),32);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__rmask),3);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__Rgefile__DOT__rf
                             [0xfU]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__csr_rdata),32);
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__csr_write));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__adder_out_src));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__csr_wdata_src));
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullCData(oldp+69,((0x7fU & vlSelf->top__DOT__inst)),7);
    bufp->fullCData(oldp+70,((7U & (vlSelf->top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+71,((vlSelf->top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+72,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+81,((vlSelf->top__DOT__csr_rdata 
                              | vlSelf->top__DOT__rs1)),32);
    bufp->fullCData(oldp+82,((0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask))
                                        ? ((IData)(vlSelf->top__DOT__wmask) 
                                           << (3U & vlSelf->top__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->top__DOT__wmask))
                                            ? ((IData)(vlSelf->top__DOT__wmask) 
                                               << (3U 
                                                   & vlSelf->top__DOT__alu_result))
                                            : (IData)(vlSelf->top__DOT__wmask))))),8);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__rmask),8);
    bufp->fullCData(oldp+84,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+85,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+86,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+151,((3U & vlSelf->top__DOT__alu_result)),2);
    bufp->fullIData(oldp+152,((((- (IData)((vlSelf->top__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+153,((((- (IData)((1U & (vlSelf->top__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+154,((((- (IData)((1U & (vlSelf->top__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+155,((((- (IData)((1U & (vlSelf->top__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+156,((vlSelf->top__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+157,((0xffU & (vlSelf->top__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+158,((0xffU & (vlSelf->top__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+159,((0xffU & vlSelf->top__DOT__datamem_readdata)),32);
    bufp->fullBit(oldp+160,(vlSelf->clk));
    bufp->fullBit(oldp+161,(vlSelf->rst_n));
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__add_out),32);
    bufp->fullIData(oldp+163,(0x20U),32);
    bufp->fullIData(oldp+164,(4U),32);
    bufp->fullIData(oldp+165,(0x80000000U),32);
    bufp->fullIData(oldp+166,(5U),32);
}
