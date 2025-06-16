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
    tracep->declBit(c+45,"clk", false,-1);
    tracep->declBit(c+46,"rst_n", false,-1);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+45,"clk", false,-1);
    tracep->declBit(c+46,"rst_n", false,-1);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+8,"rs1", false,-1, 31,0);
    tracep->declBus(c+49,"rs2", false,-1, 31,0);
    tracep->declBus(c+9,"a_in", false,-1, 31,0);
    tracep->declBus(c+10,"b_in", false,-1, 31,0);
    tracep->declBus(c+50,"a_out", false,-1, 31,0);
    tracep->declBus(c+2,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+3,"a_in_src", false,-1);
    tracep->declBit(c+4,"adder_a_src", false,-1);
    tracep->declBit(c+5,"reg_write", false,-1);
    tracep->declBus(c+6,"alu_op", false,-1, 3,0);
    tracep->declBus(c+11,"alu_result", false,-1, 31,0);
    tracep->declBus(c+11,"wdata", false,-1, 31,0);
    tracep->declBit(c+12,"zero", false,-1);
    tracep->declBus(c+51,"pc_new", false,-1, 31,0);
    tracep->declBus(c+52,"npc", false,-1, 31,0);
    tracep->declBit(c+7,"pc_srcs", false,-1);
    tracep->declBus(c+60,"datamem_data", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+6,"op", false,-1, 3,0);
    tracep->declBus(c+11,"alu_result", false,-1, 31,0);
    tracep->declBit(c+12,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"d0", false,-1, 31,0);
    tracep->declBus(c+47,"d1", false,-1, 31,0);
    tracep->declBit(c+3,"sel", false,-1);
    tracep->declBus(c+9,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"d0", false,-1, 31,0);
    tracep->declBus(c+1,"d1", false,-1, 31,0);
    tracep->declBus(c+62,"d2", false,-1, 31,0);
    tracep->declBus(c+63,"d3", false,-1, 31,0);
    tracep->declBus(c+2,"sel", false,-1, 1,0);
    tracep->declBus(c+10,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->declBus(c+6,"alu_op", false,-1, 3,0);
    tracep->declBus(c+53,"opcode", false,-1, 6,0);
    tracep->declBus(c+54,"funct3", false,-1, 2,0);
    tracep->declBus(c+55,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+50,"a", false,-1, 31,0);
    tracep->declBus(c+1,"b", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"d0", false,-1, 31,0);
    tracep->declBus(c+8,"d1", false,-1, 31,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->declBit(c+3,"a_in_src", false,-1);
    tracep->declBus(c+2,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+5,"reg_write", false,-1);
    tracep->declBit(c+7,"pc_srcs", false,-1);
    tracep->declBit(c+4,"adder_a_src", false,-1);
    tracep->declBus(c+53,"opcode", false,-1, 6,0);
    tracep->declBus(c+54,"funct3", false,-1, 2,0);
    tracep->declBus(c+55,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+45,"clk", false,-1);
    tracep->declBit(c+46,"rst_n", false,-1);
    tracep->declBus(c+52,"din", false,-1, 31,0);
    tracep->declBus(c+47,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_Srcs ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"d0", false,-1, 31,0);
    tracep->declBus(c+51,"d1", false,-1, 31,0);
    tracep->declBit(c+7,"sel", false,-1);
    tracep->declBus(c+52,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+65,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+45,"clk", false,-1);
    tracep->declBus(c+11,"wdata", false,-1, 31,0);
    tracep->declBus(c+57,"waddr", false,-1, 4,0);
    tracep->declBit(c+5,"wen", false,-1);
    tracep->declBus(c+58,"raddr1", false,-1, 4,0);
    tracep->declBus(c+8,"rdata1", false,-1, 31,0);
    tracep->declBus(c+59,"raddr2", false,-1, 4,0);
    tracep->declBus(c+49,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"data", false,-1, 31,0);
    tracep->declBus(c+53,"opcode", false,-1, 6,0);
    tracep->declBus(c+54,"funct3", false,-1, 2,0);
    tracep->declBus(c+55,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+61,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"d0", false,-1, 31,0);
    tracep->declBus(c+60,"d1", false,-1, 31,0);
    tracep->declBit(c+66,"sel", false,-1);
    tracep->declBus(c+11,"out", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__imm),32);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__b_in_src),2);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__a_in_src));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__adder_a_src));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__reg_write));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__alu_op),4);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__pc_srcs));
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__rs1),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__a_in),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__b_in),32);
    bufp->fullIData(oldp+11,(((8U & (IData)(vlSelf->top__DOT__alu_op))
                               ? vlSelf->top__DOT__b_in
                               : ((4U & (IData)(vlSelf->top__DOT__alu_op))
                                   ? ((2U & (IData)(vlSelf->top__DOT__alu_op))
                                       ? ((1U & (IData)(vlSelf->top__DOT__alu_op))
                                           ? vlSelf->top__DOT__b_in
                                           : ((0x1fU 
                                               >= vlSelf->top__DOT__b_in)
                                               ? (vlSelf->top__DOT__a_in 
                                                  >> vlSelf->top__DOT__b_in)
                                               : 0U))
                                       : ((1U & (IData)(vlSelf->top__DOT__alu_op))
                                           ? ((0x1fU 
                                               >= vlSelf->top__DOT__b_in)
                                               ? (vlSelf->top__DOT__a_in 
                                                  << vlSelf->top__DOT__b_in)
                                               : 0U)
                                           : (vlSelf->top__DOT__a_in 
                                              - vlSelf->top__DOT__b_in)))
                                   : ((2U & (IData)(vlSelf->top__DOT__alu_op))
                                       ? ((1U & (IData)(vlSelf->top__DOT__alu_op))
                                           ? (vlSelf->top__DOT__a_in 
                                              + vlSelf->top__DOT__b_in)
                                           : (vlSelf->top__DOT__a_in 
                                              | vlSelf->top__DOT__b_in))
                                       : ((1U & (IData)(vlSelf->top__DOT__alu_op))
                                           ? (vlSelf->top__DOT__a_in 
                                              & vlSelf->top__DOT__b_in)
                                           : vlSelf->top__DOT__b_in))))),32);
    bufp->fullBit(oldp+12,((1U & (~ (IData)((0U != 
                                             ((8U & (IData)(vlSelf->top__DOT__alu_op))
                                               ? vlSelf->top__DOT__b_in
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__alu_op))
                                                     ? vlSelf->top__DOT__b_in
                                                     : 
                                                    ((0x1fU 
                                                      >= vlSelf->top__DOT__b_in)
                                                      ? 
                                                     (vlSelf->top__DOT__a_in 
                                                      >> vlSelf->top__DOT__b_in)
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__alu_op))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->top__DOT__b_in)
                                                      ? 
                                                     (vlSelf->top__DOT__a_in 
                                                      << vlSelf->top__DOT__b_in)
                                                      : 0U)
                                                     : 
                                                    (vlSelf->top__DOT__a_in 
                                                     - vlSelf->top__DOT__b_in)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__a_in 
                                                     + vlSelf->top__DOT__b_in)
                                                     : 
                                                    (vlSelf->top__DOT__a_in 
                                                     | vlSelf->top__DOT__b_in))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__a_in 
                                                     & vlSelf->top__DOT__b_in)
                                                     : vlSelf->top__DOT__b_in))))))))));
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullBit(oldp+45,(vlSelf->clk));
    bufp->fullBit(oldp+46,(vlSelf->rst_n));
    bufp->fullIData(oldp+47,(vlSelf->pc),32);
    bufp->fullIData(oldp+48,(vlSelf->inst),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__Rgefile__DOT__rf
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+50,(((IData)(vlSelf->top__DOT__adder_a_src)
                               ? vlSelf->top__DOT__rs1
                               : vlSelf->pc)),32);
    bufp->fullIData(oldp+51,((((IData)(vlSelf->top__DOT__adder_a_src)
                                ? vlSelf->top__DOT__rs1
                                : vlSelf->pc) + vlSelf->top__DOT__imm)),32);
    bufp->fullIData(oldp+52,(((IData)(vlSelf->top__DOT__pc_srcs)
                               ? (((IData)(vlSelf->top__DOT__adder_a_src)
                                    ? vlSelf->top__DOT__rs1
                                    : vlSelf->pc) + vlSelf->top__DOT__imm)
                               : ((IData)(4U) + vlSelf->pc))),32);
    bufp->fullCData(oldp+53,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+54,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+55,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+56,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+57,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__datamem_data),32);
    bufp->fullIData(oldp+61,(0x20U),32);
    bufp->fullIData(oldp+62,(4U),32);
    bufp->fullIData(oldp+63,(0U),32);
    bufp->fullIData(oldp+64,(0x80000000U),32);
    bufp->fullIData(oldp+65,(5U),32);
    bufp->fullBit(oldp+66,(0U));
}
